/*
 * FreeRTOS V201906.00 Major
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAPvD4xzgiOe2K87uS3HYebAcu1+lMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDA5MjIwMzIy\n"\
"MjRaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDiSGPyJ0ZCkntycC22\n"\
"XLlWxyNszcoaG6JIEBl2mFJj9Uuoyu8KZswaYLXp86mko12MgenAyOMO9O7+6Gjp\n"\
"geVtRQ5VhhXn8LZE8OSVcjyvZwkhju0SfXHvR0Hh7s0tYxX6d0dtkqf1tKRa5xZ5\n"\
"+vL0ou9BjyTN19glbMXHVKFerJIvCOiOSRyZN8gTtYtwWEVidWc7Uq31Qxxe8AWP\n"\
"Pj7Ro99uCHZv94pfz291Q1u1AfJWvv8GFIIWTjLd/vASo9DCckU1+RDzaZPoeJFK\n"\
"G5QHR7R6fiLefpsvjPSqCRMYuybq8k44SLp+UF7TLeQ8FqrYzh62gdnj1Q7sfySp\n"\
"txzfAgMBAAGjYDBeMB8GA1UdIwQYMBaAFJsNF5gaj21ASxTi59lwu9qlUxahMB0G\n"\
"A1UdDgQWBBQ3v5qwpWwSaJOc7JFs08il/IyptTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAjKoVSj2fvyZcmP8NL7ib3Qw9\n"\
"EsU+dJ65F0qxlgwXO4mqvCnpgaoi5MirNytRDRs9DBKkFNkonDw36mAksr98y6B4\n"\
"6U8Tb8xTIqkBBczUYwtsCk6oXC20uvwT6Q9pmuE6340vMHmia3yaq64D8zUSqg5Y\n"\
"M+7s4MPbm9N1wDPLcsCOeExprNmo12i2HK1JeWaavMkiycM92AHSGgUvWinFVreK\n"\
"YNtQjWScz1AWm7jKedino+Y/xxLSWFslUo9/LqH1vn624zGqMznMpyKwFLyiRyq7\n"\
"Tb9yUDOrBU8BtFZf9V9YnUhVGDhy52moiBKTOy1s7hiIUHNj5mpJ05ALB3eTTw==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEA4khj8idGQpJ7cnAttly5VscjbM3KGhuiSBAZdphSY/VLqMrv\n"\
"CmbMGmC16fOppKNdjIHpwMjjDvTu/uho6YHlbUUOVYYV5/C2RPDklXI8r2cJIY7t\n"\
"En1x70dB4e7NLWMV+ndHbZKn9bSkWucWefry9KLvQY8kzdfYJWzFx1ShXqySLwjo\n"\
"jkkcmTfIE7WLcFhFYnVnO1Kt9UMcXvAFjz4+0aPfbgh2b/eKX89vdUNbtQHyVr7/\n"\
"BhSCFk4y3f7wEqPQwnJFNfkQ82mT6HiRShuUB0e0en4i3n6bL4z0qgkTGLsm6vJO\n"\
"OEi6flBe0y3kPBaq2M4etoHZ49UO7H8kqbcc3wIDAQABAoIBAGH5pgy7JJi+g+TQ\n"\
"3XoQO89u+c+qas9TF7jL/7pxyXquQswa0dVXHRhut1VMwy8d7OthdKycTnOzaafF\n"\
"SWeRbp0ZQVOWcvWyK7k99Dsg81We7z0wfUV8O1C3Mbd5hi0YsfN4ody3mzGvvVn+\n"\
"pKS8G2YBBkcEi5L02gmaRyg/ZH9wuD7yyYpsrZoit1OOczhAEsTll4mBvm28mM7F\n"\
"w3+q6SJL7ULCGg3AUAmgeqWnFVGv5lYc/xcXb8p4c4q2zpSZ7TSo3KeR6WHco1fp\n"\
"IwNd+DC5E9T7ZWiHeGro/2st8dvIPRqf43/FmyF4Rm3piJnKw0Z4uuvWq9cYwM2m\n"\
"g2Vw9gECgYEA/i31kpmPgaz+objPzCHcDLKmFVqa3CX+gb8fiJyYGYfyi/QE/Urt\n"\
"LF2iLaa6JR1vEinz5zLCZMh39mm6lC9xa9AwtgBYzquZ8feuSiHWeuib+g9Kpap3\n"\
"dv+pKcsAw+1QlDbeyjRei35r3ygEBl9VL9sa7ZPFoGjWyxKCW7P8fL8CgYEA4+dI\n"\
"PBIdozvBeQJuvnPE8fvgrHbBa1PlWQ9oZKYD0eFbJ5tdEcsXO+zPCCgo+pvbaPZF\n"\
"q0/C7pcpwk7JpurXulcsHKp89RfC4g/bSNlNlSA/SEHsvMC49/7MiBKpERWsULX6\n"\
"2WZZhXjTLY0jvswymmAb1MjK4PGIeoBamfBrx+ECgYB2eU+UdFUKeWr6UF0y5ble\n"\
"hcqZ+3BhGqiFK2N0VqEijVZFW4kT0t+3pTEZnDP5Zr3Ftp5D7knjlfksdt2Lgo2Y\n"\
"ViLOQl0if6Oyv+KSFTGWemNxa708eLdUVRgxLbj+mdfMLcMsdrp2xIddLZaqrbbU\n"\
"JolnoVAlU5iCcO8n9T3DmwKBgDxDwnQwDipF+Ok43XP7RQ8AHe89D/SDoNgmHOLQ\n"\
"i54KS4JzsO6tl50/B5gOlpd+c0yUIuQkGVXiHybEkspSu20I9B84bgaZm+0PaFsh\n"\
"K0TN3C4NUL6w77iUZh1tYcukwYYuOQEX8YA77QvUkKk5cgAkffeMiSlmdUJ/gnXG\n"\
"f5nBAoGBAKIdddEKWEBPCVsHJaef8TRdsG3/mIDKa24B8kSZFyU+9v/FXR5gUxdU\n"\
"LWNoH/zxidjLkB2TDyKYzci8pm7qZpOkqXqk29+DE+N02HFeF3Naxs4TOSvVMswW\n"\
"+75anuScJrpxnkEgLci1Hv+TBEKoe6uSbKhvdVsIbLLmpbqwlP4i\n"\
"-----END RSA PRIVATE KEY-----\n"


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
