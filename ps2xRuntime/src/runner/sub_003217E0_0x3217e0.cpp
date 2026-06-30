#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003217E0
// Address: 0x3217e0 - 0x323d40
void sub_003217E0_0x3217e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003217E0_0x3217e0");
#endif

    switch (ctx->pc) {
        case 0x3217e0u: goto label_3217e0;
        case 0x3217e4u: goto label_3217e4;
        case 0x3217e8u: goto label_3217e8;
        case 0x3217ecu: goto label_3217ec;
        case 0x3217f0u: goto label_3217f0;
        case 0x3217f4u: goto label_3217f4;
        case 0x3217f8u: goto label_3217f8;
        case 0x3217fcu: goto label_3217fc;
        case 0x321800u: goto label_321800;
        case 0x321804u: goto label_321804;
        case 0x321808u: goto label_321808;
        case 0x32180cu: goto label_32180c;
        case 0x321810u: goto label_321810;
        case 0x321814u: goto label_321814;
        case 0x321818u: goto label_321818;
        case 0x32181cu: goto label_32181c;
        case 0x321820u: goto label_321820;
        case 0x321824u: goto label_321824;
        case 0x321828u: goto label_321828;
        case 0x32182cu: goto label_32182c;
        case 0x321830u: goto label_321830;
        case 0x321834u: goto label_321834;
        case 0x321838u: goto label_321838;
        case 0x32183cu: goto label_32183c;
        case 0x321840u: goto label_321840;
        case 0x321844u: goto label_321844;
        case 0x321848u: goto label_321848;
        case 0x32184cu: goto label_32184c;
        case 0x321850u: goto label_321850;
        case 0x321854u: goto label_321854;
        case 0x321858u: goto label_321858;
        case 0x32185cu: goto label_32185c;
        case 0x321860u: goto label_321860;
        case 0x321864u: goto label_321864;
        case 0x321868u: goto label_321868;
        case 0x32186cu: goto label_32186c;
        case 0x321870u: goto label_321870;
        case 0x321874u: goto label_321874;
        case 0x321878u: goto label_321878;
        case 0x32187cu: goto label_32187c;
        case 0x321880u: goto label_321880;
        case 0x321884u: goto label_321884;
        case 0x321888u: goto label_321888;
        case 0x32188cu: goto label_32188c;
        case 0x321890u: goto label_321890;
        case 0x321894u: goto label_321894;
        case 0x321898u: goto label_321898;
        case 0x32189cu: goto label_32189c;
        case 0x3218a0u: goto label_3218a0;
        case 0x3218a4u: goto label_3218a4;
        case 0x3218a8u: goto label_3218a8;
        case 0x3218acu: goto label_3218ac;
        case 0x3218b0u: goto label_3218b0;
        case 0x3218b4u: goto label_3218b4;
        case 0x3218b8u: goto label_3218b8;
        case 0x3218bcu: goto label_3218bc;
        case 0x3218c0u: goto label_3218c0;
        case 0x3218c4u: goto label_3218c4;
        case 0x3218c8u: goto label_3218c8;
        case 0x3218ccu: goto label_3218cc;
        case 0x3218d0u: goto label_3218d0;
        case 0x3218d4u: goto label_3218d4;
        case 0x3218d8u: goto label_3218d8;
        case 0x3218dcu: goto label_3218dc;
        case 0x3218e0u: goto label_3218e0;
        case 0x3218e4u: goto label_3218e4;
        case 0x3218e8u: goto label_3218e8;
        case 0x3218ecu: goto label_3218ec;
        case 0x3218f0u: goto label_3218f0;
        case 0x3218f4u: goto label_3218f4;
        case 0x3218f8u: goto label_3218f8;
        case 0x3218fcu: goto label_3218fc;
        case 0x321900u: goto label_321900;
        case 0x321904u: goto label_321904;
        case 0x321908u: goto label_321908;
        case 0x32190cu: goto label_32190c;
        case 0x321910u: goto label_321910;
        case 0x321914u: goto label_321914;
        case 0x321918u: goto label_321918;
        case 0x32191cu: goto label_32191c;
        case 0x321920u: goto label_321920;
        case 0x321924u: goto label_321924;
        case 0x321928u: goto label_321928;
        case 0x32192cu: goto label_32192c;
        case 0x321930u: goto label_321930;
        case 0x321934u: goto label_321934;
        case 0x321938u: goto label_321938;
        case 0x32193cu: goto label_32193c;
        case 0x321940u: goto label_321940;
        case 0x321944u: goto label_321944;
        case 0x321948u: goto label_321948;
        case 0x32194cu: goto label_32194c;
        case 0x321950u: goto label_321950;
        case 0x321954u: goto label_321954;
        case 0x321958u: goto label_321958;
        case 0x32195cu: goto label_32195c;
        case 0x321960u: goto label_321960;
        case 0x321964u: goto label_321964;
        case 0x321968u: goto label_321968;
        case 0x32196cu: goto label_32196c;
        case 0x321970u: goto label_321970;
        case 0x321974u: goto label_321974;
        case 0x321978u: goto label_321978;
        case 0x32197cu: goto label_32197c;
        case 0x321980u: goto label_321980;
        case 0x321984u: goto label_321984;
        case 0x321988u: goto label_321988;
        case 0x32198cu: goto label_32198c;
        case 0x321990u: goto label_321990;
        case 0x321994u: goto label_321994;
        case 0x321998u: goto label_321998;
        case 0x32199cu: goto label_32199c;
        case 0x3219a0u: goto label_3219a0;
        case 0x3219a4u: goto label_3219a4;
        case 0x3219a8u: goto label_3219a8;
        case 0x3219acu: goto label_3219ac;
        case 0x3219b0u: goto label_3219b0;
        case 0x3219b4u: goto label_3219b4;
        case 0x3219b8u: goto label_3219b8;
        case 0x3219bcu: goto label_3219bc;
        case 0x3219c0u: goto label_3219c0;
        case 0x3219c4u: goto label_3219c4;
        case 0x3219c8u: goto label_3219c8;
        case 0x3219ccu: goto label_3219cc;
        case 0x3219d0u: goto label_3219d0;
        case 0x3219d4u: goto label_3219d4;
        case 0x3219d8u: goto label_3219d8;
        case 0x3219dcu: goto label_3219dc;
        case 0x3219e0u: goto label_3219e0;
        case 0x3219e4u: goto label_3219e4;
        case 0x3219e8u: goto label_3219e8;
        case 0x3219ecu: goto label_3219ec;
        case 0x3219f0u: goto label_3219f0;
        case 0x3219f4u: goto label_3219f4;
        case 0x3219f8u: goto label_3219f8;
        case 0x3219fcu: goto label_3219fc;
        case 0x321a00u: goto label_321a00;
        case 0x321a04u: goto label_321a04;
        case 0x321a08u: goto label_321a08;
        case 0x321a0cu: goto label_321a0c;
        case 0x321a10u: goto label_321a10;
        case 0x321a14u: goto label_321a14;
        case 0x321a18u: goto label_321a18;
        case 0x321a1cu: goto label_321a1c;
        case 0x321a20u: goto label_321a20;
        case 0x321a24u: goto label_321a24;
        case 0x321a28u: goto label_321a28;
        case 0x321a2cu: goto label_321a2c;
        case 0x321a30u: goto label_321a30;
        case 0x321a34u: goto label_321a34;
        case 0x321a38u: goto label_321a38;
        case 0x321a3cu: goto label_321a3c;
        case 0x321a40u: goto label_321a40;
        case 0x321a44u: goto label_321a44;
        case 0x321a48u: goto label_321a48;
        case 0x321a4cu: goto label_321a4c;
        case 0x321a50u: goto label_321a50;
        case 0x321a54u: goto label_321a54;
        case 0x321a58u: goto label_321a58;
        case 0x321a5cu: goto label_321a5c;
        case 0x321a60u: goto label_321a60;
        case 0x321a64u: goto label_321a64;
        case 0x321a68u: goto label_321a68;
        case 0x321a6cu: goto label_321a6c;
        case 0x321a70u: goto label_321a70;
        case 0x321a74u: goto label_321a74;
        case 0x321a78u: goto label_321a78;
        case 0x321a7cu: goto label_321a7c;
        case 0x321a80u: goto label_321a80;
        case 0x321a84u: goto label_321a84;
        case 0x321a88u: goto label_321a88;
        case 0x321a8cu: goto label_321a8c;
        case 0x321a90u: goto label_321a90;
        case 0x321a94u: goto label_321a94;
        case 0x321a98u: goto label_321a98;
        case 0x321a9cu: goto label_321a9c;
        case 0x321aa0u: goto label_321aa0;
        case 0x321aa4u: goto label_321aa4;
        case 0x321aa8u: goto label_321aa8;
        case 0x321aacu: goto label_321aac;
        case 0x321ab0u: goto label_321ab0;
        case 0x321ab4u: goto label_321ab4;
        case 0x321ab8u: goto label_321ab8;
        case 0x321abcu: goto label_321abc;
        case 0x321ac0u: goto label_321ac0;
        case 0x321ac4u: goto label_321ac4;
        case 0x321ac8u: goto label_321ac8;
        case 0x321accu: goto label_321acc;
        case 0x321ad0u: goto label_321ad0;
        case 0x321ad4u: goto label_321ad4;
        case 0x321ad8u: goto label_321ad8;
        case 0x321adcu: goto label_321adc;
        case 0x321ae0u: goto label_321ae0;
        case 0x321ae4u: goto label_321ae4;
        case 0x321ae8u: goto label_321ae8;
        case 0x321aecu: goto label_321aec;
        case 0x321af0u: goto label_321af0;
        case 0x321af4u: goto label_321af4;
        case 0x321af8u: goto label_321af8;
        case 0x321afcu: goto label_321afc;
        case 0x321b00u: goto label_321b00;
        case 0x321b04u: goto label_321b04;
        case 0x321b08u: goto label_321b08;
        case 0x321b0cu: goto label_321b0c;
        case 0x321b10u: goto label_321b10;
        case 0x321b14u: goto label_321b14;
        case 0x321b18u: goto label_321b18;
        case 0x321b1cu: goto label_321b1c;
        case 0x321b20u: goto label_321b20;
        case 0x321b24u: goto label_321b24;
        case 0x321b28u: goto label_321b28;
        case 0x321b2cu: goto label_321b2c;
        case 0x321b30u: goto label_321b30;
        case 0x321b34u: goto label_321b34;
        case 0x321b38u: goto label_321b38;
        case 0x321b3cu: goto label_321b3c;
        case 0x321b40u: goto label_321b40;
        case 0x321b44u: goto label_321b44;
        case 0x321b48u: goto label_321b48;
        case 0x321b4cu: goto label_321b4c;
        case 0x321b50u: goto label_321b50;
        case 0x321b54u: goto label_321b54;
        case 0x321b58u: goto label_321b58;
        case 0x321b5cu: goto label_321b5c;
        case 0x321b60u: goto label_321b60;
        case 0x321b64u: goto label_321b64;
        case 0x321b68u: goto label_321b68;
        case 0x321b6cu: goto label_321b6c;
        case 0x321b70u: goto label_321b70;
        case 0x321b74u: goto label_321b74;
        case 0x321b78u: goto label_321b78;
        case 0x321b7cu: goto label_321b7c;
        case 0x321b80u: goto label_321b80;
        case 0x321b84u: goto label_321b84;
        case 0x321b88u: goto label_321b88;
        case 0x321b8cu: goto label_321b8c;
        case 0x321b90u: goto label_321b90;
        case 0x321b94u: goto label_321b94;
        case 0x321b98u: goto label_321b98;
        case 0x321b9cu: goto label_321b9c;
        case 0x321ba0u: goto label_321ba0;
        case 0x321ba4u: goto label_321ba4;
        case 0x321ba8u: goto label_321ba8;
        case 0x321bacu: goto label_321bac;
        case 0x321bb0u: goto label_321bb0;
        case 0x321bb4u: goto label_321bb4;
        case 0x321bb8u: goto label_321bb8;
        case 0x321bbcu: goto label_321bbc;
        case 0x321bc0u: goto label_321bc0;
        case 0x321bc4u: goto label_321bc4;
        case 0x321bc8u: goto label_321bc8;
        case 0x321bccu: goto label_321bcc;
        case 0x321bd0u: goto label_321bd0;
        case 0x321bd4u: goto label_321bd4;
        case 0x321bd8u: goto label_321bd8;
        case 0x321bdcu: goto label_321bdc;
        case 0x321be0u: goto label_321be0;
        case 0x321be4u: goto label_321be4;
        case 0x321be8u: goto label_321be8;
        case 0x321becu: goto label_321bec;
        case 0x321bf0u: goto label_321bf0;
        case 0x321bf4u: goto label_321bf4;
        case 0x321bf8u: goto label_321bf8;
        case 0x321bfcu: goto label_321bfc;
        case 0x321c00u: goto label_321c00;
        case 0x321c04u: goto label_321c04;
        case 0x321c08u: goto label_321c08;
        case 0x321c0cu: goto label_321c0c;
        case 0x321c10u: goto label_321c10;
        case 0x321c14u: goto label_321c14;
        case 0x321c18u: goto label_321c18;
        case 0x321c1cu: goto label_321c1c;
        case 0x321c20u: goto label_321c20;
        case 0x321c24u: goto label_321c24;
        case 0x321c28u: goto label_321c28;
        case 0x321c2cu: goto label_321c2c;
        case 0x321c30u: goto label_321c30;
        case 0x321c34u: goto label_321c34;
        case 0x321c38u: goto label_321c38;
        case 0x321c3cu: goto label_321c3c;
        case 0x321c40u: goto label_321c40;
        case 0x321c44u: goto label_321c44;
        case 0x321c48u: goto label_321c48;
        case 0x321c4cu: goto label_321c4c;
        case 0x321c50u: goto label_321c50;
        case 0x321c54u: goto label_321c54;
        case 0x321c58u: goto label_321c58;
        case 0x321c5cu: goto label_321c5c;
        case 0x321c60u: goto label_321c60;
        case 0x321c64u: goto label_321c64;
        case 0x321c68u: goto label_321c68;
        case 0x321c6cu: goto label_321c6c;
        case 0x321c70u: goto label_321c70;
        case 0x321c74u: goto label_321c74;
        case 0x321c78u: goto label_321c78;
        case 0x321c7cu: goto label_321c7c;
        case 0x321c80u: goto label_321c80;
        case 0x321c84u: goto label_321c84;
        case 0x321c88u: goto label_321c88;
        case 0x321c8cu: goto label_321c8c;
        case 0x321c90u: goto label_321c90;
        case 0x321c94u: goto label_321c94;
        case 0x321c98u: goto label_321c98;
        case 0x321c9cu: goto label_321c9c;
        case 0x321ca0u: goto label_321ca0;
        case 0x321ca4u: goto label_321ca4;
        case 0x321ca8u: goto label_321ca8;
        case 0x321cacu: goto label_321cac;
        case 0x321cb0u: goto label_321cb0;
        case 0x321cb4u: goto label_321cb4;
        case 0x321cb8u: goto label_321cb8;
        case 0x321cbcu: goto label_321cbc;
        case 0x321cc0u: goto label_321cc0;
        case 0x321cc4u: goto label_321cc4;
        case 0x321cc8u: goto label_321cc8;
        case 0x321cccu: goto label_321ccc;
        case 0x321cd0u: goto label_321cd0;
        case 0x321cd4u: goto label_321cd4;
        case 0x321cd8u: goto label_321cd8;
        case 0x321cdcu: goto label_321cdc;
        case 0x321ce0u: goto label_321ce0;
        case 0x321ce4u: goto label_321ce4;
        case 0x321ce8u: goto label_321ce8;
        case 0x321cecu: goto label_321cec;
        case 0x321cf0u: goto label_321cf0;
        case 0x321cf4u: goto label_321cf4;
        case 0x321cf8u: goto label_321cf8;
        case 0x321cfcu: goto label_321cfc;
        case 0x321d00u: goto label_321d00;
        case 0x321d04u: goto label_321d04;
        case 0x321d08u: goto label_321d08;
        case 0x321d0cu: goto label_321d0c;
        case 0x321d10u: goto label_321d10;
        case 0x321d14u: goto label_321d14;
        case 0x321d18u: goto label_321d18;
        case 0x321d1cu: goto label_321d1c;
        case 0x321d20u: goto label_321d20;
        case 0x321d24u: goto label_321d24;
        case 0x321d28u: goto label_321d28;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d30u: goto label_321d30;
        case 0x321d34u: goto label_321d34;
        case 0x321d38u: goto label_321d38;
        case 0x321d3cu: goto label_321d3c;
        case 0x321d40u: goto label_321d40;
        case 0x321d44u: goto label_321d44;
        case 0x321d48u: goto label_321d48;
        case 0x321d4cu: goto label_321d4c;
        case 0x321d50u: goto label_321d50;
        case 0x321d54u: goto label_321d54;
        case 0x321d58u: goto label_321d58;
        case 0x321d5cu: goto label_321d5c;
        case 0x321d60u: goto label_321d60;
        case 0x321d64u: goto label_321d64;
        case 0x321d68u: goto label_321d68;
        case 0x321d6cu: goto label_321d6c;
        case 0x321d70u: goto label_321d70;
        case 0x321d74u: goto label_321d74;
        case 0x321d78u: goto label_321d78;
        case 0x321d7cu: goto label_321d7c;
        case 0x321d80u: goto label_321d80;
        case 0x321d84u: goto label_321d84;
        case 0x321d88u: goto label_321d88;
        case 0x321d8cu: goto label_321d8c;
        case 0x321d90u: goto label_321d90;
        case 0x321d94u: goto label_321d94;
        case 0x321d98u: goto label_321d98;
        case 0x321d9cu: goto label_321d9c;
        case 0x321da0u: goto label_321da0;
        case 0x321da4u: goto label_321da4;
        case 0x321da8u: goto label_321da8;
        case 0x321dacu: goto label_321dac;
        case 0x321db0u: goto label_321db0;
        case 0x321db4u: goto label_321db4;
        case 0x321db8u: goto label_321db8;
        case 0x321dbcu: goto label_321dbc;
        case 0x321dc0u: goto label_321dc0;
        case 0x321dc4u: goto label_321dc4;
        case 0x321dc8u: goto label_321dc8;
        case 0x321dccu: goto label_321dcc;
        case 0x321dd0u: goto label_321dd0;
        case 0x321dd4u: goto label_321dd4;
        case 0x321dd8u: goto label_321dd8;
        case 0x321ddcu: goto label_321ddc;
        case 0x321de0u: goto label_321de0;
        case 0x321de4u: goto label_321de4;
        case 0x321de8u: goto label_321de8;
        case 0x321decu: goto label_321dec;
        case 0x321df0u: goto label_321df0;
        case 0x321df4u: goto label_321df4;
        case 0x321df8u: goto label_321df8;
        case 0x321dfcu: goto label_321dfc;
        case 0x321e00u: goto label_321e00;
        case 0x321e04u: goto label_321e04;
        case 0x321e08u: goto label_321e08;
        case 0x321e0cu: goto label_321e0c;
        case 0x321e10u: goto label_321e10;
        case 0x321e14u: goto label_321e14;
        case 0x321e18u: goto label_321e18;
        case 0x321e1cu: goto label_321e1c;
        case 0x321e20u: goto label_321e20;
        case 0x321e24u: goto label_321e24;
        case 0x321e28u: goto label_321e28;
        case 0x321e2cu: goto label_321e2c;
        case 0x321e30u: goto label_321e30;
        case 0x321e34u: goto label_321e34;
        case 0x321e38u: goto label_321e38;
        case 0x321e3cu: goto label_321e3c;
        case 0x321e40u: goto label_321e40;
        case 0x321e44u: goto label_321e44;
        case 0x321e48u: goto label_321e48;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e50u: goto label_321e50;
        case 0x321e54u: goto label_321e54;
        case 0x321e58u: goto label_321e58;
        case 0x321e5cu: goto label_321e5c;
        case 0x321e60u: goto label_321e60;
        case 0x321e64u: goto label_321e64;
        case 0x321e68u: goto label_321e68;
        case 0x321e6cu: goto label_321e6c;
        case 0x321e70u: goto label_321e70;
        case 0x321e74u: goto label_321e74;
        case 0x321e78u: goto label_321e78;
        case 0x321e7cu: goto label_321e7c;
        case 0x321e80u: goto label_321e80;
        case 0x321e84u: goto label_321e84;
        case 0x321e88u: goto label_321e88;
        case 0x321e8cu: goto label_321e8c;
        case 0x321e90u: goto label_321e90;
        case 0x321e94u: goto label_321e94;
        case 0x321e98u: goto label_321e98;
        case 0x321e9cu: goto label_321e9c;
        case 0x321ea0u: goto label_321ea0;
        case 0x321ea4u: goto label_321ea4;
        case 0x321ea8u: goto label_321ea8;
        case 0x321eacu: goto label_321eac;
        case 0x321eb0u: goto label_321eb0;
        case 0x321eb4u: goto label_321eb4;
        case 0x321eb8u: goto label_321eb8;
        case 0x321ebcu: goto label_321ebc;
        case 0x321ec0u: goto label_321ec0;
        case 0x321ec4u: goto label_321ec4;
        case 0x321ec8u: goto label_321ec8;
        case 0x321eccu: goto label_321ecc;
        case 0x321ed0u: goto label_321ed0;
        case 0x321ed4u: goto label_321ed4;
        case 0x321ed8u: goto label_321ed8;
        case 0x321edcu: goto label_321edc;
        case 0x321ee0u: goto label_321ee0;
        case 0x321ee4u: goto label_321ee4;
        case 0x321ee8u: goto label_321ee8;
        case 0x321eecu: goto label_321eec;
        case 0x321ef0u: goto label_321ef0;
        case 0x321ef4u: goto label_321ef4;
        case 0x321ef8u: goto label_321ef8;
        case 0x321efcu: goto label_321efc;
        case 0x321f00u: goto label_321f00;
        case 0x321f04u: goto label_321f04;
        case 0x321f08u: goto label_321f08;
        case 0x321f0cu: goto label_321f0c;
        case 0x321f10u: goto label_321f10;
        case 0x321f14u: goto label_321f14;
        case 0x321f18u: goto label_321f18;
        case 0x321f1cu: goto label_321f1c;
        case 0x321f20u: goto label_321f20;
        case 0x321f24u: goto label_321f24;
        case 0x321f28u: goto label_321f28;
        case 0x321f2cu: goto label_321f2c;
        case 0x321f30u: goto label_321f30;
        case 0x321f34u: goto label_321f34;
        case 0x321f38u: goto label_321f38;
        case 0x321f3cu: goto label_321f3c;
        case 0x321f40u: goto label_321f40;
        case 0x321f44u: goto label_321f44;
        case 0x321f48u: goto label_321f48;
        case 0x321f4cu: goto label_321f4c;
        case 0x321f50u: goto label_321f50;
        case 0x321f54u: goto label_321f54;
        case 0x321f58u: goto label_321f58;
        case 0x321f5cu: goto label_321f5c;
        case 0x321f60u: goto label_321f60;
        case 0x321f64u: goto label_321f64;
        case 0x321f68u: goto label_321f68;
        case 0x321f6cu: goto label_321f6c;
        case 0x321f70u: goto label_321f70;
        case 0x321f74u: goto label_321f74;
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        case 0x321fa8u: goto label_321fa8;
        case 0x321facu: goto label_321fac;
        case 0x321fb0u: goto label_321fb0;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fbcu: goto label_321fbc;
        case 0x321fc0u: goto label_321fc0;
        case 0x321fc4u: goto label_321fc4;
        case 0x321fc8u: goto label_321fc8;
        case 0x321fccu: goto label_321fcc;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fd4u: goto label_321fd4;
        case 0x321fd8u: goto label_321fd8;
        case 0x321fdcu: goto label_321fdc;
        case 0x321fe0u: goto label_321fe0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321fe8u: goto label_321fe8;
        case 0x321fecu: goto label_321fec;
        case 0x321ff0u: goto label_321ff0;
        case 0x321ff4u: goto label_321ff4;
        case 0x321ff8u: goto label_321ff8;
        case 0x321ffcu: goto label_321ffc;
        case 0x322000u: goto label_322000;
        case 0x322004u: goto label_322004;
        case 0x322008u: goto label_322008;
        case 0x32200cu: goto label_32200c;
        case 0x322010u: goto label_322010;
        case 0x322014u: goto label_322014;
        case 0x322018u: goto label_322018;
        case 0x32201cu: goto label_32201c;
        case 0x322020u: goto label_322020;
        case 0x322024u: goto label_322024;
        case 0x322028u: goto label_322028;
        case 0x32202cu: goto label_32202c;
        case 0x322030u: goto label_322030;
        case 0x322034u: goto label_322034;
        case 0x322038u: goto label_322038;
        case 0x32203cu: goto label_32203c;
        case 0x322040u: goto label_322040;
        case 0x322044u: goto label_322044;
        case 0x322048u: goto label_322048;
        case 0x32204cu: goto label_32204c;
        case 0x322050u: goto label_322050;
        case 0x322054u: goto label_322054;
        case 0x322058u: goto label_322058;
        case 0x32205cu: goto label_32205c;
        case 0x322060u: goto label_322060;
        case 0x322064u: goto label_322064;
        case 0x322068u: goto label_322068;
        case 0x32206cu: goto label_32206c;
        case 0x322070u: goto label_322070;
        case 0x322074u: goto label_322074;
        case 0x322078u: goto label_322078;
        case 0x32207cu: goto label_32207c;
        case 0x322080u: goto label_322080;
        case 0x322084u: goto label_322084;
        case 0x322088u: goto label_322088;
        case 0x32208cu: goto label_32208c;
        case 0x322090u: goto label_322090;
        case 0x322094u: goto label_322094;
        case 0x322098u: goto label_322098;
        case 0x32209cu: goto label_32209c;
        case 0x3220a0u: goto label_3220a0;
        case 0x3220a4u: goto label_3220a4;
        case 0x3220a8u: goto label_3220a8;
        case 0x3220acu: goto label_3220ac;
        case 0x3220b0u: goto label_3220b0;
        case 0x3220b4u: goto label_3220b4;
        case 0x3220b8u: goto label_3220b8;
        case 0x3220bcu: goto label_3220bc;
        case 0x3220c0u: goto label_3220c0;
        case 0x3220c4u: goto label_3220c4;
        case 0x3220c8u: goto label_3220c8;
        case 0x3220ccu: goto label_3220cc;
        case 0x3220d0u: goto label_3220d0;
        case 0x3220d4u: goto label_3220d4;
        case 0x3220d8u: goto label_3220d8;
        case 0x3220dcu: goto label_3220dc;
        case 0x3220e0u: goto label_3220e0;
        case 0x3220e4u: goto label_3220e4;
        case 0x3220e8u: goto label_3220e8;
        case 0x3220ecu: goto label_3220ec;
        case 0x3220f0u: goto label_3220f0;
        case 0x3220f4u: goto label_3220f4;
        case 0x3220f8u: goto label_3220f8;
        case 0x3220fcu: goto label_3220fc;
        case 0x322100u: goto label_322100;
        case 0x322104u: goto label_322104;
        case 0x322108u: goto label_322108;
        case 0x32210cu: goto label_32210c;
        case 0x322110u: goto label_322110;
        case 0x322114u: goto label_322114;
        case 0x322118u: goto label_322118;
        case 0x32211cu: goto label_32211c;
        case 0x322120u: goto label_322120;
        case 0x322124u: goto label_322124;
        case 0x322128u: goto label_322128;
        case 0x32212cu: goto label_32212c;
        case 0x322130u: goto label_322130;
        case 0x322134u: goto label_322134;
        case 0x322138u: goto label_322138;
        case 0x32213cu: goto label_32213c;
        case 0x322140u: goto label_322140;
        case 0x322144u: goto label_322144;
        case 0x322148u: goto label_322148;
        case 0x32214cu: goto label_32214c;
        case 0x322150u: goto label_322150;
        case 0x322154u: goto label_322154;
        case 0x322158u: goto label_322158;
        case 0x32215cu: goto label_32215c;
        case 0x322160u: goto label_322160;
        case 0x322164u: goto label_322164;
        case 0x322168u: goto label_322168;
        case 0x32216cu: goto label_32216c;
        case 0x322170u: goto label_322170;
        case 0x322174u: goto label_322174;
        case 0x322178u: goto label_322178;
        case 0x32217cu: goto label_32217c;
        case 0x322180u: goto label_322180;
        case 0x322184u: goto label_322184;
        case 0x322188u: goto label_322188;
        case 0x32218cu: goto label_32218c;
        case 0x322190u: goto label_322190;
        case 0x322194u: goto label_322194;
        case 0x322198u: goto label_322198;
        case 0x32219cu: goto label_32219c;
        case 0x3221a0u: goto label_3221a0;
        case 0x3221a4u: goto label_3221a4;
        case 0x3221a8u: goto label_3221a8;
        case 0x3221acu: goto label_3221ac;
        case 0x3221b0u: goto label_3221b0;
        case 0x3221b4u: goto label_3221b4;
        case 0x3221b8u: goto label_3221b8;
        case 0x3221bcu: goto label_3221bc;
        case 0x3221c0u: goto label_3221c0;
        case 0x3221c4u: goto label_3221c4;
        case 0x3221c8u: goto label_3221c8;
        case 0x3221ccu: goto label_3221cc;
        case 0x3221d0u: goto label_3221d0;
        case 0x3221d4u: goto label_3221d4;
        case 0x3221d8u: goto label_3221d8;
        case 0x3221dcu: goto label_3221dc;
        case 0x3221e0u: goto label_3221e0;
        case 0x3221e4u: goto label_3221e4;
        case 0x3221e8u: goto label_3221e8;
        case 0x3221ecu: goto label_3221ec;
        case 0x3221f0u: goto label_3221f0;
        case 0x3221f4u: goto label_3221f4;
        case 0x3221f8u: goto label_3221f8;
        case 0x3221fcu: goto label_3221fc;
        case 0x322200u: goto label_322200;
        case 0x322204u: goto label_322204;
        case 0x322208u: goto label_322208;
        case 0x32220cu: goto label_32220c;
        case 0x322210u: goto label_322210;
        case 0x322214u: goto label_322214;
        case 0x322218u: goto label_322218;
        case 0x32221cu: goto label_32221c;
        case 0x322220u: goto label_322220;
        case 0x322224u: goto label_322224;
        case 0x322228u: goto label_322228;
        case 0x32222cu: goto label_32222c;
        case 0x322230u: goto label_322230;
        case 0x322234u: goto label_322234;
        case 0x322238u: goto label_322238;
        case 0x32223cu: goto label_32223c;
        case 0x322240u: goto label_322240;
        case 0x322244u: goto label_322244;
        case 0x322248u: goto label_322248;
        case 0x32224cu: goto label_32224c;
        case 0x322250u: goto label_322250;
        case 0x322254u: goto label_322254;
        case 0x322258u: goto label_322258;
        case 0x32225cu: goto label_32225c;
        case 0x322260u: goto label_322260;
        case 0x322264u: goto label_322264;
        case 0x322268u: goto label_322268;
        case 0x32226cu: goto label_32226c;
        case 0x322270u: goto label_322270;
        case 0x322274u: goto label_322274;
        case 0x322278u: goto label_322278;
        case 0x32227cu: goto label_32227c;
        case 0x322280u: goto label_322280;
        case 0x322284u: goto label_322284;
        case 0x322288u: goto label_322288;
        case 0x32228cu: goto label_32228c;
        case 0x322290u: goto label_322290;
        case 0x322294u: goto label_322294;
        case 0x322298u: goto label_322298;
        case 0x32229cu: goto label_32229c;
        case 0x3222a0u: goto label_3222a0;
        case 0x3222a4u: goto label_3222a4;
        case 0x3222a8u: goto label_3222a8;
        case 0x3222acu: goto label_3222ac;
        case 0x3222b0u: goto label_3222b0;
        case 0x3222b4u: goto label_3222b4;
        case 0x3222b8u: goto label_3222b8;
        case 0x3222bcu: goto label_3222bc;
        case 0x3222c0u: goto label_3222c0;
        case 0x3222c4u: goto label_3222c4;
        case 0x3222c8u: goto label_3222c8;
        case 0x3222ccu: goto label_3222cc;
        case 0x3222d0u: goto label_3222d0;
        case 0x3222d4u: goto label_3222d4;
        case 0x3222d8u: goto label_3222d8;
        case 0x3222dcu: goto label_3222dc;
        case 0x3222e0u: goto label_3222e0;
        case 0x3222e4u: goto label_3222e4;
        case 0x3222e8u: goto label_3222e8;
        case 0x3222ecu: goto label_3222ec;
        case 0x3222f0u: goto label_3222f0;
        case 0x3222f4u: goto label_3222f4;
        case 0x3222f8u: goto label_3222f8;
        case 0x3222fcu: goto label_3222fc;
        case 0x322300u: goto label_322300;
        case 0x322304u: goto label_322304;
        case 0x322308u: goto label_322308;
        case 0x32230cu: goto label_32230c;
        case 0x322310u: goto label_322310;
        case 0x322314u: goto label_322314;
        case 0x322318u: goto label_322318;
        case 0x32231cu: goto label_32231c;
        case 0x322320u: goto label_322320;
        case 0x322324u: goto label_322324;
        case 0x322328u: goto label_322328;
        case 0x32232cu: goto label_32232c;
        case 0x322330u: goto label_322330;
        case 0x322334u: goto label_322334;
        case 0x322338u: goto label_322338;
        case 0x32233cu: goto label_32233c;
        case 0x322340u: goto label_322340;
        case 0x322344u: goto label_322344;
        case 0x322348u: goto label_322348;
        case 0x32234cu: goto label_32234c;
        case 0x322350u: goto label_322350;
        case 0x322354u: goto label_322354;
        case 0x322358u: goto label_322358;
        case 0x32235cu: goto label_32235c;
        case 0x322360u: goto label_322360;
        case 0x322364u: goto label_322364;
        case 0x322368u: goto label_322368;
        case 0x32236cu: goto label_32236c;
        case 0x322370u: goto label_322370;
        case 0x322374u: goto label_322374;
        case 0x322378u: goto label_322378;
        case 0x32237cu: goto label_32237c;
        case 0x322380u: goto label_322380;
        case 0x322384u: goto label_322384;
        case 0x322388u: goto label_322388;
        case 0x32238cu: goto label_32238c;
        case 0x322390u: goto label_322390;
        case 0x322394u: goto label_322394;
        case 0x322398u: goto label_322398;
        case 0x32239cu: goto label_32239c;
        case 0x3223a0u: goto label_3223a0;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223a8u: goto label_3223a8;
        case 0x3223acu: goto label_3223ac;
        case 0x3223b0u: goto label_3223b0;
        case 0x3223b4u: goto label_3223b4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223bcu: goto label_3223bc;
        case 0x3223c0u: goto label_3223c0;
        case 0x3223c4u: goto label_3223c4;
        case 0x3223c8u: goto label_3223c8;
        case 0x3223ccu: goto label_3223cc;
        case 0x3223d0u: goto label_3223d0;
        case 0x3223d4u: goto label_3223d4;
        case 0x3223d8u: goto label_3223d8;
        case 0x3223dcu: goto label_3223dc;
        case 0x3223e0u: goto label_3223e0;
        case 0x3223e4u: goto label_3223e4;
        case 0x3223e8u: goto label_3223e8;
        case 0x3223ecu: goto label_3223ec;
        case 0x3223f0u: goto label_3223f0;
        case 0x3223f4u: goto label_3223f4;
        case 0x3223f8u: goto label_3223f8;
        case 0x3223fcu: goto label_3223fc;
        case 0x322400u: goto label_322400;
        case 0x322404u: goto label_322404;
        case 0x322408u: goto label_322408;
        case 0x32240cu: goto label_32240c;
        case 0x322410u: goto label_322410;
        case 0x322414u: goto label_322414;
        case 0x322418u: goto label_322418;
        case 0x32241cu: goto label_32241c;
        case 0x322420u: goto label_322420;
        case 0x322424u: goto label_322424;
        case 0x322428u: goto label_322428;
        case 0x32242cu: goto label_32242c;
        case 0x322430u: goto label_322430;
        case 0x322434u: goto label_322434;
        case 0x322438u: goto label_322438;
        case 0x32243cu: goto label_32243c;
        case 0x322440u: goto label_322440;
        case 0x322444u: goto label_322444;
        case 0x322448u: goto label_322448;
        case 0x32244cu: goto label_32244c;
        case 0x322450u: goto label_322450;
        case 0x322454u: goto label_322454;
        case 0x322458u: goto label_322458;
        case 0x32245cu: goto label_32245c;
        case 0x322460u: goto label_322460;
        case 0x322464u: goto label_322464;
        case 0x322468u: goto label_322468;
        case 0x32246cu: goto label_32246c;
        case 0x322470u: goto label_322470;
        case 0x322474u: goto label_322474;
        case 0x322478u: goto label_322478;
        case 0x32247cu: goto label_32247c;
        case 0x322480u: goto label_322480;
        case 0x322484u: goto label_322484;
        case 0x322488u: goto label_322488;
        case 0x32248cu: goto label_32248c;
        case 0x322490u: goto label_322490;
        case 0x322494u: goto label_322494;
        case 0x322498u: goto label_322498;
        case 0x32249cu: goto label_32249c;
        case 0x3224a0u: goto label_3224a0;
        case 0x3224a4u: goto label_3224a4;
        case 0x3224a8u: goto label_3224a8;
        case 0x3224acu: goto label_3224ac;
        case 0x3224b0u: goto label_3224b0;
        case 0x3224b4u: goto label_3224b4;
        case 0x3224b8u: goto label_3224b8;
        case 0x3224bcu: goto label_3224bc;
        case 0x3224c0u: goto label_3224c0;
        case 0x3224c4u: goto label_3224c4;
        case 0x3224c8u: goto label_3224c8;
        case 0x3224ccu: goto label_3224cc;
        case 0x3224d0u: goto label_3224d0;
        case 0x3224d4u: goto label_3224d4;
        case 0x3224d8u: goto label_3224d8;
        case 0x3224dcu: goto label_3224dc;
        case 0x3224e0u: goto label_3224e0;
        case 0x3224e4u: goto label_3224e4;
        case 0x3224e8u: goto label_3224e8;
        case 0x3224ecu: goto label_3224ec;
        case 0x3224f0u: goto label_3224f0;
        case 0x3224f4u: goto label_3224f4;
        case 0x3224f8u: goto label_3224f8;
        case 0x3224fcu: goto label_3224fc;
        case 0x322500u: goto label_322500;
        case 0x322504u: goto label_322504;
        case 0x322508u: goto label_322508;
        case 0x32250cu: goto label_32250c;
        case 0x322510u: goto label_322510;
        case 0x322514u: goto label_322514;
        case 0x322518u: goto label_322518;
        case 0x32251cu: goto label_32251c;
        case 0x322520u: goto label_322520;
        case 0x322524u: goto label_322524;
        case 0x322528u: goto label_322528;
        case 0x32252cu: goto label_32252c;
        case 0x322530u: goto label_322530;
        case 0x322534u: goto label_322534;
        case 0x322538u: goto label_322538;
        case 0x32253cu: goto label_32253c;
        case 0x322540u: goto label_322540;
        case 0x322544u: goto label_322544;
        case 0x322548u: goto label_322548;
        case 0x32254cu: goto label_32254c;
        case 0x322550u: goto label_322550;
        case 0x322554u: goto label_322554;
        case 0x322558u: goto label_322558;
        case 0x32255cu: goto label_32255c;
        case 0x322560u: goto label_322560;
        case 0x322564u: goto label_322564;
        case 0x322568u: goto label_322568;
        case 0x32256cu: goto label_32256c;
        case 0x322570u: goto label_322570;
        case 0x322574u: goto label_322574;
        case 0x322578u: goto label_322578;
        case 0x32257cu: goto label_32257c;
        case 0x322580u: goto label_322580;
        case 0x322584u: goto label_322584;
        case 0x322588u: goto label_322588;
        case 0x32258cu: goto label_32258c;
        case 0x322590u: goto label_322590;
        case 0x322594u: goto label_322594;
        case 0x322598u: goto label_322598;
        case 0x32259cu: goto label_32259c;
        case 0x3225a0u: goto label_3225a0;
        case 0x3225a4u: goto label_3225a4;
        case 0x3225a8u: goto label_3225a8;
        case 0x3225acu: goto label_3225ac;
        case 0x3225b0u: goto label_3225b0;
        case 0x3225b4u: goto label_3225b4;
        case 0x3225b8u: goto label_3225b8;
        case 0x3225bcu: goto label_3225bc;
        case 0x3225c0u: goto label_3225c0;
        case 0x3225c4u: goto label_3225c4;
        case 0x3225c8u: goto label_3225c8;
        case 0x3225ccu: goto label_3225cc;
        case 0x3225d0u: goto label_3225d0;
        case 0x3225d4u: goto label_3225d4;
        case 0x3225d8u: goto label_3225d8;
        case 0x3225dcu: goto label_3225dc;
        case 0x3225e0u: goto label_3225e0;
        case 0x3225e4u: goto label_3225e4;
        case 0x3225e8u: goto label_3225e8;
        case 0x3225ecu: goto label_3225ec;
        case 0x3225f0u: goto label_3225f0;
        case 0x3225f4u: goto label_3225f4;
        case 0x3225f8u: goto label_3225f8;
        case 0x3225fcu: goto label_3225fc;
        case 0x322600u: goto label_322600;
        case 0x322604u: goto label_322604;
        case 0x322608u: goto label_322608;
        case 0x32260cu: goto label_32260c;
        case 0x322610u: goto label_322610;
        case 0x322614u: goto label_322614;
        case 0x322618u: goto label_322618;
        case 0x32261cu: goto label_32261c;
        case 0x322620u: goto label_322620;
        case 0x322624u: goto label_322624;
        case 0x322628u: goto label_322628;
        case 0x32262cu: goto label_32262c;
        case 0x322630u: goto label_322630;
        case 0x322634u: goto label_322634;
        case 0x322638u: goto label_322638;
        case 0x32263cu: goto label_32263c;
        case 0x322640u: goto label_322640;
        case 0x322644u: goto label_322644;
        case 0x322648u: goto label_322648;
        case 0x32264cu: goto label_32264c;
        case 0x322650u: goto label_322650;
        case 0x322654u: goto label_322654;
        case 0x322658u: goto label_322658;
        case 0x32265cu: goto label_32265c;
        case 0x322660u: goto label_322660;
        case 0x322664u: goto label_322664;
        case 0x322668u: goto label_322668;
        case 0x32266cu: goto label_32266c;
        case 0x322670u: goto label_322670;
        case 0x322674u: goto label_322674;
        case 0x322678u: goto label_322678;
        case 0x32267cu: goto label_32267c;
        case 0x322680u: goto label_322680;
        case 0x322684u: goto label_322684;
        case 0x322688u: goto label_322688;
        case 0x32268cu: goto label_32268c;
        case 0x322690u: goto label_322690;
        case 0x322694u: goto label_322694;
        case 0x322698u: goto label_322698;
        case 0x32269cu: goto label_32269c;
        case 0x3226a0u: goto label_3226a0;
        case 0x3226a4u: goto label_3226a4;
        case 0x3226a8u: goto label_3226a8;
        case 0x3226acu: goto label_3226ac;
        case 0x3226b0u: goto label_3226b0;
        case 0x3226b4u: goto label_3226b4;
        case 0x3226b8u: goto label_3226b8;
        case 0x3226bcu: goto label_3226bc;
        case 0x3226c0u: goto label_3226c0;
        case 0x3226c4u: goto label_3226c4;
        case 0x3226c8u: goto label_3226c8;
        case 0x3226ccu: goto label_3226cc;
        case 0x3226d0u: goto label_3226d0;
        case 0x3226d4u: goto label_3226d4;
        case 0x3226d8u: goto label_3226d8;
        case 0x3226dcu: goto label_3226dc;
        case 0x3226e0u: goto label_3226e0;
        case 0x3226e4u: goto label_3226e4;
        case 0x3226e8u: goto label_3226e8;
        case 0x3226ecu: goto label_3226ec;
        case 0x3226f0u: goto label_3226f0;
        case 0x3226f4u: goto label_3226f4;
        case 0x3226f8u: goto label_3226f8;
        case 0x3226fcu: goto label_3226fc;
        case 0x322700u: goto label_322700;
        case 0x322704u: goto label_322704;
        case 0x322708u: goto label_322708;
        case 0x32270cu: goto label_32270c;
        case 0x322710u: goto label_322710;
        case 0x322714u: goto label_322714;
        case 0x322718u: goto label_322718;
        case 0x32271cu: goto label_32271c;
        case 0x322720u: goto label_322720;
        case 0x322724u: goto label_322724;
        case 0x322728u: goto label_322728;
        case 0x32272cu: goto label_32272c;
        case 0x322730u: goto label_322730;
        case 0x322734u: goto label_322734;
        case 0x322738u: goto label_322738;
        case 0x32273cu: goto label_32273c;
        case 0x322740u: goto label_322740;
        case 0x322744u: goto label_322744;
        case 0x322748u: goto label_322748;
        case 0x32274cu: goto label_32274c;
        case 0x322750u: goto label_322750;
        case 0x322754u: goto label_322754;
        case 0x322758u: goto label_322758;
        case 0x32275cu: goto label_32275c;
        case 0x322760u: goto label_322760;
        case 0x322764u: goto label_322764;
        case 0x322768u: goto label_322768;
        case 0x32276cu: goto label_32276c;
        case 0x322770u: goto label_322770;
        case 0x322774u: goto label_322774;
        case 0x322778u: goto label_322778;
        case 0x32277cu: goto label_32277c;
        case 0x322780u: goto label_322780;
        case 0x322784u: goto label_322784;
        case 0x322788u: goto label_322788;
        case 0x32278cu: goto label_32278c;
        case 0x322790u: goto label_322790;
        case 0x322794u: goto label_322794;
        case 0x322798u: goto label_322798;
        case 0x32279cu: goto label_32279c;
        case 0x3227a0u: goto label_3227a0;
        case 0x3227a4u: goto label_3227a4;
        case 0x3227a8u: goto label_3227a8;
        case 0x3227acu: goto label_3227ac;
        case 0x3227b0u: goto label_3227b0;
        case 0x3227b4u: goto label_3227b4;
        case 0x3227b8u: goto label_3227b8;
        case 0x3227bcu: goto label_3227bc;
        case 0x3227c0u: goto label_3227c0;
        case 0x3227c4u: goto label_3227c4;
        case 0x3227c8u: goto label_3227c8;
        case 0x3227ccu: goto label_3227cc;
        case 0x3227d0u: goto label_3227d0;
        case 0x3227d4u: goto label_3227d4;
        case 0x3227d8u: goto label_3227d8;
        case 0x3227dcu: goto label_3227dc;
        case 0x3227e0u: goto label_3227e0;
        case 0x3227e4u: goto label_3227e4;
        case 0x3227e8u: goto label_3227e8;
        case 0x3227ecu: goto label_3227ec;
        case 0x3227f0u: goto label_3227f0;
        case 0x3227f4u: goto label_3227f4;
        case 0x3227f8u: goto label_3227f8;
        case 0x3227fcu: goto label_3227fc;
        case 0x322800u: goto label_322800;
        case 0x322804u: goto label_322804;
        case 0x322808u: goto label_322808;
        case 0x32280cu: goto label_32280c;
        case 0x322810u: goto label_322810;
        case 0x322814u: goto label_322814;
        case 0x322818u: goto label_322818;
        case 0x32281cu: goto label_32281c;
        case 0x322820u: goto label_322820;
        case 0x322824u: goto label_322824;
        case 0x322828u: goto label_322828;
        case 0x32282cu: goto label_32282c;
        case 0x322830u: goto label_322830;
        case 0x322834u: goto label_322834;
        case 0x322838u: goto label_322838;
        case 0x32283cu: goto label_32283c;
        case 0x322840u: goto label_322840;
        case 0x322844u: goto label_322844;
        case 0x322848u: goto label_322848;
        case 0x32284cu: goto label_32284c;
        case 0x322850u: goto label_322850;
        case 0x322854u: goto label_322854;
        case 0x322858u: goto label_322858;
        case 0x32285cu: goto label_32285c;
        case 0x322860u: goto label_322860;
        case 0x322864u: goto label_322864;
        case 0x322868u: goto label_322868;
        case 0x32286cu: goto label_32286c;
        case 0x322870u: goto label_322870;
        case 0x322874u: goto label_322874;
        case 0x322878u: goto label_322878;
        case 0x32287cu: goto label_32287c;
        case 0x322880u: goto label_322880;
        case 0x322884u: goto label_322884;
        case 0x322888u: goto label_322888;
        case 0x32288cu: goto label_32288c;
        case 0x322890u: goto label_322890;
        case 0x322894u: goto label_322894;
        case 0x322898u: goto label_322898;
        case 0x32289cu: goto label_32289c;
        case 0x3228a0u: goto label_3228a0;
        case 0x3228a4u: goto label_3228a4;
        case 0x3228a8u: goto label_3228a8;
        case 0x3228acu: goto label_3228ac;
        case 0x3228b0u: goto label_3228b0;
        case 0x3228b4u: goto label_3228b4;
        case 0x3228b8u: goto label_3228b8;
        case 0x3228bcu: goto label_3228bc;
        case 0x3228c0u: goto label_3228c0;
        case 0x3228c4u: goto label_3228c4;
        case 0x3228c8u: goto label_3228c8;
        case 0x3228ccu: goto label_3228cc;
        case 0x3228d0u: goto label_3228d0;
        case 0x3228d4u: goto label_3228d4;
        case 0x3228d8u: goto label_3228d8;
        case 0x3228dcu: goto label_3228dc;
        case 0x3228e0u: goto label_3228e0;
        case 0x3228e4u: goto label_3228e4;
        case 0x3228e8u: goto label_3228e8;
        case 0x3228ecu: goto label_3228ec;
        case 0x3228f0u: goto label_3228f0;
        case 0x3228f4u: goto label_3228f4;
        case 0x3228f8u: goto label_3228f8;
        case 0x3228fcu: goto label_3228fc;
        case 0x322900u: goto label_322900;
        case 0x322904u: goto label_322904;
        case 0x322908u: goto label_322908;
        case 0x32290cu: goto label_32290c;
        case 0x322910u: goto label_322910;
        case 0x322914u: goto label_322914;
        case 0x322918u: goto label_322918;
        case 0x32291cu: goto label_32291c;
        case 0x322920u: goto label_322920;
        case 0x322924u: goto label_322924;
        case 0x322928u: goto label_322928;
        case 0x32292cu: goto label_32292c;
        case 0x322930u: goto label_322930;
        case 0x322934u: goto label_322934;
        case 0x322938u: goto label_322938;
        case 0x32293cu: goto label_32293c;
        case 0x322940u: goto label_322940;
        case 0x322944u: goto label_322944;
        case 0x322948u: goto label_322948;
        case 0x32294cu: goto label_32294c;
        case 0x322950u: goto label_322950;
        case 0x322954u: goto label_322954;
        case 0x322958u: goto label_322958;
        case 0x32295cu: goto label_32295c;
        case 0x322960u: goto label_322960;
        case 0x322964u: goto label_322964;
        case 0x322968u: goto label_322968;
        case 0x32296cu: goto label_32296c;
        case 0x322970u: goto label_322970;
        case 0x322974u: goto label_322974;
        case 0x322978u: goto label_322978;
        case 0x32297cu: goto label_32297c;
        case 0x322980u: goto label_322980;
        case 0x322984u: goto label_322984;
        case 0x322988u: goto label_322988;
        case 0x32298cu: goto label_32298c;
        case 0x322990u: goto label_322990;
        case 0x322994u: goto label_322994;
        case 0x322998u: goto label_322998;
        case 0x32299cu: goto label_32299c;
        case 0x3229a0u: goto label_3229a0;
        case 0x3229a4u: goto label_3229a4;
        case 0x3229a8u: goto label_3229a8;
        case 0x3229acu: goto label_3229ac;
        case 0x3229b0u: goto label_3229b0;
        case 0x3229b4u: goto label_3229b4;
        case 0x3229b8u: goto label_3229b8;
        case 0x3229bcu: goto label_3229bc;
        case 0x3229c0u: goto label_3229c0;
        case 0x3229c4u: goto label_3229c4;
        case 0x3229c8u: goto label_3229c8;
        case 0x3229ccu: goto label_3229cc;
        case 0x3229d0u: goto label_3229d0;
        case 0x3229d4u: goto label_3229d4;
        case 0x3229d8u: goto label_3229d8;
        case 0x3229dcu: goto label_3229dc;
        case 0x3229e0u: goto label_3229e0;
        case 0x3229e4u: goto label_3229e4;
        case 0x3229e8u: goto label_3229e8;
        case 0x3229ecu: goto label_3229ec;
        case 0x3229f0u: goto label_3229f0;
        case 0x3229f4u: goto label_3229f4;
        case 0x3229f8u: goto label_3229f8;
        case 0x3229fcu: goto label_3229fc;
        case 0x322a00u: goto label_322a00;
        case 0x322a04u: goto label_322a04;
        case 0x322a08u: goto label_322a08;
        case 0x322a0cu: goto label_322a0c;
        case 0x322a10u: goto label_322a10;
        case 0x322a14u: goto label_322a14;
        case 0x322a18u: goto label_322a18;
        case 0x322a1cu: goto label_322a1c;
        case 0x322a20u: goto label_322a20;
        case 0x322a24u: goto label_322a24;
        case 0x322a28u: goto label_322a28;
        case 0x322a2cu: goto label_322a2c;
        case 0x322a30u: goto label_322a30;
        case 0x322a34u: goto label_322a34;
        case 0x322a38u: goto label_322a38;
        case 0x322a3cu: goto label_322a3c;
        case 0x322a40u: goto label_322a40;
        case 0x322a44u: goto label_322a44;
        case 0x322a48u: goto label_322a48;
        case 0x322a4cu: goto label_322a4c;
        case 0x322a50u: goto label_322a50;
        case 0x322a54u: goto label_322a54;
        case 0x322a58u: goto label_322a58;
        case 0x322a5cu: goto label_322a5c;
        case 0x322a60u: goto label_322a60;
        case 0x322a64u: goto label_322a64;
        case 0x322a68u: goto label_322a68;
        case 0x322a6cu: goto label_322a6c;
        case 0x322a70u: goto label_322a70;
        case 0x322a74u: goto label_322a74;
        case 0x322a78u: goto label_322a78;
        case 0x322a7cu: goto label_322a7c;
        case 0x322a80u: goto label_322a80;
        case 0x322a84u: goto label_322a84;
        case 0x322a88u: goto label_322a88;
        case 0x322a8cu: goto label_322a8c;
        case 0x322a90u: goto label_322a90;
        case 0x322a94u: goto label_322a94;
        case 0x322a98u: goto label_322a98;
        case 0x322a9cu: goto label_322a9c;
        case 0x322aa0u: goto label_322aa0;
        case 0x322aa4u: goto label_322aa4;
        case 0x322aa8u: goto label_322aa8;
        case 0x322aacu: goto label_322aac;
        case 0x322ab0u: goto label_322ab0;
        case 0x322ab4u: goto label_322ab4;
        case 0x322ab8u: goto label_322ab8;
        case 0x322abcu: goto label_322abc;
        case 0x322ac0u: goto label_322ac0;
        case 0x322ac4u: goto label_322ac4;
        case 0x322ac8u: goto label_322ac8;
        case 0x322accu: goto label_322acc;
        case 0x322ad0u: goto label_322ad0;
        case 0x322ad4u: goto label_322ad4;
        case 0x322ad8u: goto label_322ad8;
        case 0x322adcu: goto label_322adc;
        case 0x322ae0u: goto label_322ae0;
        case 0x322ae4u: goto label_322ae4;
        case 0x322ae8u: goto label_322ae8;
        case 0x322aecu: goto label_322aec;
        case 0x322af0u: goto label_322af0;
        case 0x322af4u: goto label_322af4;
        case 0x322af8u: goto label_322af8;
        case 0x322afcu: goto label_322afc;
        case 0x322b00u: goto label_322b00;
        case 0x322b04u: goto label_322b04;
        case 0x322b08u: goto label_322b08;
        case 0x322b0cu: goto label_322b0c;
        case 0x322b10u: goto label_322b10;
        case 0x322b14u: goto label_322b14;
        case 0x322b18u: goto label_322b18;
        case 0x322b1cu: goto label_322b1c;
        case 0x322b20u: goto label_322b20;
        case 0x322b24u: goto label_322b24;
        case 0x322b28u: goto label_322b28;
        case 0x322b2cu: goto label_322b2c;
        case 0x322b30u: goto label_322b30;
        case 0x322b34u: goto label_322b34;
        case 0x322b38u: goto label_322b38;
        case 0x322b3cu: goto label_322b3c;
        case 0x322b40u: goto label_322b40;
        case 0x322b44u: goto label_322b44;
        case 0x322b48u: goto label_322b48;
        case 0x322b4cu: goto label_322b4c;
        case 0x322b50u: goto label_322b50;
        case 0x322b54u: goto label_322b54;
        case 0x322b58u: goto label_322b58;
        case 0x322b5cu: goto label_322b5c;
        case 0x322b60u: goto label_322b60;
        case 0x322b64u: goto label_322b64;
        case 0x322b68u: goto label_322b68;
        case 0x322b6cu: goto label_322b6c;
        case 0x322b70u: goto label_322b70;
        case 0x322b74u: goto label_322b74;
        case 0x322b78u: goto label_322b78;
        case 0x322b7cu: goto label_322b7c;
        case 0x322b80u: goto label_322b80;
        case 0x322b84u: goto label_322b84;
        case 0x322b88u: goto label_322b88;
        case 0x322b8cu: goto label_322b8c;
        case 0x322b90u: goto label_322b90;
        case 0x322b94u: goto label_322b94;
        case 0x322b98u: goto label_322b98;
        case 0x322b9cu: goto label_322b9c;
        case 0x322ba0u: goto label_322ba0;
        case 0x322ba4u: goto label_322ba4;
        case 0x322ba8u: goto label_322ba8;
        case 0x322bacu: goto label_322bac;
        case 0x322bb0u: goto label_322bb0;
        case 0x322bb4u: goto label_322bb4;
        case 0x322bb8u: goto label_322bb8;
        case 0x322bbcu: goto label_322bbc;
        case 0x322bc0u: goto label_322bc0;
        case 0x322bc4u: goto label_322bc4;
        case 0x322bc8u: goto label_322bc8;
        case 0x322bccu: goto label_322bcc;
        case 0x322bd0u: goto label_322bd0;
        case 0x322bd4u: goto label_322bd4;
        case 0x322bd8u: goto label_322bd8;
        case 0x322bdcu: goto label_322bdc;
        case 0x322be0u: goto label_322be0;
        case 0x322be4u: goto label_322be4;
        case 0x322be8u: goto label_322be8;
        case 0x322becu: goto label_322bec;
        case 0x322bf0u: goto label_322bf0;
        case 0x322bf4u: goto label_322bf4;
        case 0x322bf8u: goto label_322bf8;
        case 0x322bfcu: goto label_322bfc;
        case 0x322c00u: goto label_322c00;
        case 0x322c04u: goto label_322c04;
        case 0x322c08u: goto label_322c08;
        case 0x322c0cu: goto label_322c0c;
        case 0x322c10u: goto label_322c10;
        case 0x322c14u: goto label_322c14;
        case 0x322c18u: goto label_322c18;
        case 0x322c1cu: goto label_322c1c;
        case 0x322c20u: goto label_322c20;
        case 0x322c24u: goto label_322c24;
        case 0x322c28u: goto label_322c28;
        case 0x322c2cu: goto label_322c2c;
        case 0x322c30u: goto label_322c30;
        case 0x322c34u: goto label_322c34;
        case 0x322c38u: goto label_322c38;
        case 0x322c3cu: goto label_322c3c;
        case 0x322c40u: goto label_322c40;
        case 0x322c44u: goto label_322c44;
        case 0x322c48u: goto label_322c48;
        case 0x322c4cu: goto label_322c4c;
        case 0x322c50u: goto label_322c50;
        case 0x322c54u: goto label_322c54;
        case 0x322c58u: goto label_322c58;
        case 0x322c5cu: goto label_322c5c;
        case 0x322c60u: goto label_322c60;
        case 0x322c64u: goto label_322c64;
        case 0x322c68u: goto label_322c68;
        case 0x322c6cu: goto label_322c6c;
        case 0x322c70u: goto label_322c70;
        case 0x322c74u: goto label_322c74;
        case 0x322c78u: goto label_322c78;
        case 0x322c7cu: goto label_322c7c;
        case 0x322c80u: goto label_322c80;
        case 0x322c84u: goto label_322c84;
        case 0x322c88u: goto label_322c88;
        case 0x322c8cu: goto label_322c8c;
        case 0x322c90u: goto label_322c90;
        case 0x322c94u: goto label_322c94;
        case 0x322c98u: goto label_322c98;
        case 0x322c9cu: goto label_322c9c;
        case 0x322ca0u: goto label_322ca0;
        case 0x322ca4u: goto label_322ca4;
        case 0x322ca8u: goto label_322ca8;
        case 0x322cacu: goto label_322cac;
        case 0x322cb0u: goto label_322cb0;
        case 0x322cb4u: goto label_322cb4;
        case 0x322cb8u: goto label_322cb8;
        case 0x322cbcu: goto label_322cbc;
        case 0x322cc0u: goto label_322cc0;
        case 0x322cc4u: goto label_322cc4;
        case 0x322cc8u: goto label_322cc8;
        case 0x322cccu: goto label_322ccc;
        case 0x322cd0u: goto label_322cd0;
        case 0x322cd4u: goto label_322cd4;
        case 0x322cd8u: goto label_322cd8;
        case 0x322cdcu: goto label_322cdc;
        case 0x322ce0u: goto label_322ce0;
        case 0x322ce4u: goto label_322ce4;
        case 0x322ce8u: goto label_322ce8;
        case 0x322cecu: goto label_322cec;
        case 0x322cf0u: goto label_322cf0;
        case 0x322cf4u: goto label_322cf4;
        case 0x322cf8u: goto label_322cf8;
        case 0x322cfcu: goto label_322cfc;
        case 0x322d00u: goto label_322d00;
        case 0x322d04u: goto label_322d04;
        case 0x322d08u: goto label_322d08;
        case 0x322d0cu: goto label_322d0c;
        case 0x322d10u: goto label_322d10;
        case 0x322d14u: goto label_322d14;
        case 0x322d18u: goto label_322d18;
        case 0x322d1cu: goto label_322d1c;
        case 0x322d20u: goto label_322d20;
        case 0x322d24u: goto label_322d24;
        case 0x322d28u: goto label_322d28;
        case 0x322d2cu: goto label_322d2c;
        case 0x322d30u: goto label_322d30;
        case 0x322d34u: goto label_322d34;
        case 0x322d38u: goto label_322d38;
        case 0x322d3cu: goto label_322d3c;
        case 0x322d40u: goto label_322d40;
        case 0x322d44u: goto label_322d44;
        case 0x322d48u: goto label_322d48;
        case 0x322d4cu: goto label_322d4c;
        case 0x322d50u: goto label_322d50;
        case 0x322d54u: goto label_322d54;
        case 0x322d58u: goto label_322d58;
        case 0x322d5cu: goto label_322d5c;
        case 0x322d60u: goto label_322d60;
        case 0x322d64u: goto label_322d64;
        case 0x322d68u: goto label_322d68;
        case 0x322d6cu: goto label_322d6c;
        case 0x322d70u: goto label_322d70;
        case 0x322d74u: goto label_322d74;
        case 0x322d78u: goto label_322d78;
        case 0x322d7cu: goto label_322d7c;
        case 0x322d80u: goto label_322d80;
        case 0x322d84u: goto label_322d84;
        case 0x322d88u: goto label_322d88;
        case 0x322d8cu: goto label_322d8c;
        case 0x322d90u: goto label_322d90;
        case 0x322d94u: goto label_322d94;
        case 0x322d98u: goto label_322d98;
        case 0x322d9cu: goto label_322d9c;
        case 0x322da0u: goto label_322da0;
        case 0x322da4u: goto label_322da4;
        case 0x322da8u: goto label_322da8;
        case 0x322dacu: goto label_322dac;
        case 0x322db0u: goto label_322db0;
        case 0x322db4u: goto label_322db4;
        case 0x322db8u: goto label_322db8;
        case 0x322dbcu: goto label_322dbc;
        case 0x322dc0u: goto label_322dc0;
        case 0x322dc4u: goto label_322dc4;
        case 0x322dc8u: goto label_322dc8;
        case 0x322dccu: goto label_322dcc;
        case 0x322dd0u: goto label_322dd0;
        case 0x322dd4u: goto label_322dd4;
        case 0x322dd8u: goto label_322dd8;
        case 0x322ddcu: goto label_322ddc;
        case 0x322de0u: goto label_322de0;
        case 0x322de4u: goto label_322de4;
        case 0x322de8u: goto label_322de8;
        case 0x322decu: goto label_322dec;
        case 0x322df0u: goto label_322df0;
        case 0x322df4u: goto label_322df4;
        case 0x322df8u: goto label_322df8;
        case 0x322dfcu: goto label_322dfc;
        case 0x322e00u: goto label_322e00;
        case 0x322e04u: goto label_322e04;
        case 0x322e08u: goto label_322e08;
        case 0x322e0cu: goto label_322e0c;
        case 0x322e10u: goto label_322e10;
        case 0x322e14u: goto label_322e14;
        case 0x322e18u: goto label_322e18;
        case 0x322e1cu: goto label_322e1c;
        case 0x322e20u: goto label_322e20;
        case 0x322e24u: goto label_322e24;
        case 0x322e28u: goto label_322e28;
        case 0x322e2cu: goto label_322e2c;
        case 0x322e30u: goto label_322e30;
        case 0x322e34u: goto label_322e34;
        case 0x322e38u: goto label_322e38;
        case 0x322e3cu: goto label_322e3c;
        case 0x322e40u: goto label_322e40;
        case 0x322e44u: goto label_322e44;
        case 0x322e48u: goto label_322e48;
        case 0x322e4cu: goto label_322e4c;
        case 0x322e50u: goto label_322e50;
        case 0x322e54u: goto label_322e54;
        case 0x322e58u: goto label_322e58;
        case 0x322e5cu: goto label_322e5c;
        case 0x322e60u: goto label_322e60;
        case 0x322e64u: goto label_322e64;
        case 0x322e68u: goto label_322e68;
        case 0x322e6cu: goto label_322e6c;
        case 0x322e70u: goto label_322e70;
        case 0x322e74u: goto label_322e74;
        case 0x322e78u: goto label_322e78;
        case 0x322e7cu: goto label_322e7c;
        case 0x322e80u: goto label_322e80;
        case 0x322e84u: goto label_322e84;
        case 0x322e88u: goto label_322e88;
        case 0x322e8cu: goto label_322e8c;
        case 0x322e90u: goto label_322e90;
        case 0x322e94u: goto label_322e94;
        case 0x322e98u: goto label_322e98;
        case 0x322e9cu: goto label_322e9c;
        case 0x322ea0u: goto label_322ea0;
        case 0x322ea4u: goto label_322ea4;
        case 0x322ea8u: goto label_322ea8;
        case 0x322eacu: goto label_322eac;
        case 0x322eb0u: goto label_322eb0;
        case 0x322eb4u: goto label_322eb4;
        case 0x322eb8u: goto label_322eb8;
        case 0x322ebcu: goto label_322ebc;
        case 0x322ec0u: goto label_322ec0;
        case 0x322ec4u: goto label_322ec4;
        case 0x322ec8u: goto label_322ec8;
        case 0x322eccu: goto label_322ecc;
        case 0x322ed0u: goto label_322ed0;
        case 0x322ed4u: goto label_322ed4;
        case 0x322ed8u: goto label_322ed8;
        case 0x322edcu: goto label_322edc;
        case 0x322ee0u: goto label_322ee0;
        case 0x322ee4u: goto label_322ee4;
        case 0x322ee8u: goto label_322ee8;
        case 0x322eecu: goto label_322eec;
        case 0x322ef0u: goto label_322ef0;
        case 0x322ef4u: goto label_322ef4;
        case 0x322ef8u: goto label_322ef8;
        case 0x322efcu: goto label_322efc;
        case 0x322f00u: goto label_322f00;
        case 0x322f04u: goto label_322f04;
        case 0x322f08u: goto label_322f08;
        case 0x322f0cu: goto label_322f0c;
        case 0x322f10u: goto label_322f10;
        case 0x322f14u: goto label_322f14;
        case 0x322f18u: goto label_322f18;
        case 0x322f1cu: goto label_322f1c;
        case 0x322f20u: goto label_322f20;
        case 0x322f24u: goto label_322f24;
        case 0x322f28u: goto label_322f28;
        case 0x322f2cu: goto label_322f2c;
        case 0x322f30u: goto label_322f30;
        case 0x322f34u: goto label_322f34;
        case 0x322f38u: goto label_322f38;
        case 0x322f3cu: goto label_322f3c;
        case 0x322f40u: goto label_322f40;
        case 0x322f44u: goto label_322f44;
        case 0x322f48u: goto label_322f48;
        case 0x322f4cu: goto label_322f4c;
        case 0x322f50u: goto label_322f50;
        case 0x322f54u: goto label_322f54;
        case 0x322f58u: goto label_322f58;
        case 0x322f5cu: goto label_322f5c;
        case 0x322f60u: goto label_322f60;
        case 0x322f64u: goto label_322f64;
        case 0x322f68u: goto label_322f68;
        case 0x322f6cu: goto label_322f6c;
        case 0x322f70u: goto label_322f70;
        case 0x322f74u: goto label_322f74;
        case 0x322f78u: goto label_322f78;
        case 0x322f7cu: goto label_322f7c;
        case 0x322f80u: goto label_322f80;
        case 0x322f84u: goto label_322f84;
        case 0x322f88u: goto label_322f88;
        case 0x322f8cu: goto label_322f8c;
        case 0x322f90u: goto label_322f90;
        case 0x322f94u: goto label_322f94;
        case 0x322f98u: goto label_322f98;
        case 0x322f9cu: goto label_322f9c;
        case 0x322fa0u: goto label_322fa0;
        case 0x322fa4u: goto label_322fa4;
        case 0x322fa8u: goto label_322fa8;
        case 0x322facu: goto label_322fac;
        case 0x322fb0u: goto label_322fb0;
        case 0x322fb4u: goto label_322fb4;
        case 0x322fb8u: goto label_322fb8;
        case 0x322fbcu: goto label_322fbc;
        case 0x322fc0u: goto label_322fc0;
        case 0x322fc4u: goto label_322fc4;
        case 0x322fc8u: goto label_322fc8;
        case 0x322fccu: goto label_322fcc;
        case 0x322fd0u: goto label_322fd0;
        case 0x322fd4u: goto label_322fd4;
        case 0x322fd8u: goto label_322fd8;
        case 0x322fdcu: goto label_322fdc;
        case 0x322fe0u: goto label_322fe0;
        case 0x322fe4u: goto label_322fe4;
        case 0x322fe8u: goto label_322fe8;
        case 0x322fecu: goto label_322fec;
        case 0x322ff0u: goto label_322ff0;
        case 0x322ff4u: goto label_322ff4;
        case 0x322ff8u: goto label_322ff8;
        case 0x322ffcu: goto label_322ffc;
        case 0x323000u: goto label_323000;
        case 0x323004u: goto label_323004;
        case 0x323008u: goto label_323008;
        case 0x32300cu: goto label_32300c;
        case 0x323010u: goto label_323010;
        case 0x323014u: goto label_323014;
        case 0x323018u: goto label_323018;
        case 0x32301cu: goto label_32301c;
        case 0x323020u: goto label_323020;
        case 0x323024u: goto label_323024;
        case 0x323028u: goto label_323028;
        case 0x32302cu: goto label_32302c;
        case 0x323030u: goto label_323030;
        case 0x323034u: goto label_323034;
        case 0x323038u: goto label_323038;
        case 0x32303cu: goto label_32303c;
        case 0x323040u: goto label_323040;
        case 0x323044u: goto label_323044;
        case 0x323048u: goto label_323048;
        case 0x32304cu: goto label_32304c;
        case 0x323050u: goto label_323050;
        case 0x323054u: goto label_323054;
        case 0x323058u: goto label_323058;
        case 0x32305cu: goto label_32305c;
        case 0x323060u: goto label_323060;
        case 0x323064u: goto label_323064;
        case 0x323068u: goto label_323068;
        case 0x32306cu: goto label_32306c;
        case 0x323070u: goto label_323070;
        case 0x323074u: goto label_323074;
        case 0x323078u: goto label_323078;
        case 0x32307cu: goto label_32307c;
        case 0x323080u: goto label_323080;
        case 0x323084u: goto label_323084;
        case 0x323088u: goto label_323088;
        case 0x32308cu: goto label_32308c;
        case 0x323090u: goto label_323090;
        case 0x323094u: goto label_323094;
        case 0x323098u: goto label_323098;
        case 0x32309cu: goto label_32309c;
        case 0x3230a0u: goto label_3230a0;
        case 0x3230a4u: goto label_3230a4;
        case 0x3230a8u: goto label_3230a8;
        case 0x3230acu: goto label_3230ac;
        case 0x3230b0u: goto label_3230b0;
        case 0x3230b4u: goto label_3230b4;
        case 0x3230b8u: goto label_3230b8;
        case 0x3230bcu: goto label_3230bc;
        case 0x3230c0u: goto label_3230c0;
        case 0x3230c4u: goto label_3230c4;
        case 0x3230c8u: goto label_3230c8;
        case 0x3230ccu: goto label_3230cc;
        case 0x3230d0u: goto label_3230d0;
        case 0x3230d4u: goto label_3230d4;
        case 0x3230d8u: goto label_3230d8;
        case 0x3230dcu: goto label_3230dc;
        case 0x3230e0u: goto label_3230e0;
        case 0x3230e4u: goto label_3230e4;
        case 0x3230e8u: goto label_3230e8;
        case 0x3230ecu: goto label_3230ec;
        case 0x3230f0u: goto label_3230f0;
        case 0x3230f4u: goto label_3230f4;
        case 0x3230f8u: goto label_3230f8;
        case 0x3230fcu: goto label_3230fc;
        case 0x323100u: goto label_323100;
        case 0x323104u: goto label_323104;
        case 0x323108u: goto label_323108;
        case 0x32310cu: goto label_32310c;
        case 0x323110u: goto label_323110;
        case 0x323114u: goto label_323114;
        case 0x323118u: goto label_323118;
        case 0x32311cu: goto label_32311c;
        case 0x323120u: goto label_323120;
        case 0x323124u: goto label_323124;
        case 0x323128u: goto label_323128;
        case 0x32312cu: goto label_32312c;
        case 0x323130u: goto label_323130;
        case 0x323134u: goto label_323134;
        case 0x323138u: goto label_323138;
        case 0x32313cu: goto label_32313c;
        case 0x323140u: goto label_323140;
        case 0x323144u: goto label_323144;
        case 0x323148u: goto label_323148;
        case 0x32314cu: goto label_32314c;
        case 0x323150u: goto label_323150;
        case 0x323154u: goto label_323154;
        case 0x323158u: goto label_323158;
        case 0x32315cu: goto label_32315c;
        case 0x323160u: goto label_323160;
        case 0x323164u: goto label_323164;
        case 0x323168u: goto label_323168;
        case 0x32316cu: goto label_32316c;
        case 0x323170u: goto label_323170;
        case 0x323174u: goto label_323174;
        case 0x323178u: goto label_323178;
        case 0x32317cu: goto label_32317c;
        case 0x323180u: goto label_323180;
        case 0x323184u: goto label_323184;
        case 0x323188u: goto label_323188;
        case 0x32318cu: goto label_32318c;
        case 0x323190u: goto label_323190;
        case 0x323194u: goto label_323194;
        case 0x323198u: goto label_323198;
        case 0x32319cu: goto label_32319c;
        case 0x3231a0u: goto label_3231a0;
        case 0x3231a4u: goto label_3231a4;
        case 0x3231a8u: goto label_3231a8;
        case 0x3231acu: goto label_3231ac;
        case 0x3231b0u: goto label_3231b0;
        case 0x3231b4u: goto label_3231b4;
        case 0x3231b8u: goto label_3231b8;
        case 0x3231bcu: goto label_3231bc;
        case 0x3231c0u: goto label_3231c0;
        case 0x3231c4u: goto label_3231c4;
        case 0x3231c8u: goto label_3231c8;
        case 0x3231ccu: goto label_3231cc;
        case 0x3231d0u: goto label_3231d0;
        case 0x3231d4u: goto label_3231d4;
        case 0x3231d8u: goto label_3231d8;
        case 0x3231dcu: goto label_3231dc;
        case 0x3231e0u: goto label_3231e0;
        case 0x3231e4u: goto label_3231e4;
        case 0x3231e8u: goto label_3231e8;
        case 0x3231ecu: goto label_3231ec;
        case 0x3231f0u: goto label_3231f0;
        case 0x3231f4u: goto label_3231f4;
        case 0x3231f8u: goto label_3231f8;
        case 0x3231fcu: goto label_3231fc;
        case 0x323200u: goto label_323200;
        case 0x323204u: goto label_323204;
        case 0x323208u: goto label_323208;
        case 0x32320cu: goto label_32320c;
        case 0x323210u: goto label_323210;
        case 0x323214u: goto label_323214;
        case 0x323218u: goto label_323218;
        case 0x32321cu: goto label_32321c;
        case 0x323220u: goto label_323220;
        case 0x323224u: goto label_323224;
        case 0x323228u: goto label_323228;
        case 0x32322cu: goto label_32322c;
        case 0x323230u: goto label_323230;
        case 0x323234u: goto label_323234;
        case 0x323238u: goto label_323238;
        case 0x32323cu: goto label_32323c;
        case 0x323240u: goto label_323240;
        case 0x323244u: goto label_323244;
        case 0x323248u: goto label_323248;
        case 0x32324cu: goto label_32324c;
        case 0x323250u: goto label_323250;
        case 0x323254u: goto label_323254;
        case 0x323258u: goto label_323258;
        case 0x32325cu: goto label_32325c;
        case 0x323260u: goto label_323260;
        case 0x323264u: goto label_323264;
        case 0x323268u: goto label_323268;
        case 0x32326cu: goto label_32326c;
        case 0x323270u: goto label_323270;
        case 0x323274u: goto label_323274;
        case 0x323278u: goto label_323278;
        case 0x32327cu: goto label_32327c;
        case 0x323280u: goto label_323280;
        case 0x323284u: goto label_323284;
        case 0x323288u: goto label_323288;
        case 0x32328cu: goto label_32328c;
        case 0x323290u: goto label_323290;
        case 0x323294u: goto label_323294;
        case 0x323298u: goto label_323298;
        case 0x32329cu: goto label_32329c;
        case 0x3232a0u: goto label_3232a0;
        case 0x3232a4u: goto label_3232a4;
        case 0x3232a8u: goto label_3232a8;
        case 0x3232acu: goto label_3232ac;
        case 0x3232b0u: goto label_3232b0;
        case 0x3232b4u: goto label_3232b4;
        case 0x3232b8u: goto label_3232b8;
        case 0x3232bcu: goto label_3232bc;
        case 0x3232c0u: goto label_3232c0;
        case 0x3232c4u: goto label_3232c4;
        case 0x3232c8u: goto label_3232c8;
        case 0x3232ccu: goto label_3232cc;
        case 0x3232d0u: goto label_3232d0;
        case 0x3232d4u: goto label_3232d4;
        case 0x3232d8u: goto label_3232d8;
        case 0x3232dcu: goto label_3232dc;
        case 0x3232e0u: goto label_3232e0;
        case 0x3232e4u: goto label_3232e4;
        case 0x3232e8u: goto label_3232e8;
        case 0x3232ecu: goto label_3232ec;
        case 0x3232f0u: goto label_3232f0;
        case 0x3232f4u: goto label_3232f4;
        case 0x3232f8u: goto label_3232f8;
        case 0x3232fcu: goto label_3232fc;
        case 0x323300u: goto label_323300;
        case 0x323304u: goto label_323304;
        case 0x323308u: goto label_323308;
        case 0x32330cu: goto label_32330c;
        case 0x323310u: goto label_323310;
        case 0x323314u: goto label_323314;
        case 0x323318u: goto label_323318;
        case 0x32331cu: goto label_32331c;
        case 0x323320u: goto label_323320;
        case 0x323324u: goto label_323324;
        case 0x323328u: goto label_323328;
        case 0x32332cu: goto label_32332c;
        case 0x323330u: goto label_323330;
        case 0x323334u: goto label_323334;
        case 0x323338u: goto label_323338;
        case 0x32333cu: goto label_32333c;
        case 0x323340u: goto label_323340;
        case 0x323344u: goto label_323344;
        case 0x323348u: goto label_323348;
        case 0x32334cu: goto label_32334c;
        case 0x323350u: goto label_323350;
        case 0x323354u: goto label_323354;
        case 0x323358u: goto label_323358;
        case 0x32335cu: goto label_32335c;
        case 0x323360u: goto label_323360;
        case 0x323364u: goto label_323364;
        case 0x323368u: goto label_323368;
        case 0x32336cu: goto label_32336c;
        case 0x323370u: goto label_323370;
        case 0x323374u: goto label_323374;
        case 0x323378u: goto label_323378;
        case 0x32337cu: goto label_32337c;
        case 0x323380u: goto label_323380;
        case 0x323384u: goto label_323384;
        case 0x323388u: goto label_323388;
        case 0x32338cu: goto label_32338c;
        case 0x323390u: goto label_323390;
        case 0x323394u: goto label_323394;
        case 0x323398u: goto label_323398;
        case 0x32339cu: goto label_32339c;
        case 0x3233a0u: goto label_3233a0;
        case 0x3233a4u: goto label_3233a4;
        case 0x3233a8u: goto label_3233a8;
        case 0x3233acu: goto label_3233ac;
        case 0x3233b0u: goto label_3233b0;
        case 0x3233b4u: goto label_3233b4;
        case 0x3233b8u: goto label_3233b8;
        case 0x3233bcu: goto label_3233bc;
        case 0x3233c0u: goto label_3233c0;
        case 0x3233c4u: goto label_3233c4;
        case 0x3233c8u: goto label_3233c8;
        case 0x3233ccu: goto label_3233cc;
        case 0x3233d0u: goto label_3233d0;
        case 0x3233d4u: goto label_3233d4;
        case 0x3233d8u: goto label_3233d8;
        case 0x3233dcu: goto label_3233dc;
        case 0x3233e0u: goto label_3233e0;
        case 0x3233e4u: goto label_3233e4;
        case 0x3233e8u: goto label_3233e8;
        case 0x3233ecu: goto label_3233ec;
        case 0x3233f0u: goto label_3233f0;
        case 0x3233f4u: goto label_3233f4;
        case 0x3233f8u: goto label_3233f8;
        case 0x3233fcu: goto label_3233fc;
        case 0x323400u: goto label_323400;
        case 0x323404u: goto label_323404;
        case 0x323408u: goto label_323408;
        case 0x32340cu: goto label_32340c;
        case 0x323410u: goto label_323410;
        case 0x323414u: goto label_323414;
        case 0x323418u: goto label_323418;
        case 0x32341cu: goto label_32341c;
        case 0x323420u: goto label_323420;
        case 0x323424u: goto label_323424;
        case 0x323428u: goto label_323428;
        case 0x32342cu: goto label_32342c;
        case 0x323430u: goto label_323430;
        case 0x323434u: goto label_323434;
        case 0x323438u: goto label_323438;
        case 0x32343cu: goto label_32343c;
        case 0x323440u: goto label_323440;
        case 0x323444u: goto label_323444;
        case 0x323448u: goto label_323448;
        case 0x32344cu: goto label_32344c;
        case 0x323450u: goto label_323450;
        case 0x323454u: goto label_323454;
        case 0x323458u: goto label_323458;
        case 0x32345cu: goto label_32345c;
        case 0x323460u: goto label_323460;
        case 0x323464u: goto label_323464;
        case 0x323468u: goto label_323468;
        case 0x32346cu: goto label_32346c;
        case 0x323470u: goto label_323470;
        case 0x323474u: goto label_323474;
        case 0x323478u: goto label_323478;
        case 0x32347cu: goto label_32347c;
        case 0x323480u: goto label_323480;
        case 0x323484u: goto label_323484;
        case 0x323488u: goto label_323488;
        case 0x32348cu: goto label_32348c;
        case 0x323490u: goto label_323490;
        case 0x323494u: goto label_323494;
        case 0x323498u: goto label_323498;
        case 0x32349cu: goto label_32349c;
        case 0x3234a0u: goto label_3234a0;
        case 0x3234a4u: goto label_3234a4;
        case 0x3234a8u: goto label_3234a8;
        case 0x3234acu: goto label_3234ac;
        case 0x3234b0u: goto label_3234b0;
        case 0x3234b4u: goto label_3234b4;
        case 0x3234b8u: goto label_3234b8;
        case 0x3234bcu: goto label_3234bc;
        case 0x3234c0u: goto label_3234c0;
        case 0x3234c4u: goto label_3234c4;
        case 0x3234c8u: goto label_3234c8;
        case 0x3234ccu: goto label_3234cc;
        case 0x3234d0u: goto label_3234d0;
        case 0x3234d4u: goto label_3234d4;
        case 0x3234d8u: goto label_3234d8;
        case 0x3234dcu: goto label_3234dc;
        case 0x3234e0u: goto label_3234e0;
        case 0x3234e4u: goto label_3234e4;
        case 0x3234e8u: goto label_3234e8;
        case 0x3234ecu: goto label_3234ec;
        case 0x3234f0u: goto label_3234f0;
        case 0x3234f4u: goto label_3234f4;
        case 0x3234f8u: goto label_3234f8;
        case 0x3234fcu: goto label_3234fc;
        case 0x323500u: goto label_323500;
        case 0x323504u: goto label_323504;
        case 0x323508u: goto label_323508;
        case 0x32350cu: goto label_32350c;
        case 0x323510u: goto label_323510;
        case 0x323514u: goto label_323514;
        case 0x323518u: goto label_323518;
        case 0x32351cu: goto label_32351c;
        case 0x323520u: goto label_323520;
        case 0x323524u: goto label_323524;
        case 0x323528u: goto label_323528;
        case 0x32352cu: goto label_32352c;
        case 0x323530u: goto label_323530;
        case 0x323534u: goto label_323534;
        case 0x323538u: goto label_323538;
        case 0x32353cu: goto label_32353c;
        case 0x323540u: goto label_323540;
        case 0x323544u: goto label_323544;
        case 0x323548u: goto label_323548;
        case 0x32354cu: goto label_32354c;
        case 0x323550u: goto label_323550;
        case 0x323554u: goto label_323554;
        case 0x323558u: goto label_323558;
        case 0x32355cu: goto label_32355c;
        case 0x323560u: goto label_323560;
        case 0x323564u: goto label_323564;
        case 0x323568u: goto label_323568;
        case 0x32356cu: goto label_32356c;
        case 0x323570u: goto label_323570;
        case 0x323574u: goto label_323574;
        case 0x323578u: goto label_323578;
        case 0x32357cu: goto label_32357c;
        case 0x323580u: goto label_323580;
        case 0x323584u: goto label_323584;
        case 0x323588u: goto label_323588;
        case 0x32358cu: goto label_32358c;
        case 0x323590u: goto label_323590;
        case 0x323594u: goto label_323594;
        case 0x323598u: goto label_323598;
        case 0x32359cu: goto label_32359c;
        case 0x3235a0u: goto label_3235a0;
        case 0x3235a4u: goto label_3235a4;
        case 0x3235a8u: goto label_3235a8;
        case 0x3235acu: goto label_3235ac;
        case 0x3235b0u: goto label_3235b0;
        case 0x3235b4u: goto label_3235b4;
        case 0x3235b8u: goto label_3235b8;
        case 0x3235bcu: goto label_3235bc;
        case 0x3235c0u: goto label_3235c0;
        case 0x3235c4u: goto label_3235c4;
        case 0x3235c8u: goto label_3235c8;
        case 0x3235ccu: goto label_3235cc;
        case 0x3235d0u: goto label_3235d0;
        case 0x3235d4u: goto label_3235d4;
        case 0x3235d8u: goto label_3235d8;
        case 0x3235dcu: goto label_3235dc;
        case 0x3235e0u: goto label_3235e0;
        case 0x3235e4u: goto label_3235e4;
        case 0x3235e8u: goto label_3235e8;
        case 0x3235ecu: goto label_3235ec;
        case 0x3235f0u: goto label_3235f0;
        case 0x3235f4u: goto label_3235f4;
        case 0x3235f8u: goto label_3235f8;
        case 0x3235fcu: goto label_3235fc;
        case 0x323600u: goto label_323600;
        case 0x323604u: goto label_323604;
        case 0x323608u: goto label_323608;
        case 0x32360cu: goto label_32360c;
        case 0x323610u: goto label_323610;
        case 0x323614u: goto label_323614;
        case 0x323618u: goto label_323618;
        case 0x32361cu: goto label_32361c;
        case 0x323620u: goto label_323620;
        case 0x323624u: goto label_323624;
        case 0x323628u: goto label_323628;
        case 0x32362cu: goto label_32362c;
        case 0x323630u: goto label_323630;
        case 0x323634u: goto label_323634;
        case 0x323638u: goto label_323638;
        case 0x32363cu: goto label_32363c;
        case 0x323640u: goto label_323640;
        case 0x323644u: goto label_323644;
        case 0x323648u: goto label_323648;
        case 0x32364cu: goto label_32364c;
        case 0x323650u: goto label_323650;
        case 0x323654u: goto label_323654;
        case 0x323658u: goto label_323658;
        case 0x32365cu: goto label_32365c;
        case 0x323660u: goto label_323660;
        case 0x323664u: goto label_323664;
        case 0x323668u: goto label_323668;
        case 0x32366cu: goto label_32366c;
        case 0x323670u: goto label_323670;
        case 0x323674u: goto label_323674;
        case 0x323678u: goto label_323678;
        case 0x32367cu: goto label_32367c;
        case 0x323680u: goto label_323680;
        case 0x323684u: goto label_323684;
        case 0x323688u: goto label_323688;
        case 0x32368cu: goto label_32368c;
        case 0x323690u: goto label_323690;
        case 0x323694u: goto label_323694;
        case 0x323698u: goto label_323698;
        case 0x32369cu: goto label_32369c;
        case 0x3236a0u: goto label_3236a0;
        case 0x3236a4u: goto label_3236a4;
        case 0x3236a8u: goto label_3236a8;
        case 0x3236acu: goto label_3236ac;
        case 0x3236b0u: goto label_3236b0;
        case 0x3236b4u: goto label_3236b4;
        case 0x3236b8u: goto label_3236b8;
        case 0x3236bcu: goto label_3236bc;
        case 0x3236c0u: goto label_3236c0;
        case 0x3236c4u: goto label_3236c4;
        case 0x3236c8u: goto label_3236c8;
        case 0x3236ccu: goto label_3236cc;
        case 0x3236d0u: goto label_3236d0;
        case 0x3236d4u: goto label_3236d4;
        case 0x3236d8u: goto label_3236d8;
        case 0x3236dcu: goto label_3236dc;
        case 0x3236e0u: goto label_3236e0;
        case 0x3236e4u: goto label_3236e4;
        case 0x3236e8u: goto label_3236e8;
        case 0x3236ecu: goto label_3236ec;
        case 0x3236f0u: goto label_3236f0;
        case 0x3236f4u: goto label_3236f4;
        case 0x3236f8u: goto label_3236f8;
        case 0x3236fcu: goto label_3236fc;
        case 0x323700u: goto label_323700;
        case 0x323704u: goto label_323704;
        case 0x323708u: goto label_323708;
        case 0x32370cu: goto label_32370c;
        case 0x323710u: goto label_323710;
        case 0x323714u: goto label_323714;
        case 0x323718u: goto label_323718;
        case 0x32371cu: goto label_32371c;
        case 0x323720u: goto label_323720;
        case 0x323724u: goto label_323724;
        case 0x323728u: goto label_323728;
        case 0x32372cu: goto label_32372c;
        case 0x323730u: goto label_323730;
        case 0x323734u: goto label_323734;
        case 0x323738u: goto label_323738;
        case 0x32373cu: goto label_32373c;
        case 0x323740u: goto label_323740;
        case 0x323744u: goto label_323744;
        case 0x323748u: goto label_323748;
        case 0x32374cu: goto label_32374c;
        case 0x323750u: goto label_323750;
        case 0x323754u: goto label_323754;
        case 0x323758u: goto label_323758;
        case 0x32375cu: goto label_32375c;
        case 0x323760u: goto label_323760;
        case 0x323764u: goto label_323764;
        case 0x323768u: goto label_323768;
        case 0x32376cu: goto label_32376c;
        case 0x323770u: goto label_323770;
        case 0x323774u: goto label_323774;
        case 0x323778u: goto label_323778;
        case 0x32377cu: goto label_32377c;
        case 0x323780u: goto label_323780;
        case 0x323784u: goto label_323784;
        case 0x323788u: goto label_323788;
        case 0x32378cu: goto label_32378c;
        case 0x323790u: goto label_323790;
        case 0x323794u: goto label_323794;
        case 0x323798u: goto label_323798;
        case 0x32379cu: goto label_32379c;
        case 0x3237a0u: goto label_3237a0;
        case 0x3237a4u: goto label_3237a4;
        case 0x3237a8u: goto label_3237a8;
        case 0x3237acu: goto label_3237ac;
        case 0x3237b0u: goto label_3237b0;
        case 0x3237b4u: goto label_3237b4;
        case 0x3237b8u: goto label_3237b8;
        case 0x3237bcu: goto label_3237bc;
        case 0x3237c0u: goto label_3237c0;
        case 0x3237c4u: goto label_3237c4;
        case 0x3237c8u: goto label_3237c8;
        case 0x3237ccu: goto label_3237cc;
        case 0x3237d0u: goto label_3237d0;
        case 0x3237d4u: goto label_3237d4;
        case 0x3237d8u: goto label_3237d8;
        case 0x3237dcu: goto label_3237dc;
        case 0x3237e0u: goto label_3237e0;
        case 0x3237e4u: goto label_3237e4;
        case 0x3237e8u: goto label_3237e8;
        case 0x3237ecu: goto label_3237ec;
        case 0x3237f0u: goto label_3237f0;
        case 0x3237f4u: goto label_3237f4;
        case 0x3237f8u: goto label_3237f8;
        case 0x3237fcu: goto label_3237fc;
        case 0x323800u: goto label_323800;
        case 0x323804u: goto label_323804;
        case 0x323808u: goto label_323808;
        case 0x32380cu: goto label_32380c;
        case 0x323810u: goto label_323810;
        case 0x323814u: goto label_323814;
        case 0x323818u: goto label_323818;
        case 0x32381cu: goto label_32381c;
        case 0x323820u: goto label_323820;
        case 0x323824u: goto label_323824;
        case 0x323828u: goto label_323828;
        case 0x32382cu: goto label_32382c;
        case 0x323830u: goto label_323830;
        case 0x323834u: goto label_323834;
        case 0x323838u: goto label_323838;
        case 0x32383cu: goto label_32383c;
        case 0x323840u: goto label_323840;
        case 0x323844u: goto label_323844;
        case 0x323848u: goto label_323848;
        case 0x32384cu: goto label_32384c;
        case 0x323850u: goto label_323850;
        case 0x323854u: goto label_323854;
        case 0x323858u: goto label_323858;
        case 0x32385cu: goto label_32385c;
        case 0x323860u: goto label_323860;
        case 0x323864u: goto label_323864;
        case 0x323868u: goto label_323868;
        case 0x32386cu: goto label_32386c;
        case 0x323870u: goto label_323870;
        case 0x323874u: goto label_323874;
        case 0x323878u: goto label_323878;
        case 0x32387cu: goto label_32387c;
        case 0x323880u: goto label_323880;
        case 0x323884u: goto label_323884;
        case 0x323888u: goto label_323888;
        case 0x32388cu: goto label_32388c;
        case 0x323890u: goto label_323890;
        case 0x323894u: goto label_323894;
        case 0x323898u: goto label_323898;
        case 0x32389cu: goto label_32389c;
        case 0x3238a0u: goto label_3238a0;
        case 0x3238a4u: goto label_3238a4;
        case 0x3238a8u: goto label_3238a8;
        case 0x3238acu: goto label_3238ac;
        case 0x3238b0u: goto label_3238b0;
        case 0x3238b4u: goto label_3238b4;
        case 0x3238b8u: goto label_3238b8;
        case 0x3238bcu: goto label_3238bc;
        case 0x3238c0u: goto label_3238c0;
        case 0x3238c4u: goto label_3238c4;
        case 0x3238c8u: goto label_3238c8;
        case 0x3238ccu: goto label_3238cc;
        case 0x3238d0u: goto label_3238d0;
        case 0x3238d4u: goto label_3238d4;
        case 0x3238d8u: goto label_3238d8;
        case 0x3238dcu: goto label_3238dc;
        case 0x3238e0u: goto label_3238e0;
        case 0x3238e4u: goto label_3238e4;
        case 0x3238e8u: goto label_3238e8;
        case 0x3238ecu: goto label_3238ec;
        case 0x3238f0u: goto label_3238f0;
        case 0x3238f4u: goto label_3238f4;
        case 0x3238f8u: goto label_3238f8;
        case 0x3238fcu: goto label_3238fc;
        case 0x323900u: goto label_323900;
        case 0x323904u: goto label_323904;
        case 0x323908u: goto label_323908;
        case 0x32390cu: goto label_32390c;
        case 0x323910u: goto label_323910;
        case 0x323914u: goto label_323914;
        case 0x323918u: goto label_323918;
        case 0x32391cu: goto label_32391c;
        case 0x323920u: goto label_323920;
        case 0x323924u: goto label_323924;
        case 0x323928u: goto label_323928;
        case 0x32392cu: goto label_32392c;
        case 0x323930u: goto label_323930;
        case 0x323934u: goto label_323934;
        case 0x323938u: goto label_323938;
        case 0x32393cu: goto label_32393c;
        case 0x323940u: goto label_323940;
        case 0x323944u: goto label_323944;
        case 0x323948u: goto label_323948;
        case 0x32394cu: goto label_32394c;
        case 0x323950u: goto label_323950;
        case 0x323954u: goto label_323954;
        case 0x323958u: goto label_323958;
        case 0x32395cu: goto label_32395c;
        case 0x323960u: goto label_323960;
        case 0x323964u: goto label_323964;
        case 0x323968u: goto label_323968;
        case 0x32396cu: goto label_32396c;
        case 0x323970u: goto label_323970;
        case 0x323974u: goto label_323974;
        case 0x323978u: goto label_323978;
        case 0x32397cu: goto label_32397c;
        case 0x323980u: goto label_323980;
        case 0x323984u: goto label_323984;
        case 0x323988u: goto label_323988;
        case 0x32398cu: goto label_32398c;
        case 0x323990u: goto label_323990;
        case 0x323994u: goto label_323994;
        case 0x323998u: goto label_323998;
        case 0x32399cu: goto label_32399c;
        case 0x3239a0u: goto label_3239a0;
        case 0x3239a4u: goto label_3239a4;
        case 0x3239a8u: goto label_3239a8;
        case 0x3239acu: goto label_3239ac;
        case 0x3239b0u: goto label_3239b0;
        case 0x3239b4u: goto label_3239b4;
        case 0x3239b8u: goto label_3239b8;
        case 0x3239bcu: goto label_3239bc;
        case 0x3239c0u: goto label_3239c0;
        case 0x3239c4u: goto label_3239c4;
        case 0x3239c8u: goto label_3239c8;
        case 0x3239ccu: goto label_3239cc;
        case 0x3239d0u: goto label_3239d0;
        case 0x3239d4u: goto label_3239d4;
        case 0x3239d8u: goto label_3239d8;
        case 0x3239dcu: goto label_3239dc;
        case 0x3239e0u: goto label_3239e0;
        case 0x3239e4u: goto label_3239e4;
        case 0x3239e8u: goto label_3239e8;
        case 0x3239ecu: goto label_3239ec;
        case 0x3239f0u: goto label_3239f0;
        case 0x3239f4u: goto label_3239f4;
        case 0x3239f8u: goto label_3239f8;
        case 0x3239fcu: goto label_3239fc;
        case 0x323a00u: goto label_323a00;
        case 0x323a04u: goto label_323a04;
        case 0x323a08u: goto label_323a08;
        case 0x323a0cu: goto label_323a0c;
        case 0x323a10u: goto label_323a10;
        case 0x323a14u: goto label_323a14;
        case 0x323a18u: goto label_323a18;
        case 0x323a1cu: goto label_323a1c;
        case 0x323a20u: goto label_323a20;
        case 0x323a24u: goto label_323a24;
        case 0x323a28u: goto label_323a28;
        case 0x323a2cu: goto label_323a2c;
        case 0x323a30u: goto label_323a30;
        case 0x323a34u: goto label_323a34;
        case 0x323a38u: goto label_323a38;
        case 0x323a3cu: goto label_323a3c;
        case 0x323a40u: goto label_323a40;
        case 0x323a44u: goto label_323a44;
        case 0x323a48u: goto label_323a48;
        case 0x323a4cu: goto label_323a4c;
        case 0x323a50u: goto label_323a50;
        case 0x323a54u: goto label_323a54;
        case 0x323a58u: goto label_323a58;
        case 0x323a5cu: goto label_323a5c;
        case 0x323a60u: goto label_323a60;
        case 0x323a64u: goto label_323a64;
        case 0x323a68u: goto label_323a68;
        case 0x323a6cu: goto label_323a6c;
        case 0x323a70u: goto label_323a70;
        case 0x323a74u: goto label_323a74;
        case 0x323a78u: goto label_323a78;
        case 0x323a7cu: goto label_323a7c;
        case 0x323a80u: goto label_323a80;
        case 0x323a84u: goto label_323a84;
        case 0x323a88u: goto label_323a88;
        case 0x323a8cu: goto label_323a8c;
        case 0x323a90u: goto label_323a90;
        case 0x323a94u: goto label_323a94;
        case 0x323a98u: goto label_323a98;
        case 0x323a9cu: goto label_323a9c;
        case 0x323aa0u: goto label_323aa0;
        case 0x323aa4u: goto label_323aa4;
        case 0x323aa8u: goto label_323aa8;
        case 0x323aacu: goto label_323aac;
        case 0x323ab0u: goto label_323ab0;
        case 0x323ab4u: goto label_323ab4;
        case 0x323ab8u: goto label_323ab8;
        case 0x323abcu: goto label_323abc;
        case 0x323ac0u: goto label_323ac0;
        case 0x323ac4u: goto label_323ac4;
        case 0x323ac8u: goto label_323ac8;
        case 0x323accu: goto label_323acc;
        case 0x323ad0u: goto label_323ad0;
        case 0x323ad4u: goto label_323ad4;
        case 0x323ad8u: goto label_323ad8;
        case 0x323adcu: goto label_323adc;
        case 0x323ae0u: goto label_323ae0;
        case 0x323ae4u: goto label_323ae4;
        case 0x323ae8u: goto label_323ae8;
        case 0x323aecu: goto label_323aec;
        case 0x323af0u: goto label_323af0;
        case 0x323af4u: goto label_323af4;
        case 0x323af8u: goto label_323af8;
        case 0x323afcu: goto label_323afc;
        case 0x323b00u: goto label_323b00;
        case 0x323b04u: goto label_323b04;
        case 0x323b08u: goto label_323b08;
        case 0x323b0cu: goto label_323b0c;
        case 0x323b10u: goto label_323b10;
        case 0x323b14u: goto label_323b14;
        case 0x323b18u: goto label_323b18;
        case 0x323b1cu: goto label_323b1c;
        case 0x323b20u: goto label_323b20;
        case 0x323b24u: goto label_323b24;
        case 0x323b28u: goto label_323b28;
        case 0x323b2cu: goto label_323b2c;
        case 0x323b30u: goto label_323b30;
        case 0x323b34u: goto label_323b34;
        case 0x323b38u: goto label_323b38;
        case 0x323b3cu: goto label_323b3c;
        case 0x323b40u: goto label_323b40;
        case 0x323b44u: goto label_323b44;
        case 0x323b48u: goto label_323b48;
        case 0x323b4cu: goto label_323b4c;
        case 0x323b50u: goto label_323b50;
        case 0x323b54u: goto label_323b54;
        case 0x323b58u: goto label_323b58;
        case 0x323b5cu: goto label_323b5c;
        case 0x323b60u: goto label_323b60;
        case 0x323b64u: goto label_323b64;
        case 0x323b68u: goto label_323b68;
        case 0x323b6cu: goto label_323b6c;
        case 0x323b70u: goto label_323b70;
        case 0x323b74u: goto label_323b74;
        case 0x323b78u: goto label_323b78;
        case 0x323b7cu: goto label_323b7c;
        case 0x323b80u: goto label_323b80;
        case 0x323b84u: goto label_323b84;
        case 0x323b88u: goto label_323b88;
        case 0x323b8cu: goto label_323b8c;
        case 0x323b90u: goto label_323b90;
        case 0x323b94u: goto label_323b94;
        case 0x323b98u: goto label_323b98;
        case 0x323b9cu: goto label_323b9c;
        case 0x323ba0u: goto label_323ba0;
        case 0x323ba4u: goto label_323ba4;
        case 0x323ba8u: goto label_323ba8;
        case 0x323bacu: goto label_323bac;
        case 0x323bb0u: goto label_323bb0;
        case 0x323bb4u: goto label_323bb4;
        case 0x323bb8u: goto label_323bb8;
        case 0x323bbcu: goto label_323bbc;
        case 0x323bc0u: goto label_323bc0;
        case 0x323bc4u: goto label_323bc4;
        case 0x323bc8u: goto label_323bc8;
        case 0x323bccu: goto label_323bcc;
        case 0x323bd0u: goto label_323bd0;
        case 0x323bd4u: goto label_323bd4;
        case 0x323bd8u: goto label_323bd8;
        case 0x323bdcu: goto label_323bdc;
        case 0x323be0u: goto label_323be0;
        case 0x323be4u: goto label_323be4;
        case 0x323be8u: goto label_323be8;
        case 0x323becu: goto label_323bec;
        case 0x323bf0u: goto label_323bf0;
        case 0x323bf4u: goto label_323bf4;
        case 0x323bf8u: goto label_323bf8;
        case 0x323bfcu: goto label_323bfc;
        case 0x323c00u: goto label_323c00;
        case 0x323c04u: goto label_323c04;
        case 0x323c08u: goto label_323c08;
        case 0x323c0cu: goto label_323c0c;
        case 0x323c10u: goto label_323c10;
        case 0x323c14u: goto label_323c14;
        case 0x323c18u: goto label_323c18;
        case 0x323c1cu: goto label_323c1c;
        case 0x323c20u: goto label_323c20;
        case 0x323c24u: goto label_323c24;
        case 0x323c28u: goto label_323c28;
        case 0x323c2cu: goto label_323c2c;
        case 0x323c30u: goto label_323c30;
        case 0x323c34u: goto label_323c34;
        case 0x323c38u: goto label_323c38;
        case 0x323c3cu: goto label_323c3c;
        case 0x323c40u: goto label_323c40;
        case 0x323c44u: goto label_323c44;
        case 0x323c48u: goto label_323c48;
        case 0x323c4cu: goto label_323c4c;
        case 0x323c50u: goto label_323c50;
        case 0x323c54u: goto label_323c54;
        case 0x323c58u: goto label_323c58;
        case 0x323c5cu: goto label_323c5c;
        case 0x323c60u: goto label_323c60;
        case 0x323c64u: goto label_323c64;
        case 0x323c68u: goto label_323c68;
        case 0x323c6cu: goto label_323c6c;
        case 0x323c70u: goto label_323c70;
        case 0x323c74u: goto label_323c74;
        case 0x323c78u: goto label_323c78;
        case 0x323c7cu: goto label_323c7c;
        case 0x323c80u: goto label_323c80;
        case 0x323c84u: goto label_323c84;
        case 0x323c88u: goto label_323c88;
        case 0x323c8cu: goto label_323c8c;
        case 0x323c90u: goto label_323c90;
        case 0x323c94u: goto label_323c94;
        case 0x323c98u: goto label_323c98;
        case 0x323c9cu: goto label_323c9c;
        case 0x323ca0u: goto label_323ca0;
        case 0x323ca4u: goto label_323ca4;
        case 0x323ca8u: goto label_323ca8;
        case 0x323cacu: goto label_323cac;
        case 0x323cb0u: goto label_323cb0;
        case 0x323cb4u: goto label_323cb4;
        case 0x323cb8u: goto label_323cb8;
        case 0x323cbcu: goto label_323cbc;
        case 0x323cc0u: goto label_323cc0;
        case 0x323cc4u: goto label_323cc4;
        case 0x323cc8u: goto label_323cc8;
        case 0x323cccu: goto label_323ccc;
        case 0x323cd0u: goto label_323cd0;
        case 0x323cd4u: goto label_323cd4;
        case 0x323cd8u: goto label_323cd8;
        case 0x323cdcu: goto label_323cdc;
        case 0x323ce0u: goto label_323ce0;
        case 0x323ce4u: goto label_323ce4;
        case 0x323ce8u: goto label_323ce8;
        case 0x323cecu: goto label_323cec;
        case 0x323cf0u: goto label_323cf0;
        case 0x323cf4u: goto label_323cf4;
        case 0x323cf8u: goto label_323cf8;
        case 0x323cfcu: goto label_323cfc;
        case 0x323d00u: goto label_323d00;
        case 0x323d04u: goto label_323d04;
        case 0x323d08u: goto label_323d08;
        case 0x323d0cu: goto label_323d0c;
        case 0x323d10u: goto label_323d10;
        case 0x323d14u: goto label_323d14;
        case 0x323d18u: goto label_323d18;
        case 0x323d1cu: goto label_323d1c;
        case 0x323d20u: goto label_323d20;
        case 0x323d24u: goto label_323d24;
        case 0x323d28u: goto label_323d28;
        case 0x323d2cu: goto label_323d2c;
        case 0x323d30u: goto label_323d30;
        case 0x323d34u: goto label_323d34;
        case 0x323d38u: goto label_323d38;
        case 0x323d3cu: goto label_323d3c;
        default: break;
    }

    ctx->pc = 0x3217e0u;

label_3217e0:
    // 0x3217e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3217e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3217e4:
    // 0x3217e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3217e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3217e8:
    // 0x3217e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3217e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3217ec:
    // 0x3217ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3217ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3217f0:
    // 0x3217f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3217f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3217f4:
    // 0x3217f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3217f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3217f8:
    // 0x3217f8: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3217fc:
    // 0x3217fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3217fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_321800:
    // 0x321800: 0x2652f680  addiu       $s2, $s2, -0x980
    ctx->pc = 0x321800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964864));
label_321804:
    // 0x321804: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x321804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_321808:
    // 0x321808: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_32180c:
    // 0x32180c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32180cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_321810:
    // 0x321810: 0x8c440eb8  lw          $a0, 0xEB8($v0)
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
label_321814:
    // 0x321814: 0xc0506ac  jal         func_141AB0
label_321818:
    if (ctx->pc == 0x321818u) {
        ctx->pc = 0x321818u;
            // 0x321818: 0x2610f670  addiu       $s0, $s0, -0x990 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964848));
        ctx->pc = 0x32181Cu;
        goto label_32181c;
    }
    ctx->pc = 0x321814u;
    SET_GPR_U32(ctx, 31, 0x32181Cu);
    ctx->pc = 0x321818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321814u;
            // 0x321818: 0x2610f670  addiu       $s0, $s0, -0x990 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32181Cu; }
        if (ctx->pc != 0x32181Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32181Cu; }
        if (ctx->pc != 0x32181Cu) { return; }
    }
    ctx->pc = 0x32181Cu;
label_32181c:
    // 0x32181c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x32181cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_321820:
    // 0x321820: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x321820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_321824:
    // 0x321824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321828:
    // 0x321828: 0x0  nop
    ctx->pc = 0x321828u;
    // NOP
label_32182c:
    // 0x32182c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32182cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_321830:
    // 0x321830: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x321830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
label_321834:
    // 0x321834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321838:
    // 0x321838: 0x0  nop
    ctx->pc = 0x321838u;
    // NOP
label_32183c:
    // 0x32183c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32183cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_321840:
    // 0x321840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x321840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_321844:
    // 0x321844: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x321844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_321848:
    // 0x321848: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32184c:
    if (ctx->pc == 0x32184Cu) {
        ctx->pc = 0x321850u;
        goto label_321850;
    }
    ctx->pc = 0x321848u;
    {
        const bool branch_taken_0x321848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321848) {
            ctx->pc = 0x321854u;
            goto label_321854;
        }
    }
    ctx->pc = 0x321850u;
label_321850:
    // 0x321850: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_321854:
    // 0x321854: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321858:
    // 0x321858: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x321858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_32185c:
    // 0x32185c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32185cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321860:
    // 0x321860: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x321860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_321864:
    // 0x321864: 0x320f809  jalr        $t9
label_321868:
    if (ctx->pc == 0x321868u) {
        ctx->pc = 0x321868u;
            // 0x321868: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32186Cu;
        goto label_32186c;
    }
    ctx->pc = 0x321864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32186Cu);
        ctx->pc = 0x321868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321864u;
            // 0x321868: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32186Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32186Cu; }
            if (ctx->pc != 0x32186Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32186Cu;
label_32186c:
    // 0x32186c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x32186cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321870:
    // 0x321870: 0x3c0943aa  lui         $t1, 0x43AA
    ctx->pc = 0x321870u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17322 << 16));
label_321874:
    // 0x321874: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x321874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_321878:
    // 0x321878: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_32187c:
    // 0x32187c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x32187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_321880:
    // 0x321880: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x321880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_321884:
    // 0x321884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x321884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_321888:
    // 0x321888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32188c:
    // 0x32188c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32188cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321890:
    // 0x321890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321894:
    // 0x321894: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x321894u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321898:
    // 0x321898: 0x0  nop
    ctx->pc = 0x321898u;
    // NOP
label_32189c:
    // 0x32189c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x32189cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3218a0:
    // 0x3218a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3218a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3218a4:
    // 0x3218a4: 0x0  nop
    ctx->pc = 0x3218a4u;
    // NOP
label_3218a8:
    // 0x3218a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3218a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3218ac:
    // 0x3218ac: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3218acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3218b0:
    // 0x3218b0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3218b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3218b4:
    // 0x3218b4: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x3218b4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3218b8:
    // 0x3218b8: 0x0  nop
    ctx->pc = 0x3218b8u;
    // NOP
label_3218bc:
    // 0x3218bc: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3218bcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3218c0:
    // 0x3218c0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3218c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3218c4:
    // 0x3218c4: 0xc0bc284  jal         func_2F0A10
label_3218c8:
    if (ctx->pc == 0x3218C8u) {
        ctx->pc = 0x3218C8u;
            // 0x3218c8: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x3218CCu;
        goto label_3218cc;
    }
    ctx->pc = 0x3218C4u;
    SET_GPR_U32(ctx, 31, 0x3218CCu);
    ctx->pc = 0x3218C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3218C4u;
            // 0x3218c8: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218CCu; }
        if (ctx->pc != 0x3218CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3218CCu; }
        if (ctx->pc != 0x3218CCu) { return; }
    }
    ctx->pc = 0x3218CCu;
label_3218cc:
    // 0x3218cc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3218ccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3218d0:
    // 0x3218d0: 0x3c0943eb  lui         $t1, 0x43EB
    ctx->pc = 0x3218d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17387 << 16));
label_3218d4:
    // 0x3218d4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3218d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3218d8:
    // 0x3218d8: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3218d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3218dc:
    // 0x3218dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3218e0:
    // 0x3218e0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3218e4:
    // 0x3218e4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3218e8:
    // 0x3218e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3218e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3218ec:
    // 0x3218ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3218ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3218f0:
    // 0x3218f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3218f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3218f4:
    // 0x3218f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3218f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3218f8:
    // 0x3218f8: 0x0  nop
    ctx->pc = 0x3218f8u;
    // NOP
label_3218fc:
    // 0x3218fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3218fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_321900:
    // 0x321900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321904:
    // 0x321904: 0x0  nop
    ctx->pc = 0x321904u;
    // NOP
label_321908:
    // 0x321908: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x321908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_32190c:
    // 0x32190c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x32190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_321910:
    // 0x321910: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x321910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_321914:
    // 0x321914: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x321914u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_321918:
    // 0x321918: 0x0  nop
    ctx->pc = 0x321918u;
    // NOP
label_32191c:
    // 0x32191c: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x32191cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_321920:
    // 0x321920: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x321920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_321924:
    // 0x321924: 0xc0bc284  jal         func_2F0A10
label_321928:
    if (ctx->pc == 0x321928u) {
        ctx->pc = 0x321928u;
            // 0x321928: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x32192Cu;
        goto label_32192c;
    }
    ctx->pc = 0x321924u;
    SET_GPR_U32(ctx, 31, 0x32192Cu);
    ctx->pc = 0x321928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321924u;
            // 0x321928: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32192Cu; }
        if (ctx->pc != 0x32192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32192Cu; }
        if (ctx->pc != 0x32192Cu) { return; }
    }
    ctx->pc = 0x32192Cu;
label_32192c:
    // 0x32192c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321930:
    // 0x321930: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_321934:
    // 0x321934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321938:
    // 0x321938: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x321938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_32193c:
    // 0x32193c: 0x320f809  jalr        $t9
label_321940:
    if (ctx->pc == 0x321940u) {
        ctx->pc = 0x321944u;
        goto label_321944;
    }
    ctx->pc = 0x32193Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x321944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321944u; }
            if (ctx->pc != 0x321944u) { return; }
        }
        }
    }
    ctx->pc = 0x321944u;
label_321944:
    // 0x321944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_321948:
    // 0x321948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32194c:
    // 0x32194c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32194cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321950:
    // 0x321950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_321954:
    // 0x321954: 0x3e00008  jr          $ra
label_321958:
    if (ctx->pc == 0x321958u) {
        ctx->pc = 0x321958u;
            // 0x321958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x32195Cu;
        goto label_32195c;
    }
    ctx->pc = 0x321954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321954u;
            // 0x321958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32195Cu;
label_32195c:
    // 0x32195c: 0x0  nop
    ctx->pc = 0x32195cu;
    // NOP
label_321960:
    // 0x321960: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_321964:
    // 0x321964: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x321964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_321968:
    // 0x321968: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x321968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_32196c:
    // 0x32196c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x32196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_321970:
    // 0x321970: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x321970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_321974:
    // 0x321974: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x321974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_321978:
    // 0x321978: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x321978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_32197c:
    // 0x32197c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_321980:
    // 0x321980: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x321980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_321984:
    // 0x321984: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x321984u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_321988:
    // 0x321988: 0x8c71d130  lw          $s1, -0x2ED0($v1)
    ctx->pc = 0x321988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_32198c:
    // 0x32198c: 0x2ca10039  sltiu       $at, $a1, 0x39
    ctx->pc = 0x32198cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
label_321990:
    // 0x321990: 0x102008c6  beqz        $at, . + 4 + (0x8C6 << 2)
label_321994:
    if (ctx->pc == 0x321994u) {
        ctx->pc = 0x321994u;
            // 0x321994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321998u;
        goto label_321998;
    }
    ctx->pc = 0x321990u;
    {
        const bool branch_taken_0x321990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x321994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321990u;
            // 0x321994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321990) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321998u;
label_321998:
    // 0x321998: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x321998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32199c:
    // 0x32199c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32199cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3219a0:
    // 0x3219a0: 0x24a5c8b0  addiu       $a1, $a1, -0x3750
    ctx->pc = 0x3219a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953136));
label_3219a4:
    // 0x3219a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3219a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3219a8:
    // 0x3219a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3219a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3219ac:
    // 0x3219ac: 0x600008  jr          $v1
label_3219b0:
    if (ctx->pc == 0x3219B0u) {
        ctx->pc = 0x3219B4u;
        goto label_3219b4;
    }
    ctx->pc = 0x3219ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3219B4u: goto label_3219b4;
            case 0x3219CCu: goto label_3219cc;
            case 0x321A68u: goto label_321a68;
            case 0x321B3Cu: goto label_321b3c;
            case 0x321BB0u: goto label_321bb0;
            case 0x321C5Cu: goto label_321c5c;
            case 0x321D38u: goto label_321d38;
            case 0x321E60u: goto label_321e60;
            case 0x321E94u: goto label_321e94;
            case 0x321EF8u: goto label_321ef8;
            case 0x321F1Cu: goto label_321f1c;
            case 0x321FB8u: goto label_321fb8;
            case 0x3220C8u: goto label_3220c8;
            case 0x322214u: goto label_322214;
            case 0x322254u: goto label_322254;
            case 0x3222DCu: goto label_3222dc;
            case 0x322384u: goto label_322384;
            case 0x3223A8u: goto label_3223a8;
            case 0x3223B8u: goto label_3223b8;
            case 0x3224A0u: goto label_3224a0;
            case 0x322510u: goto label_322510;
            case 0x322564u: goto label_322564;
            case 0x32268Cu: goto label_32268c;
            case 0x322750u: goto label_322750;
            case 0x3228DCu: goto label_3228dc;
            case 0x322998u: goto label_322998;
            case 0x322C54u: goto label_322c54;
            case 0x322CBCu: goto label_322cbc;
            case 0x322D18u: goto label_322d18;
            case 0x322D74u: goto label_322d74;
            case 0x322E00u: goto label_322e00;
            case 0x322E5Cu: goto label_322e5c;
            case 0x322F00u: goto label_322f00;
            case 0x322F74u: goto label_322f74;
            case 0x322FD0u: goto label_322fd0;
            case 0x323060u: goto label_323060;
            case 0x3230BCu: goto label_3230bc;
            case 0x323134u: goto label_323134;
            case 0x323224u: goto label_323224;
            case 0x3232B8u: goto label_3232b8;
            case 0x3233DCu: goto label_3233dc;
            case 0x323468u: goto label_323468;
            case 0x323740u: goto label_323740;
            case 0x323764u: goto label_323764;
            case 0x3237DCu: goto label_3237dc;
            case 0x323868u: goto label_323868;
            case 0x323AC4u: goto label_323ac4;
            case 0x323B40u: goto label_323b40;
            case 0x323BC4u: goto label_323bc4;
            case 0x323C6Cu: goto label_323c6c;
            case 0x323C90u: goto label_323c90;
            case 0x323CACu: goto label_323cac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3219B4u;
label_3219b4:
    // 0x3219b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3219b8:
    // 0x3219b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3219b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3219bc:
    // 0x3219bc: 0x320f809  jalr        $t9
label_3219c0:
    if (ctx->pc == 0x3219C0u) {
        ctx->pc = 0x3219C4u;
        goto label_3219c4;
    }
    ctx->pc = 0x3219BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3219C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3219C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3219C4u; }
            if (ctx->pc != 0x3219C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3219C4u;
label_3219c4:
    // 0x3219c4: 0x100008ba  b           . + 4 + (0x8BA << 2)
label_3219c8:
    if (ctx->pc == 0x3219C8u) {
        ctx->pc = 0x3219C8u;
            // 0x3219c8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3219CCu;
        goto label_3219cc;
    }
    ctx->pc = 0x3219C4u;
    {
        const bool branch_taken_0x3219c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3219C4u;
            // 0x3219c8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219c4) {
            ctx->pc = 0x323CB0u;
            goto label_323cb0;
        }
    }
    ctx->pc = 0x3219CCu;
label_3219cc:
    // 0x3219cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3219d0:
    // 0x3219d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3219d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3219d4:
    // 0x3219d4: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x3219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_3219d8:
    // 0x3219d8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3219dc:
    if (ctx->pc == 0x3219DCu) {
        ctx->pc = 0x3219E0u;
        goto label_3219e0;
    }
    ctx->pc = 0x3219D8u;
    {
        const bool branch_taken_0x3219d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3219d8) {
            ctx->pc = 0x3219F0u;
            goto label_3219f0;
        }
    }
    ctx->pc = 0x3219E0u;
label_3219e0:
    // 0x3219e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3219e4:
    if (ctx->pc == 0x3219E4u) {
        ctx->pc = 0x3219E8u;
        goto label_3219e8;
    }
    ctx->pc = 0x3219E0u;
    {
        const bool branch_taken_0x3219e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3219e0) {
            ctx->pc = 0x3219F0u;
            goto label_3219f0;
        }
    }
    ctx->pc = 0x3219E8u;
label_3219e8:
    // 0x3219e8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3219ec:
    if (ctx->pc == 0x3219ECu) {
        ctx->pc = 0x3219ECu;
            // 0x3219ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3219F0u;
        goto label_3219f0;
    }
    ctx->pc = 0x3219E8u;
    {
        const bool branch_taken_0x3219e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3219E8u;
            // 0x3219ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219e8) {
            ctx->pc = 0x321A5Cu;
            goto label_321a5c;
        }
    }
    ctx->pc = 0x3219F0u;
label_3219f0:
    // 0x3219f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3219f4:
    // 0x3219f4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3219f8:
    // 0x3219f8: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x3219f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
label_3219fc:
    // 0x3219fc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_321a00:
    if (ctx->pc == 0x321A00u) {
        ctx->pc = 0x321A04u;
        goto label_321a04;
    }
    ctx->pc = 0x3219FCu;
    {
        const bool branch_taken_0x3219fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3219fc) {
            ctx->pc = 0x321A58u;
            goto label_321a58;
        }
    }
    ctx->pc = 0x321A04u;
label_321a04:
    // 0x321a04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321a08:
    // 0x321a08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x321a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_321a0c:
    // 0x321a0c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x321a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_321a10:
    // 0x321a10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321a14:
    // 0x321a14: 0x8c43fa20  lw          $v1, -0x5E0($v0)
    ctx->pc = 0x321a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
label_321a18:
    // 0x321a18: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x321a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_321a1c:
    // 0x321a1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x321a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_321a20:
    // 0x321a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_321a24:
    if (ctx->pc == 0x321A24u) {
        ctx->pc = 0x321A24u;
            // 0x321a24: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x321A28u;
        goto label_321a28;
    }
    ctx->pc = 0x321A20u;
    {
        const bool branch_taken_0x321a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321A20u;
            // 0x321a24: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a20) {
            ctx->pc = 0x321A38u;
            goto label_321a38;
        }
    }
    ctx->pc = 0x321A28u;
label_321a28:
    // 0x321a28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321a2c:
    // 0x321a2c: 0x8c42fa18  lw          $v0, -0x5E8($v0)
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_321a30:
    // 0x321a30: 0x401027  not         $v0, $v0
    ctx->pc = 0x321a30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_321a34:
    // 0x321a34: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x321a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_321a38:
    // 0x321a38: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x321a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_321a3c:
    // 0x321a3c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x321a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_321a40:
    // 0x321a40: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x321a40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_321a44:
    // 0x321a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321a48:
    // 0x321a48: 0x3405cf6c  ori         $a1, $zero, 0xCF6C
    ctx->pc = 0x321a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53100);
label_321a4c:
    // 0x321a4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x321a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_321a50:
    // 0x321a50: 0xc0c9ec0  jal         func_327B00
label_321a54:
    if (ctx->pc == 0x321A54u) {
        ctx->pc = 0x321A54u;
            // 0x321a54: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x321A58u;
        goto label_321a58;
    }
    ctx->pc = 0x321A50u;
    SET_GPR_U32(ctx, 31, 0x321A58u);
    ctx->pc = 0x321A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321A50u;
            // 0x321a54: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A58u; }
        if (ctx->pc != 0x321A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321A58u; }
        if (ctx->pc != 0x321A58u) { return; }
    }
    ctx->pc = 0x321A58u;
label_321a58:
    // 0x321a58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321a5c:
    // 0x321a5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321a60:
    // 0x321a60: 0x320f809  jalr        $t9
label_321a64:
    if (ctx->pc == 0x321A64u) {
        ctx->pc = 0x321A64u;
            // 0x321a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321A68u;
        goto label_321a68;
    }
    ctx->pc = 0x321A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321A68u);
        ctx->pc = 0x321A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321A60u;
            // 0x321a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321A68u; }
            if (ctx->pc != 0x321A68u) { return; }
        }
        }
    }
    ctx->pc = 0x321A68u;
label_321a68:
    // 0x321a68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x321a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_321a6c:
    // 0x321a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321a70:
    // 0x321a70: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_321a74:
    // 0x321a74: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_321a78:
    if (ctx->pc == 0x321A78u) {
        ctx->pc = 0x321A7Cu;
        goto label_321a7c;
    }
    ctx->pc = 0x321A74u;
    {
        const bool branch_taken_0x321a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x321a74) {
            ctx->pc = 0x321A8Cu;
            goto label_321a8c;
        }
    }
    ctx->pc = 0x321A7Cu;
label_321a7c:
    // 0x321a7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_321a80:
    if (ctx->pc == 0x321A80u) {
        ctx->pc = 0x321A84u;
        goto label_321a84;
    }
    ctx->pc = 0x321A7Cu;
    {
        const bool branch_taken_0x321a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a7c) {
            ctx->pc = 0x321A8Cu;
            goto label_321a8c;
        }
    }
    ctx->pc = 0x321A84u;
label_321a84:
    // 0x321a84: 0x10000028  b           . + 4 + (0x28 << 2)
label_321a88:
    if (ctx->pc == 0x321A88u) {
        ctx->pc = 0x321A88u;
            // 0x321a88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321A8Cu;
        goto label_321a8c;
    }
    ctx->pc = 0x321A84u;
    {
        const bool branch_taken_0x321a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321A84u;
            // 0x321a88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a84) {
            ctx->pc = 0x321B28u;
            goto label_321b28;
        }
    }
    ctx->pc = 0x321A8Cu;
label_321a8c:
    // 0x321a8c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321a90:
    // 0x321a90: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x321a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_321a94:
    // 0x321a94: 0x90630094  lbu         $v1, 0x94($v1)
    ctx->pc = 0x321a94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 148)));
label_321a98:
    // 0x321a98: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_321a9c:
    if (ctx->pc == 0x321A9Cu) {
        ctx->pc = 0x321A9Cu;
            // 0x321a9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321AA0u;
        goto label_321aa0;
    }
    ctx->pc = 0x321A98u;
    {
        const bool branch_taken_0x321a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321a98) {
            ctx->pc = 0x321A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321A98u;
            // 0x321a9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321B10u;
            goto label_321b10;
        }
    }
    ctx->pc = 0x321AA0u;
label_321aa0:
    // 0x321aa0: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_321aa4:
    // 0x321aa4: 0x10a00881  beqz        $a1, . + 4 + (0x881 << 2)
label_321aa8:
    if (ctx->pc == 0x321AA8u) {
        ctx->pc = 0x321AACu;
        goto label_321aac;
    }
    ctx->pc = 0x321AA4u;
    {
        const bool branch_taken_0x321aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x321aa4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321AACu;
label_321aac:
    // 0x321aac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x321aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_321ab0:
    // 0x321ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ab4:
    // 0x321ab4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x321ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_321ab8:
    // 0x321ab8: 0xc0ab89c  jal         func_2AE270
label_321abc:
    if (ctx->pc == 0x321ABCu) {
        ctx->pc = 0x321ABCu;
            // 0x321abc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321AC0u;
        goto label_321ac0;
    }
    ctx->pc = 0x321AB8u;
    SET_GPR_U32(ctx, 31, 0x321AC0u);
    ctx->pc = 0x321ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AB8u;
            // 0x321abc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AC0u; }
        if (ctx->pc != 0x321AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AC0u; }
        if (ctx->pc != 0x321AC0u) { return; }
    }
    ctx->pc = 0x321AC0u;
label_321ac0:
    // 0x321ac0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x321ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_321ac4:
    // 0x321ac4: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x321ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_321ac8:
    // 0x321ac8: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x321ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_321acc:
    // 0x321acc: 0xc040180  jal         func_100600
label_321ad0:
    if (ctx->pc == 0x321AD0u) {
        ctx->pc = 0x321AD0u;
            // 0x321ad0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x321AD4u;
        goto label_321ad4;
    }
    ctx->pc = 0x321ACCu;
    SET_GPR_U32(ctx, 31, 0x321AD4u);
    ctx->pc = 0x321AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321ACCu;
            // 0x321ad0: 0xa0400038  sb          $zero, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AD4u; }
        if (ctx->pc != 0x321AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AD4u; }
        if (ctx->pc != 0x321AD4u) { return; }
    }
    ctx->pc = 0x321AD4u;
label_321ad4:
    // 0x321ad4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_321ad8:
    if (ctx->pc == 0x321AD8u) {
        ctx->pc = 0x321AD8u;
            // 0x321ad8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321ADCu;
        goto label_321adc;
    }
    ctx->pc = 0x321AD4u;
    {
        const bool branch_taken_0x321ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ad4) {
            ctx->pc = 0x321AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321AD4u;
            // 0x321ad8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321AF8u;
            goto label_321af8;
        }
    }
    ctx->pc = 0x321ADCu;
label_321adc:
    // 0x321adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321ae0:
    // 0x321ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ae4:
    // 0x321ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ae8:
    // 0x321ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321aec:
    // 0x321aec: 0xc151190  jal         func_544640
label_321af0:
    if (ctx->pc == 0x321AF0u) {
        ctx->pc = 0x321AF0u;
            // 0x321af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321AF4u;
        goto label_321af4;
    }
    ctx->pc = 0x321AECu;
    SET_GPR_U32(ctx, 31, 0x321AF4u);
    ctx->pc = 0x321AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321AECu;
            // 0x321af0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AF4u; }
        if (ctx->pc != 0x321AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321AF4u; }
        if (ctx->pc != 0x321AF4u) { return; }
    }
    ctx->pc = 0x321AF4u;
label_321af4:
    // 0x321af4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321af8:
    // 0x321af8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321afc:
    // 0x321afc: 0x320f809  jalr        $t9
label_321b00:
    if (ctx->pc == 0x321B00u) {
        ctx->pc = 0x321B00u;
            // 0x321b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321B04u;
        goto label_321b04;
    }
    ctx->pc = 0x321AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321B04u);
        ctx->pc = 0x321B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321AFCu;
            // 0x321b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321B04u; }
            if (ctx->pc != 0x321B04u) { return; }
        }
        }
    }
    ctx->pc = 0x321B04u;
label_321b04:
    // 0x321b04: 0x10000869  b           . + 4 + (0x869 << 2)
label_321b08:
    if (ctx->pc == 0x321B08u) {
        ctx->pc = 0x321B0Cu;
        goto label_321b0c;
    }
    ctx->pc = 0x321B04u;
    {
        const bool branch_taken_0x321b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b04) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321B0Cu;
label_321b0c:
    // 0x321b0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321b10:
    // 0x321b10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321b14:
    // 0x321b14: 0x320f809  jalr        $t9
label_321b18:
    if (ctx->pc == 0x321B18u) {
        ctx->pc = 0x321B18u;
            // 0x321b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321B1Cu;
        goto label_321b1c;
    }
    ctx->pc = 0x321B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321B1Cu);
        ctx->pc = 0x321B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321B14u;
            // 0x321b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321B1Cu; }
            if (ctx->pc != 0x321B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x321B1Cu;
label_321b1c:
    // 0x321b1c: 0x10000863  b           . + 4 + (0x863 << 2)
label_321b20:
    if (ctx->pc == 0x321B20u) {
        ctx->pc = 0x321B24u;
        goto label_321b24;
    }
    ctx->pc = 0x321B1Cu;
    {
        const bool branch_taken_0x321b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b1c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321B24u;
label_321b24:
    // 0x321b24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321b28:
    // 0x321b28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321b2c:
    // 0x321b2c: 0x320f809  jalr        $t9
label_321b30:
    if (ctx->pc == 0x321B30u) {
        ctx->pc = 0x321B30u;
            // 0x321b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321B34u;
        goto label_321b34;
    }
    ctx->pc = 0x321B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321B34u);
        ctx->pc = 0x321B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321B2Cu;
            // 0x321b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321B34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321B34u; }
            if (ctx->pc != 0x321B34u) { return; }
        }
        }
    }
    ctx->pc = 0x321B34u;
label_321b34:
    // 0x321b34: 0x1000085d  b           . + 4 + (0x85D << 2)
label_321b38:
    if (ctx->pc == 0x321B38u) {
        ctx->pc = 0x321B3Cu;
        goto label_321b3c;
    }
    ctx->pc = 0x321B34u;
    {
        const bool branch_taken_0x321b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321b34) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321B3Cu;
label_321b3c:
    // 0x321b3c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x321b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_321b40:
    // 0x321b40: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x321b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_321b44:
    // 0x321b44: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x321b44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_321b48:
    // 0x321b48: 0x14600858  bnez        $v1, . + 4 + (0x858 << 2)
label_321b4c:
    if (ctx->pc == 0x321B4Cu) {
        ctx->pc = 0x321B50u;
        goto label_321b50;
    }
    ctx->pc = 0x321B48u;
    {
        const bool branch_taken_0x321b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321b48) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321B50u;
label_321b50:
    // 0x321b50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321b54:
    // 0x321b54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x321b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_321b58:
    // 0x321b58: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_321b5c:
    // 0x321b5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321b60:
    // 0x321b60: 0x8c43fa20  lw          $v1, -0x5E0($v0)
    ctx->pc = 0x321b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
label_321b64:
    // 0x321b64: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x321b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_321b68:
    // 0x321b68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x321b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_321b6c:
    // 0x321b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_321b70:
    if (ctx->pc == 0x321B70u) {
        ctx->pc = 0x321B70u;
            // 0x321b70: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x321B74u;
        goto label_321b74;
    }
    ctx->pc = 0x321B6Cu;
    {
        const bool branch_taken_0x321b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321B6Cu;
            // 0x321b70: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b6c) {
            ctx->pc = 0x321B84u;
            goto label_321b84;
        }
    }
    ctx->pc = 0x321B74u;
label_321b74:
    // 0x321b74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321b78:
    // 0x321b78: 0x8c42fa18  lw          $v0, -0x5E8($v0)
    ctx->pc = 0x321b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_321b7c:
    // 0x321b7c: 0x401027  not         $v0, $v0
    ctx->pc = 0x321b7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_321b80:
    // 0x321b80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x321b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_321b84:
    // 0x321b84: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x321b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_321b88:
    // 0x321b88: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x321b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_321b8c:
    // 0x321b8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x321b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_321b90:
    // 0x321b90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x321b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_321b94:
    // 0x321b94: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x321b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_321b98:
    // 0x321b98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321b9c:
    // 0x321b9c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321ba0:
    // 0x321ba0: 0x320f809  jalr        $t9
label_321ba4:
    if (ctx->pc == 0x321BA4u) {
        ctx->pc = 0x321BA4u;
            // 0x321ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321BA8u;
        goto label_321ba8;
    }
    ctx->pc = 0x321BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321BA8u);
        ctx->pc = 0x321BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321BA0u;
            // 0x321ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321BA8u; }
            if (ctx->pc != 0x321BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x321BA8u;
label_321ba8:
    // 0x321ba8: 0x10000840  b           . + 4 + (0x840 << 2)
label_321bac:
    if (ctx->pc == 0x321BACu) {
        ctx->pc = 0x321BB0u;
        goto label_321bb0;
    }
    ctx->pc = 0x321BA8u;
    {
        const bool branch_taken_0x321ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ba8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321BB0u;
label_321bb0:
    // 0x321bb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x321bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_321bb4:
    // 0x321bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321bb8:
    // 0x321bb8: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x321bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_321bbc:
    // 0x321bbc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_321bc0:
    if (ctx->pc == 0x321BC0u) {
        ctx->pc = 0x321BC4u;
        goto label_321bc4;
    }
    ctx->pc = 0x321BBCu;
    {
        const bool branch_taken_0x321bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x321bbc) {
            ctx->pc = 0x321BD4u;
            goto label_321bd4;
        }
    }
    ctx->pc = 0x321BC4u;
label_321bc4:
    // 0x321bc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_321bc8:
    if (ctx->pc == 0x321BC8u) {
        ctx->pc = 0x321BCCu;
        goto label_321bcc;
    }
    ctx->pc = 0x321BC4u;
    {
        const bool branch_taken_0x321bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bc4) {
            ctx->pc = 0x321BD4u;
            goto label_321bd4;
        }
    }
    ctx->pc = 0x321BCCu;
label_321bcc:
    // 0x321bcc: 0x10000020  b           . + 4 + (0x20 << 2)
label_321bd0:
    if (ctx->pc == 0x321BD0u) {
        ctx->pc = 0x321BD0u;
            // 0x321bd0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x321BD4u;
        goto label_321bd4;
    }
    ctx->pc = 0x321BCCu;
    {
        const bool branch_taken_0x321bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321BCCu;
            // 0x321bd0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bcc) {
            ctx->pc = 0x321C50u;
            goto label_321c50;
        }
    }
    ctx->pc = 0x321BD4u;
label_321bd4:
    // 0x321bd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321bd8:
    // 0x321bd8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x321bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_321bdc:
    // 0x321bdc: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x321bdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
label_321be0:
    // 0x321be0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_321be4:
    if (ctx->pc == 0x321BE4u) {
        ctx->pc = 0x321BE4u;
            // 0x321be4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321BE8u;
        goto label_321be8;
    }
    ctx->pc = 0x321BE0u;
    {
        const bool branch_taken_0x321be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321be0) {
            ctx->pc = 0x321BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321BE0u;
            // 0x321be4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321C38u;
            goto label_321c38;
        }
    }
    ctx->pc = 0x321BE8u;
label_321be8:
    // 0x321be8: 0xc040180  jal         func_100600
label_321bec:
    if (ctx->pc == 0x321BECu) {
        ctx->pc = 0x321BECu;
            // 0x321bec: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x321BF0u;
        goto label_321bf0;
    }
    ctx->pc = 0x321BE8u;
    SET_GPR_U32(ctx, 31, 0x321BF0u);
    ctx->pc = 0x321BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321BE8u;
            // 0x321bec: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321BF0u; }
        if (ctx->pc != 0x321BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321BF0u; }
        if (ctx->pc != 0x321BF0u) { return; }
    }
    ctx->pc = 0x321BF0u;
label_321bf0:
    // 0x321bf0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_321bf4:
    if (ctx->pc == 0x321BF4u) {
        ctx->pc = 0x321BF4u;
            // 0x321bf4: 0xae020678  sw          $v0, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 2));
        ctx->pc = 0x321BF8u;
        goto label_321bf8;
    }
    ctx->pc = 0x321BF0u;
    {
        const bool branch_taken_0x321bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bf0) {
            ctx->pc = 0x321BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321BF0u;
            // 0x321bf4: 0xae020678  sw          $v0, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321C1Cu;
            goto label_321c1c;
        }
    }
    ctx->pc = 0x321BF8u;
label_321bf8:
    // 0x321bf8: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x321bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_321bfc:
    // 0x321bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321c00:
    // 0x321c00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x321c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_321c04:
    // 0x321c04: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x321c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_321c08:
    // 0x321c08: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x321c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_321c0c:
    // 0x321c0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321c10:
    // 0x321c10: 0xc159754  jal         func_565D50
label_321c14:
    if (ctx->pc == 0x321C14u) {
        ctx->pc = 0x321C14u;
            // 0x321c14: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321C18u;
        goto label_321c18;
    }
    ctx->pc = 0x321C10u;
    SET_GPR_U32(ctx, 31, 0x321C18u);
    ctx->pc = 0x321C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321C10u;
            // 0x321c14: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321C18u; }
        if (ctx->pc != 0x321C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321C18u; }
        if (ctx->pc != 0x321C18u) { return; }
    }
    ctx->pc = 0x321C18u;
label_321c18:
    // 0x321c18: 0xae020678  sw          $v0, 0x678($s0)
    ctx->pc = 0x321c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 2));
label_321c1c:
    // 0x321c1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321c20:
    // 0x321c20: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321c24:
    // 0x321c24: 0x320f809  jalr        $t9
label_321c28:
    if (ctx->pc == 0x321C28u) {
        ctx->pc = 0x321C28u;
            // 0x321c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321C2Cu;
        goto label_321c2c;
    }
    ctx->pc = 0x321C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321C2Cu);
        ctx->pc = 0x321C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321C24u;
            // 0x321c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321C2Cu; }
            if (ctx->pc != 0x321C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x321C2Cu;
label_321c2c:
    // 0x321c2c: 0x1000000b  b           . + 4 + (0xB << 2)
label_321c30:
    if (ctx->pc == 0x321C30u) {
        ctx->pc = 0x321C34u;
        goto label_321c34;
    }
    ctx->pc = 0x321C2Cu;
    {
        const bool branch_taken_0x321c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321c2c) {
            ctx->pc = 0x321C5Cu;
            goto label_321c5c;
        }
    }
    ctx->pc = 0x321C34u;
label_321c34:
    // 0x321c34: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321c38:
    // 0x321c38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321c3c:
    // 0x321c3c: 0x320f809  jalr        $t9
label_321c40:
    if (ctx->pc == 0x321C40u) {
        ctx->pc = 0x321C40u;
            // 0x321c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321C44u;
        goto label_321c44;
    }
    ctx->pc = 0x321C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321C44u);
        ctx->pc = 0x321C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321C3Cu;
            // 0x321c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321C44u; }
            if (ctx->pc != 0x321C44u) { return; }
        }
        }
    }
    ctx->pc = 0x321C44u;
label_321c44:
    // 0x321c44: 0x10000005  b           . + 4 + (0x5 << 2)
label_321c48:
    if (ctx->pc == 0x321C48u) {
        ctx->pc = 0x321C4Cu;
        goto label_321c4c;
    }
    ctx->pc = 0x321C44u;
    {
        const bool branch_taken_0x321c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321c44) {
            ctx->pc = 0x321C5Cu;
            goto label_321c5c;
        }
    }
    ctx->pc = 0x321C4Cu;
label_321c4c:
    // 0x321c4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321c50:
    // 0x321c50: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321c54:
    // 0x321c54: 0x320f809  jalr        $t9
label_321c58:
    if (ctx->pc == 0x321C58u) {
        ctx->pc = 0x321C5Cu;
        goto label_321c5c;
    }
    ctx->pc = 0x321C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321C5Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x321C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321C5Cu; }
            if (ctx->pc != 0x321C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x321C5Cu;
label_321c5c:
    // 0x321c5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x321c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_321c60:
    // 0x321c60: 0x8c643e30  lw          $a0, 0x3E30($v1)
    ctx->pc = 0x321c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_321c64:
    // 0x321c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321c68:
    // 0x321c68: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_321c6c:
    if (ctx->pc == 0x321C6Cu) {
        ctx->pc = 0x321C6Cu;
            // 0x321c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321C70u;
        goto label_321c70;
    }
    ctx->pc = 0x321C68u;
    {
        const bool branch_taken_0x321c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x321C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321C68u;
            // 0x321c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c68) {
            ctx->pc = 0x321C80u;
            goto label_321c80;
        }
    }
    ctx->pc = 0x321C70u;
label_321c70:
    // 0x321c70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_321c74:
    if (ctx->pc == 0x321C74u) {
        ctx->pc = 0x321C78u;
        goto label_321c78;
    }
    ctx->pc = 0x321C70u;
    {
        const bool branch_taken_0x321c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x321c70) {
            ctx->pc = 0x321C80u;
            goto label_321c80;
        }
    }
    ctx->pc = 0x321C78u;
label_321c78:
    // 0x321c78: 0x10000027  b           . + 4 + (0x27 << 2)
label_321c7c:
    if (ctx->pc == 0x321C7Cu) {
        ctx->pc = 0x321C7Cu;
            // 0x321c7c: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x321C80u;
        goto label_321c80;
    }
    ctx->pc = 0x321C78u;
    {
        const bool branch_taken_0x321c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321C78u;
            // 0x321c7c: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c78) {
            ctx->pc = 0x321D18u;
            goto label_321d18;
        }
    }
    ctx->pc = 0x321C80u;
label_321c80:
    // 0x321c80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321c84:
    // 0x321c84: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x321c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_321c88:
    // 0x321c88: 0x90630094  lbu         $v1, 0x94($v1)
    ctx->pc = 0x321c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 148)));
label_321c8c:
    // 0x321c8c: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
label_321c90:
    if (ctx->pc == 0x321C90u) {
        ctx->pc = 0x321C90u;
            // 0x321c90: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x321C94u;
        goto label_321c94;
    }
    ctx->pc = 0x321C8Cu;
    {
        const bool branch_taken_0x321c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321c8c) {
            ctx->pc = 0x321C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321C8Cu;
            // 0x321c90: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x321D18u;
            goto label_321d18;
        }
    }
    ctx->pc = 0x321C94u;
label_321c94:
    // 0x321c94: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x321c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_321c98:
    // 0x321c98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321c9c:
    // 0x321c9c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x321c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_321ca0:
    // 0x321ca0: 0x320f809  jalr        $t9
label_321ca4:
    if (ctx->pc == 0x321CA4u) {
        ctx->pc = 0x321CA8u;
        goto label_321ca8;
    }
    ctx->pc = 0x321CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321CA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x321CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321CA8u; }
            if (ctx->pc != 0x321CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x321CA8u;
label_321ca8:
    // 0x321ca8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x321ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_321cac:
    // 0x321cac: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_321cb0:
    if (ctx->pc == 0x321CB0u) {
        ctx->pc = 0x321CB4u;
        goto label_321cb4;
    }
    ctx->pc = 0x321CACu;
    {
        const bool branch_taken_0x321cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x321cac) {
            ctx->pc = 0x321D18u;
            goto label_321d18;
        }
    }
    ctx->pc = 0x321CB4u;
label_321cb4:
    // 0x321cb4: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x321cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
label_321cb8:
    // 0x321cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321cbc:
    // 0x321cbc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x321cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_321cc0:
    // 0x321cc0: 0x320f809  jalr        $t9
label_321cc4:
    if (ctx->pc == 0x321CC4u) {
        ctx->pc = 0x321CC8u;
        goto label_321cc8;
    }
    ctx->pc = 0x321CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x321CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321CC8u; }
            if (ctx->pc != 0x321CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x321CC8u;
label_321cc8:
    // 0x321cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321ccc:
    // 0x321ccc: 0xc0ca1b0  jal         func_3286C0
label_321cd0:
    if (ctx->pc == 0x321CD0u) {
        ctx->pc = 0x321CD0u;
            // 0x321cd0: 0xae000678  sw          $zero, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
        ctx->pc = 0x321CD4u;
        goto label_321cd4;
    }
    ctx->pc = 0x321CCCu;
    SET_GPR_U32(ctx, 31, 0x321CD4u);
    ctx->pc = 0x321CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321CCCu;
            // 0x321cd0: 0xae000678  sw          $zero, 0x678($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321CD4u; }
        if (ctx->pc != 0x321CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321CD4u; }
        if (ctx->pc != 0x321CD4u) { return; }
    }
    ctx->pc = 0x321CD4u;
label_321cd4:
    // 0x321cd4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321cd8:
    // 0x321cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x321cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321cdc:
    // 0x321cdc: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x321cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_321ce0:
    // 0x321ce0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x321ce0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_321ce4:
    // 0x321ce4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x321ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_321ce8:
    // 0x321ce8: 0xa0a60094  sb          $a2, 0x94($a1)
    ctx->pc = 0x321ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 148), (uint8_t)GPR_U32(ctx, 6));
label_321cec:
    // 0x321cec: 0x602027  not         $a0, $v1
    ctx->pc = 0x321cecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_321cf0:
    // 0x321cf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321cf4:
    // 0x321cf4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x321cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_321cf8:
    // 0x321cf8: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x321cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_321cfc:
    // 0x321cfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x321cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_321d00:
    // 0x321d00: 0x10000005  b           . + 4 + (0x5 << 2)
label_321d04:
    if (ctx->pc == 0x321D04u) {
        ctx->pc = 0x321D04u;
            // 0x321d04: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x321D08u;
        goto label_321d08;
    }
    ctx->pc = 0x321D00u;
    {
        const bool branch_taken_0x321d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321D00u;
            // 0x321d04: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d00) {
            ctx->pc = 0x321D18u;
            goto label_321d18;
        }
    }
    ctx->pc = 0x321D08u;
label_321d08:
    // 0x321d08: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x321d08u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_321d0c:
    // 0x321d0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_321d10:
    if (ctx->pc == 0x321D10u) {
        ctx->pc = 0x321D14u;
        goto label_321d14;
    }
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D18u;
            goto label_321d18;
        }
    }
    ctx->pc = 0x321D14u;
label_321d14:
    // 0x321d14: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x321d14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_321d18:
    // 0x321d18: 0x122007e4  beqz        $s1, . + 4 + (0x7E4 << 2)
label_321d1c:
    if (ctx->pc == 0x321D1Cu) {
        ctx->pc = 0x321D20u;
        goto label_321d20;
    }
    ctx->pc = 0x321D18u;
    {
        const bool branch_taken_0x321d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d18) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321D20u;
label_321d20:
    // 0x321d20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321d24:
    // 0x321d24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321d28:
    // 0x321d28: 0x320f809  jalr        $t9
label_321d2c:
    if (ctx->pc == 0x321D2Cu) {
        ctx->pc = 0x321D2Cu;
            // 0x321d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321D30u;
        goto label_321d30;
    }
    ctx->pc = 0x321D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321D30u);
        ctx->pc = 0x321D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321D28u;
            // 0x321d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321D30u; }
            if (ctx->pc != 0x321D30u) { return; }
        }
        }
    }
    ctx->pc = 0x321D30u;
label_321d30:
    // 0x321d30: 0x100007de  b           . + 4 + (0x7DE << 2)
label_321d34:
    if (ctx->pc == 0x321D34u) {
        ctx->pc = 0x321D38u;
        goto label_321d38;
    }
    ctx->pc = 0x321D30u;
    {
        const bool branch_taken_0x321d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d30) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321D38u;
label_321d38:
    // 0x321d38: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x321d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_321d3c:
    // 0x321d3c: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x321d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_321d40:
    // 0x321d40: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x321d40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_321d44:
    // 0x321d44: 0x146007d9  bnez        $v1, . + 4 + (0x7D9 << 2)
label_321d48:
    if (ctx->pc == 0x321D48u) {
        ctx->pc = 0x321D4Cu;
        goto label_321d4c;
    }
    ctx->pc = 0x321D44u;
    {
        const bool branch_taken_0x321d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321d44) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321D4Cu;
label_321d4c:
    // 0x321d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x321d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_321d50:
    // 0x321d50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321d54:
    // 0x321d54: 0x8c46a348  lw          $a2, -0x5CB8($v0)
    ctx->pc = 0x321d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_321d58:
    // 0x321d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321d5c:
    // 0x321d5c: 0xa0c00038  sb          $zero, 0x38($a2)
    ctx->pc = 0x321d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 56), (uint8_t)GPR_U32(ctx, 0));
label_321d60:
    // 0x321d60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x321d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_321d64:
    // 0x321d64: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x321d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_321d68:
    // 0x321d68: 0x402827  not         $a1, $v0
    ctx->pc = 0x321d68u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_321d6c:
    // 0x321d6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x321d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_321d70:
    // 0x321d70: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x321d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_321d74:
    // 0x321d74: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x321d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_321d78:
    // 0x321d78: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x321d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
label_321d7c:
    // 0x321d7c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x321d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_321d80:
    // 0x321d80: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x321d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_321d84:
    // 0x321d84: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_321d88:
    if (ctx->pc == 0x321D88u) {
        ctx->pc = 0x321D88u;
            // 0x321d88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321D8Cu;
        goto label_321d8c;
    }
    ctx->pc = 0x321D84u;
    {
        const bool branch_taken_0x321d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x321D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321D84u;
            // 0x321d88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d84) {
            ctx->pc = 0x321D9Cu;
            goto label_321d9c;
        }
    }
    ctx->pc = 0x321D8Cu;
label_321d8c:
    // 0x321d8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_321d90:
    if (ctx->pc == 0x321D90u) {
        ctx->pc = 0x321D94u;
        goto label_321d94;
    }
    ctx->pc = 0x321D8Cu;
    {
        const bool branch_taken_0x321d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d8c) {
            ctx->pc = 0x321D9Cu;
            goto label_321d9c;
        }
    }
    ctx->pc = 0x321D94u;
label_321d94:
    // 0x321d94: 0x10000009  b           . + 4 + (0x9 << 2)
label_321d98:
    if (ctx->pc == 0x321D98u) {
        ctx->pc = 0x321D98u;
            // 0x321d98: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x321D9Cu;
        goto label_321d9c;
    }
    ctx->pc = 0x321D94u;
    {
        const bool branch_taken_0x321d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321D94u;
            // 0x321d98: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d94) {
            ctx->pc = 0x321DBCu;
            goto label_321dbc;
        }
    }
    ctx->pc = 0x321D9Cu;
label_321d9c:
    // 0x321d9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321da0:
    // 0x321da0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x321da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_321da4:
    // 0x321da4: 0x90420091  lbu         $v0, 0x91($v0)
    ctx->pc = 0x321da4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 145)));
label_321da8:
    // 0x321da8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_321dac:
    if (ctx->pc == 0x321DACu) {
        ctx->pc = 0x321DB0u;
        goto label_321db0;
    }
    ctx->pc = 0x321DA8u;
    {
        const bool branch_taken_0x321da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321da8) {
            ctx->pc = 0x321DBCu;
            goto label_321dbc;
        }
    }
    ctx->pc = 0x321DB0u;
label_321db0:
    // 0x321db0: 0x10000002  b           . + 4 + (0x2 << 2)
label_321db4:
    if (ctx->pc == 0x321DB4u) {
        ctx->pc = 0x321DB4u;
            // 0x321db4: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x321DB8u;
        goto label_321db8;
    }
    ctx->pc = 0x321DB0u;
    {
        const bool branch_taken_0x321db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321DB0u;
            // 0x321db4: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321db0) {
            ctx->pc = 0x321DBCu;
            goto label_321dbc;
        }
    }
    ctx->pc = 0x321DB8u;
label_321db8:
    // 0x321db8: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x321db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_321dbc:
    // 0x321dbc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_321dc0:
    if (ctx->pc == 0x321DC0u) {
        ctx->pc = 0x321DC4u;
        goto label_321dc4;
    }
    ctx->pc = 0x321DBCu;
    {
        const bool branch_taken_0x321dbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x321dbc) {
            ctx->pc = 0x321DE0u;
            goto label_321de0;
        }
    }
    ctx->pc = 0x321DC4u;
label_321dc4:
    // 0x321dc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321dc8:
    // 0x321dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321dcc:
    // 0x321dcc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x321dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_321dd0:
    // 0x321dd0: 0x320f809  jalr        $t9
label_321dd4:
    if (ctx->pc == 0x321DD4u) {
        ctx->pc = 0x321DD4u;
            // 0x321dd4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x321DD8u;
        goto label_321dd8;
    }
    ctx->pc = 0x321DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321DD8u);
        ctx->pc = 0x321DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321DD0u;
            // 0x321dd4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321DD8u; }
            if (ctx->pc != 0x321DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x321DD8u;
label_321dd8:
    // 0x321dd8: 0x10000022  b           . + 4 + (0x22 << 2)
label_321ddc:
    if (ctx->pc == 0x321DDCu) {
        ctx->pc = 0x321DDCu;
            // 0x321ddc: 0x92030054  lbu         $v1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x321DE0u;
        goto label_321de0;
    }
    ctx->pc = 0x321DD8u;
    {
        const bool branch_taken_0x321dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321DD8u;
            // 0x321ddc: 0x92030054  lbu         $v1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321dd8) {
            ctx->pc = 0x321E64u;
            goto label_321e64;
        }
    }
    ctx->pc = 0x321DE0u;
label_321de0:
    // 0x321de0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x321de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_321de4:
    // 0x321de4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321de8:
    // 0x321de8: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x321de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_321dec:
    // 0x321dec: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x321decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
label_321df0:
    // 0x321df0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x321df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_321df4:
    // 0x321df4: 0x90510091  lbu         $s1, 0x91($v0)
    ctx->pc = 0x321df4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 145)));
label_321df8:
    // 0x321df8: 0xc040180  jal         func_100600
label_321dfc:
    if (ctx->pc == 0x321DFCu) {
        ctx->pc = 0x321DFCu;
            // 0x321dfc: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->pc = 0x321E00u;
        goto label_321e00;
    }
    ctx->pc = 0x321DF8u;
    SET_GPR_U32(ctx, 31, 0x321E00u);
    ctx->pc = 0x321DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321DF8u;
            // 0x321dfc: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321E00u; }
        if (ctx->pc != 0x321E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321E00u; }
        if (ctx->pc != 0x321E00u) { return; }
    }
    ctx->pc = 0x321E00u;
label_321e00:
    // 0x321e00: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_321e04:
    if (ctx->pc == 0x321E04u) {
        ctx->pc = 0x321E04u;
            // 0x321e04: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321E08u;
        goto label_321e08;
    }
    ctx->pc = 0x321E00u;
    {
        const bool branch_taken_0x321e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e00) {
            ctx->pc = 0x321E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321E00u;
            // 0x321e04: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321E54u;
            goto label_321e54;
        }
    }
    ctx->pc = 0x321E08u;
label_321e08:
    // 0x321e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e0c:
    // 0x321e0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x321e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321e10:
    // 0x321e10: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x321e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_321e14:
    // 0x321e14: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x321e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_321e18:
    // 0x321e18: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x321e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_321e1c:
    // 0x321e1c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x321e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_321e20:
    // 0x321e20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x321e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321e24:
    // 0x321e24: 0x31240  sll         $v0, $v1, 9
    ctx->pc = 0x321e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_321e28:
    // 0x321e28: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x321e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
label_321e2c:
    // 0x321e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_321e30:
    // 0x321e30: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x321e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_321e34:
    // 0x321e34: 0x25040  sll         $t2, $v0, 1
    ctx->pc = 0x321e34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_321e38:
    // 0x321e38: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x321e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_321e3c:
    // 0x321e3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x321e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321e40:
    // 0x321e40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e44:
    // 0x321e44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x321e44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e48:
    // 0x321e48: 0xc0f122c  jal         func_3C48B0
label_321e4c:
    if (ctx->pc == 0x321E4Cu) {
        ctx->pc = 0x321E4Cu;
            // 0x321e4c: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->pc = 0x321E50u;
        goto label_321e50;
    }
    ctx->pc = 0x321E48u;
    SET_GPR_U32(ctx, 31, 0x321E50u);
    ctx->pc = 0x321E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321E48u;
            // 0x321e4c: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321E50u; }
        if (ctx->pc != 0x321E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321E50u; }
        if (ctx->pc != 0x321E50u) { return; }
    }
    ctx->pc = 0x321E50u;
label_321e50:
    // 0x321e50: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321e54:
    // 0x321e54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321e58:
    // 0x321e58: 0x320f809  jalr        $t9
label_321e5c:
    if (ctx->pc == 0x321E5Cu) {
        ctx->pc = 0x321E5Cu;
            // 0x321e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321E60u;
        goto label_321e60;
    }
    ctx->pc = 0x321E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321E60u);
        ctx->pc = 0x321E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321E58u;
            // 0x321e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321E60u; }
            if (ctx->pc != 0x321E60u) { return; }
        }
        }
    }
    ctx->pc = 0x321E60u;
label_321e60:
    // 0x321e60: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x321e60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_321e64:
    // 0x321e64: 0x10600791  beqz        $v1, . + 4 + (0x791 << 2)
label_321e68:
    if (ctx->pc == 0x321E68u) {
        ctx->pc = 0x321E6Cu;
        goto label_321e6c;
    }
    ctx->pc = 0x321E64u;
    {
        const bool branch_taken_0x321e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e64) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321E6Cu;
label_321e6c:
    // 0x321e6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321e70:
    // 0x321e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321e74:
    // 0x321e74: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_321e78:
    // 0x321e78: 0xa0430091  sb          $v1, 0x91($v0)
    ctx->pc = 0x321e78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 145), (uint8_t)GPR_U32(ctx, 3));
label_321e7c:
    // 0x321e7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321e80:
    // 0x321e80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321e84:
    // 0x321e84: 0x320f809  jalr        $t9
label_321e88:
    if (ctx->pc == 0x321E88u) {
        ctx->pc = 0x321E88u;
            // 0x321e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321E8Cu;
        goto label_321e8c;
    }
    ctx->pc = 0x321E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321E8Cu);
        ctx->pc = 0x321E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321E84u;
            // 0x321e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321E8Cu; }
            if (ctx->pc != 0x321E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x321E8Cu;
label_321e8c:
    // 0x321e8c: 0x10000787  b           . + 4 + (0x787 << 2)
label_321e90:
    if (ctx->pc == 0x321E90u) {
        ctx->pc = 0x321E94u;
        goto label_321e94;
    }
    ctx->pc = 0x321E8Cu;
    {
        const bool branch_taken_0x321e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e8c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321E94u;
label_321e94:
    // 0x321e94: 0x24040170  addiu       $a0, $zero, 0x170
    ctx->pc = 0x321e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_321e98:
    // 0x321e98: 0xc040180  jal         func_100600
label_321e9c:
    if (ctx->pc == 0x321E9Cu) {
        ctx->pc = 0x321E9Cu;
            // 0x321e9c: 0xa2000054  sb          $zero, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x321EA0u;
        goto label_321ea0;
    }
    ctx->pc = 0x321E98u;
    SET_GPR_U32(ctx, 31, 0x321EA0u);
    ctx->pc = 0x321E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321E98u;
            // 0x321e9c: 0xa2000054  sb          $zero, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321EA0u; }
        if (ctx->pc != 0x321EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321EA0u; }
        if (ctx->pc != 0x321EA0u) { return; }
    }
    ctx->pc = 0x321EA0u;
label_321ea0:
    // 0x321ea0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_321ea4:
    if (ctx->pc == 0x321EA4u) {
        ctx->pc = 0x321EA4u;
            // 0x321ea4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321EA8u;
        goto label_321ea8;
    }
    ctx->pc = 0x321EA0u;
    {
        const bool branch_taken_0x321ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ea0) {
            ctx->pc = 0x321EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321EA0u;
            // 0x321ea4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321EECu;
            goto label_321eec;
        }
    }
    ctx->pc = 0x321EA8u;
label_321ea8:
    // 0x321ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321eac:
    // 0x321eac: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x321eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_321eb0:
    // 0x321eb0: 0x26030054  addiu       $v1, $s0, 0x54
    ctx->pc = 0x321eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_321eb4:
    // 0x321eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321eb8:
    // 0x321eb8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x321eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_321ebc:
    // 0x321ebc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x321ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321ec0:
    // 0x321ec0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x321ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_321ec4:
    // 0x321ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ec8:
    // 0x321ec8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x321ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_321ecc:
    // 0x321ecc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x321eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321ed0:
    // 0x321ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ed4:
    // 0x321ed4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x321ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ed8:
    // 0x321ed8: 0x240a0402  addiu       $t2, $zero, 0x402
    ctx->pc = 0x321ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_321edc:
    // 0x321edc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x321edcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ee0:
    // 0x321ee0: 0xc0f122c  jal         func_3C48B0
label_321ee4:
    if (ctx->pc == 0x321EE4u) {
        ctx->pc = 0x321EE4u;
            // 0x321ee4: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->pc = 0x321EE8u;
        goto label_321ee8;
    }
    ctx->pc = 0x321EE0u;
    SET_GPR_U32(ctx, 31, 0x321EE8u);
    ctx->pc = 0x321EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321EE0u;
            // 0x321ee4: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321EE8u; }
        if (ctx->pc != 0x321EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321EE8u; }
        if (ctx->pc != 0x321EE8u) { return; }
    }
    ctx->pc = 0x321EE8u;
label_321ee8:
    // 0x321ee8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321eec:
    // 0x321eec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321ef0:
    // 0x321ef0: 0x320f809  jalr        $t9
label_321ef4:
    if (ctx->pc == 0x321EF4u) {
        ctx->pc = 0x321EF4u;
            // 0x321ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321EF8u;
        goto label_321ef8;
    }
    ctx->pc = 0x321EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321EF8u);
        ctx->pc = 0x321EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321EF0u;
            // 0x321ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321EF8u; }
            if (ctx->pc != 0x321EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x321EF8u;
label_321ef8:
    // 0x321ef8: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x321ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_321efc:
    // 0x321efc: 0x1060076b  beqz        $v1, . + 4 + (0x76B << 2)
label_321f00:
    if (ctx->pc == 0x321F00u) {
        ctx->pc = 0x321F04u;
        goto label_321f04;
    }
    ctx->pc = 0x321EFCu;
    {
        const bool branch_taken_0x321efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321efc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321F04u;
label_321f04:
    // 0x321f04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321f08:
    // 0x321f08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x321f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_321f0c:
    // 0x321f0c: 0x320f809  jalr        $t9
label_321f10:
    if (ctx->pc == 0x321F10u) {
        ctx->pc = 0x321F10u;
            // 0x321f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321F14u;
        goto label_321f14;
    }
    ctx->pc = 0x321F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321F14u);
        ctx->pc = 0x321F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321F0Cu;
            // 0x321f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321F14u; }
            if (ctx->pc != 0x321F14u) { return; }
        }
        }
    }
    ctx->pc = 0x321F14u;
label_321f14:
    // 0x321f14: 0x10000765  b           . + 4 + (0x765 << 2)
label_321f18:
    if (ctx->pc == 0x321F18u) {
        ctx->pc = 0x321F1Cu;
        goto label_321f1c;
    }
    ctx->pc = 0x321F14u;
    {
        const bool branch_taken_0x321f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f14) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321F1Cu;
label_321f1c:
    // 0x321f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321f20:
    // 0x321f20: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x321f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_321f24:
    // 0x321f24: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x321f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
label_321f28:
    // 0x321f28: 0x8c85a348  lw          $a1, -0x5CB8($a0)
    ctx->pc = 0x321f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943560)));
label_321f2c:
    // 0x321f2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x321f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_321f30:
    // 0x321f30: 0xa0a00038  sb          $zero, 0x38($a1)
    ctx->pc = 0x321f30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 0));
label_321f34:
    // 0x321f34: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x321f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_321f38:
    // 0x321f38: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x321f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_321f3c:
    // 0x321f3c: 0xc6010160  lwc1        $f1, 0x160($s0)
    ctx->pc = 0x321f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_321f40:
    // 0x321f40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x321f40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321f44:
    // 0x321f44: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x321f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_321f48:
    // 0x321f48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x321f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_321f4c:
    // 0x321f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x321f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_321f50:
    // 0x321f50: 0x45010756  bc1t        . + 4 + (0x756 << 2)
label_321f54:
    if (ctx->pc == 0x321F54u) {
        ctx->pc = 0x321F54u;
            // 0x321f54: 0xe6010160  swc1        $f1, 0x160($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
        ctx->pc = 0x321F58u;
        goto label_321f58;
    }
    ctx->pc = 0x321F50u;
    {
        const bool branch_taken_0x321f50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x321F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321F50u;
            // 0x321f54: 0xe6010160  swc1        $f1, 0x160($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f50) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321F58u;
label_321f58:
    // 0x321f58: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x321f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_321f5c:
    // 0x321f5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x321f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_321f60:
    // 0x321f60: 0x8c463e38  lw          $a2, 0x3E38($v0)
    ctx->pc = 0x321f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15928)));
label_321f64:
    // 0x321f64: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_321f68:
    if (ctx->pc == 0x321F68u) {
        ctx->pc = 0x321F6Cu;
        goto label_321f6c;
    }
    ctx->pc = 0x321F64u;
    {
        const bool branch_taken_0x321f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f64) {
            ctx->pc = 0x321F84u;
            goto label_321f84;
        }
    }
    ctx->pc = 0x321F6Cu;
label_321f6c:
    // 0x321f6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321f70:
    // 0x321f70: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x321f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_321f74:
    // 0x321f74: 0xc0a8a40  jal         func_2A2900
label_321f78:
    if (ctx->pc == 0x321F78u) {
        ctx->pc = 0x321F78u;
            // 0x321f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x321F7Cu;
        goto label_321f7c;
    }
    ctx->pc = 0x321F74u;
    SET_GPR_U32(ctx, 31, 0x321F7Cu);
    ctx->pc = 0x321F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321F74u;
            // 0x321f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321F7Cu; }
        if (ctx->pc != 0x321F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321F7Cu; }
        if (ctx->pc != 0x321F7Cu) { return; }
    }
    ctx->pc = 0x321F7Cu;
label_321f7c:
    // 0x321f7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_321f80:
    if (ctx->pc == 0x321F80u) {
        ctx->pc = 0x321F80u;
            // 0x321f80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x321F84u;
        goto label_321f84;
    }
    ctx->pc = 0x321F7Cu;
    {
        const bool branch_taken_0x321f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321F7Cu;
            // 0x321f80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f7c) {
            ctx->pc = 0x321FA0u;
            goto label_321fa0;
        }
    }
    ctx->pc = 0x321F84u;
label_321f84:
    // 0x321f84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321f88:
    // 0x321f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321f8c:
    // 0x321f8c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x321f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_321f90:
    // 0x321f90: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x321f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_321f94:
    // 0x321f94: 0xc0a8a40  jal         func_2A2900
label_321f98:
    if (ctx->pc == 0x321F98u) {
        ctx->pc = 0x321F98u;
            // 0x321f98: 0x34460c00  ori         $a2, $v0, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
        ctx->pc = 0x321F9Cu;
        goto label_321f9c;
    }
    ctx->pc = 0x321F94u;
    SET_GPR_U32(ctx, 31, 0x321F9Cu);
    ctx->pc = 0x321F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321F94u;
            // 0x321f98: 0x34460c00  ori         $a2, $v0, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321F9Cu; }
        if (ctx->pc != 0x321F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321F9Cu; }
        if (ctx->pc != 0x321F9Cu) { return; }
    }
    ctx->pc = 0x321F9Cu;
label_321f9c:
    // 0x321f9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x321f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321fa0:
    // 0x321fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321fa4:
    // 0x321fa4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x321fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_321fa8:
    // 0x321fa8: 0x320f809  jalr        $t9
label_321fac:
    if (ctx->pc == 0x321FACu) {
        ctx->pc = 0x321FACu;
            // 0x321fac: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x321FB0u;
        goto label_321fb0;
    }
    ctx->pc = 0x321FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321FB0u);
        ctx->pc = 0x321FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321FA8u;
            // 0x321fac: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x321FB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x321FB0u; }
            if (ctx->pc != 0x321FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x321FB0u;
label_321fb0:
    // 0x321fb0: 0x1000073e  b           . + 4 + (0x73E << 2)
label_321fb4:
    if (ctx->pc == 0x321FB4u) {
        ctx->pc = 0x321FB8u;
        goto label_321fb8;
    }
    ctx->pc = 0x321FB0u;
    {
        const bool branch_taken_0x321fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fb0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x321FB8u;
label_321fb8:
    // 0x321fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321fbc:
    // 0x321fbc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x321fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_321fc0:
    // 0x321fc0: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x321fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
label_321fc4:
    // 0x321fc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_321fc8:
    // 0x321fc8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x321fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_321fcc:
    // 0x321fcc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321fd0:
    // 0x321fd0: 0x8c43fa20  lw          $v1, -0x5E0($v0)
    ctx->pc = 0x321fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
label_321fd4:
    // 0x321fd4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x321fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_321fd8:
    // 0x321fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x321fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_321fdc:
    // 0x321fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_321fe0:
    if (ctx->pc == 0x321FE0u) {
        ctx->pc = 0x321FE0u;
            // 0x321fe0: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x321FE4u;
        goto label_321fe4;
    }
    ctx->pc = 0x321FDCu;
    {
        const bool branch_taken_0x321fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321FDCu;
            // 0x321fe0: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fdc) {
            ctx->pc = 0x321FF4u;
            goto label_321ff4;
        }
    }
    ctx->pc = 0x321FE4u;
label_321fe4:
    // 0x321fe4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_321fe8:
    // 0x321fe8: 0x8c42fa18  lw          $v0, -0x5E8($v0)
    ctx->pc = 0x321fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_321fec:
    // 0x321fec: 0x401027  not         $v0, $v0
    ctx->pc = 0x321fecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_321ff0:
    // 0x321ff0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x321ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_321ff4:
    // 0x321ff4: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x321ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_321ff8:
    // 0x321ff8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x321ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_321ffc:
    // 0x321ffc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x321ffcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_322000:
    // 0x322000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_322004:
    // 0x322004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322008:
    // 0x322008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x322008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32200c:
    // 0x32200c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32200cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_322010:
    // 0x322010: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x322010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322014:
    // 0x322014: 0xacc40034  sw          $a0, 0x34($a2)
    ctx->pc = 0x322014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
label_322018:
    // 0x322018: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_32201c:
    // 0x32201c: 0xa0430038  sb          $v1, 0x38($v0)
    ctx->pc = 0x32201cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
label_322020:
    // 0x322020: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x322020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_322024:
    // 0x322024: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322028:
    // 0x322028: 0x8c73a348  lw          $s3, -0x5CB8($v1)
    ctx->pc = 0x322028u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_32202c:
    // 0x32202c: 0x3405c36e  ori         $a1, $zero, 0xC36E
    ctx->pc = 0x32202cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50030);
label_322030:
    // 0x322030: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x322030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_322034:
    // 0x322034: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322038:
    // 0x322038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x322038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32203c:
    // 0x32203c: 0xc0b3a28  jal         func_2CE8A0
label_322040:
    if (ctx->pc == 0x322040u) {
        ctx->pc = 0x322040u;
            // 0x322040: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322044u;
        goto label_322044;
    }
    ctx->pc = 0x32203Cu;
    SET_GPR_U32(ctx, 31, 0x322044u);
    ctx->pc = 0x322040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32203Cu;
            // 0x322040: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322044u; }
        if (ctx->pc != 0x322044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322044u; }
        if (ctx->pc != 0x322044u) { return; }
    }
    ctx->pc = 0x322044u;
label_322044:
    // 0x322044: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x322044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_322048:
    // 0x322048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x322048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32204c:
    // 0x32204c: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x32204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_322050:
    // 0x322050: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x322050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_322054:
    // 0x322054: 0xc0aa5d8  jal         func_2A9760
label_322058:
    if (ctx->pc == 0x322058u) {
        ctx->pc = 0x322058u;
            // 0x322058: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32205Cu;
        goto label_32205c;
    }
    ctx->pc = 0x322054u;
    SET_GPR_U32(ctx, 31, 0x32205Cu);
    ctx->pc = 0x322058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322054u;
            // 0x322058: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32205Cu; }
        if (ctx->pc != 0x32205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32205Cu; }
        if (ctx->pc != 0x32205Cu) { return; }
    }
    ctx->pc = 0x32205Cu;
label_32205c:
    // 0x32205c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32205cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_322060:
    // 0x322060: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x322060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_322064:
    // 0x322064: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_322068:
    if (ctx->pc == 0x322068u) {
        ctx->pc = 0x322068u;
            // 0x322068: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32206Cu;
        goto label_32206c;
    }
    ctx->pc = 0x322064u;
    {
        const bool branch_taken_0x322064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322064u;
            // 0x322068: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322064) {
            ctx->pc = 0x322020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322020;
        }
    }
    ctx->pc = 0x32206Cu;
label_32206c:
    // 0x32206c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32206cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322070:
    // 0x322070: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322074:
    // 0x322074: 0xa203015c  sb          $v1, 0x15C($s0)
    ctx->pc = 0x322074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 3));
label_322078:
    // 0x322078: 0x8c463e38  lw          $a2, 0x3E38($v0)
    ctx->pc = 0x322078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15928)));
label_32207c:
    // 0x32207c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_322080:
    if (ctx->pc == 0x322080u) {
        ctx->pc = 0x322084u;
        goto label_322084;
    }
    ctx->pc = 0x32207Cu;
    {
        const bool branch_taken_0x32207c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32207c) {
            ctx->pc = 0x32209Cu;
            goto label_32209c;
        }
    }
    ctx->pc = 0x322084u;
label_322084:
    // 0x322084: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_322088:
    // 0x322088: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x322088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32208c:
    // 0x32208c: 0xc0a8a40  jal         func_2A2900
label_322090:
    if (ctx->pc == 0x322090u) {
        ctx->pc = 0x322090u;
            // 0x322090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322094u;
        goto label_322094;
    }
    ctx->pc = 0x32208Cu;
    SET_GPR_U32(ctx, 31, 0x322094u);
    ctx->pc = 0x322090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32208Cu;
            // 0x322090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322094u; }
        if (ctx->pc != 0x322094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322094u; }
        if (ctx->pc != 0x322094u) { return; }
    }
    ctx->pc = 0x322094u;
label_322094:
    // 0x322094: 0x10000008  b           . + 4 + (0x8 << 2)
label_322098:
    if (ctx->pc == 0x322098u) {
        ctx->pc = 0x322098u;
            // 0x322098: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32209Cu;
        goto label_32209c;
    }
    ctx->pc = 0x322094u;
    {
        const bool branch_taken_0x322094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322094u;
            // 0x322098: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322094) {
            ctx->pc = 0x3220B8u;
            goto label_3220b8;
        }
    }
    ctx->pc = 0x32209Cu;
label_32209c:
    // 0x32209c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3220a0:
    // 0x3220a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3220a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3220a4:
    // 0x3220a4: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3220a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3220a8:
    // 0x3220a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3220a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_3220ac:
    // 0x3220ac: 0xc0a8a40  jal         func_2A2900
label_3220b0:
    if (ctx->pc == 0x3220B0u) {
        ctx->pc = 0x3220B0u;
            // 0x3220b0: 0x34460c00  ori         $a2, $v0, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
        ctx->pc = 0x3220B4u;
        goto label_3220b4;
    }
    ctx->pc = 0x3220ACu;
    SET_GPR_U32(ctx, 31, 0x3220B4u);
    ctx->pc = 0x3220B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3220ACu;
            // 0x3220b0: 0x34460c00  ori         $a2, $v0, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3220B4u; }
        if (ctx->pc != 0x3220B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3220B4u; }
        if (ctx->pc != 0x3220B4u) { return; }
    }
    ctx->pc = 0x3220B4u;
label_3220b4:
    // 0x3220b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3220b8:
    // 0x3220b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3220b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3220bc:
    // 0x3220bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3220bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3220c0:
    // 0x3220c0: 0x320f809  jalr        $t9
label_3220c4:
    if (ctx->pc == 0x3220C4u) {
        ctx->pc = 0x3220C4u;
            // 0x3220c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3220C8u;
        goto label_3220c8;
    }
    ctx->pc = 0x3220C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3220C8u);
        ctx->pc = 0x3220C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3220C0u;
            // 0x3220c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3220C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3220C8u; }
            if (ctx->pc != 0x3220C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3220C8u;
label_3220c8:
    // 0x3220c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3220c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3220cc:
    // 0x3220cc: 0x8c6689e8  lw          $a2, -0x7618($v1)
    ctx->pc = 0x3220ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3220d0:
    // 0x3220d0: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x3220d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_3220d4:
    // 0x3220d4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_3220d8:
    if (ctx->pc == 0x3220D8u) {
        ctx->pc = 0x3220D8u;
            // 0x3220d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3220DCu;
        goto label_3220dc;
    }
    ctx->pc = 0x3220D4u;
    {
        const bool branch_taken_0x3220d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3220D4u;
            // 0x3220d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220d4) {
            ctx->pc = 0x322130u;
            goto label_322130;
        }
    }
    ctx->pc = 0x3220DCu;
label_3220dc:
    // 0x3220dc: 0x8205015c  lb          $a1, 0x15C($s0)
    ctx->pc = 0x3220dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 348)));
label_3220e0:
    // 0x3220e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3220e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3220e4:
    // 0x3220e4: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
label_3220e8:
    if (ctx->pc == 0x3220E8u) {
        ctx->pc = 0x3220E8u;
            // 0x3220e8: 0x8cd90004  lw          $t9, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->pc = 0x3220ECu;
        goto label_3220ec;
    }
    ctx->pc = 0x3220E4u;
    {
        const bool branch_taken_0x3220e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3220e4) {
            ctx->pc = 0x3220E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3220E4u;
            // 0x3220e8: 0x8cd90004  lw          $t9, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322118u;
            goto label_322118;
        }
    }
    ctx->pc = 0x3220ECu;
label_3220ec:
    // 0x3220ec: 0x8cd90004  lw          $t9, 0x4($a2)
    ctx->pc = 0x3220ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3220f0:
    // 0x3220f0: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x3220f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3220f4:
    // 0x3220f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3220f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3220f8:
    // 0x3220f8: 0x3407a1c0  ori         $a3, $zero, 0xA1C0
    ctx->pc = 0x3220f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41408);
label_3220fc:
    // 0x3220fc: 0x24a5d0e0  addiu       $a1, $a1, -0x2F20
    ctx->pc = 0x3220fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955232));
label_322100:
    // 0x322100: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322104:
    // 0x322104: 0x320f809  jalr        $t9
label_322108:
    if (ctx->pc == 0x322108u) {
        ctx->pc = 0x322108u;
            // 0x322108: 0x240602e0  addiu       $a2, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->pc = 0x32210Cu;
        goto label_32210c;
    }
    ctx->pc = 0x322104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32210Cu);
        ctx->pc = 0x322108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322104u;
            // 0x322108: 0x240602e0  addiu       $a2, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32210Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32210Cu; }
            if (ctx->pc != 0x32210Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32210Cu;
label_32210c:
    // 0x32210c: 0x10000008  b           . + 4 + (0x8 << 2)
label_322110:
    if (ctx->pc == 0x322110u) {
        ctx->pc = 0x322110u;
            // 0x322110: 0xa202015c  sb          $v0, 0x15C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x322114u;
        goto label_322114;
    }
    ctx->pc = 0x32210Cu;
    {
        const bool branch_taken_0x32210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32210Cu;
            // 0x322110: 0xa202015c  sb          $v0, 0x15C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 348), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32210c) {
            ctx->pc = 0x322130u;
            goto label_322130;
        }
    }
    ctx->pc = 0x322114u;
label_322114:
    // 0x322114: 0x8cd90004  lw          $t9, 0x4($a2)
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_322118:
    // 0x322118: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x322118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32211c:
    // 0x32211c: 0x320f809  jalr        $t9
label_322120:
    if (ctx->pc == 0x322120u) {
        ctx->pc = 0x322120u;
            // 0x322120: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x322124u;
        goto label_322124;
    }
    ctx->pc = 0x32211Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322124u);
        ctx->pc = 0x322120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32211Cu;
            // 0x322120: 0x24c40004  addiu       $a0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322124u; }
            if (ctx->pc != 0x322124u) { return; }
        }
        }
    }
    ctx->pc = 0x322124u;
label_322124:
    // 0x322124: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_322128:
    if (ctx->pc == 0x322128u) {
        ctx->pc = 0x32212Cu;
        goto label_32212c;
    }
    ctx->pc = 0x322124u;
    {
        const bool branch_taken_0x322124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322124) {
            ctx->pc = 0x322130u;
            goto label_322130;
        }
    }
    ctx->pc = 0x32212Cu;
label_32212c:
    // 0x32212c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x32212cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_322130:
    // 0x322130: 0x122006de  beqz        $s1, . + 4 + (0x6DE << 2)
label_322134:
    if (ctx->pc == 0x322134u) {
        ctx->pc = 0x322138u;
        goto label_322138;
    }
    ctx->pc = 0x322130u;
    {
        const bool branch_taken_0x322130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x322130) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322138u;
label_322138:
    // 0x322138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32213c:
    // 0x32213c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x32213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_322140:
    // 0x322140: 0x8c44a348  lw          $a0, -0x5CB8($v0)
    ctx->pc = 0x322140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_322144:
    // 0x322144: 0x601827  not         $v1, $v1
    ctx->pc = 0x322144u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_322148:
    // 0x322148: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x322148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32214c:
    // 0x32214c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x32214cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322150:
    // 0x322150: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x322150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_322154:
    // 0x322154: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x322154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
label_322158:
    // 0x322158: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x322158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32215c:
    // 0x32215c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x32215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_322160:
    // 0x322160: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x322160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_322164:
    // 0x322164: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x322164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_322168:
    // 0x322168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32216c:
    // 0x32216c: 0x8e250110  lw          $a1, 0x110($s1)
    ctx->pc = 0x32216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_322170:
    // 0x322170: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_322174:
    // 0x322174: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322178:
    // 0x322178: 0xc0ab89c  jal         func_2AE270
label_32217c:
    if (ctx->pc == 0x32217Cu) {
        ctx->pc = 0x32217Cu;
            // 0x32217c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322180u;
        goto label_322180;
    }
    ctx->pc = 0x322178u;
    SET_GPR_U32(ctx, 31, 0x322180u);
    ctx->pc = 0x32217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322178u;
            // 0x32217c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322180u; }
        if (ctx->pc != 0x322180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322180u; }
        if (ctx->pc != 0x322180u) { return; }
    }
    ctx->pc = 0x322180u;
label_322180:
    // 0x322180: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x322180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_322184:
    // 0x322184: 0x8e250110  lw          $a1, 0x110($s1)
    ctx->pc = 0x322184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_322188:
    // 0x322188: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32218c:
    // 0x32218c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322190:
    // 0x322190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_322194:
    // 0x322194: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x322194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_322198:
    // 0x322198: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_32219c:
    // 0x32219c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3221a0:
    // 0x3221a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3221a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3221a4:
    // 0x3221a4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3221a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3221a8:
    // 0x3221a8: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x3221a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
label_3221ac:
    // 0x3221ac: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x3221acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3221b0:
    // 0x3221b0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_3221b4:
    if (ctx->pc == 0x3221B4u) {
        ctx->pc = 0x3221B4u;
            // 0x3221b4: 0xac650060  sw          $a1, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
        ctx->pc = 0x3221B8u;
        goto label_3221b8;
    }
    ctx->pc = 0x3221B0u;
    {
        const bool branch_taken_0x3221b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3221B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3221B0u;
            // 0x3221b4: 0xac650060  sw          $a1, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221b0) {
            ctx->pc = 0x322168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322168;
        }
    }
    ctx->pc = 0x3221B8u;
label_3221b8:
    // 0x3221b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3221b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3221bc:
    // 0x3221bc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3221c0:
    // 0x3221c0: 0x90420092  lbu         $v0, 0x92($v0)
    ctx->pc = 0x3221c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 146)));
label_3221c4:
    // 0x3221c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3221c8:
    if (ctx->pc == 0x3221C8u) {
        ctx->pc = 0x3221C8u;
            // 0x3221c8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3221CCu;
        goto label_3221cc;
    }
    ctx->pc = 0x3221C4u;
    {
        const bool branch_taken_0x3221c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3221c4) {
            ctx->pc = 0x3221C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3221C4u;
            // 0x3221c8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3221FCu;
            goto label_3221fc;
        }
    }
    ctx->pc = 0x3221CCu;
label_3221cc:
    // 0x3221cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3221ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3221d0:
    // 0x3221d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3221d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3221d4:
    // 0x3221d4: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x3221d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_3221d8:
    // 0x3221d8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_3221dc:
    if (ctx->pc == 0x3221DCu) {
        ctx->pc = 0x3221E0u;
        goto label_3221e0;
    }
    ctx->pc = 0x3221D8u;
    {
        const bool branch_taken_0x3221d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3221d8) {
            ctx->pc = 0x3221F8u;
            goto label_3221f8;
        }
    }
    ctx->pc = 0x3221E0u;
label_3221e0:
    // 0x3221e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3221e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3221e4:
    // 0x3221e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3221e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3221e8:
    // 0x3221e8: 0x320f809  jalr        $t9
label_3221ec:
    if (ctx->pc == 0x3221ECu) {
        ctx->pc = 0x3221ECu;
            // 0x3221ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3221F0u;
        goto label_3221f0;
    }
    ctx->pc = 0x3221E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3221F0u);
        ctx->pc = 0x3221ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3221E8u;
            // 0x3221ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3221F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3221F0u; }
            if (ctx->pc != 0x3221F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3221F0u;
label_3221f0:
    // 0x3221f0: 0x100006ae  b           . + 4 + (0x6AE << 2)
label_3221f4:
    if (ctx->pc == 0x3221F4u) {
        ctx->pc = 0x3221F8u;
        goto label_3221f8;
    }
    ctx->pc = 0x3221F0u;
    {
        const bool branch_taken_0x3221f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3221f0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3221F8u;
label_3221f8:
    // 0x3221f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3221fc:
    // 0x3221fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3221fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322200:
    // 0x322200: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322204:
    // 0x322204: 0x320f809  jalr        $t9
label_322208:
    if (ctx->pc == 0x322208u) {
        ctx->pc = 0x322208u;
            // 0x322208: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x32220Cu;
        goto label_32220c;
    }
    ctx->pc = 0x322204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32220Cu);
        ctx->pc = 0x322208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322204u;
            // 0x322208: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32220Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32220Cu; }
            if (ctx->pc != 0x32220Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32220Cu;
label_32220c:
    // 0x32220c: 0x100006a7  b           . + 4 + (0x6A7 << 2)
label_322210:
    if (ctx->pc == 0x322210u) {
        ctx->pc = 0x322214u;
        goto label_322214;
    }
    ctx->pc = 0x32220Cu;
    {
        const bool branch_taken_0x32220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32220c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322214u;
label_322214:
    // 0x322214: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322218:
    // 0x322218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x322218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32221c:
    // 0x32221c: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x32221cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_322220:
    // 0x322220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322224:
    // 0x322224: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x322224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
label_322228:
    // 0x322228: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x322228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_32222c:
    // 0x32222c: 0xc0ca1b0  jal         func_3286C0
label_322230:
    if (ctx->pc == 0x322230u) {
        ctx->pc = 0x322230u;
            // 0x322230: 0xa0430038  sb          $v1, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x322234u;
        goto label_322234;
    }
    ctx->pc = 0x32222Cu;
    SET_GPR_U32(ctx, 31, 0x322234u);
    ctx->pc = 0x322230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32222Cu;
            // 0x322230: 0xa0430038  sb          $v1, 0x38($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322234u; }
        if (ctx->pc != 0x322234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322234u; }
        if (ctx->pc != 0x322234u) { return; }
    }
    ctx->pc = 0x322234u;
label_322234:
    // 0x322234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322238:
    // 0x322238: 0xc0c9ec0  jal         func_327B00
label_32223c:
    if (ctx->pc == 0x32223Cu) {
        ctx->pc = 0x32223Cu;
            // 0x32223c: 0x3405cb98  ori         $a1, $zero, 0xCB98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
        ctx->pc = 0x322240u;
        goto label_322240;
    }
    ctx->pc = 0x322238u;
    SET_GPR_U32(ctx, 31, 0x322240u);
    ctx->pc = 0x32223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322238u;
            // 0x32223c: 0x3405cb98  ori         $a1, $zero, 0xCB98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322240u; }
        if (ctx->pc != 0x322240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322240u; }
        if (ctx->pc != 0x322240u) { return; }
    }
    ctx->pc = 0x322240u;
label_322240:
    // 0x322240: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322244:
    // 0x322244: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322248:
    // 0x322248: 0x320f809  jalr        $t9
label_32224c:
    if (ctx->pc == 0x32224Cu) {
        ctx->pc = 0x32224Cu;
            // 0x32224c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322250u;
        goto label_322250;
    }
    ctx->pc = 0x322248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322250u);
        ctx->pc = 0x32224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322248u;
            // 0x32224c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322250u; }
            if (ctx->pc != 0x322250u) { return; }
        }
        }
    }
    ctx->pc = 0x322250u;
label_322250:
    // 0x322250: 0xae000684  sw          $zero, 0x684($s0)
    ctx->pc = 0x322250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
label_322254:
    // 0x322254: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x322254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_322258:
    // 0x322258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32225c:
    // 0x32225c: 0x50830015  beql        $a0, $v1, . + 4 + (0x15 << 2)
label_322260:
    if (ctx->pc == 0x322260u) {
        ctx->pc = 0x322260u;
            // 0x322260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322264u;
        goto label_322264;
    }
    ctx->pc = 0x32225Cu;
    {
        const bool branch_taken_0x32225c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32225c) {
            ctx->pc = 0x322260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32225Cu;
            // 0x322260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3222B4u;
            goto label_3222b4;
        }
    }
    ctx->pc = 0x322264u;
label_322264:
    // 0x322264: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322268:
    if (ctx->pc == 0x322268u) {
        ctx->pc = 0x322268u;
            // 0x322268: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x32226Cu;
        goto label_32226c;
    }
    ctx->pc = 0x322264u;
    {
        const bool branch_taken_0x322264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322264) {
            ctx->pc = 0x322268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322264u;
            // 0x322268: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322278u;
            goto label_322278;
        }
    }
    ctx->pc = 0x32226Cu;
label_32226c:
    // 0x32226c: 0x1000068f  b           . + 4 + (0x68F << 2)
label_322270:
    if (ctx->pc == 0x322270u) {
        ctx->pc = 0x322274u;
        goto label_322274;
    }
    ctx->pc = 0x32226Cu;
    {
        const bool branch_taken_0x32226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32226c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322274u;
label_322274:
    // 0x322274: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x322274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_322278:
    // 0x322278: 0x10a0068c  beqz        $a1, . + 4 + (0x68C << 2)
label_32227c:
    if (ctx->pc == 0x32227Cu) {
        ctx->pc = 0x322280u;
        goto label_322280;
    }
    ctx->pc = 0x322278u;
    {
        const bool branch_taken_0x322278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x322278) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322280u;
label_322280:
    // 0x322280: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322284:
    // 0x322284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322288:
    // 0x322288: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_32228c:
    // 0x32228c: 0xc0ab89c  jal         func_2AE270
label_322290:
    if (ctx->pc == 0x322290u) {
        ctx->pc = 0x322290u;
            // 0x322290: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322294u;
        goto label_322294;
    }
    ctx->pc = 0x32228Cu;
    SET_GPR_U32(ctx, 31, 0x322294u);
    ctx->pc = 0x322290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32228Cu;
            // 0x322290: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322294u; }
        if (ctx->pc != 0x322294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322294u; }
        if (ctx->pc != 0x322294u) { return; }
    }
    ctx->pc = 0x322294u;
label_322294:
    // 0x322294: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x322294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_322298:
    // 0x322298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x322298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32229c:
    // 0x32229c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3222a0:
    // 0x3222a0: 0xae040684  sw          $a0, 0x684($s0)
    ctx->pc = 0x3222a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 4));
label_3222a4:
    // 0x3222a4: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x3222a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_3222a8:
    // 0x3222a8: 0x10000680  b           . + 4 + (0x680 << 2)
label_3222ac:
    if (ctx->pc == 0x3222ACu) {
        ctx->pc = 0x3222ACu;
            // 0x3222ac: 0xa0600038  sb          $zero, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3222B0u;
        goto label_3222b0;
    }
    ctx->pc = 0x3222A8u;
    {
        const bool branch_taken_0x3222a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3222ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3222A8u;
            // 0x3222ac: 0xa0600038  sb          $zero, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222a8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3222B0u;
label_3222b0:
    // 0x3222b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3222b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3222b4:
    // 0x3222b4: 0xc0c796c  jal         func_31E5B0
label_3222b8:
    if (ctx->pc == 0x3222B8u) {
        ctx->pc = 0x3222BCu;
        goto label_3222bc;
    }
    ctx->pc = 0x3222B4u;
    SET_GPR_U32(ctx, 31, 0x3222BCu);
    ctx->pc = 0x31E5B0u;
    if (runtime->hasFunction(0x31E5B0u)) {
        auto targetFn = runtime->lookupFunction(0x31E5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3222BCu; }
        if (ctx->pc != 0x3222BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E5B0_0x31e5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3222BCu; }
        if (ctx->pc != 0x3222BCu) { return; }
    }
    ctx->pc = 0x3222BCu;
label_3222bc:
    // 0x3222bc: 0x1440067b  bnez        $v0, . + 4 + (0x67B << 2)
label_3222c0:
    if (ctx->pc == 0x3222C0u) {
        ctx->pc = 0x3222C4u;
        goto label_3222c4;
    }
    ctx->pc = 0x3222BCu;
    {
        const bool branch_taken_0x3222bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3222bc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3222C4u;
label_3222c4:
    // 0x3222c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3222c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3222c8:
    // 0x3222c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3222c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3222cc:
    // 0x3222cc: 0x320f809  jalr        $t9
label_3222d0:
    if (ctx->pc == 0x3222D0u) {
        ctx->pc = 0x3222D0u;
            // 0x3222d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3222D4u;
        goto label_3222d4;
    }
    ctx->pc = 0x3222CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3222D4u);
        ctx->pc = 0x3222D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3222CCu;
            // 0x3222d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3222D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3222D4u; }
            if (ctx->pc != 0x3222D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3222D4u;
label_3222d4:
    // 0x3222d4: 0x10000675  b           . + 4 + (0x675 << 2)
label_3222d8:
    if (ctx->pc == 0x3222D8u) {
        ctx->pc = 0x3222DCu;
        goto label_3222dc;
    }
    ctx->pc = 0x3222D4u;
    {
        const bool branch_taken_0x3222d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3222d4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3222DCu;
label_3222dc:
    // 0x3222dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3222dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3222e0:
    // 0x3222e0: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x3222e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_3222e4:
    // 0x3222e4: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x3222e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_3222e8:
    // 0x3222e8: 0x14600670  bnez        $v1, . + 4 + (0x670 << 2)
label_3222ec:
    if (ctx->pc == 0x3222ECu) {
        ctx->pc = 0x3222F0u;
        goto label_3222f0;
    }
    ctx->pc = 0x3222E8u;
    {
        const bool branch_taken_0x3222e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3222e8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3222F0u;
label_3222f0:
    // 0x3222f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3222f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3222f4:
    // 0x3222f4: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x3222f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_3222f8:
    // 0x3222f8: 0xc151cc0  jal         func_547300
label_3222fc:
    if (ctx->pc == 0x3222FCu) {
        ctx->pc = 0x3222FCu;
            // 0x3222fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x322300u;
        goto label_322300;
    }
    ctx->pc = 0x3222F8u;
    SET_GPR_U32(ctx, 31, 0x322300u);
    ctx->pc = 0x3222FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3222F8u;
            // 0x3222fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547300u;
    if (runtime->hasFunction(0x547300u)) {
        auto targetFn = runtime->lookupFunction(0x547300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322300u; }
        if (ctx->pc != 0x322300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547300_0x547300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322300u; }
        if (ctx->pc != 0x322300u) { return; }
    }
    ctx->pc = 0x322300u;
label_322300:
    // 0x322300: 0xc040180  jal         func_100600
label_322304:
    if (ctx->pc == 0x322304u) {
        ctx->pc = 0x322304u;
            // 0x322304: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x322308u;
        goto label_322308;
    }
    ctx->pc = 0x322300u;
    SET_GPR_U32(ctx, 31, 0x322308u);
    ctx->pc = 0x322304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322300u;
            // 0x322304: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322308u; }
        if (ctx->pc != 0x322308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322308u; }
        if (ctx->pc != 0x322308u) { return; }
    }
    ctx->pc = 0x322308u;
label_322308:
    // 0x322308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32230c:
    // 0x32230c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_322310:
    if (ctx->pc == 0x322310u) {
        ctx->pc = 0x322314u;
        goto label_322314;
    }
    ctx->pc = 0x32230Cu;
    {
        const bool branch_taken_0x32230c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32230c) {
            ctx->pc = 0x322338u;
            goto label_322338;
        }
    }
    ctx->pc = 0x322314u;
label_322314:
    // 0x322314: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322318:
    // 0x322318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32231c:
    // 0x32231c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x32231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_322320:
    // 0x322320: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322324:
    // 0x322324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322328:
    // 0x322328: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x322328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32232c:
    // 0x32232c: 0xc151190  jal         func_544640
label_322330:
    if (ctx->pc == 0x322330u) {
        ctx->pc = 0x322330u;
            // 0x322330: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322334u;
        goto label_322334;
    }
    ctx->pc = 0x32232Cu;
    SET_GPR_U32(ctx, 31, 0x322334u);
    ctx->pc = 0x322330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32232Cu;
            // 0x322330: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322334u; }
        if (ctx->pc != 0x322334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322334u; }
        if (ctx->pc != 0x322334u) { return; }
    }
    ctx->pc = 0x322334u;
label_322334:
    // 0x322334: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322338:
    // 0x322338: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32233c:
    // 0x32233c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_322340:
    // 0x322340: 0xc1206b0  jal         func_481AC0
label_322344:
    if (ctx->pc == 0x322344u) {
        ctx->pc = 0x322344u;
            // 0x322344: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x322348u;
        goto label_322348;
    }
    ctx->pc = 0x322340u;
    SET_GPR_U32(ctx, 31, 0x322348u);
    ctx->pc = 0x322344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322340u;
            // 0x322344: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322348u; }
        if (ctx->pc != 0x322348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322348u; }
        if (ctx->pc != 0x322348u) { return; }
    }
    ctx->pc = 0x322348u;
label_322348:
    // 0x322348: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x322348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32234c:
    // 0x32234c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322350:
    // 0x322350: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x322350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_322354:
    // 0x322354: 0x320f809  jalr        $t9
label_322358:
    if (ctx->pc == 0x322358u) {
        ctx->pc = 0x322358u;
            // 0x322358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32235Cu;
        goto label_32235c;
    }
    ctx->pc = 0x322354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32235Cu);
        ctx->pc = 0x322358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322354u;
            // 0x322358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32235Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32235Cu; }
            if (ctx->pc != 0x32235Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32235Cu;
label_32235c:
    // 0x32235c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x32235cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322360:
    // 0x322360: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x322360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_322364:
    // 0x322364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322368:
    // 0x322368: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x322368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_32236c:
    // 0x32236c: 0x320f809  jalr        $t9
label_322370:
    if (ctx->pc == 0x322370u) {
        ctx->pc = 0x322370u;
            // 0x322370: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x322374u;
        goto label_322374;
    }
    ctx->pc = 0x32236Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322374u);
        ctx->pc = 0x322370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32236Cu;
            // 0x322370: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322374u; }
            if (ctx->pc != 0x322374u) { return; }
        }
        }
    }
    ctx->pc = 0x322374u;
label_322374:
    // 0x322374: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322378:
    // 0x322378: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32237c:
    // 0x32237c: 0x320f809  jalr        $t9
label_322380:
    if (ctx->pc == 0x322380u) {
        ctx->pc = 0x322380u;
            // 0x322380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322384u;
        goto label_322384;
    }
    ctx->pc = 0x32237Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322384u);
        ctx->pc = 0x322380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32237Cu;
            // 0x322380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322384u; }
            if (ctx->pc != 0x322384u) { return; }
        }
        }
    }
    ctx->pc = 0x322384u;
label_322384:
    // 0x322384: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x322384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_322388:
    // 0x322388: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x322388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_32238c:
    // 0x32238c: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x32238cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_322390:
    // 0x322390: 0x14600646  bnez        $v1, . + 4 + (0x646 << 2)
label_322394:
    if (ctx->pc == 0x322394u) {
        ctx->pc = 0x322398u;
        goto label_322398;
    }
    ctx->pc = 0x322390u;
    {
        const bool branch_taken_0x322390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322390) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322398u;
label_322398:
    // 0x322398: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32239c:
    // 0x32239c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32239cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3223a0:
    // 0x3223a0: 0x320f809  jalr        $t9
label_3223a4:
    if (ctx->pc == 0x3223A4u) {
        ctx->pc = 0x3223A4u;
            // 0x3223a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3223A8u;
        goto label_3223a8;
    }
    ctx->pc = 0x3223A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3223A8u);
        ctx->pc = 0x3223A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3223A0u;
            // 0x3223a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3223A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3223A8u; }
            if (ctx->pc != 0x3223A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3223A8u;
label_3223a8:
    // 0x3223a8: 0xc0c903c  jal         func_3240F0
label_3223ac:
    if (ctx->pc == 0x3223ACu) {
        ctx->pc = 0x3223ACu;
            // 0x3223ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3223B0u;
        goto label_3223b0;
    }
    ctx->pc = 0x3223A8u;
    SET_GPR_U32(ctx, 31, 0x3223B0u);
    ctx->pc = 0x3223ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3223A8u;
            // 0x3223ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3240F0u;
    if (runtime->hasFunction(0x3240F0u)) {
        auto targetFn = runtime->lookupFunction(0x3240F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3223B0u; }
        if (ctx->pc != 0x3223B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003240F0_0x3240f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3223B0u; }
        if (ctx->pc != 0x3223B0u) { return; }
    }
    ctx->pc = 0x3223B0u;
label_3223b0:
    // 0x3223b0: 0x1000063e  b           . + 4 + (0x63E << 2)
label_3223b4:
    if (ctx->pc == 0x3223B4u) {
        ctx->pc = 0x3223B8u;
        goto label_3223b8;
    }
    ctx->pc = 0x3223B0u;
    {
        const bool branch_taken_0x3223b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3223b0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3223B8u;
label_3223b8:
    // 0x3223b8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3223b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3223bc:
    // 0x3223bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3223bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3223c0:
    // 0x3223c0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x3223c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_3223c4:
    // 0x3223c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3223c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3223c8:
    // 0x3223c8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3223c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3223cc:
    // 0x3223cc: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_3223d0:
    // 0x3223d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3223d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3223d4:
    // 0x3223d4: 0xa0650038  sb          $a1, 0x38($v1)
    ctx->pc = 0x3223d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 5));
label_3223d8:
    // 0x3223d8: 0xae00067c  sw          $zero, 0x67C($s0)
    ctx->pc = 0x3223d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 0));
label_3223dc:
    // 0x3223dc: 0xc0ca1b0  jal         func_3286C0
label_3223e0:
    if (ctx->pc == 0x3223E0u) {
        ctx->pc = 0x3223E0u;
            // 0x3223e0: 0xac403e30  sw          $zero, 0x3E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 0));
        ctx->pc = 0x3223E4u;
        goto label_3223e4;
    }
    ctx->pc = 0x3223DCu;
    SET_GPR_U32(ctx, 31, 0x3223E4u);
    ctx->pc = 0x3223E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3223DCu;
            // 0x3223e0: 0xac403e30  sw          $zero, 0x3E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3223E4u; }
        if (ctx->pc != 0x3223E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3223E4u; }
        if (ctx->pc != 0x3223E4u) { return; }
    }
    ctx->pc = 0x3223E4u;
label_3223e4:
    // 0x3223e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3223e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3223e8:
    // 0x3223e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3223e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3223ec:
    // 0x3223ec: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x3223ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3223f0:
    // 0x3223f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3223f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3223f4:
    // 0x3223f4: 0x8c43fa20  lw          $v1, -0x5E0($v0)
    ctx->pc = 0x3223f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
label_3223f8:
    // 0x3223f8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3223f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3223fc:
    // 0x3223fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3223fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_322400:
    // 0x322400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_322404:
    if (ctx->pc == 0x322404u) {
        ctx->pc = 0x322404u;
            // 0x322404: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x322408u;
        goto label_322408;
    }
    ctx->pc = 0x322400u;
    {
        const bool branch_taken_0x322400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322400u;
            // 0x322404: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322400) {
            ctx->pc = 0x322418u;
            goto label_322418;
        }
    }
    ctx->pc = 0x322408u;
label_322408:
    // 0x322408: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x322408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32240c:
    // 0x32240c: 0x8c42fa18  lw          $v0, -0x5E8($v0)
    ctx->pc = 0x32240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_322410:
    // 0x322410: 0x401027  not         $v0, $v0
    ctx->pc = 0x322410u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_322414:
    // 0x322414: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x322414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_322418:
    // 0x322418: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x322418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_32241c:
    // 0x32241c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x32241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_322420:
    // 0x322420: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x322420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_322424:
    // 0x322424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322428:
    // 0x322428: 0x3405cb4d  ori         $a1, $zero, 0xCB4D
    ctx->pc = 0x322428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52045);
label_32242c:
    // 0x32242c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_322430:
    // 0x322430: 0xc0c9ec0  jal         func_327B00
label_322434:
    if (ctx->pc == 0x322434u) {
        ctx->pc = 0x322434u;
            // 0x322434: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x322438u;
        goto label_322438;
    }
    ctx->pc = 0x322430u;
    SET_GPR_U32(ctx, 31, 0x322438u);
    ctx->pc = 0x322434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322430u;
            // 0x322434: 0xacc20034  sw          $v0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322438u; }
        if (ctx->pc != 0x322438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322438u; }
        if (ctx->pc != 0x322438u) { return; }
    }
    ctx->pc = 0x322438u;
label_322438:
    // 0x322438: 0xc040180  jal         func_100600
label_32243c:
    if (ctx->pc == 0x32243Cu) {
        ctx->pc = 0x32243Cu;
            // 0x32243c: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x322440u;
        goto label_322440;
    }
    ctx->pc = 0x322438u;
    SET_GPR_U32(ctx, 31, 0x322440u);
    ctx->pc = 0x32243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322438u;
            // 0x32243c: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322440u; }
        if (ctx->pc != 0x322440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322440u; }
        if (ctx->pc != 0x322440u) { return; }
    }
    ctx->pc = 0x322440u;
label_322440:
    // 0x322440: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_322444:
    if (ctx->pc == 0x322444u) {
        ctx->pc = 0x322444u;
            // 0x322444: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322448u;
        goto label_322448;
    }
    ctx->pc = 0x322440u;
    {
        const bool branch_taken_0x322440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322440u;
            // 0x322444: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322440) {
            ctx->pc = 0x322490u;
            goto label_322490;
        }
    }
    ctx->pc = 0x322448u;
label_322448:
    // 0x322448: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32244c:
    // 0x32244c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322450:
    // 0x322450: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322454:
    // 0x322454: 0xc10ca68  jal         func_4329A0
label_322458:
    if (ctx->pc == 0x322458u) {
        ctx->pc = 0x322458u;
            // 0x322458: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32245Cu;
        goto label_32245c;
    }
    ctx->pc = 0x322454u;
    SET_GPR_U32(ctx, 31, 0x32245Cu);
    ctx->pc = 0x322458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322454u;
            // 0x322458: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32245Cu; }
        if (ctx->pc != 0x32245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32245Cu; }
        if (ctx->pc != 0x32245Cu) { return; }
    }
    ctx->pc = 0x32245Cu;
label_32245c:
    // 0x32245c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_322460:
    // 0x322460: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x322460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_322464:
    // 0x322464: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x322464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_322468:
    // 0x322468: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x322468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
label_32246c:
    // 0x32246c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32246cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322470:
    // 0x322470: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322474:
    // 0x322474: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322478:
    // 0x322478: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x322478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_32247c:
    // 0x32247c: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x32247cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_322480:
    // 0x322480: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x322480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_322484:
    // 0x322484: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x322484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_322488:
    // 0x322488: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x322488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_32248c:
    // 0x32248c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x32248cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_322490:
    // 0x322490: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322494:
    // 0x322494: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322498:
    // 0x322498: 0x320f809  jalr        $t9
label_32249c:
    if (ctx->pc == 0x32249Cu) {
        ctx->pc = 0x32249Cu;
            // 0x32249c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3224A0u;
        goto label_3224a0;
    }
    ctx->pc = 0x322498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3224A0u);
        ctx->pc = 0x32249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322498u;
            // 0x32249c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3224A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3224A0u; }
            if (ctx->pc != 0x3224A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3224A0u;
label_3224a0:
    // 0x3224a0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3224a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3224a4:
    // 0x3224a4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3224a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3224a8:
    // 0x3224a8: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
label_3224ac:
    if (ctx->pc == 0x3224ACu) {
        ctx->pc = 0x3224ACu;
            // 0x3224ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3224B0u;
        goto label_3224b0;
    }
    ctx->pc = 0x3224A8u;
    {
        const bool branch_taken_0x3224a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3224a8) {
            ctx->pc = 0x3224ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3224A8u;
            // 0x3224ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3224E0u;
            goto label_3224e0;
        }
    }
    ctx->pc = 0x3224B0u;
label_3224b0:
    // 0x3224b0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3224b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3224b4:
    // 0x3224b4: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_3224b8:
    if (ctx->pc == 0x3224B8u) {
        ctx->pc = 0x3224B8u;
            // 0x3224b8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3224BCu;
        goto label_3224bc;
    }
    ctx->pc = 0x3224B4u;
    {
        const bool branch_taken_0x3224b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3224b4) {
            ctx->pc = 0x3224B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3224B4u;
            // 0x3224b8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3224C8u;
            goto label_3224c8;
        }
    }
    ctx->pc = 0x3224BCu;
label_3224bc:
    // 0x3224bc: 0x100005fb  b           . + 4 + (0x5FB << 2)
label_3224c0:
    if (ctx->pc == 0x3224C0u) {
        ctx->pc = 0x3224C4u;
        goto label_3224c4;
    }
    ctx->pc = 0x3224BCu;
    {
        const bool branch_taken_0x3224bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3224bc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3224C4u;
label_3224c4:
    // 0x3224c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3224c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3224c8:
    // 0x3224c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3224c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3224cc:
    // 0x3224cc: 0x320f809  jalr        $t9
label_3224d0:
    if (ctx->pc == 0x3224D0u) {
        ctx->pc = 0x3224D0u;
            // 0x3224d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3224D4u;
        goto label_3224d4;
    }
    ctx->pc = 0x3224CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3224D4u);
        ctx->pc = 0x3224D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3224CCu;
            // 0x3224d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3224D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3224D4u; }
            if (ctx->pc != 0x3224D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3224D4u;
label_3224d4:
    // 0x3224d4: 0x100005f5  b           . + 4 + (0x5F5 << 2)
label_3224d8:
    if (ctx->pc == 0x3224D8u) {
        ctx->pc = 0x3224DCu;
        goto label_3224dc;
    }
    ctx->pc = 0x3224D4u;
    {
        const bool branch_taken_0x3224d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3224d4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3224DCu;
label_3224dc:
    // 0x3224dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3224dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3224e0:
    // 0x3224e0: 0xc0ca2a0  jal         func_328A80
label_3224e4:
    if (ctx->pc == 0x3224E4u) {
        ctx->pc = 0x3224E8u;
        goto label_3224e8;
    }
    ctx->pc = 0x3224E0u;
    SET_GPR_U32(ctx, 31, 0x3224E8u);
    ctx->pc = 0x328A80u;
    if (runtime->hasFunction(0x328A80u)) {
        auto targetFn = runtime->lookupFunction(0x328A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3224E8u; }
        if (ctx->pc != 0x3224E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328A80_0x328a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3224E8u; }
        if (ctx->pc != 0x3224E8u) { return; }
    }
    ctx->pc = 0x3224E8u;
label_3224e8:
    // 0x3224e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3224e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3224ec:
    // 0x3224ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3224ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3224f0:
    // 0x3224f0: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x3224f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_3224f4:
    // 0x3224f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3224f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3224f8:
    // 0x3224f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3224f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3224fc:
    // 0x3224fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3224fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322500:
    // 0x322500: 0x320f809  jalr        $t9
label_322504:
    if (ctx->pc == 0x322504u) {
        ctx->pc = 0x322504u;
            // 0x322504: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x322508u;
        goto label_322508;
    }
    ctx->pc = 0x322500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322508u);
        ctx->pc = 0x322504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322500u;
            // 0x322504: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322508u; }
            if (ctx->pc != 0x322508u) { return; }
        }
        }
    }
    ctx->pc = 0x322508u;
label_322508:
    // 0x322508: 0x100005e8  b           . + 4 + (0x5E8 << 2)
label_32250c:
    if (ctx->pc == 0x32250Cu) {
        ctx->pc = 0x322510u;
        goto label_322510;
    }
    ctx->pc = 0x322508u;
    {
        const bool branch_taken_0x322508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322508) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322510u;
label_322510:
    // 0x322510: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x322510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322514:
    // 0x322514: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x322514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_322518:
    // 0x322518: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x322518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_32251c:
    // 0x32251c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x32251cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_322520:
    // 0x322520: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x322520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_322524:
    // 0x322524: 0x90420092  lbu         $v0, 0x92($v0)
    ctx->pc = 0x322524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 146)));
label_322528:
    // 0x322528: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_32252c:
    if (ctx->pc == 0x32252Cu) {
        ctx->pc = 0x32252Cu;
            // 0x32252c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322530u;
        goto label_322530;
    }
    ctx->pc = 0x322528u;
    {
        const bool branch_taken_0x322528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322528) {
            ctx->pc = 0x32252Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322528u;
            // 0x32252c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322558u;
            goto label_322558;
        }
    }
    ctx->pc = 0x322530u;
label_322530:
    // 0x322530: 0xc040180  jal         func_100600
label_322534:
    if (ctx->pc == 0x322534u) {
        ctx->pc = 0x322534u;
            // 0x322534: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x322538u;
        goto label_322538;
    }
    ctx->pc = 0x322530u;
    SET_GPR_U32(ctx, 31, 0x322538u);
    ctx->pc = 0x322534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322530u;
            // 0x322534: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322538u; }
        if (ctx->pc != 0x322538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322538u; }
        if (ctx->pc != 0x322538u) { return; }
    }
    ctx->pc = 0x322538u;
label_322538:
    // 0x322538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32253c:
    if (ctx->pc == 0x32253Cu) {
        ctx->pc = 0x322540u;
        goto label_322540;
    }
    ctx->pc = 0x322538u;
    {
        const bool branch_taken_0x322538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322538) {
            ctx->pc = 0x322554u;
            goto label_322554;
        }
    }
    ctx->pc = 0x322540u;
label_322540:
    // 0x322540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322544:
    // 0x322544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x322544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322548:
    // 0x322548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32254c:
    // 0x32254c: 0xc153064  jal         func_54C190
label_322550:
    if (ctx->pc == 0x322550u) {
        ctx->pc = 0x322550u;
            // 0x322550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322554u;
        goto label_322554;
    }
    ctx->pc = 0x32254Cu;
    SET_GPR_U32(ctx, 31, 0x322554u);
    ctx->pc = 0x322550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32254Cu;
            // 0x322550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54C190u;
    if (runtime->hasFunction(0x54C190u)) {
        auto targetFn = runtime->lookupFunction(0x54C190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322554u; }
        if (ctx->pc != 0x322554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054C190_0x54c190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322554u; }
        if (ctx->pc != 0x322554u) { return; }
    }
    ctx->pc = 0x322554u;
label_322554:
    // 0x322554: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322558:
    // 0x322558: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32255c:
    // 0x32255c: 0x320f809  jalr        $t9
label_322560:
    if (ctx->pc == 0x322560u) {
        ctx->pc = 0x322560u;
            // 0x322560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322564u;
        goto label_322564;
    }
    ctx->pc = 0x32255Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322564u);
        ctx->pc = 0x322560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32255Cu;
            // 0x322560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322564u; }
            if (ctx->pc != 0x322564u) { return; }
        }
        }
    }
    ctx->pc = 0x322564u;
label_322564:
    // 0x322564: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x322564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_322568:
    // 0x322568: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x322568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_32256c:
    // 0x32256c: 0x90a30092  lbu         $v1, 0x92($a1)
    ctx->pc = 0x32256cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 146)));
label_322570:
    // 0x322570: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_322574:
    if (ctx->pc == 0x322574u) {
        ctx->pc = 0x322574u;
            // 0x322574: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x322578u;
        goto label_322578;
    }
    ctx->pc = 0x322570u;
    {
        const bool branch_taken_0x322570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x322570) {
            ctx->pc = 0x322574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322570u;
            // 0x322574: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322594u;
            goto label_322594;
        }
    }
    ctx->pc = 0x322578u;
label_322578:
    // 0x322578: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32257c:
    // 0x32257c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32257cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322580:
    // 0x322580: 0x320f809  jalr        $t9
label_322584:
    if (ctx->pc == 0x322584u) {
        ctx->pc = 0x322584u;
            // 0x322584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322588u;
        goto label_322588;
    }
    ctx->pc = 0x322580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322588u);
        ctx->pc = 0x322584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322580u;
            // 0x322584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322588u; }
            if (ctx->pc != 0x322588u) { return; }
        }
        }
    }
    ctx->pc = 0x322588u;
label_322588:
    // 0x322588: 0x10000041  b           . + 4 + (0x41 << 2)
label_32258c:
    if (ctx->pc == 0x32258Cu) {
        ctx->pc = 0x32258Cu;
            // 0x32258c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322590u;
        goto label_322590;
    }
    ctx->pc = 0x322588u;
    {
        const bool branch_taken_0x322588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322588u;
            // 0x32258c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322588) {
            ctx->pc = 0x322690u;
            goto label_322690;
        }
    }
    ctx->pc = 0x322590u;
label_322590:
    // 0x322590: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_322594:
    // 0x322594: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x322594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322598:
    // 0x322598: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
label_32259c:
    if (ctx->pc == 0x32259Cu) {
        ctx->pc = 0x32259Cu;
            // 0x32259c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3225A0u;
        goto label_3225a0;
    }
    ctx->pc = 0x322598u;
    {
        const bool branch_taken_0x322598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322598) {
            ctx->pc = 0x32259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322598u;
            // 0x32259c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3225D8u;
            goto label_3225d8;
        }
    }
    ctx->pc = 0x3225A0u;
label_3225a0:
    // 0x3225a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3225a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3225a4:
    // 0x3225a4: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_3225a8:
    if (ctx->pc == 0x3225A8u) {
        ctx->pc = 0x3225A8u;
            // 0x3225a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3225ACu;
        goto label_3225ac;
    }
    ctx->pc = 0x3225A4u;
    {
        const bool branch_taken_0x3225a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3225a4) {
            ctx->pc = 0x3225A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3225A4u;
            // 0x3225a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3225B8u;
            goto label_3225b8;
        }
    }
    ctx->pc = 0x3225ACu;
label_3225ac:
    // 0x3225ac: 0x100005bf  b           . + 4 + (0x5BF << 2)
label_3225b0:
    if (ctx->pc == 0x3225B0u) {
        ctx->pc = 0x3225B4u;
        goto label_3225b4;
    }
    ctx->pc = 0x3225ACu;
    {
        const bool branch_taken_0x3225ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3225ac) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3225B4u;
label_3225b4:
    // 0x3225b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3225b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3225b8:
    // 0x3225b8: 0xa0a20092  sb          $v0, 0x92($a1)
    ctx->pc = 0x3225b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 146), (uint8_t)GPR_U32(ctx, 2));
label_3225bc:
    // 0x3225bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3225bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3225c0:
    // 0x3225c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3225c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3225c4:
    // 0x3225c4: 0x320f809  jalr        $t9
label_3225c8:
    if (ctx->pc == 0x3225C8u) {
        ctx->pc = 0x3225C8u;
            // 0x3225c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3225CCu;
        goto label_3225cc;
    }
    ctx->pc = 0x3225C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3225CCu);
        ctx->pc = 0x3225C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3225C4u;
            // 0x3225c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3225CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3225CCu; }
            if (ctx->pc != 0x3225CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3225CCu;
label_3225cc:
    // 0x3225cc: 0x100005b7  b           . + 4 + (0x5B7 << 2)
label_3225d0:
    if (ctx->pc == 0x3225D0u) {
        ctx->pc = 0x3225D4u;
        goto label_3225d4;
    }
    ctx->pc = 0x3225CCu;
    {
        const bool branch_taken_0x3225cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3225cc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3225D4u;
label_3225d4:
    // 0x3225d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3225d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3225d8:
    // 0x3225d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3225d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3225dc:
    // 0x3225dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3225dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3225e0:
    // 0x3225e0: 0x320f809  jalr        $t9
label_3225e4:
    if (ctx->pc == 0x3225E4u) {
        ctx->pc = 0x3225E4u;
            // 0x3225e4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3225E8u;
        goto label_3225e8;
    }
    ctx->pc = 0x3225E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3225E8u);
        ctx->pc = 0x3225E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3225E0u;
            // 0x3225e4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3225E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3225E8u; }
            if (ctx->pc != 0x3225E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3225E8u;
label_3225e8:
    // 0x3225e8: 0xc040180  jal         func_100600
label_3225ec:
    if (ctx->pc == 0x3225ECu) {
        ctx->pc = 0x3225ECu;
            // 0x3225ec: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x3225F0u;
        goto label_3225f0;
    }
    ctx->pc = 0x3225E8u;
    SET_GPR_U32(ctx, 31, 0x3225F0u);
    ctx->pc = 0x3225ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3225E8u;
            // 0x3225ec: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3225F0u; }
        if (ctx->pc != 0x3225F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3225F0u; }
        if (ctx->pc != 0x3225F0u) { return; }
    }
    ctx->pc = 0x3225F0u;
label_3225f0:
    // 0x3225f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3225f4:
    if (ctx->pc == 0x3225F4u) {
        ctx->pc = 0x3225F4u;
            // 0x3225f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3225F8u;
        goto label_3225f8;
    }
    ctx->pc = 0x3225F0u;
    {
        const bool branch_taken_0x3225f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3225F0u;
            // 0x3225f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225f0) {
            ctx->pc = 0x322640u;
            goto label_322640;
        }
    }
    ctx->pc = 0x3225F8u;
label_3225f8:
    // 0x3225f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3225f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3225fc:
    // 0x3225fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3225fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322600:
    // 0x322600: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322604:
    // 0x322604: 0xc10ca68  jal         func_4329A0
label_322608:
    if (ctx->pc == 0x322608u) {
        ctx->pc = 0x322608u;
            // 0x322608: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32260Cu;
        goto label_32260c;
    }
    ctx->pc = 0x322604u;
    SET_GPR_U32(ctx, 31, 0x32260Cu);
    ctx->pc = 0x322608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322604u;
            // 0x322608: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32260Cu; }
        if (ctx->pc != 0x32260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32260Cu; }
        if (ctx->pc != 0x32260Cu) { return; }
    }
    ctx->pc = 0x32260Cu;
label_32260c:
    // 0x32260c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_322610:
    // 0x322610: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_322614:
    // 0x322614: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x322614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_322618:
    // 0x322618: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x322618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
label_32261c:
    // 0x32261c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32261cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322620:
    // 0x322620: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322624:
    // 0x322624: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322628:
    // 0x322628: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x322628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_32262c:
    // 0x32262c: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x32262cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_322630:
    // 0x322630: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x322630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_322634:
    // 0x322634: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x322634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_322638:
    // 0x322638: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x322638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_32263c:
    // 0x32263c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x32263cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_322640:
    // 0x322640: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x322640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322644:
    // 0x322644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322648:
    // 0x322648: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32264c:
    // 0x32264c: 0x320f809  jalr        $t9
label_322650:
    if (ctx->pc == 0x322650u) {
        ctx->pc = 0x322650u;
            // 0x322650: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x322654u;
        goto label_322654;
    }
    ctx->pc = 0x32264Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322654u);
        ctx->pc = 0x322650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32264Cu;
            // 0x322650: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322654u; }
            if (ctx->pc != 0x322654u) { return; }
        }
        }
    }
    ctx->pc = 0x322654u;
label_322654:
    // 0x322654: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_322658:
    // 0x322658: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x322658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32265c:
    // 0x32265c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_322660:
    // 0x322660: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x322660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_322664:
    // 0x322664: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x322664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_322668:
    // 0x322668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32266c:
    // 0x32266c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_322670:
    // 0x322670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x322670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322674:
    // 0x322674: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x322674u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_322678:
    // 0x322678: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x322678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_32267c:
    // 0x32267c: 0xc123020  jal         func_48C080
label_322680:
    if (ctx->pc == 0x322680u) {
        ctx->pc = 0x322680u;
            // 0x322680: 0x24a5d0d0  addiu       $a1, $a1, -0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955216));
        ctx->pc = 0x322684u;
        goto label_322684;
    }
    ctx->pc = 0x32267Cu;
    SET_GPR_U32(ctx, 31, 0x322684u);
    ctx->pc = 0x322680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32267Cu;
            // 0x322680: 0x24a5d0d0  addiu       $a1, $a1, -0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322684u; }
        if (ctx->pc != 0x322684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322684u; }
        if (ctx->pc != 0x322684u) { return; }
    }
    ctx->pc = 0x322684u;
label_322684:
    // 0x322684: 0x10000589  b           . + 4 + (0x589 << 2)
label_322688:
    if (ctx->pc == 0x322688u) {
        ctx->pc = 0x32268Cu;
        goto label_32268c;
    }
    ctx->pc = 0x322684u;
    {
        const bool branch_taken_0x322684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322684) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32268Cu;
label_32268c:
    // 0x32268c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322690:
    // 0x322690: 0xc0c900c  jal         func_324030
label_322694:
    if (ctx->pc == 0x322694u) {
        ctx->pc = 0x322698u;
        goto label_322698;
    }
    ctx->pc = 0x322690u;
    SET_GPR_U32(ctx, 31, 0x322698u);
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322698u; }
        if (ctx->pc != 0x322698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322698u; }
        if (ctx->pc != 0x322698u) { return; }
    }
    ctx->pc = 0x322698u;
label_322698:
    // 0x322698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32269c:
    // 0x32269c: 0xc0c9a58  jal         func_326960
label_3226a0:
    if (ctx->pc == 0x3226A0u) {
        ctx->pc = 0x3226A0u;
            // 0x3226a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3226A4u;
        goto label_3226a4;
    }
    ctx->pc = 0x32269Cu;
    SET_GPR_U32(ctx, 31, 0x3226A4u);
    ctx->pc = 0x3226A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32269Cu;
            // 0x3226a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226A4u; }
        if (ctx->pc != 0x3226A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226A4u; }
        if (ctx->pc != 0x3226A4u) { return; }
    }
    ctx->pc = 0x3226A4u;
label_3226a4:
    // 0x3226a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3226a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3226a8:
    // 0x3226a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3226a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3226ac:
    // 0x3226ac: 0xc0c9a58  jal         func_326960
label_3226b0:
    if (ctx->pc == 0x3226B0u) {
        ctx->pc = 0x3226B0u;
            // 0x3226b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3226B4u;
        goto label_3226b4;
    }
    ctx->pc = 0x3226ACu;
    SET_GPR_U32(ctx, 31, 0x3226B4u);
    ctx->pc = 0x3226B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3226ACu;
            // 0x3226b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226B4u; }
        if (ctx->pc != 0x3226B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226B4u; }
        if (ctx->pc != 0x3226B4u) { return; }
    }
    ctx->pc = 0x3226B4u;
label_3226b4:
    // 0x3226b4: 0xc077318  jal         func_1DCC60
label_3226b8:
    if (ctx->pc == 0x3226B8u) {
        ctx->pc = 0x3226B8u;
            // 0x3226b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3226BCu;
        goto label_3226bc;
    }
    ctx->pc = 0x3226B4u;
    SET_GPR_U32(ctx, 31, 0x3226BCu);
    ctx->pc = 0x3226B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3226B4u;
            // 0x3226b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226BCu; }
        if (ctx->pc != 0x3226BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226BCu; }
        if (ctx->pc != 0x3226BCu) { return; }
    }
    ctx->pc = 0x3226BCu;
label_3226bc:
    // 0x3226bc: 0xc0c7534  jal         func_31D4D0
label_3226c0:
    if (ctx->pc == 0x3226C0u) {
        ctx->pc = 0x3226C0u;
            // 0x3226c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3226C4u;
        goto label_3226c4;
    }
    ctx->pc = 0x3226BCu;
    SET_GPR_U32(ctx, 31, 0x3226C4u);
    ctx->pc = 0x3226C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3226BCu;
            // 0x3226c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4D0u;
    if (runtime->hasFunction(0x31D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226C4u; }
        if (ctx->pc != 0x3226C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4D0_0x31d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226C4u; }
        if (ctx->pc != 0x3226C4u) { return; }
    }
    ctx->pc = 0x3226C4u;
label_3226c4:
    // 0x3226c4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x3226c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3226c8:
    // 0x3226c8: 0x50200012  beql        $at, $zero, . + 4 + (0x12 << 2)
label_3226cc:
    if (ctx->pc == 0x3226CCu) {
        ctx->pc = 0x3226CCu;
            // 0x3226cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3226D0u;
        goto label_3226d0;
    }
    ctx->pc = 0x3226C8u;
    {
        const bool branch_taken_0x3226c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3226c8) {
            ctx->pc = 0x3226CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3226C8u;
            // 0x3226cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322714u;
            goto label_322714;
        }
    }
    ctx->pc = 0x3226D0u;
label_3226d0:
    // 0x3226d0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3226d4:
    // 0x3226d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3226d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3226d8:
    // 0x3226d8: 0x2484c890  addiu       $a0, $a0, -0x3770
    ctx->pc = 0x3226d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953104));
label_3226dc:
    // 0x3226dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3226dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3226e0:
    // 0x3226e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3226e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3226e4:
    // 0x3226e4: 0x600008  jr          $v1
label_3226e8:
    if (ctx->pc == 0x3226E8u) {
        ctx->pc = 0x3226ECu;
        goto label_3226ec;
    }
    ctx->pc = 0x3226E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3226ECu: goto label_3226ec;
            case 0x322700u: goto label_322700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3226ECu;
label_3226ec:
    // 0x3226ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3226ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3226f0:
    // 0x3226f0: 0xc0c9a58  jal         func_326960
label_3226f4:
    if (ctx->pc == 0x3226F4u) {
        ctx->pc = 0x3226F4u;
            // 0x3226f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3226F8u;
        goto label_3226f8;
    }
    ctx->pc = 0x3226F0u;
    SET_GPR_U32(ctx, 31, 0x3226F8u);
    ctx->pc = 0x3226F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3226F0u;
            // 0x3226f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226F8u; }
        if (ctx->pc != 0x3226F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3226F8u; }
        if (ctx->pc != 0x3226F8u) { return; }
    }
    ctx->pc = 0x3226F8u;
label_3226f8:
    // 0x3226f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3226fc:
    if (ctx->pc == 0x3226FCu) {
        ctx->pc = 0x3226FCu;
            // 0x3226fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322700u;
        goto label_322700;
    }
    ctx->pc = 0x3226F8u;
    {
        const bool branch_taken_0x3226f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3226F8u;
            // 0x3226fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226f8) {
            ctx->pc = 0x322710u;
            goto label_322710;
        }
    }
    ctx->pc = 0x322700u;
label_322700:
    // 0x322700: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x322700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_322704:
    // 0x322704: 0xc0c9a58  jal         func_326960
label_322708:
    if (ctx->pc == 0x322708u) {
        ctx->pc = 0x322708u;
            // 0x322708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32270Cu;
        goto label_32270c;
    }
    ctx->pc = 0x322704u;
    SET_GPR_U32(ctx, 31, 0x32270Cu);
    ctx->pc = 0x322708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322704u;
            // 0x322708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32270Cu; }
        if (ctx->pc != 0x32270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32270Cu; }
        if (ctx->pc != 0x32270Cu) { return; }
    }
    ctx->pc = 0x32270Cu;
label_32270c:
    // 0x32270c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32270cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322710:
    // 0x322710: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x322710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_322714:
    // 0x322714: 0xc0c7524  jal         func_31D490
label_322718:
    if (ctx->pc == 0x322718u) {
        ctx->pc = 0x322718u;
            // 0x322718: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x32271Cu;
        goto label_32271c;
    }
    ctx->pc = 0x322714u;
    SET_GPR_U32(ctx, 31, 0x32271Cu);
    ctx->pc = 0x322718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322714u;
            // 0x322718: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D490u;
    if (runtime->hasFunction(0x31D490u)) {
        auto targetFn = runtime->lookupFunction(0x31D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32271Cu; }
        if (ctx->pc != 0x32271Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D490_0x31d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32271Cu; }
        if (ctx->pc != 0x32271Cu) { return; }
    }
    ctx->pc = 0x32271Cu;
label_32271c:
    // 0x32271c: 0xc0c9a1c  jal         func_326870
label_322720:
    if (ctx->pc == 0x322720u) {
        ctx->pc = 0x322720u;
            // 0x322720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322724u;
        goto label_322724;
    }
    ctx->pc = 0x32271Cu;
    SET_GPR_U32(ctx, 31, 0x322724u);
    ctx->pc = 0x322720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32271Cu;
            // 0x322720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326870u;
    if (runtime->hasFunction(0x326870u)) {
        auto targetFn = runtime->lookupFunction(0x326870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322724u; }
        if (ctx->pc != 0x322724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326870_0x326870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322724u; }
        if (ctx->pc != 0x322724u) { return; }
    }
    ctx->pc = 0x322724u;
label_322724:
    // 0x322724: 0xc040180  jal         func_100600
label_322728:
    if (ctx->pc == 0x322728u) {
        ctx->pc = 0x322728u;
            // 0x322728: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x32272Cu;
        goto label_32272c;
    }
    ctx->pc = 0x322724u;
    SET_GPR_U32(ctx, 31, 0x32272Cu);
    ctx->pc = 0x322728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322724u;
            // 0x322728: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32272Cu; }
        if (ctx->pc != 0x32272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32272Cu; }
        if (ctx->pc != 0x32272Cu) { return; }
    }
    ctx->pc = 0x32272Cu;
label_32272c:
    // 0x32272c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_322730:
    if (ctx->pc == 0x322730u) {
        ctx->pc = 0x322730u;
            // 0x322730: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322734u;
        goto label_322734;
    }
    ctx->pc = 0x32272Cu;
    {
        const bool branch_taken_0x32272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32272c) {
            ctx->pc = 0x322730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32272Cu;
            // 0x322730: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322744u;
            goto label_322744;
        }
    }
    ctx->pc = 0x322734u;
label_322734:
    // 0x322734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322738:
    // 0x322738: 0xc0c8fec  jal         func_323FB0
label_32273c:
    if (ctx->pc == 0x32273Cu) {
        ctx->pc = 0x32273Cu;
            // 0x32273c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322740u;
        goto label_322740;
    }
    ctx->pc = 0x322738u;
    SET_GPR_U32(ctx, 31, 0x322740u);
    ctx->pc = 0x32273Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322738u;
            // 0x32273c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323FB0u;
    if (runtime->hasFunction(0x323FB0u)) {
        auto targetFn = runtime->lookupFunction(0x323FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322740u; }
        if (ctx->pc != 0x322740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323FB0_0x323fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322740u; }
        if (ctx->pc != 0x322740u) { return; }
    }
    ctx->pc = 0x322740u;
label_322740:
    // 0x322740: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322744:
    // 0x322744: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322748:
    // 0x322748: 0x320f809  jalr        $t9
label_32274c:
    if (ctx->pc == 0x32274Cu) {
        ctx->pc = 0x32274Cu;
            // 0x32274c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322750u;
        goto label_322750;
    }
    ctx->pc = 0x322748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322750u);
        ctx->pc = 0x32274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322748u;
            // 0x32274c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322750u; }
            if (ctx->pc != 0x322750u) { return; }
        }
        }
    }
    ctx->pc = 0x322750u;
label_322750:
    // 0x322750: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x322750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_322754:
    // 0x322754: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_322758:
    if (ctx->pc == 0x322758u) {
        ctx->pc = 0x322758u;
            // 0x322758: 0x8e0405dc  lw          $a0, 0x5DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
        ctx->pc = 0x32275Cu;
        goto label_32275c;
    }
    ctx->pc = 0x322754u;
    {
        const bool branch_taken_0x322754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322754) {
            ctx->pc = 0x322758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322754u;
            // 0x322758: 0x8e0405dc  lw          $a0, 0x5DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322770u;
            goto label_322770;
        }
    }
    ctx->pc = 0x32275Cu;
label_32275c:
    // 0x32275c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32275cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_322760:
    // 0x322760: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x322760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_322764:
    // 0x322764: 0x320f809  jalr        $t9
label_322768:
    if (ctx->pc == 0x322768u) {
        ctx->pc = 0x32276Cu;
        goto label_32276c;
    }
    ctx->pc = 0x322764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32276Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32276Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32276Cu; }
            if (ctx->pc != 0x32276Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32276Cu;
label_32276c:
    // 0x32276c: 0x8e0405dc  lw          $a0, 0x5DC($s0)
    ctx->pc = 0x32276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
label_322770:
    // 0x322770: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_322774:
    if (ctx->pc == 0x322774u) {
        ctx->pc = 0x322774u;
            // 0x322774: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x322778u;
        goto label_322778;
    }
    ctx->pc = 0x322770u;
    {
        const bool branch_taken_0x322770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322770) {
            ctx->pc = 0x322774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322770u;
            // 0x322774: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32278Cu;
            goto label_32278c;
        }
    }
    ctx->pc = 0x322778u;
label_322778:
    // 0x322778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x322778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32277c:
    // 0x32277c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x32277cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_322780:
    // 0x322780: 0x320f809  jalr        $t9
label_322784:
    if (ctx->pc == 0x322784u) {
        ctx->pc = 0x322788u;
        goto label_322788;
    }
    ctx->pc = 0x322780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322788u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x322788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322788u; }
            if (ctx->pc != 0x322788u) { return; }
        }
        }
    }
    ctx->pc = 0x322788u;
label_322788:
    // 0x322788: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_32278c:
    // 0x32278c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322790:
    // 0x322790: 0x5083004c  beql        $a0, $v1, . + 4 + (0x4C << 2)
label_322794:
    if (ctx->pc == 0x322794u) {
        ctx->pc = 0x322794u;
            // 0x322794: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322798u;
        goto label_322798;
    }
    ctx->pc = 0x322790u;
    {
        const bool branch_taken_0x322790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322790) {
            ctx->pc = 0x322794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322790u;
            // 0x322794: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3228C4u;
            goto label_3228c4;
        }
    }
    ctx->pc = 0x322798u;
label_322798:
    // 0x322798: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_32279c:
    // 0x32279c: 0x5083003c  beql        $a0, $v1, . + 4 + (0x3C << 2)
label_3227a0:
    if (ctx->pc == 0x3227A0u) {
        ctx->pc = 0x3227A0u;
            // 0x3227a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3227A4u;
        goto label_3227a4;
    }
    ctx->pc = 0x32279Cu;
    {
        const bool branch_taken_0x32279c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32279c) {
            ctx->pc = 0x3227A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32279Cu;
            // 0x3227a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322890u;
            goto label_322890;
        }
    }
    ctx->pc = 0x3227A4u;
label_3227a4:
    // 0x3227a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3227a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3227a8:
    // 0x3227a8: 0x50830029  beql        $a0, $v1, . + 4 + (0x29 << 2)
label_3227ac:
    if (ctx->pc == 0x3227ACu) {
        ctx->pc = 0x3227ACu;
            // 0x3227ac: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->pc = 0x3227B0u;
        goto label_3227b0;
    }
    ctx->pc = 0x3227A8u;
    {
        const bool branch_taken_0x3227a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3227a8) {
            ctx->pc = 0x3227ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3227A8u;
            // 0x3227ac: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322850u;
            goto label_322850;
        }
    }
    ctx->pc = 0x3227B0u;
label_3227b0:
    // 0x3227b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3227b4:
    // 0x3227b4: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_3227b8:
    if (ctx->pc == 0x3227B8u) {
        ctx->pc = 0x3227B8u;
            // 0x3227b8: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->pc = 0x3227BCu;
        goto label_3227bc;
    }
    ctx->pc = 0x3227B4u;
    {
        const bool branch_taken_0x3227b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3227b4) {
            ctx->pc = 0x3227B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3227B4u;
            // 0x3227b8: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322810u;
            goto label_322810;
        }
    }
    ctx->pc = 0x3227BCu;
label_3227bc:
    // 0x3227bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3227c0:
    if (ctx->pc == 0x3227C0u) {
        ctx->pc = 0x3227C0u;
            // 0x3227c0: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->pc = 0x3227C4u;
        goto label_3227c4;
    }
    ctx->pc = 0x3227BCu;
    {
        const bool branch_taken_0x3227bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3227bc) {
            ctx->pc = 0x3227C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3227BCu;
            // 0x3227c0: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3227D0u;
            goto label_3227d0;
        }
    }
    ctx->pc = 0x3227C4u;
label_3227c4:
    // 0x3227c4: 0x10000539  b           . + 4 + (0x539 << 2)
label_3227c8:
    if (ctx->pc == 0x3227C8u) {
        ctx->pc = 0x3227CCu;
        goto label_3227cc;
    }
    ctx->pc = 0x3227C4u;
    {
        const bool branch_taken_0x3227c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3227c4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3227CCu;
label_3227cc:
    // 0x3227cc: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x3227ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_3227d0:
    // 0x3227d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3227d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3227d4:
    // 0x3227d4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3227d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3227d8:
    // 0x3227d8: 0xc0fd080  jal         func_3F4200
label_3227dc:
    if (ctx->pc == 0x3227DCu) {
        ctx->pc = 0x3227DCu;
            // 0x3227dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3227E0u;
        goto label_3227e0;
    }
    ctx->pc = 0x3227D8u;
    SET_GPR_U32(ctx, 31, 0x3227E0u);
    ctx->pc = 0x3227DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3227D8u;
            // 0x3227dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3227E0u; }
        if (ctx->pc != 0x3227E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3227E0u; }
        if (ctx->pc != 0x3227E0u) { return; }
    }
    ctx->pc = 0x3227E0u;
label_3227e0:
    // 0x3227e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3227e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3227e4:
    // 0x3227e4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3227e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3227e8:
    // 0x3227e8: 0xc0fd080  jal         func_3F4200
label_3227ec:
    if (ctx->pc == 0x3227ECu) {
        ctx->pc = 0x3227ECu;
            // 0x3227ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3227F0u;
        goto label_3227f0;
    }
    ctx->pc = 0x3227E8u;
    SET_GPR_U32(ctx, 31, 0x3227F0u);
    ctx->pc = 0x3227ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3227E8u;
            // 0x3227ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3227F0u; }
        if (ctx->pc != 0x3227F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3227F0u; }
        if (ctx->pc != 0x3227F0u) { return; }
    }
    ctx->pc = 0x3227F0u;
label_3227f0:
    // 0x3227f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3227f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3227f4:
    // 0x3227f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3227f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3227f8:
    // 0x3227f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3227f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3227fc:
    // 0x3227fc: 0x320f809  jalr        $t9
label_322800:
    if (ctx->pc == 0x322800u) {
        ctx->pc = 0x322800u;
            // 0x322800: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x322804u;
        goto label_322804;
    }
    ctx->pc = 0x3227FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322804u);
        ctx->pc = 0x322800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3227FCu;
            // 0x322800: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322804u; }
            if (ctx->pc != 0x322804u) { return; }
        }
        }
    }
    ctx->pc = 0x322804u;
label_322804:
    // 0x322804: 0x10000529  b           . + 4 + (0x529 << 2)
label_322808:
    if (ctx->pc == 0x322808u) {
        ctx->pc = 0x32280Cu;
        goto label_32280c;
    }
    ctx->pc = 0x322804u;
    {
        const bool branch_taken_0x322804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322804) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32280Cu;
label_32280c:
    // 0x32280c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x32280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_322810:
    // 0x322810: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322814:
    // 0x322814: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322818:
    // 0x322818: 0xc0fd080  jal         func_3F4200
label_32281c:
    if (ctx->pc == 0x32281Cu) {
        ctx->pc = 0x32281Cu;
            // 0x32281c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322820u;
        goto label_322820;
    }
    ctx->pc = 0x322818u;
    SET_GPR_U32(ctx, 31, 0x322820u);
    ctx->pc = 0x32281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322818u;
            // 0x32281c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322820u; }
        if (ctx->pc != 0x322820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322820u; }
        if (ctx->pc != 0x322820u) { return; }
    }
    ctx->pc = 0x322820u;
label_322820:
    // 0x322820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322824:
    // 0x322824: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322828:
    // 0x322828: 0xc0fd080  jal         func_3F4200
label_32282c:
    if (ctx->pc == 0x32282Cu) {
        ctx->pc = 0x32282Cu;
            // 0x32282c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x322830u;
        goto label_322830;
    }
    ctx->pc = 0x322828u;
    SET_GPR_U32(ctx, 31, 0x322830u);
    ctx->pc = 0x32282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322828u;
            // 0x32282c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322830u; }
        if (ctx->pc != 0x322830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322830u; }
        if (ctx->pc != 0x322830u) { return; }
    }
    ctx->pc = 0x322830u;
label_322830:
    // 0x322830: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322834:
    // 0x322834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322838:
    // 0x322838: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32283c:
    // 0x32283c: 0x320f809  jalr        $t9
label_322840:
    if (ctx->pc == 0x322840u) {
        ctx->pc = 0x322840u;
            // 0x322840: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x322844u;
        goto label_322844;
    }
    ctx->pc = 0x32283Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322844u);
        ctx->pc = 0x322840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32283Cu;
            // 0x322840: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322844u; }
            if (ctx->pc != 0x322844u) { return; }
        }
        }
    }
    ctx->pc = 0x322844u;
label_322844:
    // 0x322844: 0x10000519  b           . + 4 + (0x519 << 2)
label_322848:
    if (ctx->pc == 0x322848u) {
        ctx->pc = 0x32284Cu;
        goto label_32284c;
    }
    ctx->pc = 0x322844u;
    {
        const bool branch_taken_0x322844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322844) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32284Cu;
label_32284c:
    // 0x32284c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x32284cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_322850:
    // 0x322850: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322854:
    // 0x322854: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322858:
    // 0x322858: 0xc0fd080  jal         func_3F4200
label_32285c:
    if (ctx->pc == 0x32285Cu) {
        ctx->pc = 0x32285Cu;
            // 0x32285c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322860u;
        goto label_322860;
    }
    ctx->pc = 0x322858u;
    SET_GPR_U32(ctx, 31, 0x322860u);
    ctx->pc = 0x32285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322858u;
            // 0x32285c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322860u; }
        if (ctx->pc != 0x322860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322860u; }
        if (ctx->pc != 0x322860u) { return; }
    }
    ctx->pc = 0x322860u;
label_322860:
    // 0x322860: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322864:
    // 0x322864: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322868:
    // 0x322868: 0xc0fd080  jal         func_3F4200
label_32286c:
    if (ctx->pc == 0x32286Cu) {
        ctx->pc = 0x32286Cu;
            // 0x32286c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x322870u;
        goto label_322870;
    }
    ctx->pc = 0x322868u;
    SET_GPR_U32(ctx, 31, 0x322870u);
    ctx->pc = 0x32286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322868u;
            // 0x32286c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322870u; }
        if (ctx->pc != 0x322870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322870u; }
        if (ctx->pc != 0x322870u) { return; }
    }
    ctx->pc = 0x322870u;
label_322870:
    // 0x322870: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322874:
    // 0x322874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322878:
    // 0x322878: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32287c:
    // 0x32287c: 0x320f809  jalr        $t9
label_322880:
    if (ctx->pc == 0x322880u) {
        ctx->pc = 0x322880u;
            // 0x322880: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x322884u;
        goto label_322884;
    }
    ctx->pc = 0x32287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322884u);
        ctx->pc = 0x322880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32287Cu;
            // 0x322880: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322884u; }
            if (ctx->pc != 0x322884u) { return; }
        }
        }
    }
    ctx->pc = 0x322884u;
label_322884:
    // 0x322884: 0x10000509  b           . + 4 + (0x509 << 2)
label_322888:
    if (ctx->pc == 0x322888u) {
        ctx->pc = 0x32288Cu;
        goto label_32288c;
    }
    ctx->pc = 0x322884u;
    {
        const bool branch_taken_0x322884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322884) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32288Cu;
label_32288c:
    // 0x32288c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322890:
    // 0x322890: 0xc0ca2a0  jal         func_328A80
label_322894:
    if (ctx->pc == 0x322894u) {
        ctx->pc = 0x322898u;
        goto label_322898;
    }
    ctx->pc = 0x322890u;
    SET_GPR_U32(ctx, 31, 0x322898u);
    ctx->pc = 0x328A80u;
    if (runtime->hasFunction(0x328A80u)) {
        auto targetFn = runtime->lookupFunction(0x328A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322898u; }
        if (ctx->pc != 0x322898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328A80_0x328a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322898u; }
        if (ctx->pc != 0x322898u) { return; }
    }
    ctx->pc = 0x322898u;
label_322898:
    // 0x322898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32289c:
    // 0x32289c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3228a0:
    // 0x3228a0: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x3228a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_3228a4:
    // 0x3228a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3228a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3228a8:
    // 0x3228a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3228a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3228ac:
    // 0x3228ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3228acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3228b0:
    // 0x3228b0: 0x320f809  jalr        $t9
label_3228b4:
    if (ctx->pc == 0x3228B4u) {
        ctx->pc = 0x3228B4u;
            // 0x3228b4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x3228B8u;
        goto label_3228b8;
    }
    ctx->pc = 0x3228B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3228B8u);
        ctx->pc = 0x3228B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3228B0u;
            // 0x3228b4: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3228B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3228B8u; }
            if (ctx->pc != 0x3228B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3228B8u;
label_3228b8:
    // 0x3228b8: 0x100004fc  b           . + 4 + (0x4FC << 2)
label_3228bc:
    if (ctx->pc == 0x3228BCu) {
        ctx->pc = 0x3228C0u;
        goto label_3228c0;
    }
    ctx->pc = 0x3228B8u;
    {
        const bool branch_taken_0x3228b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3228b8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3228C0u;
label_3228c0:
    // 0x3228c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3228c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3228c4:
    // 0x3228c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3228c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3228c8:
    // 0x3228c8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3228c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3228cc:
    // 0x3228cc: 0x320f809  jalr        $t9
label_3228d0:
    if (ctx->pc == 0x3228D0u) {
        ctx->pc = 0x3228D0u;
            // 0x3228d0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x3228D4u;
        goto label_3228d4;
    }
    ctx->pc = 0x3228CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3228D4u);
        ctx->pc = 0x3228D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3228CCu;
            // 0x3228d0: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3228D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3228D4u; }
            if (ctx->pc != 0x3228D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3228D4u;
label_3228d4:
    // 0x3228d4: 0x100004f5  b           . + 4 + (0x4F5 << 2)
label_3228d8:
    if (ctx->pc == 0x3228D8u) {
        ctx->pc = 0x3228DCu;
        goto label_3228dc;
    }
    ctx->pc = 0x3228D4u;
    {
        const bool branch_taken_0x3228d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3228d4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3228DCu;
label_3228dc:
    // 0x3228dc: 0xc0c900c  jal         func_324030
label_3228e0:
    if (ctx->pc == 0x3228E0u) {
        ctx->pc = 0x3228E4u;
        goto label_3228e4;
    }
    ctx->pc = 0x3228DCu;
    SET_GPR_U32(ctx, 31, 0x3228E4u);
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228E4u; }
        if (ctx->pc != 0x3228E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228E4u; }
        if (ctx->pc != 0x3228E4u) { return; }
    }
    ctx->pc = 0x3228E4u;
label_3228e4:
    // 0x3228e4: 0xc0c7530  jal         func_31D4C0
label_3228e8:
    if (ctx->pc == 0x3228E8u) {
        ctx->pc = 0x3228ECu;
        goto label_3228ec;
    }
    ctx->pc = 0x3228E4u;
    SET_GPR_U32(ctx, 31, 0x3228ECu);
    ctx->pc = 0x31D4C0u;
    if (runtime->hasFunction(0x31D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228ECu; }
        if (ctx->pc != 0x3228ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4C0_0x31d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228ECu; }
        if (ctx->pc != 0x3228ECu) { return; }
    }
    ctx->pc = 0x3228ECu;
label_3228ec:
    // 0x3228ec: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3228ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3228f0:
    // 0x3228f0: 0xc0c752c  jal         func_31D4B0
label_3228f4:
    if (ctx->pc == 0x3228F4u) {
        ctx->pc = 0x3228F4u;
            // 0x3228f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3228F8u;
        goto label_3228f8;
    }
    ctx->pc = 0x3228F0u;
    SET_GPR_U32(ctx, 31, 0x3228F8u);
    ctx->pc = 0x3228F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3228F0u;
            // 0x3228f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4B0u;
    if (runtime->hasFunction(0x31D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228F8u; }
        if (ctx->pc != 0x3228F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4B0_0x31d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3228F8u; }
        if (ctx->pc != 0x3228F8u) { return; }
    }
    ctx->pc = 0x3228F8u;
label_3228f8:
    // 0x3228f8: 0xc0ca1b0  jal         func_3286C0
label_3228fc:
    if (ctx->pc == 0x3228FCu) {
        ctx->pc = 0x3228FCu;
            // 0x3228fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322900u;
        goto label_322900;
    }
    ctx->pc = 0x3228F8u;
    SET_GPR_U32(ctx, 31, 0x322900u);
    ctx->pc = 0x3228FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3228F8u;
            // 0x3228fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322900u; }
        if (ctx->pc != 0x322900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322900u; }
        if (ctx->pc != 0x322900u) { return; }
    }
    ctx->pc = 0x322900u;
label_322900:
    // 0x322900: 0xc077318  jal         func_1DCC60
label_322904:
    if (ctx->pc == 0x322904u) {
        ctx->pc = 0x322908u;
        goto label_322908;
    }
    ctx->pc = 0x322900u;
    SET_GPR_U32(ctx, 31, 0x322908u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322908u; }
        if (ctx->pc != 0x322908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322908u; }
        if (ctx->pc != 0x322908u) { return; }
    }
    ctx->pc = 0x322908u;
label_322908:
    // 0x322908: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x322908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_32290c:
    // 0x32290c: 0xc0c8fdc  jal         func_323F70
label_322910:
    if (ctx->pc == 0x322910u) {
        ctx->pc = 0x322910u;
            // 0x322910: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x322914u;
        goto label_322914;
    }
    ctx->pc = 0x32290Cu;
    SET_GPR_U32(ctx, 31, 0x322914u);
    ctx->pc = 0x322910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32290Cu;
            // 0x322910: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323F70u;
    if (runtime->hasFunction(0x323F70u)) {
        auto targetFn = runtime->lookupFunction(0x323F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322914u; }
        if (ctx->pc != 0x322914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323F70_0x323f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322914u; }
        if (ctx->pc != 0x322914u) { return; }
    }
    ctx->pc = 0x322914u;
label_322914:
    // 0x322914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322918:
    // 0x322918: 0xc0c9ec0  jal         func_327B00
label_32291c:
    if (ctx->pc == 0x32291Cu) {
        ctx->pc = 0x32291Cu;
            // 0x32291c: 0x3405cb25  ori         $a1, $zero, 0xCB25 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52005);
        ctx->pc = 0x322920u;
        goto label_322920;
    }
    ctx->pc = 0x322918u;
    SET_GPR_U32(ctx, 31, 0x322920u);
    ctx->pc = 0x32291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322918u;
            // 0x32291c: 0x3405cb25  ori         $a1, $zero, 0xCB25 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52005);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322920u; }
        if (ctx->pc != 0x322920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322920u; }
        if (ctx->pc != 0x322920u) { return; }
    }
    ctx->pc = 0x322920u;
label_322920:
    // 0x322920: 0xc040180  jal         func_100600
label_322924:
    if (ctx->pc == 0x322924u) {
        ctx->pc = 0x322924u;
            // 0x322924: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x322928u;
        goto label_322928;
    }
    ctx->pc = 0x322920u;
    SET_GPR_U32(ctx, 31, 0x322928u);
    ctx->pc = 0x322924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322920u;
            // 0x322924: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322928u; }
        if (ctx->pc != 0x322928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322928u; }
        if (ctx->pc != 0x322928u) { return; }
    }
    ctx->pc = 0x322928u;
label_322928:
    // 0x322928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32292c:
    if (ctx->pc == 0x32292Cu) {
        ctx->pc = 0x322930u;
        goto label_322930;
    }
    ctx->pc = 0x322928u;
    {
        const bool branch_taken_0x322928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322928) {
            ctx->pc = 0x32293Cu;
            goto label_32293c;
        }
    }
    ctx->pc = 0x322930u;
label_322930:
    // 0x322930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322934:
    // 0x322934: 0xc0c8fbc  jal         func_323EF0
label_322938:
    if (ctx->pc == 0x322938u) {
        ctx->pc = 0x322938u;
            // 0x322938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32293Cu;
        goto label_32293c;
    }
    ctx->pc = 0x322934u;
    SET_GPR_U32(ctx, 31, 0x32293Cu);
    ctx->pc = 0x322938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322934u;
            // 0x322938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EF0u;
    if (runtime->hasFunction(0x323EF0u)) {
        auto targetFn = runtime->lookupFunction(0x323EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32293Cu; }
        if (ctx->pc != 0x32293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EF0_0x323ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32293Cu; }
        if (ctx->pc != 0x32293Cu) { return; }
    }
    ctx->pc = 0x32293Cu;
label_32293c:
    // 0x32293c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_322940:
    // 0x322940: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x322940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_322944:
    // 0x322944: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_322948:
    // 0x322948: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x322948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_32294c:
    // 0x32294c: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
label_322950:
    if (ctx->pc == 0x322950u) {
        ctx->pc = 0x322950u;
            // 0x322950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x322954u;
        goto label_322954;
    }
    ctx->pc = 0x32294Cu;
    {
        const bool branch_taken_0x32294c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32294c) {
            ctx->pc = 0x322950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32294Cu;
            // 0x322950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322980u;
            goto label_322980;
        }
    }
    ctx->pc = 0x322954u;
label_322954:
    // 0x322954: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x322954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_322958:
    // 0x322958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x322958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32295c:
    // 0x32295c: 0x2484c860  addiu       $a0, $a0, -0x37A0
    ctx->pc = 0x32295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953056));
label_322960:
    // 0x322960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_322964:
    // 0x322964: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x322964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_322968:
    // 0x322968: 0x600008  jr          $v1
label_32296c:
    if (ctx->pc == 0x32296Cu) {
        ctx->pc = 0x322970u;
        goto label_322970;
    }
    ctx->pc = 0x322968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x322970u: goto label_322970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x322970u;
label_322970:
    // 0x322970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x322970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_322974:
    // 0x322974: 0xc0c8fb8  jal         func_323EE0
label_322978:
    if (ctx->pc == 0x322978u) {
        ctx->pc = 0x322978u;
            // 0x322978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32297Cu;
        goto label_32297c;
    }
    ctx->pc = 0x322974u;
    SET_GPR_U32(ctx, 31, 0x32297Cu);
    ctx->pc = 0x322978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322974u;
            // 0x322978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EE0u;
    if (runtime->hasFunction(0x323EE0u)) {
        auto targetFn = runtime->lookupFunction(0x323EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32297Cu; }
        if (ctx->pc != 0x32297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EE0_0x323ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32297Cu; }
        if (ctx->pc != 0x32297Cu) { return; }
    }
    ctx->pc = 0x32297Cu;
label_32297c:
    // 0x32297c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322980:
    // 0x322980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322984:
    // 0x322984: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x322984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_322988:
    // 0x322988: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32298c:
    // 0x32298c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32298cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322990:
    // 0x322990: 0x320f809  jalr        $t9
label_322994:
    if (ctx->pc == 0x322994u) {
        ctx->pc = 0x322994u;
            // 0x322994: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x322998u;
        goto label_322998;
    }
    ctx->pc = 0x322990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322998u);
        ctx->pc = 0x322994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322990u;
            // 0x322994: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322998u; }
            if (ctx->pc != 0x322998u) { return; }
        }
        }
    }
    ctx->pc = 0x322998u;
label_322998:
    // 0x322998: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_32299c:
    // 0x32299c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3229a0:
    if (ctx->pc == 0x3229A0u) {
        ctx->pc = 0x3229A0u;
            // 0x3229a0: 0x8e080064  lw          $t0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x3229A4u;
        goto label_3229a4;
    }
    ctx->pc = 0x32299Cu;
    {
        const bool branch_taken_0x32299c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32299c) {
            ctx->pc = 0x3229A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32299Cu;
            // 0x3229a0: 0x8e080064  lw          $t0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3229B8u;
            goto label_3229b8;
        }
    }
    ctx->pc = 0x3229A4u;
label_3229a4:
    // 0x3229a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3229a8:
    // 0x3229a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3229a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3229ac:
    // 0x3229ac: 0x320f809  jalr        $t9
label_3229b0:
    if (ctx->pc == 0x3229B0u) {
        ctx->pc = 0x3229B4u;
        goto label_3229b4;
    }
    ctx->pc = 0x3229ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3229B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3229B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3229B4u; }
            if (ctx->pc != 0x3229B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3229B4u;
label_3229b4:
    // 0x3229b4: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x3229b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3229b8:
    // 0x3229b8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x3229b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3229bc:
    // 0x3229bc: 0x11030096  beq         $t0, $v1, . + 4 + (0x96 << 2)
label_3229c0:
    if (ctx->pc == 0x3229C0u) {
        ctx->pc = 0x3229C4u;
        goto label_3229c4;
    }
    ctx->pc = 0x3229BCu;
    {
        const bool branch_taken_0x3229bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x3229bc) {
            ctx->pc = 0x322C18u;
            goto label_322c18;
        }
    }
    ctx->pc = 0x3229C4u;
label_3229c4:
    // 0x3229c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3229c8:
    // 0x3229c8: 0x5103008d  beql        $t0, $v1, . + 4 + (0x8D << 2)
label_3229cc:
    if (ctx->pc == 0x3229CCu) {
        ctx->pc = 0x3229CCu;
            // 0x3229cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3229D0u;
        goto label_3229d0;
    }
    ctx->pc = 0x3229C8u;
    {
        const bool branch_taken_0x3229c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x3229c8) {
            ctx->pc = 0x3229CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3229C8u;
            // 0x3229cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322C00u;
            goto label_322c00;
        }
    }
    ctx->pc = 0x3229D0u;
label_3229d0:
    // 0x3229d0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3229d4:
    // 0x3229d4: 0x11070080  beq         $t0, $a3, . + 4 + (0x80 << 2)
label_3229d8:
    if (ctx->pc == 0x3229D8u) {
        ctx->pc = 0x3229DCu;
        goto label_3229dc;
    }
    ctx->pc = 0x3229D4u;
    {
        const bool branch_taken_0x3229d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x3229d4) {
            ctx->pc = 0x322BD8u;
            goto label_322bd8;
        }
    }
    ctx->pc = 0x3229DCu;
label_3229dc:
    // 0x3229dc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3229dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3229e0:
    // 0x3229e0: 0x51060074  beql        $t0, $a2, . + 4 + (0x74 << 2)
label_3229e4:
    if (ctx->pc == 0x3229E4u) {
        ctx->pc = 0x3229E4u;
            // 0x3229e4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3229E8u;
        goto label_3229e8;
    }
    ctx->pc = 0x3229E0u;
    {
        const bool branch_taken_0x3229e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x3229e0) {
            ctx->pc = 0x3229E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3229E0u;
            // 0x3229e4: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322BB4u;
            goto label_322bb4;
        }
    }
    ctx->pc = 0x3229E8u;
label_3229e8:
    // 0x3229e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3229e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3229ec:
    // 0x3229ec: 0x11050067  beq         $t0, $a1, . + 4 + (0x67 << 2)
label_3229f0:
    if (ctx->pc == 0x3229F0u) {
        ctx->pc = 0x3229F4u;
        goto label_3229f4;
    }
    ctx->pc = 0x3229ECu;
    {
        const bool branch_taken_0x3229ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x3229ec) {
            ctx->pc = 0x322B8Cu;
            goto label_322b8c;
        }
    }
    ctx->pc = 0x3229F4u;
label_3229f4:
    // 0x3229f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3229f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3229f8:
    // 0x3229f8: 0x5104005b  beql        $t0, $a0, . + 4 + (0x5B << 2)
label_3229fc:
    if (ctx->pc == 0x3229FCu) {
        ctx->pc = 0x3229FCu;
            // 0x3229fc: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x322A00u;
        goto label_322a00;
    }
    ctx->pc = 0x3229F8u;
    {
        const bool branch_taken_0x3229f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x3229f8) {
            ctx->pc = 0x3229FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3229F8u;
            // 0x3229fc: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322B68u;
            goto label_322b68;
        }
    }
    ctx->pc = 0x322A00u;
label_322a00:
    // 0x322a00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x322a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322a04:
    // 0x322a04: 0x11030048  beq         $t0, $v1, . + 4 + (0x48 << 2)
label_322a08:
    if (ctx->pc == 0x322A08u) {
        ctx->pc = 0x322A0Cu;
        goto label_322a0c;
    }
    ctx->pc = 0x322A04u;
    {
        const bool branch_taken_0x322a04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x322a04) {
            ctx->pc = 0x322B28u;
            goto label_322b28;
        }
    }
    ctx->pc = 0x322A0Cu;
label_322a0c:
    // 0x322a0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x322a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_322a10:
    // 0x322a10: 0x11050035  beq         $t0, $a1, . + 4 + (0x35 << 2)
label_322a14:
    if (ctx->pc == 0x322A14u) {
        ctx->pc = 0x322A18u;
        goto label_322a18;
    }
    ctx->pc = 0x322A10u;
    {
        const bool branch_taken_0x322a10 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x322a10) {
            ctx->pc = 0x322AE8u;
            goto label_322ae8;
        }
    }
    ctx->pc = 0x322A18u;
label_322a18:
    // 0x322a18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_322a1c:
    // 0x322a1c: 0x11030029  beq         $t0, $v1, . + 4 + (0x29 << 2)
label_322a20:
    if (ctx->pc == 0x322A20u) {
        ctx->pc = 0x322A24u;
        goto label_322a24;
    }
    ctx->pc = 0x322A1Cu;
    {
        const bool branch_taken_0x322a1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x322a1c) {
            ctx->pc = 0x322AC4u;
            goto label_322ac4;
        }
    }
    ctx->pc = 0x322A24u;
label_322a24:
    // 0x322a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322a28:
    // 0x322a28: 0x1103001d  beq         $t0, $v1, . + 4 + (0x1D << 2)
label_322a2c:
    if (ctx->pc == 0x322A2Cu) {
        ctx->pc = 0x322A30u;
        goto label_322a30;
    }
    ctx->pc = 0x322A28u;
    {
        const bool branch_taken_0x322a28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x322a28) {
            ctx->pc = 0x322AA0u;
            goto label_322aa0;
        }
    }
    ctx->pc = 0x322A30u;
label_322a30:
    // 0x322a30: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_322a34:
    if (ctx->pc == 0x322A34u) {
        ctx->pc = 0x322A38u;
        goto label_322a38;
    }
    ctx->pc = 0x322A30u;
    {
        const bool branch_taken_0x322a30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x322a30) {
            ctx->pc = 0x322A40u;
            goto label_322a40;
        }
    }
    ctx->pc = 0x322A38u;
label_322a38:
    // 0x322a38: 0x1000049c  b           . + 4 + (0x49C << 2)
label_322a3c:
    if (ctx->pc == 0x322A3Cu) {
        ctx->pc = 0x322A40u;
        goto label_322a40;
    }
    ctx->pc = 0x322A38u;
    {
        const bool branch_taken_0x322a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322a38) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322A40u;
label_322a40:
    // 0x322a40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322a44:
    // 0x322a44: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x322a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_322a48:
    // 0x322a48: 0xac443e30  sw          $a0, 0x3E30($v0)
    ctx->pc = 0x322a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 4));
label_322a4c:
    // 0x322a4c: 0x24a5f9a0  addiu       $a1, $a1, -0x660
    ctx->pc = 0x322a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
label_322a50:
    // 0x322a50: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x322a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_322a54:
    // 0x322a54: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x322a54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_322a58:
    // 0x322a58: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x322a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_322a5c:
    // 0x322a5c: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x322a5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_322a60:
    // 0x322a60: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x322a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_322a64:
    // 0x322a64: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x322a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_322a68:
    // 0x322a68: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x322a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_322a6c:
    // 0x322a6c: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
label_322a70:
    if (ctx->pc == 0x322A70u) {
        ctx->pc = 0x322A70u;
            // 0x322a70: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x322A74u;
        goto label_322a74;
    }
    ctx->pc = 0x322A6Cu;
    {
        const bool branch_taken_0x322a6c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x322A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322A6Cu;
            // 0x322a70: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a6c) {
            ctx->pc = 0x322A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_322a54;
        }
    }
    ctx->pc = 0x322A74u;
label_322a74:
    // 0x322a74: 0x8202008c  lb          $v0, 0x8C($s0)
    ctx->pc = 0x322a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_322a78:
    // 0x322a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322a7c:
    // 0x322a7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x322a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_322a80:
    // 0x322a80: 0x9042029f  lbu         $v0, 0x29F($v0)
    ctx->pc = 0x322a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 671)));
label_322a84:
    // 0x322a84: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x322a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_322a88:
    // 0x322a88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322a8c:
    // 0x322a8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322a90:
    // 0x322a90: 0x320f809  jalr        $t9
label_322a94:
    if (ctx->pc == 0x322A94u) {
        ctx->pc = 0x322A94u;
            // 0x322a94: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x322A98u;
        goto label_322a98;
    }
    ctx->pc = 0x322A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322A98u);
        ctx->pc = 0x322A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322A90u;
            // 0x322a94: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322A98u; }
            if (ctx->pc != 0x322A98u) { return; }
        }
        }
    }
    ctx->pc = 0x322A98u;
label_322a98:
    // 0x322a98: 0x10000484  b           . + 4 + (0x484 << 2)
label_322a9c:
    if (ctx->pc == 0x322A9Cu) {
        ctx->pc = 0x322AA0u;
        goto label_322aa0;
    }
    ctx->pc = 0x322A98u;
    {
        const bool branch_taken_0x322a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322a98) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322AA0u;
label_322aa0:
    // 0x322aa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322aa4:
    // 0x322aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322aa8:
    // 0x322aa8: 0xac463e30  sw          $a2, 0x3E30($v0)
    ctx->pc = 0x322aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 6));
label_322aac:
    // 0x322aac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322ab0:
    // 0x322ab0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ab4:
    // 0x322ab4: 0x320f809  jalr        $t9
label_322ab8:
    if (ctx->pc == 0x322AB8u) {
        ctx->pc = 0x322AB8u;
            // 0x322ab8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x322ABCu;
        goto label_322abc;
    }
    ctx->pc = 0x322AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322ABCu);
        ctx->pc = 0x322AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322AB4u;
            // 0x322ab8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322ABCu; }
            if (ctx->pc != 0x322ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x322ABCu;
label_322abc:
    // 0x322abc: 0x1000047b  b           . + 4 + (0x47B << 2)
label_322ac0:
    if (ctx->pc == 0x322AC0u) {
        ctx->pc = 0x322AC4u;
        goto label_322ac4;
    }
    ctx->pc = 0x322ABCu;
    {
        const bool branch_taken_0x322abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322abc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322AC4u;
label_322ac4:
    // 0x322ac4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322ac8:
    // 0x322ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322acc:
    // 0x322acc: 0xac453e30  sw          $a1, 0x3E30($v0)
    ctx->pc = 0x322accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 5));
label_322ad0:
    // 0x322ad0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322ad4:
    // 0x322ad4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ad8:
    // 0x322ad8: 0x320f809  jalr        $t9
label_322adc:
    if (ctx->pc == 0x322ADCu) {
        ctx->pc = 0x322ADCu;
            // 0x322adc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322AE0u;
        goto label_322ae0;
    }
    ctx->pc = 0x322AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322AE0u);
        ctx->pc = 0x322ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322AD8u;
            // 0x322adc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322AE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322AE0u; }
            if (ctx->pc != 0x322AE0u) { return; }
        }
        }
    }
    ctx->pc = 0x322AE0u;
label_322ae0:
    // 0x322ae0: 0x10000472  b           . + 4 + (0x472 << 2)
label_322ae4:
    if (ctx->pc == 0x322AE4u) {
        ctx->pc = 0x322AE8u;
        goto label_322ae8;
    }
    ctx->pc = 0x322AE0u;
    {
        const bool branch_taken_0x322ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ae0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322AE8u;
label_322ae8:
    // 0x322ae8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x322ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_322aec:
    // 0x322aec: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x322aecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_322af0:
    // 0x322af0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x322af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_322af4:
    // 0x322af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322af8:
    // 0x322af8: 0xc14248c  jal         func_509230
label_322afc:
    if (ctx->pc == 0x322AFCu) {
        ctx->pc = 0x322AFCu;
            // 0x322afc: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->pc = 0x322B00u;
        goto label_322b00;
    }
    ctx->pc = 0x322AF8u;
    SET_GPR_U32(ctx, 31, 0x322B00u);
    ctx->pc = 0x322AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322AF8u;
            // 0x322afc: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509230u;
    if (runtime->hasFunction(0x509230u)) {
        auto targetFn = runtime->lookupFunction(0x509230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322B00u; }
        if (ctx->pc != 0x322B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509230_0x509230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322B00u; }
        if (ctx->pc != 0x322B00u) { return; }
    }
    ctx->pc = 0x322B00u;
label_322b00:
    // 0x322b00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x322b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322b04:
    // 0x322b04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322b08:
    // 0x322b08: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322b0c:
    // 0x322b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322b10:
    // 0x322b10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322b14:
    // 0x322b14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322b18:
    // 0x322b18: 0x320f809  jalr        $t9
label_322b1c:
    if (ctx->pc == 0x322B1Cu) {
        ctx->pc = 0x322B1Cu;
            // 0x322b1c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322B20u;
        goto label_322b20;
    }
    ctx->pc = 0x322B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322B20u);
        ctx->pc = 0x322B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B18u;
            // 0x322b1c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322B20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322B20u; }
            if (ctx->pc != 0x322B20u) { return; }
        }
        }
    }
    ctx->pc = 0x322B20u;
label_322b20:
    // 0x322b20: 0x10000462  b           . + 4 + (0x462 << 2)
label_322b24:
    if (ctx->pc == 0x322B24u) {
        ctx->pc = 0x322B28u;
        goto label_322b28;
    }
    ctx->pc = 0x322B20u;
    {
        const bool branch_taken_0x322b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b20) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322B28u;
label_322b28:
    // 0x322b28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322b2c:
    // 0x322b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322b30:
    // 0x322b30: 0xac453e30  sw          $a1, 0x3E30($v0)
    ctx->pc = 0x322b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 5));
label_322b34:
    // 0x322b34: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322b38:
    // 0x322b38: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322b3c:
    // 0x322b3c: 0x320f809  jalr        $t9
label_322b40:
    if (ctx->pc == 0x322B40u) {
        ctx->pc = 0x322B40u;
            // 0x322b40: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322B44u;
        goto label_322b44;
    }
    ctx->pc = 0x322B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322B44u);
        ctx->pc = 0x322B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B3Cu;
            // 0x322b40: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322B44u; }
            if (ctx->pc != 0x322B44u) { return; }
        }
        }
    }
    ctx->pc = 0x322B44u;
label_322b44:
    // 0x322b44: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x322b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_322b48:
    // 0x322b48: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_322b4c:
    if (ctx->pc == 0x322B4Cu) {
        ctx->pc = 0x322B4Cu;
            // 0x322b4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x322B50u;
        goto label_322b50;
    }
    ctx->pc = 0x322B48u;
    {
        const bool branch_taken_0x322b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322b48) {
            ctx->pc = 0x322B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322B48u;
            // 0x322b4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322B5Cu;
            goto label_322b5c;
        }
    }
    ctx->pc = 0x322B50u;
label_322b50:
    // 0x322b50: 0x10000456  b           . + 4 + (0x456 << 2)
label_322b54:
    if (ctx->pc == 0x322B54u) {
        ctx->pc = 0x322B54u;
            // 0x322b54: 0xae000680  sw          $zero, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
        ctx->pc = 0x322B58u;
        goto label_322b58;
    }
    ctx->pc = 0x322B50u;
    {
        const bool branch_taken_0x322b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B50u;
            // 0x322b54: 0xae000680  sw          $zero, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b50) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322B58u;
label_322b58:
    // 0x322b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322b5c:
    // 0x322b5c: 0x10000453  b           . + 4 + (0x453 << 2)
label_322b60:
    if (ctx->pc == 0x322B60u) {
        ctx->pc = 0x322B60u;
            // 0x322b60: 0xae030680  sw          $v1, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 3));
        ctx->pc = 0x322B64u;
        goto label_322b64;
    }
    ctx->pc = 0x322B5Cu;
    {
        const bool branch_taken_0x322b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B5Cu;
            // 0x322b60: 0xae030680  sw          $v1, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b5c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322B64u;
label_322b64:
    // 0x322b64: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x322b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_322b68:
    // 0x322b68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322b6c:
    // 0x322b6c: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322b70:
    // 0x322b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322b74:
    // 0x322b74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322b78:
    // 0x322b78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322b7c:
    // 0x322b7c: 0x320f809  jalr        $t9
label_322b80:
    if (ctx->pc == 0x322B80u) {
        ctx->pc = 0x322B80u;
            // 0x322b80: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322B84u;
        goto label_322b84;
    }
    ctx->pc = 0x322B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322B84u);
        ctx->pc = 0x322B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322B7Cu;
            // 0x322b80: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322B84u; }
            if (ctx->pc != 0x322B84u) { return; }
        }
        }
    }
    ctx->pc = 0x322B84u;
label_322b84:
    // 0x322b84: 0x10000449  b           . + 4 + (0x449 << 2)
label_322b88:
    if (ctx->pc == 0x322B88u) {
        ctx->pc = 0x322B8Cu;
        goto label_322b8c;
    }
    ctx->pc = 0x322B84u;
    {
        const bool branch_taken_0x322b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b84) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322B8Cu;
label_322b8c:
    // 0x322b8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322b90:
    // 0x322b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322b94:
    // 0x322b94: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322b98:
    // 0x322b98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322b9c:
    // 0x322b9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ba0:
    // 0x322ba0: 0x320f809  jalr        $t9
label_322ba4:
    if (ctx->pc == 0x322BA4u) {
        ctx->pc = 0x322BA4u;
            // 0x322ba4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322BA8u;
        goto label_322ba8;
    }
    ctx->pc = 0x322BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322BA8u);
        ctx->pc = 0x322BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322BA0u;
            // 0x322ba4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322BA8u; }
            if (ctx->pc != 0x322BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x322BA8u;
label_322ba8:
    // 0x322ba8: 0x10000440  b           . + 4 + (0x440 << 2)
label_322bac:
    if (ctx->pc == 0x322BACu) {
        ctx->pc = 0x322BB0u;
        goto label_322bb0;
    }
    ctx->pc = 0x322BA8u;
    {
        const bool branch_taken_0x322ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ba8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322BB0u;
label_322bb0:
    // 0x322bb0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x322bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_322bb4:
    // 0x322bb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322bb8:
    // 0x322bb8: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322bbc:
    // 0x322bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322bc0:
    // 0x322bc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322bc4:
    // 0x322bc4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322bc8:
    // 0x322bc8: 0x320f809  jalr        $t9
label_322bcc:
    if (ctx->pc == 0x322BCCu) {
        ctx->pc = 0x322BCCu;
            // 0x322bcc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322BD0u;
        goto label_322bd0;
    }
    ctx->pc = 0x322BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322BD0u);
        ctx->pc = 0x322BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322BC8u;
            // 0x322bcc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322BD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322BD0u; }
            if (ctx->pc != 0x322BD0u) { return; }
        }
        }
    }
    ctx->pc = 0x322BD0u;
label_322bd0:
    // 0x322bd0: 0x10000436  b           . + 4 + (0x436 << 2)
label_322bd4:
    if (ctx->pc == 0x322BD4u) {
        ctx->pc = 0x322BD8u;
        goto label_322bd8;
    }
    ctx->pc = 0x322BD0u;
    {
        const bool branch_taken_0x322bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322bd0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322BD8u;
label_322bd8:
    // 0x322bd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322bdc:
    // 0x322bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322be0:
    // 0x322be0: 0xac473e30  sw          $a3, 0x3E30($v0)
    ctx->pc = 0x322be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 7));
label_322be4:
    // 0x322be4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322be8:
    // 0x322be8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322bec:
    // 0x322bec: 0x320f809  jalr        $t9
label_322bf0:
    if (ctx->pc == 0x322BF0u) {
        ctx->pc = 0x322BF0u;
            // 0x322bf0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x322BF4u;
        goto label_322bf4;
    }
    ctx->pc = 0x322BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322BF4u);
        ctx->pc = 0x322BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322BECu;
            // 0x322bf0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322BF4u; }
            if (ctx->pc != 0x322BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x322BF4u;
label_322bf4:
    // 0x322bf4: 0x1000042d  b           . + 4 + (0x42D << 2)
label_322bf8:
    if (ctx->pc == 0x322BF8u) {
        ctx->pc = 0x322BFCu;
        goto label_322bfc;
    }
    ctx->pc = 0x322BF4u;
    {
        const bool branch_taken_0x322bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322bf4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322BFCu;
label_322bfc:
    // 0x322bfc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322c00:
    // 0x322c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322c04:
    // 0x322c04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322c08:
    // 0x322c08: 0x320f809  jalr        $t9
label_322c0c:
    if (ctx->pc == 0x322C0Cu) {
        ctx->pc = 0x322C0Cu;
            // 0x322c0c: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x322C10u;
        goto label_322c10;
    }
    ctx->pc = 0x322C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322C10u);
        ctx->pc = 0x322C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322C08u;
            // 0x322c0c: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322C10u; }
            if (ctx->pc != 0x322C10u) { return; }
        }
        }
    }
    ctx->pc = 0x322C10u;
label_322c10:
    // 0x322c10: 0x10000426  b           . + 4 + (0x426 << 2)
label_322c14:
    if (ctx->pc == 0x322C14u) {
        ctx->pc = 0x322C18u;
        goto label_322c18;
    }
    ctx->pc = 0x322C10u;
    {
        const bool branch_taken_0x322c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c10) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322C18u;
label_322c18:
    // 0x322c18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322c1c:
    // 0x322c1c: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322c20:
    // 0x322c20: 0xc0fd080  jal         func_3F4200
label_322c24:
    if (ctx->pc == 0x322C24u) {
        ctx->pc = 0x322C24u;
            // 0x322c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322C28u;
        goto label_322c28;
    }
    ctx->pc = 0x322C20u;
    SET_GPR_U32(ctx, 31, 0x322C28u);
    ctx->pc = 0x322C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322C20u;
            // 0x322c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C28u; }
        if (ctx->pc != 0x322C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C28u; }
        if (ctx->pc != 0x322C28u) { return; }
    }
    ctx->pc = 0x322C28u;
label_322c28:
    // 0x322c28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322c2c:
    // 0x322c2c: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x322c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_322c30:
    // 0x322c30: 0xc0fd080  jal         func_3F4200
label_322c34:
    if (ctx->pc == 0x322C34u) {
        ctx->pc = 0x322C34u;
            // 0x322c34: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x322C38u;
        goto label_322c38;
    }
    ctx->pc = 0x322C30u;
    SET_GPR_U32(ctx, 31, 0x322C38u);
    ctx->pc = 0x322C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322C30u;
            // 0x322c34: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C38u; }
        if (ctx->pc != 0x322C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C38u; }
        if (ctx->pc != 0x322C38u) { return; }
    }
    ctx->pc = 0x322C38u;
label_322c38:
    // 0x322c38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322c3c:
    // 0x322c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322c40:
    // 0x322c40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322c44:
    // 0x322c44: 0x320f809  jalr        $t9
label_322c48:
    if (ctx->pc == 0x322C48u) {
        ctx->pc = 0x322C48u;
            // 0x322c48: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x322C4Cu;
        goto label_322c4c;
    }
    ctx->pc = 0x322C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322C4Cu);
        ctx->pc = 0x322C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322C44u;
            // 0x322c48: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322C4Cu; }
            if (ctx->pc != 0x322C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x322C4Cu;
label_322c4c:
    // 0x322c4c: 0x10000417  b           . + 4 + (0x417 << 2)
label_322c50:
    if (ctx->pc == 0x322C50u) {
        ctx->pc = 0x322C54u;
        goto label_322c54;
    }
    ctx->pc = 0x322C4Cu;
    {
        const bool branch_taken_0x322c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322c4c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322C54u;
label_322c54:
    // 0x322c54: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x322c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322c58:
    // 0x322c58: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_322c5c:
    // 0x322c5c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x322c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_322c60:
    // 0x322c60: 0xc040180  jal         func_100600
label_322c64:
    if (ctx->pc == 0x322C64u) {
        ctx->pc = 0x322C64u;
            // 0x322c64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x322C68u;
        goto label_322c68;
    }
    ctx->pc = 0x322C60u;
    SET_GPR_U32(ctx, 31, 0x322C68u);
    ctx->pc = 0x322C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322C60u;
            // 0x322c64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C68u; }
        if (ctx->pc != 0x322C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C68u; }
        if (ctx->pc != 0x322C68u) { return; }
    }
    ctx->pc = 0x322C68u;
label_322c68:
    // 0x322c68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_322c6c:
    if (ctx->pc == 0x322C6Cu) {
        ctx->pc = 0x322C6Cu;
            // 0x322c6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322C70u;
        goto label_322c70;
    }
    ctx->pc = 0x322C68u;
    {
        const bool branch_taken_0x322c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322C68u;
            // 0x322c6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c68) {
            ctx->pc = 0x322CA0u;
            goto label_322ca0;
        }
    }
    ctx->pc = 0x322C70u;
label_322c70:
    // 0x322c70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322c74:
    // 0x322c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322c78:
    // 0x322c78: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322c7c:
    // 0x322c7c: 0xc10ca68  jal         func_4329A0
label_322c80:
    if (ctx->pc == 0x322C80u) {
        ctx->pc = 0x322C80u;
            // 0x322c80: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322C84u;
        goto label_322c84;
    }
    ctx->pc = 0x322C7Cu;
    SET_GPR_U32(ctx, 31, 0x322C84u);
    ctx->pc = 0x322C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322C7Cu;
            // 0x322c80: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C84u; }
        if (ctx->pc != 0x322C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322C84u; }
        if (ctx->pc != 0x322C84u) { return; }
    }
    ctx->pc = 0x322C84u;
label_322c84:
    // 0x322c84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x322c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_322c88:
    // 0x322c88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322c8c:
    // 0x322c8c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x322c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_322c90:
    // 0x322c90: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x322c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
label_322c94:
    // 0x322c94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322c98:
    // 0x322c98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322c9c:
    // 0x322c9c: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322ca0:
    // 0x322ca0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x322ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_322ca4:
    // 0x322ca4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322ca8:
    // 0x322ca8: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322cac:
    // 0x322cac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322cb0:
    // 0x322cb0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322cb4:
    // 0x322cb4: 0x320f809  jalr        $t9
label_322cb8:
    if (ctx->pc == 0x322CB8u) {
        ctx->pc = 0x322CB8u;
            // 0x322cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322CBCu;
        goto label_322cbc;
    }
    ctx->pc = 0x322CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322CBCu);
        ctx->pc = 0x322CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322CB4u;
            // 0x322cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322CBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322CBCu; }
            if (ctx->pc != 0x322CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x322CBCu;
label_322cbc:
    // 0x322cbc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_322cc0:
    // 0x322cc0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x322cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322cc4:
    // 0x322cc4: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
label_322cc8:
    if (ctx->pc == 0x322CC8u) {
        ctx->pc = 0x322CC8u;
            // 0x322cc8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322CCCu;
        goto label_322ccc;
    }
    ctx->pc = 0x322CC4u;
    {
        const bool branch_taken_0x322cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322cc4) {
            ctx->pc = 0x322CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322CC4u;
            // 0x322cc8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322D00u;
            goto label_322d00;
        }
    }
    ctx->pc = 0x322CCCu;
label_322ccc:
    // 0x322ccc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x322cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_322cd0:
    // 0x322cd0: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_322cd4:
    if (ctx->pc == 0x322CD4u) {
        ctx->pc = 0x322CD4u;
            // 0x322cd4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322CD8u;
        goto label_322cd8;
    }
    ctx->pc = 0x322CD0u;
    {
        const bool branch_taken_0x322cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322cd0) {
            ctx->pc = 0x322CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322CD0u;
            // 0x322cd4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322CE4u;
            goto label_322ce4;
        }
    }
    ctx->pc = 0x322CD8u;
label_322cd8:
    // 0x322cd8: 0x100003f4  b           . + 4 + (0x3F4 << 2)
label_322cdc:
    if (ctx->pc == 0x322CDCu) {
        ctx->pc = 0x322CE0u;
        goto label_322ce0;
    }
    ctx->pc = 0x322CD8u;
    {
        const bool branch_taken_0x322cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cd8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322CE0u;
label_322ce0:
    // 0x322ce0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322ce4:
    // 0x322ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322ce8:
    // 0x322ce8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322cec:
    // 0x322cec: 0x320f809  jalr        $t9
label_322cf0:
    if (ctx->pc == 0x322CF0u) {
        ctx->pc = 0x322CF0u;
            // 0x322cf0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x322CF4u;
        goto label_322cf4;
    }
    ctx->pc = 0x322CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322CF4u);
        ctx->pc = 0x322CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322CECu;
            // 0x322cf0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322CF4u; }
            if (ctx->pc != 0x322CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x322CF4u;
label_322cf4:
    // 0x322cf4: 0x100003ed  b           . + 4 + (0x3ED << 2)
label_322cf8:
    if (ctx->pc == 0x322CF8u) {
        ctx->pc = 0x322CFCu;
        goto label_322cfc;
    }
    ctx->pc = 0x322CF4u;
    {
        const bool branch_taken_0x322cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322cf4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322CFCu;
label_322cfc:
    // 0x322cfc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322d00:
    // 0x322d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322d04:
    // 0x322d04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322d08:
    // 0x322d08: 0x320f809  jalr        $t9
label_322d0c:
    if (ctx->pc == 0x322D0Cu) {
        ctx->pc = 0x322D0Cu;
            // 0x322d0c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x322D10u;
        goto label_322d10;
    }
    ctx->pc = 0x322D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322D10u);
        ctx->pc = 0x322D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322D08u;
            // 0x322d0c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322D10u; }
            if (ctx->pc != 0x322D10u) { return; }
        }
        }
    }
    ctx->pc = 0x322D10u;
label_322d10:
    // 0x322d10: 0x100003e6  b           . + 4 + (0x3E6 << 2)
label_322d14:
    if (ctx->pc == 0x322D14u) {
        ctx->pc = 0x322D18u;
        goto label_322d18;
    }
    ctx->pc = 0x322D10u;
    {
        const bool branch_taken_0x322d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d10) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322D18u;
label_322d18:
    // 0x322d18: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x322d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322d1c:
    // 0x322d1c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x322d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_322d20:
    // 0x322d20: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x322d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_322d24:
    // 0x322d24: 0xc040180  jal         func_100600
label_322d28:
    if (ctx->pc == 0x322D28u) {
        ctx->pc = 0x322D28u;
            // 0x322d28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x322D2Cu;
        goto label_322d2c;
    }
    ctx->pc = 0x322D24u;
    SET_GPR_U32(ctx, 31, 0x322D2Cu);
    ctx->pc = 0x322D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322D24u;
            // 0x322d28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322D2Cu; }
        if (ctx->pc != 0x322D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322D2Cu; }
        if (ctx->pc != 0x322D2Cu) { return; }
    }
    ctx->pc = 0x322D2Cu;
label_322d2c:
    // 0x322d2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_322d30:
    if (ctx->pc == 0x322D30u) {
        ctx->pc = 0x322D30u;
            // 0x322d30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322D34u;
        goto label_322d34;
    }
    ctx->pc = 0x322D2Cu;
    {
        const bool branch_taken_0x322d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322D2Cu;
            // 0x322d30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d2c) {
            ctx->pc = 0x322D64u;
            goto label_322d64;
        }
    }
    ctx->pc = 0x322D34u;
label_322d34:
    // 0x322d34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322d38:
    // 0x322d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322d3c:
    // 0x322d3c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322d40:
    // 0x322d40: 0xc10ca68  jal         func_4329A0
label_322d44:
    if (ctx->pc == 0x322D44u) {
        ctx->pc = 0x322D44u;
            // 0x322d44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322D48u;
        goto label_322d48;
    }
    ctx->pc = 0x322D40u;
    SET_GPR_U32(ctx, 31, 0x322D48u);
    ctx->pc = 0x322D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322D40u;
            // 0x322d44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322D48u; }
        if (ctx->pc != 0x322D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322D48u; }
        if (ctx->pc != 0x322D48u) { return; }
    }
    ctx->pc = 0x322D48u;
label_322d48:
    // 0x322d48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x322d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_322d4c:
    // 0x322d4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322d50:
    // 0x322d50: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x322d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_322d54:
    // 0x322d54: 0x2442e4e0  addiu       $v0, $v0, -0x1B20
    ctx->pc = 0x322d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960352));
label_322d58:
    // 0x322d58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322d5c:
    // 0x322d5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322d60:
    // 0x322d60: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322d64:
    // 0x322d64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322d68:
    // 0x322d68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322d6c:
    // 0x322d6c: 0x320f809  jalr        $t9
label_322d70:
    if (ctx->pc == 0x322D70u) {
        ctx->pc = 0x322D70u;
            // 0x322d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322D74u;
        goto label_322d74;
    }
    ctx->pc = 0x322D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322D74u);
        ctx->pc = 0x322D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322D6Cu;
            // 0x322d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322D74u; }
            if (ctx->pc != 0x322D74u) { return; }
        }
        }
    }
    ctx->pc = 0x322D74u;
label_322d74:
    // 0x322d74: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_322d78:
    // 0x322d78: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x322d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322d7c:
    // 0x322d7c: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_322d80:
    if (ctx->pc == 0x322D80u) {
        ctx->pc = 0x322D80u;
            // 0x322d80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322D84u;
        goto label_322d84;
    }
    ctx->pc = 0x322D7Cu;
    {
        const bool branch_taken_0x322d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322d7c) {
            ctx->pc = 0x322D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322D7Cu;
            // 0x322d80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322DE8u;
            goto label_322de8;
        }
    }
    ctx->pc = 0x322D84u;
label_322d84:
    // 0x322d84: 0x48003c9  bltz        $a0, . + 4 + (0x3C9 << 2)
label_322d88:
    if (ctx->pc == 0x322D88u) {
        ctx->pc = 0x322D8Cu;
        goto label_322d8c;
    }
    ctx->pc = 0x322D84u;
    {
        const bool branch_taken_0x322d84 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x322d84) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322D8Cu;
label_322d8c:
    // 0x322d8c: 0x28830011  slti        $v1, $a0, 0x11
    ctx->pc = 0x322d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
label_322d90:
    // 0x322d90: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_322d94:
    if (ctx->pc == 0x322D94u) {
        ctx->pc = 0x322D94u;
            // 0x322d94: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x322D98u;
        goto label_322d98;
    }
    ctx->pc = 0x322D90u;
    {
        const bool branch_taken_0x322d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322d90) {
            ctx->pc = 0x322D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322D90u;
            // 0x322d94: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322DA4u;
            goto label_322da4;
        }
    }
    ctx->pc = 0x322D98u;
label_322d98:
    // 0x322d98: 0x100003c4  b           . + 4 + (0x3C4 << 2)
label_322d9c:
    if (ctx->pc == 0x322D9Cu) {
        ctx->pc = 0x322DA0u;
        goto label_322da0;
    }
    ctx->pc = 0x322D98u;
    {
        const bool branch_taken_0x322d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d98) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322DA0u;
label_322da0:
    // 0x322da0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x322da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_322da4:
    // 0x322da4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_322da8:
    if (ctx->pc == 0x322DA8u) {
        ctx->pc = 0x322DA8u;
            // 0x322da8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x322DACu;
        goto label_322dac;
    }
    ctx->pc = 0x322DA4u;
    {
        const bool branch_taken_0x322da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322da4) {
            ctx->pc = 0x322DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322DA4u;
            // 0x322da8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322DC0u;
            goto label_322dc0;
        }
    }
    ctx->pc = 0x322DACu;
label_322dac:
    // 0x322dac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x322dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_322db0:
    // 0x322db0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322db4:
    // 0x322db4: 0x10000004  b           . + 4 + (0x4 << 2)
label_322db8:
    if (ctx->pc == 0x322DB8u) {
        ctx->pc = 0x322DB8u;
            // 0x322db8: 0xac433e30  sw          $v1, 0x3E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
        ctx->pc = 0x322DBCu;
        goto label_322dbc;
    }
    ctx->pc = 0x322DB4u;
    {
        const bool branch_taken_0x322db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322DB4u;
            // 0x322db8: 0xac433e30  sw          $v1, 0x3E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322db4) {
            ctx->pc = 0x322DC8u;
            goto label_322dc8;
        }
    }
    ctx->pc = 0x322DBCu;
label_322dbc:
    // 0x322dbc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x322dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_322dc0:
    // 0x322dc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322dc4:
    // 0x322dc4: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322dc8:
    // 0x322dc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322dcc:
    // 0x322dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322dd0:
    // 0x322dd0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322dd4:
    // 0x322dd4: 0x320f809  jalr        $t9
label_322dd8:
    if (ctx->pc == 0x322DD8u) {
        ctx->pc = 0x322DD8u;
            // 0x322dd8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x322DDCu;
        goto label_322ddc;
    }
    ctx->pc = 0x322DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322DDCu);
        ctx->pc = 0x322DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322DD4u;
            // 0x322dd8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322DDCu; }
            if (ctx->pc != 0x322DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x322DDCu;
label_322ddc:
    // 0x322ddc: 0x100003b3  b           . + 4 + (0x3B3 << 2)
label_322de0:
    if (ctx->pc == 0x322DE0u) {
        ctx->pc = 0x322DE4u;
        goto label_322de4;
    }
    ctx->pc = 0x322DDCu;
    {
        const bool branch_taken_0x322ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ddc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322DE4u;
label_322de4:
    // 0x322de4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322de8:
    // 0x322de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322dec:
    // 0x322dec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322df0:
    // 0x322df0: 0x320f809  jalr        $t9
label_322df4:
    if (ctx->pc == 0x322DF4u) {
        ctx->pc = 0x322DF4u;
            // 0x322df4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x322DF8u;
        goto label_322df8;
    }
    ctx->pc = 0x322DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322DF8u);
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322DF0u;
            // 0x322df4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322DF8u; }
            if (ctx->pc != 0x322DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x322DF8u;
label_322df8:
    // 0x322df8: 0x100003ac  b           . + 4 + (0x3AC << 2)
label_322dfc:
    if (ctx->pc == 0x322DFCu) {
        ctx->pc = 0x322E00u;
        goto label_322e00;
    }
    ctx->pc = 0x322DF8u;
    {
        const bool branch_taken_0x322df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322df8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322E00u;
label_322e00:
    // 0x322e00: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x322e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322e04:
    // 0x322e04: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x322e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_322e08:
    // 0x322e08: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x322e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_322e0c:
    // 0x322e0c: 0xc040180  jal         func_100600
label_322e10:
    if (ctx->pc == 0x322E10u) {
        ctx->pc = 0x322E10u;
            // 0x322e10: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x322E14u;
        goto label_322e14;
    }
    ctx->pc = 0x322E0Cu;
    SET_GPR_U32(ctx, 31, 0x322E14u);
    ctx->pc = 0x322E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322E0Cu;
            // 0x322e10: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322E14u; }
        if (ctx->pc != 0x322E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322E14u; }
        if (ctx->pc != 0x322E14u) { return; }
    }
    ctx->pc = 0x322E14u;
label_322e14:
    // 0x322e14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_322e18:
    if (ctx->pc == 0x322E18u) {
        ctx->pc = 0x322E18u;
            // 0x322e18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322E1Cu;
        goto label_322e1c;
    }
    ctx->pc = 0x322E14u;
    {
        const bool branch_taken_0x322e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322E14u;
            // 0x322e18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e14) {
            ctx->pc = 0x322E4Cu;
            goto label_322e4c;
        }
    }
    ctx->pc = 0x322E1Cu;
label_322e1c:
    // 0x322e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322e20:
    // 0x322e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322e24:
    // 0x322e24: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322e28:
    // 0x322e28: 0xc10ca68  jal         func_4329A0
label_322e2c:
    if (ctx->pc == 0x322E2Cu) {
        ctx->pc = 0x322E2Cu;
            // 0x322e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322E30u;
        goto label_322e30;
    }
    ctx->pc = 0x322E28u;
    SET_GPR_U32(ctx, 31, 0x322E30u);
    ctx->pc = 0x322E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322E28u;
            // 0x322e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322E30u; }
        if (ctx->pc != 0x322E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322E30u; }
        if (ctx->pc != 0x322E30u) { return; }
    }
    ctx->pc = 0x322E30u;
label_322e30:
    // 0x322e30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x322e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_322e34:
    // 0x322e34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322e38:
    // 0x322e38: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x322e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_322e3c:
    // 0x322e3c: 0x2442e960  addiu       $v0, $v0, -0x16A0
    ctx->pc = 0x322e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
label_322e40:
    // 0x322e40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322e44:
    // 0x322e44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322e48:
    // 0x322e48: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322e4c:
    // 0x322e4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322e50:
    // 0x322e50: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322e54:
    // 0x322e54: 0x320f809  jalr        $t9
label_322e58:
    if (ctx->pc == 0x322E58u) {
        ctx->pc = 0x322E58u;
            // 0x322e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322E5Cu;
        goto label_322e5c;
    }
    ctx->pc = 0x322E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322E5Cu);
        ctx->pc = 0x322E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322E54u;
            // 0x322e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322E5Cu; }
            if (ctx->pc != 0x322E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x322E5Cu;
label_322e5c:
    // 0x322e5c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_322e60:
    // 0x322e60: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x322e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322e64:
    // 0x322e64: 0x50850021  beql        $a0, $a1, . + 4 + (0x21 << 2)
label_322e68:
    if (ctx->pc == 0x322E68u) {
        ctx->pc = 0x322E68u;
            // 0x322e68: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322E6Cu;
        goto label_322e6c;
    }
    ctx->pc = 0x322E64u;
    {
        const bool branch_taken_0x322e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x322e64) {
            ctx->pc = 0x322E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322E64u;
            // 0x322e68: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322EECu;
            goto label_322eec;
        }
    }
    ctx->pc = 0x322E6Cu;
label_322e6c:
    // 0x322e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_322e70:
    // 0x322e70: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
label_322e74:
    if (ctx->pc == 0x322E74u) {
        ctx->pc = 0x322E74u;
            // 0x322e74: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322E78u;
        goto label_322e78;
    }
    ctx->pc = 0x322E70u;
    {
        const bool branch_taken_0x322e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322e70) {
            ctx->pc = 0x322E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322E70u;
            // 0x322e74: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322ED0u;
            goto label_322ed0;
        }
    }
    ctx->pc = 0x322E78u;
label_322e78:
    // 0x322e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322e7c:
    // 0x322e7c: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
label_322e80:
    if (ctx->pc == 0x322E80u) {
        ctx->pc = 0x322E80u;
            // 0x322e80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322E84u;
        goto label_322e84;
    }
    ctx->pc = 0x322E7Cu;
    {
        const bool branch_taken_0x322e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322e7c) {
            ctx->pc = 0x322E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322E7Cu;
            // 0x322e80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322EB4u;
            goto label_322eb4;
        }
    }
    ctx->pc = 0x322E84u;
label_322e84:
    // 0x322e84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_322e88:
    if (ctx->pc == 0x322E88u) {
        ctx->pc = 0x322E88u;
            // 0x322e88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322E8Cu;
        goto label_322e8c;
    }
    ctx->pc = 0x322E84u;
    {
        const bool branch_taken_0x322e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322e84) {
            ctx->pc = 0x322E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322E84u;
            // 0x322e88: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322E98u;
            goto label_322e98;
        }
    }
    ctx->pc = 0x322E8Cu;
label_322e8c:
    // 0x322e8c: 0x10000387  b           . + 4 + (0x387 << 2)
label_322e90:
    if (ctx->pc == 0x322E90u) {
        ctx->pc = 0x322E94u;
        goto label_322e94;
    }
    ctx->pc = 0x322E8Cu;
    {
        const bool branch_taken_0x322e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322e8c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322E94u;
label_322e94:
    // 0x322e94: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322e98:
    // 0x322e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322e9c:
    // 0x322e9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ea0:
    // 0x322ea0: 0x320f809  jalr        $t9
label_322ea4:
    if (ctx->pc == 0x322EA4u) {
        ctx->pc = 0x322EA4u;
            // 0x322ea4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x322EA8u;
        goto label_322ea8;
    }
    ctx->pc = 0x322EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322EA8u);
        ctx->pc = 0x322EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322EA0u;
            // 0x322ea4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322EA8u; }
            if (ctx->pc != 0x322EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x322EA8u;
label_322ea8:
    // 0x322ea8: 0x10000380  b           . + 4 + (0x380 << 2)
label_322eac:
    if (ctx->pc == 0x322EACu) {
        ctx->pc = 0x322EB0u;
        goto label_322eb0;
    }
    ctx->pc = 0x322EA8u;
    {
        const bool branch_taken_0x322ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ea8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322EB0u;
label_322eb0:
    // 0x322eb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322eb4:
    // 0x322eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322eb8:
    // 0x322eb8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ebc:
    // 0x322ebc: 0x320f809  jalr        $t9
label_322ec0:
    if (ctx->pc == 0x322EC0u) {
        ctx->pc = 0x322EC0u;
            // 0x322ec0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x322EC4u;
        goto label_322ec4;
    }
    ctx->pc = 0x322EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322EC4u);
        ctx->pc = 0x322EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322EBCu;
            // 0x322ec0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322EC4u; }
            if (ctx->pc != 0x322EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x322EC4u;
label_322ec4:
    // 0x322ec4: 0x10000379  b           . + 4 + (0x379 << 2)
label_322ec8:
    if (ctx->pc == 0x322EC8u) {
        ctx->pc = 0x322ECCu;
        goto label_322ecc;
    }
    ctx->pc = 0x322EC4u;
    {
        const bool branch_taken_0x322ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ec4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322ECCu;
label_322ecc:
    // 0x322ecc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322ed0:
    // 0x322ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322ed4:
    // 0x322ed4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ed8:
    // 0x322ed8: 0x320f809  jalr        $t9
label_322edc:
    if (ctx->pc == 0x322EDCu) {
        ctx->pc = 0x322EDCu;
            // 0x322edc: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x322EE0u;
        goto label_322ee0;
    }
    ctx->pc = 0x322ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322EE0u);
        ctx->pc = 0x322EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322ED8u;
            // 0x322edc: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322EE0u; }
            if (ctx->pc != 0x322EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x322EE0u;
label_322ee0:
    // 0x322ee0: 0x10000372  b           . + 4 + (0x372 << 2)
label_322ee4:
    if (ctx->pc == 0x322EE4u) {
        ctx->pc = 0x322EE8u;
        goto label_322ee8;
    }
    ctx->pc = 0x322EE0u;
    {
        const bool branch_taken_0x322ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ee0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322EE8u;
label_322ee8:
    // 0x322ee8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322eec:
    // 0x322eec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322ef0:
    // 0x322ef0: 0x320f809  jalr        $t9
label_322ef4:
    if (ctx->pc == 0x322EF4u) {
        ctx->pc = 0x322EF4u;
            // 0x322ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322EF8u;
        goto label_322ef8;
    }
    ctx->pc = 0x322EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322EF8u);
        ctx->pc = 0x322EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322EF0u;
            // 0x322ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322EF8u; }
            if (ctx->pc != 0x322EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x322EF8u;
label_322ef8:
    // 0x322ef8: 0x1000036c  b           . + 4 + (0x36C << 2)
label_322efc:
    if (ctx->pc == 0x322EFCu) {
        ctx->pc = 0x322F00u;
        goto label_322f00;
    }
    ctx->pc = 0x322EF8u;
    {
        const bool branch_taken_0x322ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ef8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322F00u;
label_322f00:
    // 0x322f00: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x322f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322f04:
    // 0x322f04: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x322f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_322f08:
    // 0x322f08: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x322f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_322f0c:
    // 0x322f0c: 0xc040180  jal         func_100600
label_322f10:
    if (ctx->pc == 0x322F10u) {
        ctx->pc = 0x322F10u;
            // 0x322f10: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x322F14u;
        goto label_322f14;
    }
    ctx->pc = 0x322F0Cu;
    SET_GPR_U32(ctx, 31, 0x322F14u);
    ctx->pc = 0x322F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322F0Cu;
            // 0x322f10: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322F14u; }
        if (ctx->pc != 0x322F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322F14u; }
        if (ctx->pc != 0x322F14u) { return; }
    }
    ctx->pc = 0x322F14u;
label_322f14:
    // 0x322f14: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_322f18:
    if (ctx->pc == 0x322F18u) {
        ctx->pc = 0x322F18u;
            // 0x322f18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322F1Cu;
        goto label_322f1c;
    }
    ctx->pc = 0x322F14u;
    {
        const bool branch_taken_0x322f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322F14u;
            // 0x322f18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f14) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322F1Cu;
label_322f1c:
    // 0x322f1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322f20:
    // 0x322f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322f24:
    // 0x322f24: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322f28:
    // 0x322f28: 0xc10ca68  jal         func_4329A0
label_322f2c:
    if (ctx->pc == 0x322F2Cu) {
        ctx->pc = 0x322F2Cu;
            // 0x322f2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322F30u;
        goto label_322f30;
    }
    ctx->pc = 0x322F28u;
    SET_GPR_U32(ctx, 31, 0x322F30u);
    ctx->pc = 0x322F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322F28u;
            // 0x322f2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322F30u; }
        if (ctx->pc != 0x322F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322F30u; }
        if (ctx->pc != 0x322F30u) { return; }
    }
    ctx->pc = 0x322F30u;
label_322f30:
    // 0x322f30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x322f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_322f34:
    // 0x322f34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x322f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_322f38:
    // 0x322f38: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x322f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_322f3c:
    // 0x322f3c: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x322f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
label_322f40:
    // 0x322f40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x322f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_322f44:
    // 0x322f44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322f48:
    // 0x322f48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x322f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_322f4c:
    // 0x322f4c: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x322f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_322f50:
    // 0x322f50: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x322f50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
label_322f54:
    // 0x322f54: 0xa2200059  sb          $zero, 0x59($s1)
    ctx->pc = 0x322f54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
label_322f58:
    // 0x322f58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_322f5c:
    // 0x322f5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x322f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_322f60:
    // 0x322f60: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x322f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_322f64:
    // 0x322f64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322f68:
    // 0x322f68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x322f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_322f6c:
    // 0x322f6c: 0x320f809  jalr        $t9
label_322f70:
    if (ctx->pc == 0x322F70u) {
        ctx->pc = 0x322F70u;
            // 0x322f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322F74u;
        goto label_322f74;
    }
    ctx->pc = 0x322F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322F74u);
        ctx->pc = 0x322F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322F6Cu;
            // 0x322f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322F74u; }
            if (ctx->pc != 0x322F74u) { return; }
        }
        }
    }
    ctx->pc = 0x322F74u;
label_322f74:
    // 0x322f74: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x322f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_322f78:
    // 0x322f78: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x322f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_322f7c:
    // 0x322f7c: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
label_322f80:
    if (ctx->pc == 0x322F80u) {
        ctx->pc = 0x322F80u;
            // 0x322f80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322F84u;
        goto label_322f84;
    }
    ctx->pc = 0x322F7Cu;
    {
        const bool branch_taken_0x322f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322f7c) {
            ctx->pc = 0x322F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322F7Cu;
            // 0x322f80: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322FB8u;
            goto label_322fb8;
        }
    }
    ctx->pc = 0x322F84u;
label_322f84:
    // 0x322f84: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x322f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_322f88:
    // 0x322f88: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_322f8c:
    if (ctx->pc == 0x322F8Cu) {
        ctx->pc = 0x322F8Cu;
            // 0x322f8c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x322F90u;
        goto label_322f90;
    }
    ctx->pc = 0x322F88u;
    {
        const bool branch_taken_0x322f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x322f88) {
            ctx->pc = 0x322F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x322F88u;
            // 0x322f8c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x322F9Cu;
            goto label_322f9c;
        }
    }
    ctx->pc = 0x322F90u;
label_322f90:
    // 0x322f90: 0x10000346  b           . + 4 + (0x346 << 2)
label_322f94:
    if (ctx->pc == 0x322F94u) {
        ctx->pc = 0x322F98u;
        goto label_322f98;
    }
    ctx->pc = 0x322F90u;
    {
        const bool branch_taken_0x322f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f90) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322F98u;
label_322f98:
    // 0x322f98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322f9c:
    // 0x322f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322fa0:
    // 0x322fa0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322fa4:
    // 0x322fa4: 0x320f809  jalr        $t9
label_322fa8:
    if (ctx->pc == 0x322FA8u) {
        ctx->pc = 0x322FA8u;
            // 0x322fa8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x322FACu;
        goto label_322fac;
    }
    ctx->pc = 0x322FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322FACu);
        ctx->pc = 0x322FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322FA4u;
            // 0x322fa8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322FACu; }
            if (ctx->pc != 0x322FACu) { return; }
        }
        }
    }
    ctx->pc = 0x322FACu;
label_322fac:
    // 0x322fac: 0x1000033f  b           . + 4 + (0x33F << 2)
label_322fb0:
    if (ctx->pc == 0x322FB0u) {
        ctx->pc = 0x322FB4u;
        goto label_322fb4;
    }
    ctx->pc = 0x322FACu;
    {
        const bool branch_taken_0x322fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fac) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322FB4u;
label_322fb4:
    // 0x322fb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x322fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322fb8:
    // 0x322fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322fbc:
    // 0x322fbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x322fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_322fc0:
    // 0x322fc0: 0x320f809  jalr        $t9
label_322fc4:
    if (ctx->pc == 0x322FC4u) {
        ctx->pc = 0x322FC4u;
            // 0x322fc4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x322FC8u;
        goto label_322fc8;
    }
    ctx->pc = 0x322FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x322FC8u);
        ctx->pc = 0x322FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322FC0u;
            // 0x322fc4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x322FC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x322FC8u; }
            if (ctx->pc != 0x322FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x322FC8u;
label_322fc8:
    // 0x322fc8: 0x10000338  b           . + 4 + (0x338 << 2)
label_322fcc:
    if (ctx->pc == 0x322FCCu) {
        ctx->pc = 0x322FD0u;
        goto label_322fd0;
    }
    ctx->pc = 0x322FC8u;
    {
        const bool branch_taken_0x322fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fc8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x322FD0u;
label_322fd0:
    // 0x322fd0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x322fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_322fd4:
    // 0x322fd4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x322fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_322fd8:
    // 0x322fd8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x322fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_322fdc:
    // 0x322fdc: 0xc040180  jal         func_100600
label_322fe0:
    if (ctx->pc == 0x322FE0u) {
        ctx->pc = 0x322FE0u;
            // 0x322fe0: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x322FE4u;
        goto label_322fe4;
    }
    ctx->pc = 0x322FDCu;
    SET_GPR_U32(ctx, 31, 0x322FE4u);
    ctx->pc = 0x322FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322FDCu;
            // 0x322fe0: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322FE4u; }
        if (ctx->pc != 0x322FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x322FE4u; }
        if (ctx->pc != 0x322FE4u) { return; }
    }
    ctx->pc = 0x322FE4u;
label_322fe4:
    // 0x322fe4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_322fe8:
    if (ctx->pc == 0x322FE8u) {
        ctx->pc = 0x322FE8u;
            // 0x322fe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x322FECu;
        goto label_322fec;
    }
    ctx->pc = 0x322FE4u;
    {
        const bool branch_taken_0x322fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322FE4u;
            // 0x322fe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fe4) {
            ctx->pc = 0x323044u;
            goto label_323044;
        }
    }
    ctx->pc = 0x322FECu;
label_322fec:
    // 0x322fec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x322fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322ff0:
    // 0x322ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322ff4:
    // 0x322ff4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x322ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_322ff8:
    // 0x322ff8: 0xc10ca68  jal         func_4329A0
label_322ffc:
    if (ctx->pc == 0x322FFCu) {
        ctx->pc = 0x322FFCu;
            // 0x322ffc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323000u;
        goto label_323000;
    }
    ctx->pc = 0x322FF8u;
    SET_GPR_U32(ctx, 31, 0x323000u);
    ctx->pc = 0x322FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x322FF8u;
            // 0x322ffc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323000u; }
        if (ctx->pc != 0x323000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323000u; }
        if (ctx->pc != 0x323000u) { return; }
    }
    ctx->pc = 0x323000u;
label_323000:
    // 0x323000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x323000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_323004:
    // 0x323004: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x323004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_323008:
    // 0x323008: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x323008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_32300c:
    // 0x32300c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x32300cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_323010:
    // 0x323010: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_323014:
    // 0x323014: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x323014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
label_323018:
    // 0x323018: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x323018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_32301c:
    // 0x32301c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_323020:
    // 0x323020: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x323020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_323024:
    // 0x323024: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x323024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_323028:
    // 0x323028: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x323028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
label_32302c:
    // 0x32302c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323030:
    // 0x323030: 0xa2200059  sb          $zero, 0x59($s1)
    ctx->pc = 0x323030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
label_323034:
    // 0x323034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323038:
    // 0x323038: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x323038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_32303c:
    // 0x32303c: 0xa2230058  sb          $v1, 0x58($s1)
    ctx->pc = 0x32303cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
label_323040:
    // 0x323040: 0xa04075f8  sb          $zero, 0x75F8($v0)
    ctx->pc = 0x323040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30200), (uint8_t)GPR_U32(ctx, 0));
label_323044:
    // 0x323044: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x323044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_323048:
    // 0x323048: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32304c:
    // 0x32304c: 0xac433e30  sw          $v1, 0x3E30($v0)
    ctx->pc = 0x32304cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 3));
label_323050:
    // 0x323050: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323054:
    // 0x323054: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323058:
    // 0x323058: 0x320f809  jalr        $t9
label_32305c:
    if (ctx->pc == 0x32305Cu) {
        ctx->pc = 0x32305Cu;
            // 0x32305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323060u;
        goto label_323060;
    }
    ctx->pc = 0x323058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323060u);
        ctx->pc = 0x32305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323058u;
            // 0x32305c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323060u; }
            if (ctx->pc != 0x323060u) { return; }
        }
        }
    }
    ctx->pc = 0x323060u;
label_323060:
    // 0x323060: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_323064:
    // 0x323064: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x323064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_323068:
    // 0x323068: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
label_32306c:
    if (ctx->pc == 0x32306Cu) {
        ctx->pc = 0x32306Cu;
            // 0x32306c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x323070u;
        goto label_323070;
    }
    ctx->pc = 0x323068u;
    {
        const bool branch_taken_0x323068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323068) {
            ctx->pc = 0x32306Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323068u;
            // 0x32306c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3230A4u;
            goto label_3230a4;
        }
    }
    ctx->pc = 0x323070u;
label_323070:
    // 0x323070: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x323070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_323074:
    // 0x323074: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_323078:
    if (ctx->pc == 0x323078u) {
        ctx->pc = 0x323078u;
            // 0x323078: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32307Cu;
        goto label_32307c;
    }
    ctx->pc = 0x323074u;
    {
        const bool branch_taken_0x323074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323074) {
            ctx->pc = 0x323078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323074u;
            // 0x323078: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323088u;
            goto label_323088;
        }
    }
    ctx->pc = 0x32307Cu;
label_32307c:
    // 0x32307c: 0x1000030b  b           . + 4 + (0x30B << 2)
label_323080:
    if (ctx->pc == 0x323080u) {
        ctx->pc = 0x323084u;
        goto label_323084;
    }
    ctx->pc = 0x32307Cu;
    {
        const bool branch_taken_0x32307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32307c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323084u;
label_323084:
    // 0x323084: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323088:
    // 0x323088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32308c:
    // 0x32308c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32308cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323090:
    // 0x323090: 0x320f809  jalr        $t9
label_323094:
    if (ctx->pc == 0x323094u) {
        ctx->pc = 0x323094u;
            // 0x323094: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x323098u;
        goto label_323098;
    }
    ctx->pc = 0x323090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323098u);
        ctx->pc = 0x323094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323090u;
            // 0x323094: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323098u; }
            if (ctx->pc != 0x323098u) { return; }
        }
        }
    }
    ctx->pc = 0x323098u;
label_323098:
    // 0x323098: 0x10000304  b           . + 4 + (0x304 << 2)
label_32309c:
    if (ctx->pc == 0x32309Cu) {
        ctx->pc = 0x3230A0u;
        goto label_3230a0;
    }
    ctx->pc = 0x323098u;
    {
        const bool branch_taken_0x323098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323098) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3230A0u;
label_3230a0:
    // 0x3230a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3230a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3230a4:
    // 0x3230a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3230a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3230a8:
    // 0x3230a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3230a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3230ac:
    // 0x3230ac: 0x320f809  jalr        $t9
label_3230b0:
    if (ctx->pc == 0x3230B0u) {
        ctx->pc = 0x3230B0u;
            // 0x3230b0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x3230B4u;
        goto label_3230b4;
    }
    ctx->pc = 0x3230ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3230B4u);
        ctx->pc = 0x3230B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3230ACu;
            // 0x3230b0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3230B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3230B4u; }
            if (ctx->pc != 0x3230B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3230B4u;
label_3230b4:
    // 0x3230b4: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_3230b8:
    if (ctx->pc == 0x3230B8u) {
        ctx->pc = 0x3230BCu;
        goto label_3230bc;
    }
    ctx->pc = 0x3230B4u;
    {
        const bool branch_taken_0x3230b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3230b4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3230BCu;
label_3230bc:
    // 0x3230bc: 0xc0c900c  jal         func_324030
label_3230c0:
    if (ctx->pc == 0x3230C0u) {
        ctx->pc = 0x3230C4u;
        goto label_3230c4;
    }
    ctx->pc = 0x3230BCu;
    SET_GPR_U32(ctx, 31, 0x3230C4u);
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230C4u; }
        if (ctx->pc != 0x3230C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230C4u; }
        if (ctx->pc != 0x3230C4u) { return; }
    }
    ctx->pc = 0x3230C4u;
label_3230c4:
    // 0x3230c4: 0xc0c7530  jal         func_31D4C0
label_3230c8:
    if (ctx->pc == 0x3230C8u) {
        ctx->pc = 0x3230CCu;
        goto label_3230cc;
    }
    ctx->pc = 0x3230C4u;
    SET_GPR_U32(ctx, 31, 0x3230CCu);
    ctx->pc = 0x31D4C0u;
    if (runtime->hasFunction(0x31D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230CCu; }
        if (ctx->pc != 0x3230CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4C0_0x31d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230CCu; }
        if (ctx->pc != 0x3230CCu) { return; }
    }
    ctx->pc = 0x3230CCu;
label_3230cc:
    // 0x3230cc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3230ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3230d0:
    // 0x3230d0: 0xc0c752c  jal         func_31D4B0
label_3230d4:
    if (ctx->pc == 0x3230D4u) {
        ctx->pc = 0x3230D4u;
            // 0x3230d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3230D8u;
        goto label_3230d8;
    }
    ctx->pc = 0x3230D0u;
    SET_GPR_U32(ctx, 31, 0x3230D8u);
    ctx->pc = 0x3230D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3230D0u;
            // 0x3230d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4B0u;
    if (runtime->hasFunction(0x31D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230D8u; }
        if (ctx->pc != 0x3230D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4B0_0x31d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230D8u; }
        if (ctx->pc != 0x3230D8u) { return; }
    }
    ctx->pc = 0x3230D8u;
label_3230d8:
    // 0x3230d8: 0xc0ca1b0  jal         func_3286C0
label_3230dc:
    if (ctx->pc == 0x3230DCu) {
        ctx->pc = 0x3230DCu;
            // 0x3230dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3230E0u;
        goto label_3230e0;
    }
    ctx->pc = 0x3230D8u;
    SET_GPR_U32(ctx, 31, 0x3230E0u);
    ctx->pc = 0x3230DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3230D8u;
            // 0x3230dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230E0u; }
        if (ctx->pc != 0x3230E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230E0u; }
        if (ctx->pc != 0x3230E0u) { return; }
    }
    ctx->pc = 0x3230E0u;
label_3230e0:
    // 0x3230e0: 0xc077318  jal         func_1DCC60
label_3230e4:
    if (ctx->pc == 0x3230E4u) {
        ctx->pc = 0x3230E8u;
        goto label_3230e8;
    }
    ctx->pc = 0x3230E0u;
    SET_GPR_U32(ctx, 31, 0x3230E8u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230E8u; }
        if (ctx->pc != 0x3230E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230E8u; }
        if (ctx->pc != 0x3230E8u) { return; }
    }
    ctx->pc = 0x3230E8u;
label_3230e8:
    // 0x3230e8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3230e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3230ec:
    // 0x3230ec: 0xc0c8fdc  jal         func_323F70
label_3230f0:
    if (ctx->pc == 0x3230F0u) {
        ctx->pc = 0x3230F0u;
            // 0x3230f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3230F4u;
        goto label_3230f4;
    }
    ctx->pc = 0x3230ECu;
    SET_GPR_U32(ctx, 31, 0x3230F4u);
    ctx->pc = 0x3230F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3230ECu;
            // 0x3230f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323F70u;
    if (runtime->hasFunction(0x323F70u)) {
        auto targetFn = runtime->lookupFunction(0x323F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230F4u; }
        if (ctx->pc != 0x3230F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323F70_0x323f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3230F4u; }
        if (ctx->pc != 0x3230F4u) { return; }
    }
    ctx->pc = 0x3230F4u;
label_3230f4:
    // 0x3230f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3230f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3230f8:
    // 0x3230f8: 0xc0c9ec0  jal         func_327B00
label_3230fc:
    if (ctx->pc == 0x3230FCu) {
        ctx->pc = 0x3230FCu;
            // 0x3230fc: 0x3405cb82  ori         $a1, $zero, 0xCB82 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52098);
        ctx->pc = 0x323100u;
        goto label_323100;
    }
    ctx->pc = 0x3230F8u;
    SET_GPR_U32(ctx, 31, 0x323100u);
    ctx->pc = 0x3230FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3230F8u;
            // 0x3230fc: 0x3405cb82  ori         $a1, $zero, 0xCB82 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52098);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323100u; }
        if (ctx->pc != 0x323100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323100u; }
        if (ctx->pc != 0x323100u) { return; }
    }
    ctx->pc = 0x323100u;
label_323100:
    // 0x323100: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_323104:
    // 0x323104: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x323104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_323108:
    // 0x323108: 0xc040180  jal         func_100600
label_32310c:
    if (ctx->pc == 0x32310Cu) {
        ctx->pc = 0x32310Cu;
            // 0x32310c: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x323110u;
        goto label_323110;
    }
    ctx->pc = 0x323108u;
    SET_GPR_U32(ctx, 31, 0x323110u);
    ctx->pc = 0x32310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323108u;
            // 0x32310c: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323110u; }
        if (ctx->pc != 0x323110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323110u; }
        if (ctx->pc != 0x323110u) { return; }
    }
    ctx->pc = 0x323110u;
label_323110:
    // 0x323110: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_323114:
    if (ctx->pc == 0x323114u) {
        ctx->pc = 0x323114u;
            // 0x323114: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x323118u;
        goto label_323118;
    }
    ctx->pc = 0x323110u;
    {
        const bool branch_taken_0x323110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323110) {
            ctx->pc = 0x323114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323110u;
            // 0x323114: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323128u;
            goto label_323128;
        }
    }
    ctx->pc = 0x323118u;
label_323118:
    // 0x323118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32311c:
    // 0x32311c: 0xc0c8f84  jal         func_323E10
label_323120:
    if (ctx->pc == 0x323120u) {
        ctx->pc = 0x323120u;
            // 0x323120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323124u;
        goto label_323124;
    }
    ctx->pc = 0x32311Cu;
    SET_GPR_U32(ctx, 31, 0x323124u);
    ctx->pc = 0x323120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32311Cu;
            // 0x323120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E10u;
    if (runtime->hasFunction(0x323E10u)) {
        auto targetFn = runtime->lookupFunction(0x323E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323124u; }
        if (ctx->pc != 0x323124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E10_0x323e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323124u; }
        if (ctx->pc != 0x323124u) { return; }
    }
    ctx->pc = 0x323124u;
label_323124:
    // 0x323124: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323128:
    // 0x323128: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32312c:
    // 0x32312c: 0x320f809  jalr        $t9
label_323130:
    if (ctx->pc == 0x323130u) {
        ctx->pc = 0x323130u;
            // 0x323130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323134u;
        goto label_323134;
    }
    ctx->pc = 0x32312Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323134u);
        ctx->pc = 0x323130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32312Cu;
            // 0x323130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323134u; }
            if (ctx->pc != 0x323134u) { return; }
        }
        }
    }
    ctx->pc = 0x323134u;
label_323134:
    // 0x323134: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x323134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_323138:
    // 0x323138: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32313c:
    if (ctx->pc == 0x32313Cu) {
        ctx->pc = 0x32313Cu;
            // 0x32313c: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x323140u;
        goto label_323140;
    }
    ctx->pc = 0x323138u;
    {
        const bool branch_taken_0x323138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323138) {
            ctx->pc = 0x32313Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323138u;
            // 0x32313c: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323154u;
            goto label_323154;
        }
    }
    ctx->pc = 0x323140u;
label_323140:
    // 0x323140: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x323140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323144:
    // 0x323144: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x323144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_323148:
    // 0x323148: 0x320f809  jalr        $t9
label_32314c:
    if (ctx->pc == 0x32314Cu) {
        ctx->pc = 0x323150u;
        goto label_323150;
    }
    ctx->pc = 0x323148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323150u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x323150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323150u; }
            if (ctx->pc != 0x323150u) { return; }
        }
        }
    }
    ctx->pc = 0x323150u;
label_323150:
    // 0x323150: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x323150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_323154:
    // 0x323154: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x323154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_323158:
    // 0x323158: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_32315c:
    if (ctx->pc == 0x32315Cu) {
        ctx->pc = 0x323160u;
        goto label_323160;
    }
    ctx->pc = 0x323158u;
    {
        const bool branch_taken_0x323158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323158) {
            ctx->pc = 0x3231E8u;
            goto label_3231e8;
        }
    }
    ctx->pc = 0x323160u;
label_323160:
    // 0x323160: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x323160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_323164:
    // 0x323164: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_323168:
    if (ctx->pc == 0x323168u) {
        ctx->pc = 0x323168u;
            // 0x323168: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->pc = 0x32316Cu;
        goto label_32316c;
    }
    ctx->pc = 0x323164u;
    {
        const bool branch_taken_0x323164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323164) {
            ctx->pc = 0x323168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323164u;
            // 0x323168: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323184u;
            goto label_323184;
        }
    }
    ctx->pc = 0x32316Cu;
label_32316c:
    // 0x32316c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x32316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_323170:
    // 0x323170: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_323174:
    if (ctx->pc == 0x323174u) {
        ctx->pc = 0x323178u;
        goto label_323178;
    }
    ctx->pc = 0x323170u;
    {
        const bool branch_taken_0x323170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323170) {
            ctx->pc = 0x323180u;
            goto label_323180;
        }
    }
    ctx->pc = 0x323178u;
label_323178:
    // 0x323178: 0x100002cc  b           . + 4 + (0x2CC << 2)
label_32317c:
    if (ctx->pc == 0x32317Cu) {
        ctx->pc = 0x323180u;
        goto label_323180;
    }
    ctx->pc = 0x323178u;
    {
        const bool branch_taken_0x323178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323178) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323180u;
label_323180:
    // 0x323180: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x323180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_323184:
    // 0x323184: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x323184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_323188:
    // 0x323188: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x323188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
label_32318c:
    // 0x32318c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_323190:
    // 0x323190: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x323190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_323194:
    // 0x323194: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x323194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_323198:
    // 0x323198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x323198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32319c:
    // 0x32319c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3231a0:
    // 0x3231a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3231a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3231a4:
    // 0x3231a4: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x3231a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_3231a8:
    // 0x3231a8: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x3231a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_3231ac:
    // 0x3231ac: 0xc1230ac  jal         func_48C2B0
label_3231b0:
    if (ctx->pc == 0x3231B0u) {
        ctx->pc = 0x3231B0u;
            // 0x3231b0: 0x26110304  addiu       $s1, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->pc = 0x3231B4u;
        goto label_3231b4;
    }
    ctx->pc = 0x3231ACu;
    SET_GPR_U32(ctx, 31, 0x3231B4u);
    ctx->pc = 0x3231B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3231ACu;
            // 0x3231b0: 0x26110304  addiu       $s1, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231B4u; }
        if (ctx->pc != 0x3231B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231B4u; }
        if (ctx->pc != 0x3231B4u) { return; }
    }
    ctx->pc = 0x3231B4u;
label_3231b4:
    // 0x3231b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3231b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3231b8:
    // 0x3231b8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3231b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3231bc:
    // 0x3231bc: 0xc123020  jal         func_48C080
label_3231c0:
    if (ctx->pc == 0x3231C0u) {
        ctx->pc = 0x3231C0u;
            // 0x3231c0: 0x24a5cfd0  addiu       $a1, $a1, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
        ctx->pc = 0x3231C4u;
        goto label_3231c4;
    }
    ctx->pc = 0x3231BCu;
    SET_GPR_U32(ctx, 31, 0x3231C4u);
    ctx->pc = 0x3231C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3231BCu;
            // 0x3231c0: 0x24a5cfd0  addiu       $a1, $a1, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231C4u; }
        if (ctx->pc != 0x3231C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231C4u; }
        if (ctx->pc != 0x3231C4u) { return; }
    }
    ctx->pc = 0x3231C4u;
label_3231c4:
    // 0x3231c4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x3231c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_3231c8:
    // 0x3231c8: 0x108002b8  beqz        $a0, . + 4 + (0x2B8 << 2)
label_3231cc:
    if (ctx->pc == 0x3231CCu) {
        ctx->pc = 0x3231D0u;
        goto label_3231d0;
    }
    ctx->pc = 0x3231C8u;
    {
        const bool branch_taken_0x3231c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3231c8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3231D0u;
label_3231d0:
    // 0x3231d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3231d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3231d4:
    // 0x3231d4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3231d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3231d8:
    // 0x3231d8: 0x320f809  jalr        $t9
label_3231dc:
    if (ctx->pc == 0x3231DCu) {
        ctx->pc = 0x3231E0u;
        goto label_3231e0;
    }
    ctx->pc = 0x3231D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3231E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3231E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3231E0u; }
            if (ctx->pc != 0x3231E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3231E0u;
label_3231e0:
    // 0x3231e0: 0x100002b2  b           . + 4 + (0x2B2 << 2)
label_3231e4:
    if (ctx->pc == 0x3231E4u) {
        ctx->pc = 0x3231E8u;
        goto label_3231e8;
    }
    ctx->pc = 0x3231E0u;
    {
        const bool branch_taken_0x3231e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3231e0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3231E8u;
label_3231e8:
    // 0x3231e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3231e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3231ec:
    // 0x3231ec: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3231ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3231f0:
    // 0x3231f0: 0xc0fd080  jal         func_3F4200
label_3231f4:
    if (ctx->pc == 0x3231F4u) {
        ctx->pc = 0x3231F4u;
            // 0x3231f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3231F8u;
        goto label_3231f8;
    }
    ctx->pc = 0x3231F0u;
    SET_GPR_U32(ctx, 31, 0x3231F8u);
    ctx->pc = 0x3231F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3231F0u;
            // 0x3231f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231F8u; }
        if (ctx->pc != 0x3231F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3231F8u; }
        if (ctx->pc != 0x3231F8u) { return; }
    }
    ctx->pc = 0x3231F8u;
label_3231f8:
    // 0x3231f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3231f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3231fc:
    // 0x3231fc: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3231fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_323200:
    // 0x323200: 0xc0fd080  jal         func_3F4200
label_323204:
    if (ctx->pc == 0x323204u) {
        ctx->pc = 0x323204u;
            // 0x323204: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x323208u;
        goto label_323208;
    }
    ctx->pc = 0x323200u;
    SET_GPR_U32(ctx, 31, 0x323208u);
    ctx->pc = 0x323204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323200u;
            // 0x323204: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323208u; }
        if (ctx->pc != 0x323208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323208u; }
        if (ctx->pc != 0x323208u) { return; }
    }
    ctx->pc = 0x323208u;
label_323208:
    // 0x323208: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32320c:
    // 0x32320c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323210:
    // 0x323210: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x323210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323214:
    // 0x323214: 0x320f809  jalr        $t9
label_323218:
    if (ctx->pc == 0x323218u) {
        ctx->pc = 0x323218u;
            // 0x323218: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x32321Cu;
        goto label_32321c;
    }
    ctx->pc = 0x323214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32321Cu);
        ctx->pc = 0x323218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323214u;
            // 0x323218: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32321Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32321Cu; }
            if (ctx->pc != 0x32321Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32321Cu;
label_32321c:
    // 0x32321c: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_323220:
    if (ctx->pc == 0x323220u) {
        ctx->pc = 0x323224u;
        goto label_323224;
    }
    ctx->pc = 0x32321Cu;
    {
        const bool branch_taken_0x32321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32321c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323224u;
label_323224:
    // 0x323224: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x323224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_323228:
    // 0x323228: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x323228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_32322c:
    // 0x32322c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x32322cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_323230:
    // 0x323230: 0xc040180  jal         func_100600
label_323234:
    if (ctx->pc == 0x323234u) {
        ctx->pc = 0x323234u;
            // 0x323234: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x323238u;
        goto label_323238;
    }
    ctx->pc = 0x323230u;
    SET_GPR_U32(ctx, 31, 0x323238u);
    ctx->pc = 0x323234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323230u;
            // 0x323234: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323238u; }
        if (ctx->pc != 0x323238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323238u; }
        if (ctx->pc != 0x323238u) { return; }
    }
    ctx->pc = 0x323238u;
label_323238:
    // 0x323238: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_32323c:
    if (ctx->pc == 0x32323Cu) {
        ctx->pc = 0x32323Cu;
            // 0x32323c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323240u;
        goto label_323240;
    }
    ctx->pc = 0x323238u;
    {
        const bool branch_taken_0x323238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323238u;
            // 0x32323c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323238) {
            ctx->pc = 0x3232A8u;
            goto label_3232a8;
        }
    }
    ctx->pc = 0x323240u;
label_323240:
    // 0x323240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323244:
    // 0x323244: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x323244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_323248:
    // 0x323248: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32324c:
    // 0x32324c: 0xc10ca68  jal         func_4329A0
label_323250:
    if (ctx->pc == 0x323250u) {
        ctx->pc = 0x323250u;
            // 0x323250: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x323254u;
        goto label_323254;
    }
    ctx->pc = 0x32324Cu;
    SET_GPR_U32(ctx, 31, 0x323254u);
    ctx->pc = 0x323250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32324Cu;
            // 0x323250: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323254u; }
        if (ctx->pc != 0x323254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323254u; }
        if (ctx->pc != 0x323254u) { return; }
    }
    ctx->pc = 0x323254u;
label_323254:
    // 0x323254: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x323254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_323258:
    // 0x323258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x323258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32325c:
    // 0x32325c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x32325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_323260:
    // 0x323260: 0x24424630  addiu       $v0, $v0, 0x4630
    ctx->pc = 0x323260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17968));
label_323264:
    // 0x323264: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x323264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_323268:
    // 0x323268: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32326c:
    // 0x32326c: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x32326cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_323270:
    // 0x323270: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x323270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_323274:
    // 0x323274: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x323274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_323278:
    // 0x323278: 0xa620005e  sh          $zero, 0x5E($s1)
    ctx->pc = 0x323278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 0));
label_32327c:
    // 0x32327c: 0xa6200062  sh          $zero, 0x62($s1)
    ctx->pc = 0x32327cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 0));
label_323280:
    // 0x323280: 0xa6200064  sh          $zero, 0x64($s1)
    ctx->pc = 0x323280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 0));
label_323284:
    // 0x323284: 0xa6200066  sh          $zero, 0x66($s1)
    ctx->pc = 0x323284u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 0));
label_323288:
    // 0x323288: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x323288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_32328c:
    // 0x32328c: 0xa620006c  sh          $zero, 0x6C($s1)
    ctx->pc = 0x32328cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 0));
label_323290:
    // 0x323290: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x323290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_323294:
    // 0x323294: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x323294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_323298:
    // 0x323298: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x323298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_32329c:
    // 0x32329c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x32329cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_3232a0:
    // 0x3232a0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x3232a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_3232a4:
    // 0x3232a4: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x3232a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_3232a8:
    // 0x3232a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3232a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3232ac:
    // 0x3232ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3232acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3232b0:
    // 0x3232b0: 0x320f809  jalr        $t9
label_3232b4:
    if (ctx->pc == 0x3232B4u) {
        ctx->pc = 0x3232B4u;
            // 0x3232b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3232B8u;
        goto label_3232b8;
    }
    ctx->pc = 0x3232B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3232B8u);
        ctx->pc = 0x3232B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3232B0u;
            // 0x3232b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3232B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3232B8u; }
            if (ctx->pc != 0x3232B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3232B8u;
label_3232b8:
    // 0x3232b8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3232b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3232bc:
    // 0x3232bc: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x3232bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3232c0:
    // 0x3232c0: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_3232c4:
    if (ctx->pc == 0x3232C4u) {
        ctx->pc = 0x3232C4u;
            // 0x3232c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3232C8u;
        goto label_3232c8;
    }
    ctx->pc = 0x3232C0u;
    {
        const bool branch_taken_0x3232c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3232c0) {
            ctx->pc = 0x3232C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3232C0u;
            // 0x3232c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3232D4u;
            goto label_3232d4;
        }
    }
    ctx->pc = 0x3232C8u;
label_3232c8:
    // 0x3232c8: 0x10000278  b           . + 4 + (0x278 << 2)
label_3232cc:
    if (ctx->pc == 0x3232CCu) {
        ctx->pc = 0x3232D0u;
        goto label_3232d0;
    }
    ctx->pc = 0x3232C8u;
    {
        const bool branch_taken_0x3232c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232c8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3232D0u;
label_3232d0:
    // 0x3232d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3232d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3232d4:
    // 0x3232d4: 0xc0c900c  jal         func_324030
label_3232d8:
    if (ctx->pc == 0x3232D8u) {
        ctx->pc = 0x3232DCu;
        goto label_3232dc;
    }
    ctx->pc = 0x3232D4u;
    SET_GPR_U32(ctx, 31, 0x3232DCu);
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232DCu; }
        if (ctx->pc != 0x3232DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232DCu; }
        if (ctx->pc != 0x3232DCu) { return; }
    }
    ctx->pc = 0x3232DCu;
label_3232dc:
    // 0x3232dc: 0xc040180  jal         func_100600
label_3232e0:
    if (ctx->pc == 0x3232E0u) {
        ctx->pc = 0x3232E0u;
            // 0x3232e0: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x3232E4u;
        goto label_3232e4;
    }
    ctx->pc = 0x3232DCu;
    SET_GPR_U32(ctx, 31, 0x3232E4u);
    ctx->pc = 0x3232E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3232DCu;
            // 0x3232e0: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232E4u; }
        if (ctx->pc != 0x3232E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232E4u; }
        if (ctx->pc != 0x3232E4u) { return; }
    }
    ctx->pc = 0x3232E4u;
label_3232e4:
    // 0x3232e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3232e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3232e8:
    // 0x3232e8: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_3232ec:
    if (ctx->pc == 0x3232ECu) {
        ctx->pc = 0x3232ECu;
            // 0x3232ec: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3232F0u;
        goto label_3232f0;
    }
    ctx->pc = 0x3232E8u;
    {
        const bool branch_taken_0x3232e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232e8) {
            ctx->pc = 0x3232ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3232E8u;
            // 0x3232ec: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323304u;
            goto label_323304;
        }
    }
    ctx->pc = 0x3232F0u;
label_3232f0:
    // 0x3232f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3232f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3232f4:
    // 0x3232f4: 0xc0c8fbc  jal         func_323EF0
label_3232f8:
    if (ctx->pc == 0x3232F8u) {
        ctx->pc = 0x3232F8u;
            // 0x3232f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3232FCu;
        goto label_3232fc;
    }
    ctx->pc = 0x3232F4u;
    SET_GPR_U32(ctx, 31, 0x3232FCu);
    ctx->pc = 0x3232F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3232F4u;
            // 0x3232f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EF0u;
    if (runtime->hasFunction(0x323EF0u)) {
        auto targetFn = runtime->lookupFunction(0x323EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232FCu; }
        if (ctx->pc != 0x3232FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EF0_0x323ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3232FCu; }
        if (ctx->pc != 0x3232FCu) { return; }
    }
    ctx->pc = 0x3232FCu;
label_3232fc:
    // 0x3232fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3232fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323300:
    // 0x323300: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x323300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_323304:
    // 0x323304: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323308:
    // 0x323308: 0x320f809  jalr        $t9
label_32330c:
    if (ctx->pc == 0x32330Cu) {
        ctx->pc = 0x32330Cu;
            // 0x32330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323310u;
        goto label_323310;
    }
    ctx->pc = 0x323308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323310u);
        ctx->pc = 0x32330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323308u;
            // 0x32330c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323310u; }
            if (ctx->pc != 0x323310u) { return; }
        }
        }
    }
    ctx->pc = 0x323310u;
label_323310:
    // 0x323310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x323310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_323314:
    // 0x323314: 0xc0c8fb8  jal         func_323EE0
label_323318:
    if (ctx->pc == 0x323318u) {
        ctx->pc = 0x323318u;
            // 0x323318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32331Cu;
        goto label_32331c;
    }
    ctx->pc = 0x323314u;
    SET_GPR_U32(ctx, 31, 0x32331Cu);
    ctx->pc = 0x323318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323314u;
            // 0x323318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EE0u;
    if (runtime->hasFunction(0x323EE0u)) {
        auto targetFn = runtime->lookupFunction(0x323EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32331Cu; }
        if (ctx->pc != 0x32331Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EE0_0x323ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32331Cu; }
        if (ctx->pc != 0x32331Cu) { return; }
    }
    ctx->pc = 0x32331Cu;
label_32331c:
    // 0x32331c: 0xc1182a8  jal         func_460AA0
label_323320:
    if (ctx->pc == 0x323320u) {
        ctx->pc = 0x323320u;
            // 0x323320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323324u;
        goto label_323324;
    }
    ctx->pc = 0x32331Cu;
    SET_GPR_U32(ctx, 31, 0x323324u);
    ctx->pc = 0x323320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32331Cu;
            // 0x323320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460AA0u;
    if (runtime->hasFunction(0x460AA0u)) {
        auto targetFn = runtime->lookupFunction(0x460AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323324u; }
        if (ctx->pc != 0x323324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460AA0_0x460aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323324u; }
        if (ctx->pc != 0x323324u) { return; }
    }
    ctx->pc = 0x323324u;
label_323324:
    // 0x323324: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323328:
    // 0x323328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32332c:
    // 0x32332c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32332cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323330:
    // 0x323330: 0x320f809  jalr        $t9
label_323334:
    if (ctx->pc == 0x323334u) {
        ctx->pc = 0x323334u;
            // 0x323334: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x323338u;
        goto label_323338;
    }
    ctx->pc = 0x323330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323338u);
        ctx->pc = 0x323334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323330u;
            // 0x323334: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323338u; }
            if (ctx->pc != 0x323338u) { return; }
        }
        }
    }
    ctx->pc = 0x323338u;
label_323338:
    // 0x323338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32333c:
    // 0x32333c: 0xc0c9a58  jal         func_326960
label_323340:
    if (ctx->pc == 0x323340u) {
        ctx->pc = 0x323340u;
            // 0x323340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x323344u;
        goto label_323344;
    }
    ctx->pc = 0x32333Cu;
    SET_GPR_U32(ctx, 31, 0x323344u);
    ctx->pc = 0x323340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32333Cu;
            // 0x323340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323344u; }
        if (ctx->pc != 0x323344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323344u; }
        if (ctx->pc != 0x323344u) { return; }
    }
    ctx->pc = 0x323344u;
label_323344:
    // 0x323344: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x323344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_323348:
    // 0x323348: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x323348u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
label_32334c:
    // 0x32334c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32334cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323350:
    // 0x323350: 0x2694d010  addiu       $s4, $s4, -0x2FF0
    ctx->pc = 0x323350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955024));
label_323354:
    // 0x323354: 0x2673cff0  addiu       $s3, $s3, -0x3010
    ctx->pc = 0x323354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954992));
label_323358:
    // 0x323358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x323358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32335c:
    // 0x32335c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323360:
    // 0x323360: 0xc0c9a54  jal         func_326950
label_323364:
    if (ctx->pc == 0x323364u) {
        ctx->pc = 0x323364u;
            // 0x323364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323368u;
        goto label_323368;
    }
    ctx->pc = 0x323360u;
    SET_GPR_U32(ctx, 31, 0x323368u);
    ctx->pc = 0x323364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323360u;
            // 0x323364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326950u;
    if (runtime->hasFunction(0x326950u)) {
        auto targetFn = runtime->lookupFunction(0x326950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323368u; }
        if (ctx->pc != 0x323368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326950_0x326950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323368u; }
        if (ctx->pc != 0x323368u) { return; }
    }
    ctx->pc = 0x323368u;
label_323368:
    // 0x323368: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x323368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32336c:
    // 0x32336c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_323370:
    if (ctx->pc == 0x323370u) {
        ctx->pc = 0x323370u;
            // 0x323370: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323374u;
        goto label_323374;
    }
    ctx->pc = 0x32336Cu;
    {
        const bool branch_taken_0x32336c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32336Cu;
            // 0x323370: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32336c) {
            ctx->pc = 0x3233A0u;
            goto label_3233a0;
        }
    }
    ctx->pc = 0x323374u;
label_323374:
    // 0x323374: 0xc0c74d4  jal         func_31D350
label_323378:
    if (ctx->pc == 0x323378u) {
        ctx->pc = 0x323378u;
            // 0x323378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32337Cu;
        goto label_32337c;
    }
    ctx->pc = 0x323374u;
    SET_GPR_U32(ctx, 31, 0x32337Cu);
    ctx->pc = 0x323378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323374u;
            // 0x323378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D350u;
    if (runtime->hasFunction(0x31D350u)) {
        auto targetFn = runtime->lookupFunction(0x31D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32337Cu; }
        if (ctx->pc != 0x32337Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D350_0x31d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32337Cu; }
        if (ctx->pc != 0x32337Cu) { return; }
    }
    ctx->pc = 0x32337Cu;
label_32337c:
    // 0x32337c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x32337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_323380:
    // 0x323380: 0xc12307c  jal         func_48C1F0
label_323384:
    if (ctx->pc == 0x323384u) {
        ctx->pc = 0x323384u;
            // 0x323384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323388u;
        goto label_323388;
    }
    ctx->pc = 0x323380u;
    SET_GPR_U32(ctx, 31, 0x323388u);
    ctx->pc = 0x323384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323380u;
            // 0x323384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C1F0u;
    if (runtime->hasFunction(0x48C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323388u; }
        if (ctx->pc != 0x323388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C1F0_0x48c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323388u; }
        if (ctx->pc != 0x323388u) { return; }
    }
    ctx->pc = 0x323388u;
label_323388:
    // 0x323388: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32338c:
    // 0x32338c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32338cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323390:
    // 0x323390: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_323394:
    // 0x323394: 0x320f809  jalr        $t9
label_323398:
    if (ctx->pc == 0x323398u) {
        ctx->pc = 0x32339Cu;
        goto label_32339c;
    }
    ctx->pc = 0x323394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32339Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32339Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32339Cu; }
            if (ctx->pc != 0x32339Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32339Cu;
label_32339c:
    // 0x32339c: 0x0  nop
    ctx->pc = 0x32339cu;
    // NOP
label_3233a0:
    // 0x3233a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3233a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3233a4:
    // 0x3233a4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x3233a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3233a8:
    // 0x3233a8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_3233ac:
    if (ctx->pc == 0x3233ACu) {
        ctx->pc = 0x3233ACu;
            // 0x3233ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3233B0u;
        goto label_3233b0;
    }
    ctx->pc = 0x3233A8u;
    {
        const bool branch_taken_0x3233a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233a8) {
            ctx->pc = 0x3233ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3233A8u;
            // 0x3233ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323360;
        }
    }
    ctx->pc = 0x3233B0u;
label_3233b0:
    // 0x3233b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3233b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3233b4:
    // 0x3233b4: 0xc1230ac  jal         func_48C2B0
label_3233b8:
    if (ctx->pc == 0x3233B8u) {
        ctx->pc = 0x3233B8u;
            // 0x3233b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3233BCu;
        goto label_3233bc;
    }
    ctx->pc = 0x3233B4u;
    SET_GPR_U32(ctx, 31, 0x3233BCu);
    ctx->pc = 0x3233B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3233B4u;
            // 0x3233b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233BCu; }
        if (ctx->pc != 0x3233BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233BCu; }
        if (ctx->pc != 0x3233BCu) { return; }
    }
    ctx->pc = 0x3233BCu;
label_3233bc:
    // 0x3233bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3233bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3233c0:
    // 0x3233c0: 0xc123020  jal         func_48C080
label_3233c4:
    if (ctx->pc == 0x3233C4u) {
        ctx->pc = 0x3233C4u;
            // 0x3233c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3233C8u;
        goto label_3233c8;
    }
    ctx->pc = 0x3233C0u;
    SET_GPR_U32(ctx, 31, 0x3233C8u);
    ctx->pc = 0x3233C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3233C0u;
            // 0x3233c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233C8u; }
        if (ctx->pc != 0x3233C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233C8u; }
        if (ctx->pc != 0x3233C8u) { return; }
    }
    ctx->pc = 0x3233C8u;
label_3233c8:
    // 0x3233c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3233c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3233cc:
    // 0x3233cc: 0xc0c91d4  jal         func_324750
label_3233d0:
    if (ctx->pc == 0x3233D0u) {
        ctx->pc = 0x3233D0u;
            // 0x3233d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3233D4u;
        goto label_3233d4;
    }
    ctx->pc = 0x3233CCu;
    SET_GPR_U32(ctx, 31, 0x3233D4u);
    ctx->pc = 0x3233D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3233CCu;
            // 0x3233d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233D4u; }
        if (ctx->pc != 0x3233D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3233D4u; }
        if (ctx->pc != 0x3233D4u) { return; }
    }
    ctx->pc = 0x3233D4u;
label_3233d4:
    // 0x3233d4: 0x10000235  b           . + 4 + (0x235 << 2)
label_3233d8:
    if (ctx->pc == 0x3233D8u) {
        ctx->pc = 0x3233DCu;
        goto label_3233dc;
    }
    ctx->pc = 0x3233D4u;
    {
        const bool branch_taken_0x3233d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233d4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3233DCu;
label_3233dc:
    // 0x3233dc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3233dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3233e0:
    // 0x3233e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3233e4:
    // 0x3233e4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3233e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_3233e8:
    // 0x3233e8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x3233e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_3233ec:
    // 0x3233ec: 0x8c453e30  lw          $a1, 0x3E30($v0)
    ctx->pc = 0x3233ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_3233f0:
    // 0x3233f0: 0x38a30009  xori        $v1, $a1, 0x9
    ctx->pc = 0x3233f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_3233f4:
    // 0x3233f4: 0x38a2000a  xori        $v0, $a1, 0xA
    ctx->pc = 0x3233f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)10);
label_3233f8:
    // 0x3233f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3233f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3233fc:
    // 0x3233fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3233fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_323400:
    // 0x323400: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x323400u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_323404:
    // 0x323404: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x323404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_323408:
    // 0x323408: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_32340c:
    // 0x32340c: 0x38a2000b  xori        $v0, $a1, 0xB
    ctx->pc = 0x32340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
label_323410:
    // 0x323410: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x323410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_323414:
    // 0x323414: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x323414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_323418:
    // 0x323418: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x323418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32341c:
    // 0x32341c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32341cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_323420:
    // 0x323420: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x323420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_323424:
    // 0x323424: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x323424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_323428:
    // 0x323428: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_32342c:
    if (ctx->pc == 0x32342Cu) {
        ctx->pc = 0x32342Cu;
            // 0x32342c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x323430u;
        goto label_323430;
    }
    ctx->pc = 0x323428u;
    {
        const bool branch_taken_0x323428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323428u;
            // 0x32342c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323428) {
            ctx->pc = 0x323434u;
            goto label_323434;
        }
    }
    ctx->pc = 0x323430u;
label_323430:
    // 0x323430: 0x8211008f  lb          $s1, 0x8F($s0)
    ctx->pc = 0x323430u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323434:
    // 0x323434: 0xc040180  jal         func_100600
label_323438:
    if (ctx->pc == 0x323438u) {
        ctx->pc = 0x323438u;
            // 0x323438: 0x240401e8  addiu       $a0, $zero, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
        ctx->pc = 0x32343Cu;
        goto label_32343c;
    }
    ctx->pc = 0x323434u;
    SET_GPR_U32(ctx, 31, 0x32343Cu);
    ctx->pc = 0x323438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323434u;
            // 0x323438: 0x240401e8  addiu       $a0, $zero, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32343Cu; }
        if (ctx->pc != 0x32343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32343Cu; }
        if (ctx->pc != 0x32343Cu) { return; }
    }
    ctx->pc = 0x32343Cu;
label_32343c:
    // 0x32343c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_323440:
    if (ctx->pc == 0x323440u) {
        ctx->pc = 0x323440u;
            // 0x323440: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x323444u;
        goto label_323444;
    }
    ctx->pc = 0x32343Cu;
    {
        const bool branch_taken_0x32343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32343c) {
            ctx->pc = 0x323440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32343Cu;
            // 0x323440: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32345Cu;
            goto label_32345c;
        }
    }
    ctx->pc = 0x323444u;
label_323444:
    // 0x323444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323448:
    // 0x323448: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x323448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32344c:
    // 0x32344c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x32344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323450:
    // 0x323450: 0xc11c9a0  jal         func_472680
label_323454:
    if (ctx->pc == 0x323454u) {
        ctx->pc = 0x323454u;
            // 0x323454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323458u;
        goto label_323458;
    }
    ctx->pc = 0x323450u;
    SET_GPR_U32(ctx, 31, 0x323458u);
    ctx->pc = 0x323454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323450u;
            // 0x323454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x472680u;
    if (runtime->hasFunction(0x472680u)) {
        auto targetFn = runtime->lookupFunction(0x472680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323458u; }
        if (ctx->pc != 0x323458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00472680_0x472680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323458u; }
        if (ctx->pc != 0x323458u) { return; }
    }
    ctx->pc = 0x323458u;
label_323458:
    // 0x323458: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32345c:
    // 0x32345c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32345cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323460:
    // 0x323460: 0x320f809  jalr        $t9
label_323464:
    if (ctx->pc == 0x323464u) {
        ctx->pc = 0x323464u;
            // 0x323464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323468u;
        goto label_323468;
    }
    ctx->pc = 0x323460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323468u);
        ctx->pc = 0x323464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323460u;
            // 0x323464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323468u; }
            if (ctx->pc != 0x323468u) { return; }
        }
        }
    }
    ctx->pc = 0x323468u;
label_323468:
    // 0x323468: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x323468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_32346c:
    // 0x32346c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x32346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_323470:
    // 0x323470: 0x54830093  bnel        $a0, $v1, . + 4 + (0x93 << 2)
label_323474:
    if (ctx->pc == 0x323474u) {
        ctx->pc = 0x323474u;
            // 0x323474: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x323478u;
        goto label_323478;
    }
    ctx->pc = 0x323470u;
    {
        const bool branch_taken_0x323470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x323470) {
            ctx->pc = 0x323474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323470u;
            // 0x323474: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3236C0u;
            goto label_3236c0;
        }
    }
    ctx->pc = 0x323478u;
label_323478:
    // 0x323478: 0xc0c900c  jal         func_324030
label_32347c:
    if (ctx->pc == 0x32347Cu) {
        ctx->pc = 0x32347Cu;
            // 0x32347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323480u;
        goto label_323480;
    }
    ctx->pc = 0x323478u;
    SET_GPR_U32(ctx, 31, 0x323480u);
    ctx->pc = 0x32347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323478u;
            // 0x32347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323480u; }
        if (ctx->pc != 0x323480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323480u; }
        if (ctx->pc != 0x323480u) { return; }
    }
    ctx->pc = 0x323480u;
label_323480:
    // 0x323480: 0xc040180  jal         func_100600
label_323484:
    if (ctx->pc == 0x323484u) {
        ctx->pc = 0x323484u;
            // 0x323484: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x323488u;
        goto label_323488;
    }
    ctx->pc = 0x323480u;
    SET_GPR_U32(ctx, 31, 0x323488u);
    ctx->pc = 0x323484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323480u;
            // 0x323484: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323488u; }
        if (ctx->pc != 0x323488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323488u; }
        if (ctx->pc != 0x323488u) { return; }
    }
    ctx->pc = 0x323488u;
label_323488:
    // 0x323488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x323488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32348c:
    // 0x32348c: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_323490:
    if (ctx->pc == 0x323490u) {
        ctx->pc = 0x323490u;
            // 0x323490: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x323494u;
        goto label_323494;
    }
    ctx->pc = 0x32348Cu;
    {
        const bool branch_taken_0x32348c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32348c) {
            ctx->pc = 0x323490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32348Cu;
            // 0x323490: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3234A8u;
            goto label_3234a8;
        }
    }
    ctx->pc = 0x323494u;
label_323494:
    // 0x323494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323498:
    // 0x323498: 0xc0c8fbc  jal         func_323EF0
label_32349c:
    if (ctx->pc == 0x32349Cu) {
        ctx->pc = 0x32349Cu;
            // 0x32349c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3234A0u;
        goto label_3234a0;
    }
    ctx->pc = 0x323498u;
    SET_GPR_U32(ctx, 31, 0x3234A0u);
    ctx->pc = 0x32349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323498u;
            // 0x32349c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EF0u;
    if (runtime->hasFunction(0x323EF0u)) {
        auto targetFn = runtime->lookupFunction(0x323EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234A0u; }
        if (ctx->pc != 0x3234A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EF0_0x323ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234A0u; }
        if (ctx->pc != 0x3234A0u) { return; }
    }
    ctx->pc = 0x3234A0u;
label_3234a0:
    // 0x3234a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3234a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3234a4:
    // 0x3234a4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3234a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3234a8:
    // 0x3234a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3234a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3234ac:
    // 0x3234ac: 0x320f809  jalr        $t9
label_3234b0:
    if (ctx->pc == 0x3234B0u) {
        ctx->pc = 0x3234B0u;
            // 0x3234b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3234B4u;
        goto label_3234b4;
    }
    ctx->pc = 0x3234ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3234B4u);
        ctx->pc = 0x3234B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3234ACu;
            // 0x3234b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3234B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3234B4u; }
            if (ctx->pc != 0x3234B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3234B4u;
label_3234b4:
    // 0x3234b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3234b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3234b8:
    // 0x3234b8: 0xc0c8fb8  jal         func_323EE0
label_3234bc:
    if (ctx->pc == 0x3234BCu) {
        ctx->pc = 0x3234BCu;
            // 0x3234bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3234C0u;
        goto label_3234c0;
    }
    ctx->pc = 0x3234B8u;
    SET_GPR_U32(ctx, 31, 0x3234C0u);
    ctx->pc = 0x3234BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3234B8u;
            // 0x3234bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323EE0u;
    if (runtime->hasFunction(0x323EE0u)) {
        auto targetFn = runtime->lookupFunction(0x323EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234C0u; }
        if (ctx->pc != 0x3234C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323EE0_0x323ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234C0u; }
        if (ctx->pc != 0x3234C0u) { return; }
    }
    ctx->pc = 0x3234C0u;
label_3234c0:
    // 0x3234c0: 0xc1182a8  jal         func_460AA0
label_3234c4:
    if (ctx->pc == 0x3234C4u) {
        ctx->pc = 0x3234C4u;
            // 0x3234c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3234C8u;
        goto label_3234c8;
    }
    ctx->pc = 0x3234C0u;
    SET_GPR_U32(ctx, 31, 0x3234C8u);
    ctx->pc = 0x3234C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3234C0u;
            // 0x3234c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460AA0u;
    if (runtime->hasFunction(0x460AA0u)) {
        auto targetFn = runtime->lookupFunction(0x460AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234C8u; }
        if (ctx->pc != 0x3234C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460AA0_0x460aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234C8u; }
        if (ctx->pc != 0x3234C8u) { return; }
    }
    ctx->pc = 0x3234C8u;
label_3234c8:
    // 0x3234c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3234c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3234cc:
    // 0x3234cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3234ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3234d0:
    // 0x3234d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3234d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3234d4:
    // 0x3234d4: 0x320f809  jalr        $t9
label_3234d8:
    if (ctx->pc == 0x3234D8u) {
        ctx->pc = 0x3234D8u;
            // 0x3234d8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x3234DCu;
        goto label_3234dc;
    }
    ctx->pc = 0x3234D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3234DCu);
        ctx->pc = 0x3234D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3234D4u;
            // 0x3234d8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3234DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3234DCu; }
            if (ctx->pc != 0x3234DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3234DCu;
label_3234dc:
    // 0x3234dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3234dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3234e0:
    // 0x3234e0: 0xc0c9a58  jal         func_326960
label_3234e4:
    if (ctx->pc == 0x3234E4u) {
        ctx->pc = 0x3234E4u;
            // 0x3234e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3234E8u;
        goto label_3234e8;
    }
    ctx->pc = 0x3234E0u;
    SET_GPR_U32(ctx, 31, 0x3234E8u);
    ctx->pc = 0x3234E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3234E0u;
            // 0x3234e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234E8u; }
        if (ctx->pc != 0x3234E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3234E8u; }
        if (ctx->pc != 0x3234E8u) { return; }
    }
    ctx->pc = 0x3234E8u;
label_3234e8:
    // 0x3234e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3234e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3234ec:
    // 0x3234ec: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3234f0:
    // 0x3234f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3234f4:
    if (ctx->pc == 0x3234F4u) {
        ctx->pc = 0x3234F4u;
            // 0x3234f4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3234F8u;
        goto label_3234f8;
    }
    ctx->pc = 0x3234F0u;
    {
        const bool branch_taken_0x3234f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3234F0u;
            // 0x3234f4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234f0) {
            ctx->pc = 0x323514u;
            goto label_323514;
        }
    }
    ctx->pc = 0x3234F8u;
label_3234f8:
    // 0x3234f8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3234f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3234fc:
    // 0x3234fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_323500:
    // 0x323500: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_323504:
    // 0x323504: 0x0  nop
    ctx->pc = 0x323504u;
    // NOP
label_323508:
    // 0x323508: 0x0  nop
    ctx->pc = 0x323508u;
    // NOP
label_32350c:
    // 0x32350c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_323510:
    if (ctx->pc == 0x323510u) {
        ctx->pc = 0x323514u;
        goto label_323514;
    }
    ctx->pc = 0x32350Cu;
    {
        const bool branch_taken_0x32350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32350c) {
            ctx->pc = 0x3234F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3234f8;
        }
    }
    ctx->pc = 0x323514u;
label_323514:
    // 0x323514: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x323514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_323518:
    // 0x323518: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_32351c:
    if (ctx->pc == 0x32351Cu) {
        ctx->pc = 0x32351Cu;
            // 0x32351c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x323520u;
        goto label_323520;
    }
    ctx->pc = 0x323518u;
    {
        const bool branch_taken_0x323518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323518u;
            // 0x32351c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323518) {
            ctx->pc = 0x32353Cu;
            goto label_32353c;
        }
    }
    ctx->pc = 0x323520u;
label_323520:
    // 0x323520: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x323520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_323524:
    // 0x323524: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x323524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_323528:
    // 0x323528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32352c:
    // 0x32352c: 0x0  nop
    ctx->pc = 0x32352cu;
    // NOP
label_323530:
    // 0x323530: 0x0  nop
    ctx->pc = 0x323530u;
    // NOP
label_323534:
    // 0x323534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_323538:
    if (ctx->pc == 0x323538u) {
        ctx->pc = 0x32353Cu;
        goto label_32353c;
    }
    ctx->pc = 0x323534u;
    {
        const bool branch_taken_0x323534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323534) {
            ctx->pc = 0x323520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323520;
        }
    }
    ctx->pc = 0x32353Cu;
label_32353c:
    // 0x32353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323540:
    // 0x323540: 0x27b401a0  addiu       $s4, $sp, 0x1A0
    ctx->pc = 0x323540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_323544:
    // 0x323544: 0xc0c8f80  jal         func_323E00
label_323548:
    if (ctx->pc == 0x323548u) {
        ctx->pc = 0x323548u;
            // 0x323548: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x32354Cu;
        goto label_32354c;
    }
    ctx->pc = 0x323544u;
    SET_GPR_U32(ctx, 31, 0x32354Cu);
    ctx->pc = 0x323548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323544u;
            // 0x323548: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32354Cu; }
        if (ctx->pc != 0x32354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32354Cu; }
        if (ctx->pc != 0x32354Cu) { return; }
    }
    ctx->pc = 0x32354Cu;
label_32354c:
    // 0x32354c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32354cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_323550:
    // 0x323550: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x323550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323554:
    // 0x323554: 0xc1232d8  jal         func_48CB60
label_323558:
    if (ctx->pc == 0x323558u) {
        ctx->pc = 0x323558u;
            // 0x323558: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x32355Cu;
        goto label_32355c;
    }
    ctx->pc = 0x323554u;
    SET_GPR_U32(ctx, 31, 0x32355Cu);
    ctx->pc = 0x323558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323554u;
            // 0x323558: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32355Cu; }
        if (ctx->pc != 0x32355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32355Cu; }
        if (ctx->pc != 0x32355Cu) { return; }
    }
    ctx->pc = 0x32355Cu;
label_32355c:
    // 0x32355c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323560:
    // 0x323560: 0x8c423e30  lw          $v0, 0x3E30($v0)
    ctx->pc = 0x323560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_323564:
    // 0x323564: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x323564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_323568:
    // 0x323568: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x323568u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_32356c:
    // 0x32356c: 0x50200034  beql        $at, $zero, . + 4 + (0x34 << 2)
label_323570:
    if (ctx->pc == 0x323570u) {
        ctx->pc = 0x323570u;
            // 0x323570: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323574u;
        goto label_323574;
    }
    ctx->pc = 0x32356Cu;
    {
        const bool branch_taken_0x32356c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32356c) {
            ctx->pc = 0x323570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32356Cu;
            // 0x323570: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323640u;
            goto label_323640;
        }
    }
    ctx->pc = 0x323574u;
label_323574:
    // 0x323574: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x323574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_323578:
    // 0x323578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32357c:
    // 0x32357c: 0x2463c830  addiu       $v1, $v1, -0x37D0
    ctx->pc = 0x32357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953008));
label_323580:
    // 0x323580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_323584:
    // 0x323584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_323588:
    // 0x323588: 0x400008  jr          $v0
label_32358c:
    if (ctx->pc == 0x32358Cu) {
        ctx->pc = 0x323590u;
        goto label_323590;
    }
    ctx->pc = 0x323588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x323590u: goto label_323590;
            case 0x3235A4u: goto label_3235a4;
            case 0x3235C8u: goto label_3235c8;
            case 0x323604u: goto label_323604;
            case 0x32363Cu: goto label_32363c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x323590u;
label_323590:
    // 0x323590: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x323590u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_323594:
    // 0x323594: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x323594u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
label_323598:
    // 0x323598: 0x2694d0c0  addiu       $s4, $s4, -0x2F40
    ctx->pc = 0x323598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955200));
label_32359c:
    // 0x32359c: 0x10000027  b           . + 4 + (0x27 << 2)
label_3235a0:
    if (ctx->pc == 0x3235A0u) {
        ctx->pc = 0x3235A0u;
            // 0x3235a0: 0x2673d0b0  addiu       $s3, $s3, -0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955184));
        ctx->pc = 0x3235A4u;
        goto label_3235a4;
    }
    ctx->pc = 0x32359Cu;
    {
        const bool branch_taken_0x32359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32359Cu;
            // 0x3235a0: 0x2673d0b0  addiu       $s3, $s3, -0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32359c) {
            ctx->pc = 0x32363Cu;
            goto label_32363c;
        }
    }
    ctx->pc = 0x3235A4u;
label_3235a4:
    // 0x3235a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3235a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3235a8:
    // 0x3235a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3235a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3235ac:
    // 0x3235ac: 0xc1232d8  jal         func_48CB60
label_3235b0:
    if (ctx->pc == 0x3235B0u) {
        ctx->pc = 0x3235B0u;
            // 0x3235b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3235B4u;
        goto label_3235b4;
    }
    ctx->pc = 0x3235ACu;
    SET_GPR_U32(ctx, 31, 0x3235B4u);
    ctx->pc = 0x3235B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3235ACu;
            // 0x3235b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235B4u; }
        if (ctx->pc != 0x3235B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235B4u; }
        if (ctx->pc != 0x3235B4u) { return; }
    }
    ctx->pc = 0x3235B4u;
label_3235b4:
    // 0x3235b4: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x3235b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_3235b8:
    // 0x3235b8: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x3235b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
label_3235bc:
    // 0x3235bc: 0x2694d0a0  addiu       $s4, $s4, -0x2F60
    ctx->pc = 0x3235bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955168));
label_3235c0:
    // 0x3235c0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3235c4:
    if (ctx->pc == 0x3235C4u) {
        ctx->pc = 0x3235C4u;
            // 0x3235c4: 0x2673d090  addiu       $s3, $s3, -0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955152));
        ctx->pc = 0x3235C8u;
        goto label_3235c8;
    }
    ctx->pc = 0x3235C0u;
    {
        const bool branch_taken_0x3235c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3235C0u;
            // 0x3235c4: 0x2673d090  addiu       $s3, $s3, -0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235c0) {
            ctx->pc = 0x32363Cu;
            goto label_32363c;
        }
    }
    ctx->pc = 0x3235C8u;
label_3235c8:
    // 0x3235c8: 0xc0c8f80  jal         func_323E00
label_3235cc:
    if (ctx->pc == 0x3235CCu) {
        ctx->pc = 0x3235CCu;
            // 0x3235cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3235D0u;
        goto label_3235d0;
    }
    ctx->pc = 0x3235C8u;
    SET_GPR_U32(ctx, 31, 0x3235D0u);
    ctx->pc = 0x3235CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3235C8u;
            // 0x3235cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235D0u; }
        if (ctx->pc != 0x3235D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235D0u; }
        if (ctx->pc != 0x3235D0u) { return; }
    }
    ctx->pc = 0x3235D0u;
label_3235d0:
    // 0x3235d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3235d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3235d4:
    // 0x3235d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3235d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3235d8:
    // 0x3235d8: 0xc1232d8  jal         func_48CB60
label_3235dc:
    if (ctx->pc == 0x3235DCu) {
        ctx->pc = 0x3235DCu;
            // 0x3235dc: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x3235E0u;
        goto label_3235e0;
    }
    ctx->pc = 0x3235D8u;
    SET_GPR_U32(ctx, 31, 0x3235E0u);
    ctx->pc = 0x3235DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3235D8u;
            // 0x3235dc: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235E0u; }
        if (ctx->pc != 0x3235E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235E0u; }
        if (ctx->pc != 0x3235E0u) { return; }
    }
    ctx->pc = 0x3235E0u;
label_3235e0:
    // 0x3235e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3235e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3235e4:
    // 0x3235e4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3235e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3235e8:
    // 0x3235e8: 0xc1232d8  jal         func_48CB60
label_3235ec:
    if (ctx->pc == 0x3235ECu) {
        ctx->pc = 0x3235ECu;
            // 0x3235ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3235F0u;
        goto label_3235f0;
    }
    ctx->pc = 0x3235E8u;
    SET_GPR_U32(ctx, 31, 0x3235F0u);
    ctx->pc = 0x3235ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3235E8u;
            // 0x3235ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235F0u; }
        if (ctx->pc != 0x3235F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3235F0u; }
        if (ctx->pc != 0x3235F0u) { return; }
    }
    ctx->pc = 0x3235F0u;
label_3235f0:
    // 0x3235f0: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x3235f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_3235f4:
    // 0x3235f4: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x3235f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
label_3235f8:
    // 0x3235f8: 0x2694d070  addiu       $s4, $s4, -0x2F90
    ctx->pc = 0x3235f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955120));
label_3235fc:
    // 0x3235fc: 0x1000000f  b           . + 4 + (0xF << 2)
label_323600:
    if (ctx->pc == 0x323600u) {
        ctx->pc = 0x323600u;
            // 0x323600: 0x2673d060  addiu       $s3, $s3, -0x2FA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955104));
        ctx->pc = 0x323604u;
        goto label_323604;
    }
    ctx->pc = 0x3235FCu;
    {
        const bool branch_taken_0x3235fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3235FCu;
            // 0x323600: 0x2673d060  addiu       $s3, $s3, -0x2FA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235fc) {
            ctx->pc = 0x32363Cu;
            goto label_32363c;
        }
    }
    ctx->pc = 0x323604u;
label_323604:
    // 0x323604: 0xc0c8f80  jal         func_323E00
label_323608:
    if (ctx->pc == 0x323608u) {
        ctx->pc = 0x323608u;
            // 0x323608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32360Cu;
        goto label_32360c;
    }
    ctx->pc = 0x323604u;
    SET_GPR_U32(ctx, 31, 0x32360Cu);
    ctx->pc = 0x323608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323604u;
            // 0x323608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32360Cu; }
        if (ctx->pc != 0x32360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32360Cu; }
        if (ctx->pc != 0x32360Cu) { return; }
    }
    ctx->pc = 0x32360Cu;
label_32360c:
    // 0x32360c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_323610:
    // 0x323610: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x323610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323614:
    // 0x323614: 0xc1232d8  jal         func_48CB60
label_323618:
    if (ctx->pc == 0x323618u) {
        ctx->pc = 0x323618u;
            // 0x323618: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x32361Cu;
        goto label_32361c;
    }
    ctx->pc = 0x323614u;
    SET_GPR_U32(ctx, 31, 0x32361Cu);
    ctx->pc = 0x323618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323614u;
            // 0x323618: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32361Cu; }
        if (ctx->pc != 0x32361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32361Cu; }
        if (ctx->pc != 0x32361Cu) { return; }
    }
    ctx->pc = 0x32361Cu;
label_32361c:
    // 0x32361c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_323620:
    // 0x323620: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x323620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_323624:
    // 0x323624: 0xc1232d8  jal         func_48CB60
label_323628:
    if (ctx->pc == 0x323628u) {
        ctx->pc = 0x323628u;
            // 0x323628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32362Cu;
        goto label_32362c;
    }
    ctx->pc = 0x323624u;
    SET_GPR_U32(ctx, 31, 0x32362Cu);
    ctx->pc = 0x323628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323624u;
            // 0x323628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32362Cu; }
        if (ctx->pc != 0x32362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32362Cu; }
        if (ctx->pc != 0x32362Cu) { return; }
    }
    ctx->pc = 0x32362Cu;
label_32362c:
    // 0x32362c: 0x3c140065  lui         $s4, 0x65
    ctx->pc = 0x32362cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)101 << 16));
label_323630:
    // 0x323630: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x323630u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
label_323634:
    // 0x323634: 0x2694d040  addiu       $s4, $s4, -0x2FC0
    ctx->pc = 0x323634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955072));
label_323638:
    // 0x323638: 0x2673d020  addiu       $s3, $s3, -0x2FE0
    ctx->pc = 0x323638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955040));
label_32363c:
    // 0x32363c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32363cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323640:
    // 0x323640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323644:
    // 0x323644: 0xc0c9a54  jal         func_326950
label_323648:
    if (ctx->pc == 0x323648u) {
        ctx->pc = 0x323648u;
            // 0x323648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32364Cu;
        goto label_32364c;
    }
    ctx->pc = 0x323644u;
    SET_GPR_U32(ctx, 31, 0x32364Cu);
    ctx->pc = 0x323648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323644u;
            // 0x323648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326950u;
    if (runtime->hasFunction(0x326950u)) {
        auto targetFn = runtime->lookupFunction(0x326950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32364Cu; }
        if (ctx->pc != 0x32364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326950_0x326950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32364Cu; }
        if (ctx->pc != 0x32364Cu) { return; }
    }
    ctx->pc = 0x32364Cu;
label_32364c:
    // 0x32364c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_323650:
    // 0x323650: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_323654:
    if (ctx->pc == 0x323654u) {
        ctx->pc = 0x323654u;
            // 0x323654: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323658u;
        goto label_323658;
    }
    ctx->pc = 0x323650u;
    {
        const bool branch_taken_0x323650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323650u;
            // 0x323654: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323650) {
            ctx->pc = 0x323680u;
            goto label_323680;
        }
    }
    ctx->pc = 0x323658u;
label_323658:
    // 0x323658: 0xc0c74d4  jal         func_31D350
label_32365c:
    if (ctx->pc == 0x32365Cu) {
        ctx->pc = 0x32365Cu;
            // 0x32365c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323660u;
        goto label_323660;
    }
    ctx->pc = 0x323658u;
    SET_GPR_U32(ctx, 31, 0x323660u);
    ctx->pc = 0x32365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323658u;
            // 0x32365c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D350u;
    if (runtime->hasFunction(0x31D350u)) {
        auto targetFn = runtime->lookupFunction(0x31D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323660u; }
        if (ctx->pc != 0x323660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D350_0x31d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323660u; }
        if (ctx->pc != 0x323660u) { return; }
    }
    ctx->pc = 0x323660u;
label_323660:
    // 0x323660: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x323660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_323664:
    // 0x323664: 0xc12307c  jal         func_48C1F0
label_323668:
    if (ctx->pc == 0x323668u) {
        ctx->pc = 0x323668u;
            // 0x323668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32366Cu;
        goto label_32366c;
    }
    ctx->pc = 0x323664u;
    SET_GPR_U32(ctx, 31, 0x32366Cu);
    ctx->pc = 0x323668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323664u;
            // 0x323668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C1F0u;
    if (runtime->hasFunction(0x48C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32366Cu; }
        if (ctx->pc != 0x32366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C1F0_0x48c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32366Cu; }
        if (ctx->pc != 0x32366Cu) { return; }
    }
    ctx->pc = 0x32366Cu;
label_32366c:
    // 0x32366c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x32366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_323670:
    // 0x323670: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x323670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323674:
    // 0x323674: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x323674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_323678:
    // 0x323678: 0x320f809  jalr        $t9
label_32367c:
    if (ctx->pc == 0x32367Cu) {
        ctx->pc = 0x323680u;
        goto label_323680;
    }
    ctx->pc = 0x323678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323680u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x323680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323680u; }
            if (ctx->pc != 0x323680u) { return; }
        }
        }
    }
    ctx->pc = 0x323680u;
label_323680:
    // 0x323680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x323680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_323684:
    // 0x323684: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x323684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_323688:
    // 0x323688: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_32368c:
    if (ctx->pc == 0x32368Cu) {
        ctx->pc = 0x32368Cu;
            // 0x32368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323690u;
        goto label_323690;
    }
    ctx->pc = 0x323688u;
    {
        const bool branch_taken_0x323688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323688) {
            ctx->pc = 0x32368Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323688u;
            // 0x32368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323644u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323644;
        }
    }
    ctx->pc = 0x323690u;
label_323690:
    // 0x323690: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x323690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_323694:
    // 0x323694: 0xc1230ac  jal         func_48C2B0
label_323698:
    if (ctx->pc == 0x323698u) {
        ctx->pc = 0x323698u;
            // 0x323698: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32369Cu;
        goto label_32369c;
    }
    ctx->pc = 0x323694u;
    SET_GPR_U32(ctx, 31, 0x32369Cu);
    ctx->pc = 0x323698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323694u;
            // 0x323698: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32369Cu; }
        if (ctx->pc != 0x32369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32369Cu; }
        if (ctx->pc != 0x32369Cu) { return; }
    }
    ctx->pc = 0x32369Cu;
label_32369c:
    // 0x32369c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3236a0:
    // 0x3236a0: 0xc123020  jal         func_48C080
label_3236a4:
    if (ctx->pc == 0x3236A4u) {
        ctx->pc = 0x3236A4u;
            // 0x3236a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3236A8u;
        goto label_3236a8;
    }
    ctx->pc = 0x3236A0u;
    SET_GPR_U32(ctx, 31, 0x3236A8u);
    ctx->pc = 0x3236A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3236A0u;
            // 0x3236a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3236A8u; }
        if (ctx->pc != 0x3236A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3236A8u; }
        if (ctx->pc != 0x3236A8u) { return; }
    }
    ctx->pc = 0x3236A8u;
label_3236a8:
    // 0x3236a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3236a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3236ac:
    // 0x3236ac: 0xc0c91d4  jal         func_324750
label_3236b0:
    if (ctx->pc == 0x3236B0u) {
        ctx->pc = 0x3236B0u;
            // 0x3236b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3236B4u;
        goto label_3236b4;
    }
    ctx->pc = 0x3236ACu;
    SET_GPR_U32(ctx, 31, 0x3236B4u);
    ctx->pc = 0x3236B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3236ACu;
            // 0x3236b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3236B4u; }
        if (ctx->pc != 0x3236B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3236B4u; }
        if (ctx->pc != 0x3236B4u) { return; }
    }
    ctx->pc = 0x3236B4u;
label_3236b4:
    // 0x3236b4: 0x1000017d  b           . + 4 + (0x17D << 2)
label_3236b8:
    if (ctx->pc == 0x3236B8u) {
        ctx->pc = 0x3236BCu;
        goto label_3236bc;
    }
    ctx->pc = 0x3236B4u;
    {
        const bool branch_taken_0x3236b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236b4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3236BCu;
label_3236bc:
    // 0x3236bc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3236bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3236c0:
    // 0x3236c0: 0x1483017a  bne         $a0, $v1, . + 4 + (0x17A << 2)
label_3236c4:
    if (ctx->pc == 0x3236C4u) {
        ctx->pc = 0x3236C8u;
        goto label_3236c8;
    }
    ctx->pc = 0x3236C0u;
    {
        const bool branch_taken_0x3236c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3236c0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3236C8u;
label_3236c8:
    // 0x3236c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3236c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3236cc:
    // 0x3236cc: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x3236ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_3236d0:
    // 0x3236d0: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x3236d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_3236d4:
    // 0x3236d4: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3236d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3236d8:
    // 0x3236d8: 0x10200174  beqz        $at, . + 4 + (0x174 << 2)
label_3236dc:
    if (ctx->pc == 0x3236DCu) {
        ctx->pc = 0x3236E0u;
        goto label_3236e0;
    }
    ctx->pc = 0x3236D8u;
    {
        const bool branch_taken_0x3236d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236d8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3236E0u;
label_3236e0:
    // 0x3236e0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3236e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3236e4:
    // 0x3236e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3236e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3236e8:
    // 0x3236e8: 0x2484c800  addiu       $a0, $a0, -0x3800
    ctx->pc = 0x3236e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
label_3236ec:
    // 0x3236ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3236ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3236f0:
    // 0x3236f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3236f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3236f4:
    // 0x3236f4: 0x600008  jr          $v1
label_3236f8:
    if (ctx->pc == 0x3236F8u) {
        ctx->pc = 0x3236FCu;
        goto label_3236fc;
    }
    ctx->pc = 0x3236F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3236FCu: goto label_3236fc;
            case 0x323CACu: goto label_323cac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3236FCu;
label_3236fc:
    // 0x3236fc: 0xc0c8f7c  jal         func_323DF0
label_323700:
    if (ctx->pc == 0x323700u) {
        ctx->pc = 0x323704u;
        goto label_323704;
    }
    ctx->pc = 0x3236FCu;
    SET_GPR_U32(ctx, 31, 0x323704u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323704u; }
        if (ctx->pc != 0x323704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323704u; }
        if (ctx->pc != 0x323704u) { return; }
    }
    ctx->pc = 0x323704u;
label_323704:
    // 0x323704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323708:
    // 0x323708: 0xc0fd080  jal         func_3F4200
label_32370c:
    if (ctx->pc == 0x32370Cu) {
        ctx->pc = 0x32370Cu;
            // 0x32370c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323710u;
        goto label_323710;
    }
    ctx->pc = 0x323708u;
    SET_GPR_U32(ctx, 31, 0x323710u);
    ctx->pc = 0x32370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323708u;
            // 0x32370c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323710u; }
        if (ctx->pc != 0x323710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323710u; }
        if (ctx->pc != 0x323710u) { return; }
    }
    ctx->pc = 0x323710u;
label_323710:
    // 0x323710: 0xc0c8f7c  jal         func_323DF0
label_323714:
    if (ctx->pc == 0x323714u) {
        ctx->pc = 0x323718u;
        goto label_323718;
    }
    ctx->pc = 0x323710u;
    SET_GPR_U32(ctx, 31, 0x323718u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323718u; }
        if (ctx->pc != 0x323718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323718u; }
        if (ctx->pc != 0x323718u) { return; }
    }
    ctx->pc = 0x323718u;
label_323718:
    // 0x323718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32371c:
    // 0x32371c: 0xc0fd080  jal         func_3F4200
label_323720:
    if (ctx->pc == 0x323720u) {
        ctx->pc = 0x323720u;
            // 0x323720: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x323724u;
        goto label_323724;
    }
    ctx->pc = 0x32371Cu;
    SET_GPR_U32(ctx, 31, 0x323724u);
    ctx->pc = 0x323720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32371Cu;
            // 0x323720: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323724u; }
        if (ctx->pc != 0x323724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323724u; }
        if (ctx->pc != 0x323724u) { return; }
    }
    ctx->pc = 0x323724u;
label_323724:
    // 0x323724: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323728:
    // 0x323728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32372c:
    // 0x32372c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32372cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323730:
    // 0x323730: 0x320f809  jalr        $t9
label_323734:
    if (ctx->pc == 0x323734u) {
        ctx->pc = 0x323734u;
            // 0x323734: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x323738u;
        goto label_323738;
    }
    ctx->pc = 0x323730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323738u);
        ctx->pc = 0x323734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323730u;
            // 0x323734: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323738u; }
            if (ctx->pc != 0x323738u) { return; }
        }
        }
    }
    ctx->pc = 0x323738u;
label_323738:
    // 0x323738: 0x1000015c  b           . + 4 + (0x15C << 2)
label_32373c:
    if (ctx->pc == 0x32373Cu) {
        ctx->pc = 0x323740u;
        goto label_323740;
    }
    ctx->pc = 0x323738u;
    {
        const bool branch_taken_0x323738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323738) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323740u;
label_323740:
    // 0x323740: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x323740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_323744:
    // 0x323744: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x323744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_323748:
    // 0x323748: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x323748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_32374c:
    // 0x32374c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32374cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323750:
    // 0x323750: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323754:
    // 0x323754: 0x320f809  jalr        $t9
label_323758:
    if (ctx->pc == 0x323758u) {
        ctx->pc = 0x32375Cu;
        goto label_32375c;
    }
    ctx->pc = 0x323754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32375Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32375Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32375Cu; }
            if (ctx->pc != 0x32375Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32375Cu;
label_32375c:
    // 0x32375c: 0x10000153  b           . + 4 + (0x153 << 2)
label_323760:
    if (ctx->pc == 0x323760u) {
        ctx->pc = 0x323764u;
        goto label_323764;
    }
    ctx->pc = 0x32375Cu;
    {
        const bool branch_taken_0x32375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32375c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323764u;
label_323764:
    // 0x323764: 0xc0c900c  jal         func_324030
label_323768:
    if (ctx->pc == 0x323768u) {
        ctx->pc = 0x32376Cu;
        goto label_32376c;
    }
    ctx->pc = 0x323764u;
    SET_GPR_U32(ctx, 31, 0x32376Cu);
    ctx->pc = 0x324030u;
    if (runtime->hasFunction(0x324030u)) {
        auto targetFn = runtime->lookupFunction(0x324030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32376Cu; }
        if (ctx->pc != 0x32376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324030_0x324030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32376Cu; }
        if (ctx->pc != 0x32376Cu) { return; }
    }
    ctx->pc = 0x32376Cu;
label_32376c:
    // 0x32376c: 0xc0c7530  jal         func_31D4C0
label_323770:
    if (ctx->pc == 0x323770u) {
        ctx->pc = 0x323774u;
        goto label_323774;
    }
    ctx->pc = 0x32376Cu;
    SET_GPR_U32(ctx, 31, 0x323774u);
    ctx->pc = 0x31D4C0u;
    if (runtime->hasFunction(0x31D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323774u; }
        if (ctx->pc != 0x323774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4C0_0x31d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323774u; }
        if (ctx->pc != 0x323774u) { return; }
    }
    ctx->pc = 0x323774u;
label_323774:
    // 0x323774: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x323774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_323778:
    // 0x323778: 0xc0c752c  jal         func_31D4B0
label_32377c:
    if (ctx->pc == 0x32377Cu) {
        ctx->pc = 0x32377Cu;
            // 0x32377c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x323780u;
        goto label_323780;
    }
    ctx->pc = 0x323778u;
    SET_GPR_U32(ctx, 31, 0x323780u);
    ctx->pc = 0x32377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323778u;
            // 0x32377c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4B0u;
    if (runtime->hasFunction(0x31D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323780u; }
        if (ctx->pc != 0x323780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4B0_0x31d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323780u; }
        if (ctx->pc != 0x323780u) { return; }
    }
    ctx->pc = 0x323780u;
label_323780:
    // 0x323780: 0xc0ca1b0  jal         func_3286C0
label_323784:
    if (ctx->pc == 0x323784u) {
        ctx->pc = 0x323784u;
            // 0x323784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323788u;
        goto label_323788;
    }
    ctx->pc = 0x323780u;
    SET_GPR_U32(ctx, 31, 0x323788u);
    ctx->pc = 0x323784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323780u;
            // 0x323784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3286C0u;
    if (runtime->hasFunction(0x3286C0u)) {
        auto targetFn = runtime->lookupFunction(0x3286C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323788u; }
        if (ctx->pc != 0x323788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003286C0_0x3286c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323788u; }
        if (ctx->pc != 0x323788u) { return; }
    }
    ctx->pc = 0x323788u;
label_323788:
    // 0x323788: 0xc077318  jal         func_1DCC60
label_32378c:
    if (ctx->pc == 0x32378Cu) {
        ctx->pc = 0x323790u;
        goto label_323790;
    }
    ctx->pc = 0x323788u;
    SET_GPR_U32(ctx, 31, 0x323790u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323790u; }
        if (ctx->pc != 0x323790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323790u; }
        if (ctx->pc != 0x323790u) { return; }
    }
    ctx->pc = 0x323790u;
label_323790:
    // 0x323790: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x323790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_323794:
    // 0x323794: 0xc0c8fdc  jal         func_323F70
label_323798:
    if (ctx->pc == 0x323798u) {
        ctx->pc = 0x323798u;
            // 0x323798: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x32379Cu;
        goto label_32379c;
    }
    ctx->pc = 0x323794u;
    SET_GPR_U32(ctx, 31, 0x32379Cu);
    ctx->pc = 0x323798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323794u;
            // 0x323798: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323F70u;
    if (runtime->hasFunction(0x323F70u)) {
        auto targetFn = runtime->lookupFunction(0x323F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32379Cu; }
        if (ctx->pc != 0x32379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323F70_0x323f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32379Cu; }
        if (ctx->pc != 0x32379Cu) { return; }
    }
    ctx->pc = 0x32379Cu;
label_32379c:
    // 0x32379c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3237a0:
    // 0x3237a0: 0xc0c9ec0  jal         func_327B00
label_3237a4:
    if (ctx->pc == 0x3237A4u) {
        ctx->pc = 0x3237A4u;
            // 0x3237a4: 0x3405cb76  ori         $a1, $zero, 0xCB76 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52086);
        ctx->pc = 0x3237A8u;
        goto label_3237a8;
    }
    ctx->pc = 0x3237A0u;
    SET_GPR_U32(ctx, 31, 0x3237A8u);
    ctx->pc = 0x3237A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3237A0u;
            // 0x3237a4: 0x3405cb76  ori         $a1, $zero, 0xCB76 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52086);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237A8u; }
        if (ctx->pc != 0x3237A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237A8u; }
        if (ctx->pc != 0x3237A8u) { return; }
    }
    ctx->pc = 0x3237A8u;
label_3237a8:
    // 0x3237a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3237a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3237ac:
    // 0x3237ac: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x3237acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_3237b0:
    // 0x3237b0: 0xc040180  jal         func_100600
label_3237b4:
    if (ctx->pc == 0x3237B4u) {
        ctx->pc = 0x3237B4u;
            // 0x3237b4: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x3237B8u;
        goto label_3237b8;
    }
    ctx->pc = 0x3237B0u;
    SET_GPR_U32(ctx, 31, 0x3237B8u);
    ctx->pc = 0x3237B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3237B0u;
            // 0x3237b4: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237B8u; }
        if (ctx->pc != 0x3237B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237B8u; }
        if (ctx->pc != 0x3237B8u) { return; }
    }
    ctx->pc = 0x3237B8u;
label_3237b8:
    // 0x3237b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3237bc:
    if (ctx->pc == 0x3237BCu) {
        ctx->pc = 0x3237BCu;
            // 0x3237bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3237C0u;
        goto label_3237c0;
    }
    ctx->pc = 0x3237B8u;
    {
        const bool branch_taken_0x3237b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3237b8) {
            ctx->pc = 0x3237BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3237B8u;
            // 0x3237bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3237D0u;
            goto label_3237d0;
        }
    }
    ctx->pc = 0x3237C0u;
label_3237c0:
    // 0x3237c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3237c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3237c4:
    // 0x3237c4: 0xc0c8f50  jal         func_323D40
label_3237c8:
    if (ctx->pc == 0x3237C8u) {
        ctx->pc = 0x3237C8u;
            // 0x3237c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3237CCu;
        goto label_3237cc;
    }
    ctx->pc = 0x3237C4u;
    SET_GPR_U32(ctx, 31, 0x3237CCu);
    ctx->pc = 0x3237C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3237C4u;
            // 0x3237c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323D40u;
    if (runtime->hasFunction(0x323D40u)) {
        auto targetFn = runtime->lookupFunction(0x323D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237CCu; }
        if (ctx->pc != 0x3237CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323D40_0x323d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3237CCu; }
        if (ctx->pc != 0x3237CCu) { return; }
    }
    ctx->pc = 0x3237CCu;
label_3237cc:
    // 0x3237cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3237ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3237d0:
    // 0x3237d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3237d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3237d4:
    // 0x3237d4: 0x320f809  jalr        $t9
label_3237d8:
    if (ctx->pc == 0x3237D8u) {
        ctx->pc = 0x3237D8u;
            // 0x3237d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3237DCu;
        goto label_3237dc;
    }
    ctx->pc = 0x3237D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3237DCu);
        ctx->pc = 0x3237D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3237D4u;
            // 0x3237d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3237DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3237DCu; }
            if (ctx->pc != 0x3237DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3237DCu;
label_3237dc:
    // 0x3237dc: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x3237dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_3237e0:
    // 0x3237e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3237e4:
    if (ctx->pc == 0x3237E4u) {
        ctx->pc = 0x3237E4u;
            // 0x3237e4: 0x8e040574  lw          $a0, 0x574($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
        ctx->pc = 0x3237E8u;
        goto label_3237e8;
    }
    ctx->pc = 0x3237E0u;
    {
        const bool branch_taken_0x3237e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3237e0) {
            ctx->pc = 0x3237E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3237E0u;
            // 0x3237e4: 0x8e040574  lw          $a0, 0x574($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3237FCu;
            goto label_3237fc;
        }
    }
    ctx->pc = 0x3237E8u;
label_3237e8:
    // 0x3237e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3237e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3237ec:
    // 0x3237ec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3237ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3237f0:
    // 0x3237f0: 0x320f809  jalr        $t9
label_3237f4:
    if (ctx->pc == 0x3237F4u) {
        ctx->pc = 0x3237F8u;
        goto label_3237f8;
    }
    ctx->pc = 0x3237F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3237F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3237F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3237F8u; }
            if (ctx->pc != 0x3237F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3237F8u;
label_3237f8:
    // 0x3237f8: 0x8e040574  lw          $a0, 0x574($s0)
    ctx->pc = 0x3237f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
label_3237fc:
    // 0x3237fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_323800:
    if (ctx->pc == 0x323800u) {
        ctx->pc = 0x323800u;
            // 0x323800: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->pc = 0x323804u;
        goto label_323804;
    }
    ctx->pc = 0x3237FCu;
    {
        const bool branch_taken_0x3237fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3237fc) {
            ctx->pc = 0x323800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3237FCu;
            // 0x323800: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323818u;
            goto label_323818;
        }
    }
    ctx->pc = 0x323804u;
label_323804:
    // 0x323804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x323804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_323808:
    // 0x323808: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x323808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_32380c:
    // 0x32380c: 0x320f809  jalr        $t9
label_323810:
    if (ctx->pc == 0x323810u) {
        ctx->pc = 0x323814u;
        goto label_323814;
    }
    ctx->pc = 0x32380Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323814u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x323814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323814u; }
            if (ctx->pc != 0x323814u) { return; }
        }
        }
    }
    ctx->pc = 0x323814u;
label_323814:
    // 0x323814: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x323814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_323818:
    // 0x323818: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x323818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_32381c:
    // 0x32381c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_323820:
    if (ctx->pc == 0x323820u) {
        ctx->pc = 0x323824u;
        goto label_323824;
    }
    ctx->pc = 0x32381Cu;
    {
        const bool branch_taken_0x32381c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32381c) {
            ctx->pc = 0x32382Cu;
            goto label_32382c;
        }
    }
    ctx->pc = 0x323824u;
label_323824:
    // 0x323824: 0x10000121  b           . + 4 + (0x121 << 2)
label_323828:
    if (ctx->pc == 0x323828u) {
        ctx->pc = 0x32382Cu;
        goto label_32382c;
    }
    ctx->pc = 0x323824u;
    {
        const bool branch_taken_0x323824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323824) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32382Cu;
label_32382c:
    // 0x32382c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323830:
    // 0x323830: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_323834:
    // 0x323834: 0xc0fd080  jal         func_3F4200
label_323838:
    if (ctx->pc == 0x323838u) {
        ctx->pc = 0x323838u;
            // 0x323838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32383Cu;
        goto label_32383c;
    }
    ctx->pc = 0x323834u;
    SET_GPR_U32(ctx, 31, 0x32383Cu);
    ctx->pc = 0x323838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323834u;
            // 0x323838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32383Cu; }
        if (ctx->pc != 0x32383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32383Cu; }
        if (ctx->pc != 0x32383Cu) { return; }
    }
    ctx->pc = 0x32383Cu;
label_32383c:
    // 0x32383c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323840:
    // 0x323840: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x323840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_323844:
    // 0x323844: 0xc0fd080  jal         func_3F4200
label_323848:
    if (ctx->pc == 0x323848u) {
        ctx->pc = 0x323848u;
            // 0x323848: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x32384Cu;
        goto label_32384c;
    }
    ctx->pc = 0x323844u;
    SET_GPR_U32(ctx, 31, 0x32384Cu);
    ctx->pc = 0x323848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323844u;
            // 0x323848: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32384Cu; }
        if (ctx->pc != 0x32384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32384Cu; }
        if (ctx->pc != 0x32384Cu) { return; }
    }
    ctx->pc = 0x32384Cu;
label_32384c:
    // 0x32384c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32384cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323850:
    // 0x323850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323854:
    // 0x323854: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x323854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323858:
    // 0x323858: 0x320f809  jalr        $t9
label_32385c:
    if (ctx->pc == 0x32385Cu) {
        ctx->pc = 0x32385Cu;
            // 0x32385c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x323860u;
        goto label_323860;
    }
    ctx->pc = 0x323858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323860u);
        ctx->pc = 0x32385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323858u;
            // 0x32385c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323860u; }
            if (ctx->pc != 0x323860u) { return; }
        }
        }
    }
    ctx->pc = 0x323860u;
label_323860:
    // 0x323860: 0x10000112  b           . + 4 + (0x112 << 2)
label_323864:
    if (ctx->pc == 0x323864u) {
        ctx->pc = 0x323868u;
        goto label_323868;
    }
    ctx->pc = 0x323860u;
    {
        const bool branch_taken_0x323860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323860) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323868u;
label_323868:
    // 0x323868: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x323868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32386c:
    // 0x32386c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x32386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_323870:
    // 0x323870: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x323870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_323874:
    // 0x323874: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_323878:
    if (ctx->pc == 0x323878u) {
        ctx->pc = 0x32387Cu;
        goto label_32387c;
    }
    ctx->pc = 0x323874u;
    {
        const bool branch_taken_0x323874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x323874) {
            ctx->pc = 0x323888u;
            goto label_323888;
        }
    }
    ctx->pc = 0x32387Cu;
label_32387c:
    // 0x32387c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x32387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_323880:
    // 0x323880: 0xc057b78  jal         func_15EDE0
label_323884:
    if (ctx->pc == 0x323884u) {
        ctx->pc = 0x323888u;
        goto label_323888;
    }
    ctx->pc = 0x323880u;
    SET_GPR_U32(ctx, 31, 0x323888u);
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323888u; }
        if (ctx->pc != 0x323888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323888u; }
        if (ctx->pc != 0x323888u) { return; }
    }
    ctx->pc = 0x323888u;
label_323888:
    // 0x323888: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x323888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32388c:
    // 0x32388c: 0x8c653e30  lw          $a1, 0x3E30($v1)
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
label_323890:
    // 0x323890: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x323890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_323894:
    // 0x323894: 0x10200105  beqz        $at, . + 4 + (0x105 << 2)
label_323898:
    if (ctx->pc == 0x323898u) {
        ctx->pc = 0x32389Cu;
        goto label_32389c;
    }
    ctx->pc = 0x323894u;
    {
        const bool branch_taken_0x323894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x323894) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32389Cu;
label_32389c:
    // 0x32389c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x32389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3238a0:
    // 0x3238a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3238a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3238a4:
    // 0x3238a4: 0x2484c7d0  addiu       $a0, $a0, -0x3830
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
label_3238a8:
    // 0x3238a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3238ac:
    // 0x3238ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3238acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3238b0:
    // 0x3238b0: 0x600008  jr          $v1
label_3238b4:
    if (ctx->pc == 0x3238B4u) {
        ctx->pc = 0x3238B8u;
        goto label_3238b8;
    }
    ctx->pc = 0x3238B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3238B8u: goto label_3238b8;
            case 0x3238F4u: goto label_3238f4;
            case 0x323924u: goto label_323924;
            case 0x32394Cu: goto label_32394c;
            case 0x3239D0u: goto label_3239d0;
            case 0x323A10u: goto label_323a10;
            case 0x323A4Cu: goto label_323a4c;
            case 0x323A74u: goto label_323a74;
            case 0x323A9Cu: goto label_323a9c;
            case 0x323CACu: goto label_323cac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3238B8u;
label_3238b8:
    // 0x3238b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3238b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3238bc:
    // 0x3238bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3238bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3238c0:
    // 0x3238c0: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x3238c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_3238c4:
    // 0x3238c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3238c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3238c8:
    // 0x3238c8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3238cc:
    // 0x3238cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3238ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3238d0:
    // 0x3238d0: 0xa04000f0  sb          $zero, 0xF0($v0)
    ctx->pc = 0x3238d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 240), (uint8_t)GPR_U32(ctx, 0));
label_3238d4:
    // 0x3238d4: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x3238d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_3238d8:
    // 0x3238d8: 0x8203008c  lb          $v1, 0x8C($s0)
    ctx->pc = 0x3238d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_3238dc:
    // 0x3238dc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3238dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3238e0:
    // 0x3238e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3238e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3238e4:
    // 0x3238e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3238e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3238e8:
    // 0x3238e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3238e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3238ec:
    // 0x3238ec: 0xc0ca4b0  jal         func_3292C0
label_3238f0:
    if (ctx->pc == 0x3238F0u) {
        ctx->pc = 0x3238F0u;
            // 0x3238f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3238F4u;
        goto label_3238f4;
    }
    ctx->pc = 0x3238ECu;
    SET_GPR_U32(ctx, 31, 0x3238F4u);
    ctx->pc = 0x3238F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3238ECu;
            // 0x3238f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238F4u; }
        if (ctx->pc != 0x3238F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238F4u; }
        if (ctx->pc != 0x3238F4u) { return; }
    }
    ctx->pc = 0x3238F4u;
label_3238f4:
    // 0x3238f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3238f8:
    // 0x3238f8: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x3238f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_3238fc:
    // 0x3238fc: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x3238fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323900:
    // 0x323900: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x323900u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_323904:
    // 0x323904: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x323904u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323908:
    // 0x323908: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32390c:
    // 0x32390c: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x32390cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_323910:
    // 0x323910: 0x8c453e30  lw          $a1, 0x3E30($v0)
    ctx->pc = 0x323910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_323914:
    // 0x323914: 0xc0b90a4  jal         func_2E4290
label_323918:
    if (ctx->pc == 0x323918u) {
        ctx->pc = 0x323918u;
            // 0x323918: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x32391Cu;
        goto label_32391c;
    }
    ctx->pc = 0x323914u;
    SET_GPR_U32(ctx, 31, 0x32391Cu);
    ctx->pc = 0x323918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323914u;
            // 0x323918: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32391Cu; }
        if (ctx->pc != 0x32391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32391Cu; }
        if (ctx->pc != 0x32391Cu) { return; }
    }
    ctx->pc = 0x32391Cu;
label_32391c:
    // 0x32391c: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_323920:
    if (ctx->pc == 0x323920u) {
        ctx->pc = 0x323924u;
        goto label_323924;
    }
    ctx->pc = 0x32391Cu;
    {
        const bool branch_taken_0x32391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32391c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323924u;
label_323924:
    // 0x323924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323928:
    // 0x323928: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x323928u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_32392c:
    // 0x32392c: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x32392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323930:
    // 0x323930: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x323930u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_323934:
    // 0x323934: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x323934u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323938:
    // 0x323938: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x323938u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_32393c:
    // 0x32393c: 0xc0b90a4  jal         func_2E4290
label_323940:
    if (ctx->pc == 0x323940u) {
        ctx->pc = 0x323940u;
            // 0x323940: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x323944u;
        goto label_323944;
    }
    ctx->pc = 0x32393Cu;
    SET_GPR_U32(ctx, 31, 0x323944u);
    ctx->pc = 0x323940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32393Cu;
            // 0x323940: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323944u; }
        if (ctx->pc != 0x323944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323944u; }
        if (ctx->pc != 0x323944u) { return; }
    }
    ctx->pc = 0x323944u;
label_323944:
    // 0x323944: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_323948:
    if (ctx->pc == 0x323948u) {
        ctx->pc = 0x32394Cu;
        goto label_32394c;
    }
    ctx->pc = 0x323944u;
    {
        const bool branch_taken_0x323944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323944) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x32394Cu;
label_32394c:
    // 0x32394c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323950:
    // 0x323950: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x323950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_323954:
    // 0x323954: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x323954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_323958:
    // 0x323958: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x323958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32395c:
    // 0x32395c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_323960:
    if (ctx->pc == 0x323960u) {
        ctx->pc = 0x323960u;
            // 0x323960: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x323964u;
        goto label_323964;
    }
    ctx->pc = 0x32395Cu;
    {
        const bool branch_taken_0x32395c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x323960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32395Cu;
            // 0x323960: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32395c) {
            ctx->pc = 0x32398Cu;
            goto label_32398c;
        }
    }
    ctx->pc = 0x323964u;
label_323964:
    // 0x323964: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_323968:
    if (ctx->pc == 0x323968u) {
        ctx->pc = 0x323968u;
            // 0x323968: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->pc = 0x32396Cu;
        goto label_32396c;
    }
    ctx->pc = 0x323964u;
    {
        const bool branch_taken_0x323964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x323964) {
            ctx->pc = 0x323968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323964u;
            // 0x323968: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323978u;
            goto label_323978;
        }
    }
    ctx->pc = 0x32396Cu;
label_32396c:
    // 0x32396c: 0x1000000b  b           . + 4 + (0xB << 2)
label_323970:
    if (ctx->pc == 0x323970u) {
        ctx->pc = 0x323974u;
        goto label_323974;
    }
    ctx->pc = 0x32396Cu;
    {
        const bool branch_taken_0x32396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32396c) {
            ctx->pc = 0x32399Cu;
            goto label_32399c;
        }
    }
    ctx->pc = 0x323974u;
label_323974:
    // 0x323974: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x323974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_323978:
    // 0x323978: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x323978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32397c:
    // 0x32397c: 0xc0ca4b0  jal         func_3292C0
label_323980:
    if (ctx->pc == 0x323980u) {
        ctx->pc = 0x323980u;
            // 0x323980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x323984u;
        goto label_323984;
    }
    ctx->pc = 0x32397Cu;
    SET_GPR_U32(ctx, 31, 0x323984u);
    ctx->pc = 0x323980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32397Cu;
            // 0x323980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323984u; }
        if (ctx->pc != 0x323984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323984u; }
        if (ctx->pc != 0x323984u) { return; }
    }
    ctx->pc = 0x323984u;
label_323984:
    // 0x323984: 0x10000005  b           . + 4 + (0x5 << 2)
label_323988:
    if (ctx->pc == 0x323988u) {
        ctx->pc = 0x32398Cu;
        goto label_32398c;
    }
    ctx->pc = 0x323984u;
    {
        const bool branch_taken_0x323984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323984) {
            ctx->pc = 0x32399Cu;
            goto label_32399c;
        }
    }
    ctx->pc = 0x32398Cu;
label_32398c:
    // 0x32398c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x32398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_323990:
    // 0x323990: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x323990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_323994:
    // 0x323994: 0xc0ca4b0  jal         func_3292C0
label_323998:
    if (ctx->pc == 0x323998u) {
        ctx->pc = 0x323998u;
            // 0x323998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32399Cu;
        goto label_32399c;
    }
    ctx->pc = 0x323994u;
    SET_GPR_U32(ctx, 31, 0x32399Cu);
    ctx->pc = 0x323998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323994u;
            // 0x323998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32399Cu; }
        if (ctx->pc != 0x32399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32399Cu; }
        if (ctx->pc != 0x32399Cu) { return; }
    }
    ctx->pc = 0x32399Cu;
label_32399c:
    // 0x32399c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32399cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3239a0:
    // 0x3239a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3239a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3239a4:
    // 0x3239a4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3239a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3239a8:
    // 0x3239a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3239a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3239ac:
    // 0x3239ac: 0xa0600093  sb          $zero, 0x93($v1)
    ctx->pc = 0x3239acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 147), (uint8_t)GPR_U32(ctx, 0));
label_3239b0:
    // 0x3239b0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3239b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3239b4:
    // 0x3239b4: 0xa04000f0  sb          $zero, 0xF0($v0)
    ctx->pc = 0x3239b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 240), (uint8_t)GPR_U32(ctx, 0));
label_3239b8:
    // 0x3239b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3239b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3239bc:
    // 0x3239bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3239bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3239c0:
    // 0x3239c0: 0x320f809  jalr        $t9
label_3239c4:
    if (ctx->pc == 0x3239C4u) {
        ctx->pc = 0x3239C4u;
            // 0x3239c4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->pc = 0x3239C8u;
        goto label_3239c8;
    }
    ctx->pc = 0x3239C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3239C8u);
        ctx->pc = 0x3239C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3239C0u;
            // 0x3239c4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3239C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3239C8u; }
            if (ctx->pc != 0x3239C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3239C8u;
label_3239c8:
    // 0x3239c8: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_3239cc:
    if (ctx->pc == 0x3239CCu) {
        ctx->pc = 0x3239D0u;
        goto label_3239d0;
    }
    ctx->pc = 0x3239C8u;
    {
        const bool branch_taken_0x3239c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3239c8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x3239D0u;
label_3239d0:
    // 0x3239d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3239d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3239d4:
    // 0x3239d4: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x3239d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_3239d8:
    // 0x3239d8: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x3239d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3239dc:
    // 0x3239dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3239dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3239e0:
    // 0x3239e0: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x3239e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_3239e4:
    // 0x3239e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3239e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3239e8:
    // 0x3239e8: 0x2609006c  addiu       $t1, $s0, 0x6C
    ctx->pc = 0x3239e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3239ec:
    // 0x3239ec: 0xc0b90a4  jal         func_2E4290
label_3239f0:
    if (ctx->pc == 0x3239F0u) {
        ctx->pc = 0x3239F0u;
            // 0x3239f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3239F4u;
        goto label_3239f4;
    }
    ctx->pc = 0x3239ECu;
    SET_GPR_U32(ctx, 31, 0x3239F4u);
    ctx->pc = 0x3239F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3239ECu;
            // 0x3239f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3239F4u; }
        if (ctx->pc != 0x3239F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3239F4u; }
        if (ctx->pc != 0x3239F4u) { return; }
    }
    ctx->pc = 0x3239F4u;
label_3239f4:
    // 0x3239f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3239f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3239f8:
    // 0x3239f8: 0x8e050680  lw          $a1, 0x680($s0)
    ctx->pc = 0x3239f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
label_3239fc:
    // 0x3239fc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323a00:
    // 0x323a00: 0xc13d7f8  jal         func_4F5FE0
label_323a04:
    if (ctx->pc == 0x323A04u) {
        ctx->pc = 0x323A04u;
            // 0x323a04: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x323A08u;
        goto label_323a08;
    }
    ctx->pc = 0x323A00u;
    SET_GPR_U32(ctx, 31, 0x323A08u);
    ctx->pc = 0x323A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A00u;
            // 0x323a04: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5FE0u;
    if (runtime->hasFunction(0x4F5FE0u)) {
        auto targetFn = runtime->lookupFunction(0x4F5FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A08u; }
        if (ctx->pc != 0x323A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5FE0_0x4f5fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A08u; }
        if (ctx->pc != 0x323A08u) { return; }
    }
    ctx->pc = 0x323A08u;
label_323a08:
    // 0x323a08: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_323a0c:
    if (ctx->pc == 0x323A0Cu) {
        ctx->pc = 0x323A10u;
        goto label_323a10;
    }
    ctx->pc = 0x323A08u;
    {
        const bool branch_taken_0x323a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a08) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323A10u;
label_323a10:
    // 0x323a10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323a14:
    // 0x323a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x323a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323a18:
    // 0x323a18: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x323a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323a1c:
    // 0x323a1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x323a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_323a20:
    // 0x323a20: 0x2609006c  addiu       $t1, $s0, 0x6C
    ctx->pc = 0x323a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_323a24:
    // 0x323a24: 0xa08000f0  sb          $zero, 0xF0($a0)
    ctx->pc = 0x323a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 0));
label_323a28:
    // 0x323a28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323a2c:
    // 0x323a2c: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_323a30:
    // 0x323a30: 0x8c453e30  lw          $a1, 0x3E30($v0)
    ctx->pc = 0x323a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
label_323a34:
    // 0x323a34: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x323a34u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_323a38:
    // 0x323a38: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x323a38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_323a3c:
    // 0x323a3c: 0xc0b90a4  jal         func_2E4290
label_323a40:
    if (ctx->pc == 0x323A40u) {
        ctx->pc = 0x323A40u;
            // 0x323a40: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323A44u;
        goto label_323a44;
    }
    ctx->pc = 0x323A3Cu;
    SET_GPR_U32(ctx, 31, 0x323A44u);
    ctx->pc = 0x323A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A3Cu;
            // 0x323a40: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A44u; }
        if (ctx->pc != 0x323A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A44u; }
        if (ctx->pc != 0x323A44u) { return; }
    }
    ctx->pc = 0x323A44u;
label_323a44:
    // 0x323a44: 0x10000099  b           . + 4 + (0x99 << 2)
label_323a48:
    if (ctx->pc == 0x323A48u) {
        ctx->pc = 0x323A4Cu;
        goto label_323a4c;
    }
    ctx->pc = 0x323A44u;
    {
        const bool branch_taken_0x323a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a44) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323A4Cu;
label_323a4c:
    // 0x323a4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323a50:
    // 0x323a50: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x323a50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_323a54:
    // 0x323a54: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x323a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323a58:
    // 0x323a58: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x323a58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_323a5c:
    // 0x323a5c: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x323a5cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323a60:
    // 0x323a60: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x323a60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_323a64:
    // 0x323a64: 0xc0b90a4  jal         func_2E4290
label_323a68:
    if (ctx->pc == 0x323A68u) {
        ctx->pc = 0x323A68u;
            // 0x323a68: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x323A6Cu;
        goto label_323a6c;
    }
    ctx->pc = 0x323A64u;
    SET_GPR_U32(ctx, 31, 0x323A6Cu);
    ctx->pc = 0x323A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A64u;
            // 0x323a68: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A6Cu; }
        if (ctx->pc != 0x323A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A6Cu; }
        if (ctx->pc != 0x323A6Cu) { return; }
    }
    ctx->pc = 0x323A6Cu;
label_323a6c:
    // 0x323a6c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_323a70:
    if (ctx->pc == 0x323A70u) {
        ctx->pc = 0x323A74u;
        goto label_323a74;
    }
    ctx->pc = 0x323A6Cu;
    {
        const bool branch_taken_0x323a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a6c) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323A74u;
label_323a74:
    // 0x323a74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323a78:
    // 0x323a78: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x323a78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_323a7c:
    // 0x323a7c: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x323a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323a80:
    // 0x323a80: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x323a80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_323a84:
    // 0x323a84: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x323a84u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323a88:
    // 0x323a88: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x323a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_323a8c:
    // 0x323a8c: 0xc0b90a4  jal         func_2E4290
label_323a90:
    if (ctx->pc == 0x323A90u) {
        ctx->pc = 0x323A90u;
            // 0x323a90: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x323A94u;
        goto label_323a94;
    }
    ctx->pc = 0x323A8Cu;
    SET_GPR_U32(ctx, 31, 0x323A94u);
    ctx->pc = 0x323A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323A8Cu;
            // 0x323a90: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A94u; }
        if (ctx->pc != 0x323A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323A94u; }
        if (ctx->pc != 0x323A94u) { return; }
    }
    ctx->pc = 0x323A94u;
label_323a94:
    // 0x323a94: 0x10000085  b           . + 4 + (0x85 << 2)
label_323a98:
    if (ctx->pc == 0x323A98u) {
        ctx->pc = 0x323A9Cu;
        goto label_323a9c;
    }
    ctx->pc = 0x323A94u;
    {
        const bool branch_taken_0x323a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a94) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323A9Cu;
label_323a9c:
    // 0x323a9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323aa0:
    // 0x323aa0: 0x8206008c  lb          $a2, 0x8C($s0)
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_323aa4:
    // 0x323aa4: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x323aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323aa8:
    // 0x323aa8: 0x8207008e  lb          $a3, 0x8E($s0)
    ctx->pc = 0x323aa8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 142)));
label_323aac:
    // 0x323aac: 0x8208008f  lb          $t0, 0x8F($s0)
    ctx->pc = 0x323aacu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
label_323ab0:
    // 0x323ab0: 0x8e0a0068  lw          $t2, 0x68($s0)
    ctx->pc = 0x323ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_323ab4:
    // 0x323ab4: 0xc0b90a4  jal         func_2E4290
label_323ab8:
    if (ctx->pc == 0x323AB8u) {
        ctx->pc = 0x323AB8u;
            // 0x323ab8: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x323ABCu;
        goto label_323abc;
    }
    ctx->pc = 0x323AB4u;
    SET_GPR_U32(ctx, 31, 0x323ABCu);
    ctx->pc = 0x323AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323AB4u;
            // 0x323ab8: 0x2609006c  addiu       $t1, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4290u;
    if (runtime->hasFunction(0x2E4290u)) {
        auto targetFn = runtime->lookupFunction(0x2E4290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323ABCu; }
        if (ctx->pc != 0x323ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4290_0x2e4290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323ABCu; }
        if (ctx->pc != 0x323ABCu) { return; }
    }
    ctx->pc = 0x323ABCu;
label_323abc:
    // 0x323abc: 0x1000007b  b           . + 4 + (0x7B << 2)
label_323ac0:
    if (ctx->pc == 0x323AC0u) {
        ctx->pc = 0x323AC4u;
        goto label_323ac4;
    }
    ctx->pc = 0x323ABCu;
    {
        const bool branch_taken_0x323abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323abc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323AC4u;
label_323ac4:
    // 0x323ac4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323ac8:
    // 0x323ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323acc:
    // 0x323acc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x323accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_323ad0:
    // 0x323ad0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x323ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_323ad4:
    // 0x323ad4: 0xc0b90e0  jal         func_2E4380
label_323ad8:
    if (ctx->pc == 0x323AD8u) {
        ctx->pc = 0x323AD8u;
            // 0x323ad8: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x323ADCu;
        goto label_323adc;
    }
    ctx->pc = 0x323AD4u;
    SET_GPR_U32(ctx, 31, 0x323ADCu);
    ctx->pc = 0x323AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323AD4u;
            // 0x323ad8: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323ADCu; }
        if (ctx->pc != 0x323ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323ADCu; }
        if (ctx->pc != 0x323ADCu) { return; }
    }
    ctx->pc = 0x323ADCu;
label_323adc:
    // 0x323adc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_323ae0:
    if (ctx->pc == 0x323AE0u) {
        ctx->pc = 0x323AE4u;
        goto label_323ae4;
    }
    ctx->pc = 0x323ADCu;
    {
        const bool branch_taken_0x323adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323adc) {
            ctx->pc = 0x323B00u;
            goto label_323b00;
        }
    }
    ctx->pc = 0x323AE4u;
label_323ae4:
    // 0x323ae4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323ae8:
    // 0x323ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323aec:
    // 0x323aec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x323aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_323af0:
    // 0x323af0: 0x320f809  jalr        $t9
label_323af4:
    if (ctx->pc == 0x323AF4u) {
        ctx->pc = 0x323AF4u;
            // 0x323af4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x323AF8u;
        goto label_323af8;
    }
    ctx->pc = 0x323AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323AF8u);
        ctx->pc = 0x323AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323AF0u;
            // 0x323af4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323AF8u; }
            if (ctx->pc != 0x323AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x323AF8u;
label_323af8:
    // 0x323af8: 0x1000006c  b           . + 4 + (0x6C << 2)
label_323afc:
    if (ctx->pc == 0x323AFCu) {
        ctx->pc = 0x323B00u;
        goto label_323b00;
    }
    ctx->pc = 0x323AF8u;
    {
        const bool branch_taken_0x323af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323af8) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323B00u;
label_323b00:
    // 0x323b00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323b04:
    // 0x323b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323b08:
    // 0x323b08: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x323b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323b0c:
    // 0x323b0c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x323b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_323b10:
    // 0x323b10: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x323b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323b14:
    // 0x323b14: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x323b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_323b18:
    // 0x323b18: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x323b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_323b1c:
    // 0x323b1c: 0xc0ca4b0  jal         func_3292C0
label_323b20:
    if (ctx->pc == 0x323B20u) {
        ctx->pc = 0x323B20u;
            // 0x323b20: 0xac620088  sw          $v0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x323B24u;
        goto label_323b24;
    }
    ctx->pc = 0x323B1Cu;
    SET_GPR_U32(ctx, 31, 0x323B24u);
    ctx->pc = 0x323B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323B1Cu;
            // 0x323b20: 0xac620088  sw          $v0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B24u; }
        if (ctx->pc != 0x323B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B24u; }
        if (ctx->pc != 0x323B24u) { return; }
    }
    ctx->pc = 0x323B24u;
label_323b24:
    // 0x323b24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323b28:
    // 0x323b28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323b2c:
    // 0x323b2c: 0x320f809  jalr        $t9
label_323b30:
    if (ctx->pc == 0x323B30u) {
        ctx->pc = 0x323B30u;
            // 0x323b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323B34u;
        goto label_323b34;
    }
    ctx->pc = 0x323B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323B34u);
        ctx->pc = 0x323B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323B2Cu;
            // 0x323b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323B34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323B34u; }
            if (ctx->pc != 0x323B34u) { return; }
        }
        }
    }
    ctx->pc = 0x323B34u;
label_323b34:
    // 0x323b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323b38:
    // 0x323b38: 0x1000005c  b           . + 4 + (0x5C << 2)
label_323b3c:
    if (ctx->pc == 0x323B3Cu) {
        ctx->pc = 0x323B3Cu;
            // 0x323b3c: 0xae030684  sw          $v1, 0x684($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 3));
        ctx->pc = 0x323B40u;
        goto label_323b40;
    }
    ctx->pc = 0x323B38u;
    {
        const bool branch_taken_0x323b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323B38u;
            // 0x323b3c: 0xae030684  sw          $v1, 0x684($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b38) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323B40u;
label_323b40:
    // 0x323b40: 0x8e050684  lw          $a1, 0x684($s0)
    ctx->pc = 0x323b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_323b44:
    // 0x323b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323b48:
    // 0x323b48: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_323b4c:
    if (ctx->pc == 0x323B4Cu) {
        ctx->pc = 0x323B50u;
        goto label_323b50;
    }
    ctx->pc = 0x323B48u;
    {
        const bool branch_taken_0x323b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x323b48) {
            ctx->pc = 0x323B9Cu;
            goto label_323b9c;
        }
    }
    ctx->pc = 0x323B50u;
label_323b50:
    // 0x323b50: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_323b54:
    if (ctx->pc == 0x323B54u) {
        ctx->pc = 0x323B54u;
            // 0x323b54: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x323B58u;
        goto label_323b58;
    }
    ctx->pc = 0x323B50u;
    {
        const bool branch_taken_0x323b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x323b50) {
            ctx->pc = 0x323B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323B50u;
            // 0x323b54: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323B64u;
            goto label_323b64;
        }
    }
    ctx->pc = 0x323B58u;
label_323b58:
    // 0x323b58: 0x10000054  b           . + 4 + (0x54 << 2)
label_323b5c:
    if (ctx->pc == 0x323B5Cu) {
        ctx->pc = 0x323B60u;
        goto label_323b60;
    }
    ctx->pc = 0x323B58u;
    {
        const bool branch_taken_0x323b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323b58) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323B60u;
label_323b60:
    // 0x323b60: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x323b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_323b64:
    // 0x323b64: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
label_323b68:
    if (ctx->pc == 0x323B68u) {
        ctx->pc = 0x323B6Cu;
        goto label_323b6c;
    }
    ctx->pc = 0x323B64u;
    {
        const bool branch_taken_0x323b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x323b64) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323B6Cu;
label_323b6c:
    // 0x323b6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323b70:
    // 0x323b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323b74:
    // 0x323b74: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x323b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_323b78:
    // 0x323b78: 0xc0ab89c  jal         func_2AE270
label_323b7c:
    if (ctx->pc == 0x323B7Cu) {
        ctx->pc = 0x323B7Cu;
            // 0x323b7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323B80u;
        goto label_323b80;
    }
    ctx->pc = 0x323B78u;
    SET_GPR_U32(ctx, 31, 0x323B80u);
    ctx->pc = 0x323B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323B78u;
            // 0x323b7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B80u; }
        if (ctx->pc != 0x323B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323B80u; }
        if (ctx->pc != 0x323B80u) { return; }
    }
    ctx->pc = 0x323B80u;
label_323b80:
    // 0x323b80: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_323b84:
    // 0x323b84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x323b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_323b88:
    // 0x323b88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x323b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_323b8c:
    // 0x323b8c: 0xae040684  sw          $a0, 0x684($s0)
    ctx->pc = 0x323b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 4));
label_323b90:
    // 0x323b90: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x323b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_323b94:
    // 0x323b94: 0x10000045  b           . + 4 + (0x45 << 2)
label_323b98:
    if (ctx->pc == 0x323B98u) {
        ctx->pc = 0x323B98u;
            // 0x323b98: 0xa0600038  sb          $zero, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x323B9Cu;
        goto label_323b9c;
    }
    ctx->pc = 0x323B94u;
    {
        const bool branch_taken_0x323b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323B94u;
            // 0x323b98: 0xa0600038  sb          $zero, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b94) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323B9Cu;
label_323b9c:
    // 0x323b9c: 0xc0c796c  jal         func_31E5B0
label_323ba0:
    if (ctx->pc == 0x323BA0u) {
        ctx->pc = 0x323BA4u;
        goto label_323ba4;
    }
    ctx->pc = 0x323B9Cu;
    SET_GPR_U32(ctx, 31, 0x323BA4u);
    ctx->pc = 0x31E5B0u;
    if (runtime->hasFunction(0x31E5B0u)) {
        auto targetFn = runtime->lookupFunction(0x31E5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BA4u; }
        if (ctx->pc != 0x323BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E5B0_0x31e5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BA4u; }
        if (ctx->pc != 0x323BA4u) { return; }
    }
    ctx->pc = 0x323BA4u;
label_323ba4:
    // 0x323ba4: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_323ba8:
    if (ctx->pc == 0x323BA8u) {
        ctx->pc = 0x323BACu;
        goto label_323bac;
    }
    ctx->pc = 0x323BA4u;
    {
        const bool branch_taken_0x323ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323ba4) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323BACu;
label_323bac:
    // 0x323bac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323bb0:
    // 0x323bb0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323bb4:
    // 0x323bb4: 0x320f809  jalr        $t9
label_323bb8:
    if (ctx->pc == 0x323BB8u) {
        ctx->pc = 0x323BB8u;
            // 0x323bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323BBCu;
        goto label_323bbc;
    }
    ctx->pc = 0x323BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323BBCu);
        ctx->pc = 0x323BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323BB4u;
            // 0x323bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323BBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323BBCu; }
            if (ctx->pc != 0x323BBCu) { return; }
        }
        }
    }
    ctx->pc = 0x323BBCu;
label_323bbc:
    // 0x323bbc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_323bc0:
    if (ctx->pc == 0x323BC0u) {
        ctx->pc = 0x323BC4u;
        goto label_323bc4;
    }
    ctx->pc = 0x323BBCu;
    {
        const bool branch_taken_0x323bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323bbc) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323BC4u;
label_323bc4:
    // 0x323bc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x323bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_323bc8:
    // 0x323bc8: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x323bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_323bcc:
    // 0x323bcc: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x323bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_323bd0:
    // 0x323bd0: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_323bd4:
    if (ctx->pc == 0x323BD4u) {
        ctx->pc = 0x323BD8u;
        goto label_323bd8;
    }
    ctx->pc = 0x323BD0u;
    {
        const bool branch_taken_0x323bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323bd0) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323BD8u;
label_323bd8:
    // 0x323bd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323bdc:
    // 0x323bdc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x323bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_323be0:
    // 0x323be0: 0xc151cc0  jal         func_547300
label_323be4:
    if (ctx->pc == 0x323BE4u) {
        ctx->pc = 0x323BE4u;
            // 0x323be4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x323BE8u;
        goto label_323be8;
    }
    ctx->pc = 0x323BE0u;
    SET_GPR_U32(ctx, 31, 0x323BE8u);
    ctx->pc = 0x323BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323BE0u;
            // 0x323be4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547300u;
    if (runtime->hasFunction(0x547300u)) {
        auto targetFn = runtime->lookupFunction(0x547300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BE8u; }
        if (ctx->pc != 0x323BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547300_0x547300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BE8u; }
        if (ctx->pc != 0x323BE8u) { return; }
    }
    ctx->pc = 0x323BE8u;
label_323be8:
    // 0x323be8: 0xc040180  jal         func_100600
label_323bec:
    if (ctx->pc == 0x323BECu) {
        ctx->pc = 0x323BECu;
            // 0x323bec: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x323BF0u;
        goto label_323bf0;
    }
    ctx->pc = 0x323BE8u;
    SET_GPR_U32(ctx, 31, 0x323BF0u);
    ctx->pc = 0x323BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323BE8u;
            // 0x323bec: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BF0u; }
        if (ctx->pc != 0x323BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323BF0u; }
        if (ctx->pc != 0x323BF0u) { return; }
    }
    ctx->pc = 0x323BF0u;
label_323bf0:
    // 0x323bf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x323bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323bf4:
    // 0x323bf4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_323bf8:
    if (ctx->pc == 0x323BF8u) {
        ctx->pc = 0x323BFCu;
        goto label_323bfc;
    }
    ctx->pc = 0x323BF4u;
    {
        const bool branch_taken_0x323bf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x323bf4) {
            ctx->pc = 0x323C20u;
            goto label_323c20;
        }
    }
    ctx->pc = 0x323BFCu;
label_323bfc:
    // 0x323bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323c00:
    // 0x323c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323c04:
    // 0x323c04: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x323c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_323c08:
    // 0x323c08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_323c0c:
    // 0x323c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323c10:
    // 0x323c10: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x323c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_323c14:
    // 0x323c14: 0xc151190  jal         func_544640
label_323c18:
    if (ctx->pc == 0x323C18u) {
        ctx->pc = 0x323C18u;
            // 0x323c18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323C1Cu;
        goto label_323c1c;
    }
    ctx->pc = 0x323C14u;
    SET_GPR_U32(ctx, 31, 0x323C1Cu);
    ctx->pc = 0x323C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323C14u;
            // 0x323c18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C1Cu; }
        if (ctx->pc != 0x323C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C1Cu; }
        if (ctx->pc != 0x323C1Cu) { return; }
    }
    ctx->pc = 0x323C1Cu;
label_323c1c:
    // 0x323c1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x323c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323c20:
    // 0x323c20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x323c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_323c24:
    // 0x323c24: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x323c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_323c28:
    // 0x323c28: 0xc1206b0  jal         func_481AC0
label_323c2c:
    if (ctx->pc == 0x323C2Cu) {
        ctx->pc = 0x323C2Cu;
            // 0x323c2c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x323C30u;
        goto label_323c30;
    }
    ctx->pc = 0x323C28u;
    SET_GPR_U32(ctx, 31, 0x323C30u);
    ctx->pc = 0x323C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323C28u;
            // 0x323c2c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C30u; }
        if (ctx->pc != 0x323C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C30u; }
        if (ctx->pc != 0x323C30u) { return; }
    }
    ctx->pc = 0x323C30u;
label_323c30:
    // 0x323c30: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x323c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_323c34:
    // 0x323c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x323c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323c38:
    // 0x323c38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x323c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_323c3c:
    // 0x323c3c: 0x320f809  jalr        $t9
label_323c40:
    if (ctx->pc == 0x323C40u) {
        ctx->pc = 0x323C40u;
            // 0x323c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323C44u;
        goto label_323c44;
    }
    ctx->pc = 0x323C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323C44u);
        ctx->pc = 0x323C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323C3Cu;
            // 0x323c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323C44u; }
            if (ctx->pc != 0x323C44u) { return; }
        }
        }
    }
    ctx->pc = 0x323C44u;
label_323c44:
    // 0x323c44: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x323c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_323c48:
    // 0x323c48: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x323c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_323c4c:
    // 0x323c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x323c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323c50:
    // 0x323c50: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x323c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_323c54:
    // 0x323c54: 0x320f809  jalr        $t9
label_323c58:
    if (ctx->pc == 0x323C58u) {
        ctx->pc = 0x323C58u;
            // 0x323c58: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x323C5Cu;
        goto label_323c5c;
    }
    ctx->pc = 0x323C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323C5Cu);
        ctx->pc = 0x323C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323C54u;
            // 0x323c58: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323C5Cu; }
            if (ctx->pc != 0x323C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x323C5Cu;
label_323c5c:
    // 0x323c5c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323c60:
    // 0x323c60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323c64:
    // 0x323c64: 0x320f809  jalr        $t9
label_323c68:
    if (ctx->pc == 0x323C68u) {
        ctx->pc = 0x323C68u;
            // 0x323c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323C6Cu;
        goto label_323c6c;
    }
    ctx->pc = 0x323C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323C6Cu);
        ctx->pc = 0x323C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323C64u;
            // 0x323c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323C6Cu; }
            if (ctx->pc != 0x323C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x323C6Cu;
label_323c6c:
    // 0x323c6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x323c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_323c70:
    // 0x323c70: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x323c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_323c74:
    // 0x323c74: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x323c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_323c78:
    // 0x323c78: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_323c7c:
    if (ctx->pc == 0x323C7Cu) {
        ctx->pc = 0x323C80u;
        goto label_323c80;
    }
    ctx->pc = 0x323C78u;
    {
        const bool branch_taken_0x323c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323c78) {
            ctx->pc = 0x323CACu;
            goto label_323cac;
        }
    }
    ctx->pc = 0x323C80u;
label_323c80:
    // 0x323c80: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x323c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323c84:
    // 0x323c84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x323c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_323c88:
    // 0x323c88: 0x320f809  jalr        $t9
label_323c8c:
    if (ctx->pc == 0x323C8Cu) {
        ctx->pc = 0x323C8Cu;
            // 0x323c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323C90u;
        goto label_323c90;
    }
    ctx->pc = 0x323C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x323C90u);
        ctx->pc = 0x323C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323C88u;
            // 0x323c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x323C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x323C90u; }
            if (ctx->pc != 0x323C90u) { return; }
        }
        }
    }
    ctx->pc = 0x323C90u;
label_323c90:
    // 0x323c90: 0xc057b78  jal         func_15EDE0
label_323c94:
    if (ctx->pc == 0x323C94u) {
        ctx->pc = 0x323C94u;
            // 0x323c94: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x323C98u;
        goto label_323c98;
    }
    ctx->pc = 0x323C90u;
    SET_GPR_U32(ctx, 31, 0x323C98u);
    ctx->pc = 0x323C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323C90u;
            // 0x323c94: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C98u; }
        if (ctx->pc != 0x323C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323C98u; }
        if (ctx->pc != 0x323C98u) { return; }
    }
    ctx->pc = 0x323C98u;
label_323c98:
    // 0x323c98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_323c9c:
    // 0x323c9c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x323c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_323ca0:
    // 0x323ca0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x323ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_323ca4:
    // 0x323ca4: 0xc11f650  jal         func_47D940
label_323ca8:
    if (ctx->pc == 0x323CA8u) {
        ctx->pc = 0x323CA8u;
            // 0x323ca8: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->pc = 0x323CACu;
        goto label_323cac;
    }
    ctx->pc = 0x323CA4u;
    SET_GPR_U32(ctx, 31, 0x323CACu);
    ctx->pc = 0x323CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323CA4u;
            // 0x323ca8: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47D940u;
    if (runtime->hasFunction(0x47D940u)) {
        auto targetFn = runtime->lookupFunction(0x47D940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323CACu; }
        if (ctx->pc != 0x323CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047D940_0x47d940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323CACu; }
        if (ctx->pc != 0x323CACu) { return; }
    }
    ctx->pc = 0x323CACu;
label_323cac:
    // 0x323cac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x323cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_323cb0:
    // 0x323cb0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x323cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_323cb4:
    // 0x323cb4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x323cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_323cb8:
    // 0x323cb8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x323cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_323cbc:
    // 0x323cbc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x323cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_323cc0:
    // 0x323cc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x323cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_323cc4:
    // 0x323cc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x323cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_323cc8:
    // 0x323cc8: 0x3e00008  jr          $ra
label_323ccc:
    if (ctx->pc == 0x323CCCu) {
        ctx->pc = 0x323CCCu;
            // 0x323ccc: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x323CD0u;
        goto label_323cd0;
    }
    ctx->pc = 0x323CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323CC8u;
            // 0x323ccc: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323CD0u;
label_323cd0:
    // 0x323cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323cd4:
    // 0x323cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_323cd8:
    // 0x323cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_323cdc:
    // 0x323cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_323ce0:
    // 0x323ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323ce4:
    // 0x323ce4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_323ce8:
    if (ctx->pc == 0x323CE8u) {
        ctx->pc = 0x323CE8u;
            // 0x323ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323CECu;
        goto label_323cec;
    }
    ctx->pc = 0x323CE4u;
    {
        const bool branch_taken_0x323ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323CE4u;
            // 0x323ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ce4) {
            ctx->pc = 0x323D28u;
            goto label_323d28;
        }
    }
    ctx->pc = 0x323CECu;
label_323cec:
    // 0x323cec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x323cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_323cf0:
    // 0x323cf0: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_323cf4:
    // 0x323cf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_323cf8:
    if (ctx->pc == 0x323CF8u) {
        ctx->pc = 0x323CF8u;
            // 0x323cf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x323CFCu;
        goto label_323cfc;
    }
    ctx->pc = 0x323CF4u;
    {
        const bool branch_taken_0x323cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323CF4u;
            // 0x323cf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323cf4) {
            ctx->pc = 0x323D10u;
            goto label_323d10;
        }
    }
    ctx->pc = 0x323CFCu;
label_323cfc:
    // 0x323cfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x323cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_323d00:
    // 0x323d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323d04:
    // 0x323d04: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x323d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_323d08:
    // 0x323d08: 0xc057a68  jal         func_15E9A0
label_323d0c:
    if (ctx->pc == 0x323D0Cu) {
        ctx->pc = 0x323D0Cu;
            // 0x323d0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x323D10u;
        goto label_323d10;
    }
    ctx->pc = 0x323D08u;
    SET_GPR_U32(ctx, 31, 0x323D10u);
    ctx->pc = 0x323D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323D08u;
            // 0x323d0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D10u; }
        if (ctx->pc != 0x323D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D10u; }
        if (ctx->pc != 0x323D10u) { return; }
    }
    ctx->pc = 0x323D10u;
label_323d10:
    // 0x323d10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x323d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_323d14:
    // 0x323d14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x323d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_323d18:
    // 0x323d18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_323d1c:
    if (ctx->pc == 0x323D1Cu) {
        ctx->pc = 0x323D1Cu;
            // 0x323d1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323D20u;
        goto label_323d20;
    }
    ctx->pc = 0x323D18u;
    {
        const bool branch_taken_0x323d18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x323d18) {
            ctx->pc = 0x323D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323D18u;
            // 0x323d1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323D2Cu;
            goto label_323d2c;
        }
    }
    ctx->pc = 0x323D20u;
label_323d20:
    // 0x323d20: 0xc0400a8  jal         func_1002A0
label_323d24:
    if (ctx->pc == 0x323D24u) {
        ctx->pc = 0x323D24u;
            // 0x323d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x323D28u;
        goto label_323d28;
    }
    ctx->pc = 0x323D20u;
    SET_GPR_U32(ctx, 31, 0x323D28u);
    ctx->pc = 0x323D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323D20u;
            // 0x323d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D28u; }
        if (ctx->pc != 0x323D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D28u; }
        if (ctx->pc != 0x323D28u) { return; }
    }
    ctx->pc = 0x323D28u;
label_323d28:
    // 0x323d28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323d2c:
    // 0x323d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_323d30:
    // 0x323d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323d34:
    // 0x323d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_323d38:
    // 0x323d38: 0x3e00008  jr          $ra
label_323d3c:
    if (ctx->pc == 0x323D3Cu) {
        ctx->pc = 0x323D3Cu;
            // 0x323d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x323D40u;
        goto label_fallthrough_0x323d38;
    }
    ctx->pc = 0x323D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323D38u;
            // 0x323d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x323d38:
    ctx->pc = 0x323D40u;
}
