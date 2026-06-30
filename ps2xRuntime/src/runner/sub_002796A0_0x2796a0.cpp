#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002796A0
// Address: 0x2796a0 - 0x27a080
void sub_002796A0_0x2796a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002796A0_0x2796a0");
#endif

    switch (ctx->pc) {
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796d8u: goto label_2796d8;
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e0u: goto label_2796e0;
        case 0x2796e4u: goto label_2796e4;
        case 0x2796e8u: goto label_2796e8;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796f0u: goto label_2796f0;
        case 0x2796f4u: goto label_2796f4;
        case 0x2796f8u: goto label_2796f8;
        case 0x2796fcu: goto label_2796fc;
        case 0x279700u: goto label_279700;
        case 0x279704u: goto label_279704;
        case 0x279708u: goto label_279708;
        case 0x27970cu: goto label_27970c;
        case 0x279710u: goto label_279710;
        case 0x279714u: goto label_279714;
        case 0x279718u: goto label_279718;
        case 0x27971cu: goto label_27971c;
        case 0x279720u: goto label_279720;
        case 0x279724u: goto label_279724;
        case 0x279728u: goto label_279728;
        case 0x27972cu: goto label_27972c;
        case 0x279730u: goto label_279730;
        case 0x279734u: goto label_279734;
        case 0x279738u: goto label_279738;
        case 0x27973cu: goto label_27973c;
        case 0x279740u: goto label_279740;
        case 0x279744u: goto label_279744;
        case 0x279748u: goto label_279748;
        case 0x27974cu: goto label_27974c;
        case 0x279750u: goto label_279750;
        case 0x279754u: goto label_279754;
        case 0x279758u: goto label_279758;
        case 0x27975cu: goto label_27975c;
        case 0x279760u: goto label_279760;
        case 0x279764u: goto label_279764;
        case 0x279768u: goto label_279768;
        case 0x27976cu: goto label_27976c;
        case 0x279770u: goto label_279770;
        case 0x279774u: goto label_279774;
        case 0x279778u: goto label_279778;
        case 0x27977cu: goto label_27977c;
        case 0x279780u: goto label_279780;
        case 0x279784u: goto label_279784;
        case 0x279788u: goto label_279788;
        case 0x27978cu: goto label_27978c;
        case 0x279790u: goto label_279790;
        case 0x279794u: goto label_279794;
        case 0x279798u: goto label_279798;
        case 0x27979cu: goto label_27979c;
        case 0x2797a0u: goto label_2797a0;
        case 0x2797a4u: goto label_2797a4;
        case 0x2797a8u: goto label_2797a8;
        case 0x2797acu: goto label_2797ac;
        case 0x2797b0u: goto label_2797b0;
        case 0x2797b4u: goto label_2797b4;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797bcu: goto label_2797bc;
        case 0x2797c0u: goto label_2797c0;
        case 0x2797c4u: goto label_2797c4;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797d0u: goto label_2797d0;
        case 0x2797d4u: goto label_2797d4;
        case 0x2797d8u: goto label_2797d8;
        case 0x2797dcu: goto label_2797dc;
        case 0x2797e0u: goto label_2797e0;
        case 0x2797e4u: goto label_2797e4;
        case 0x2797e8u: goto label_2797e8;
        case 0x2797ecu: goto label_2797ec;
        case 0x2797f0u: goto label_2797f0;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797f8u: goto label_2797f8;
        case 0x2797fcu: goto label_2797fc;
        case 0x279800u: goto label_279800;
        case 0x279804u: goto label_279804;
        case 0x279808u: goto label_279808;
        case 0x27980cu: goto label_27980c;
        case 0x279810u: goto label_279810;
        case 0x279814u: goto label_279814;
        case 0x279818u: goto label_279818;
        case 0x27981cu: goto label_27981c;
        case 0x279820u: goto label_279820;
        case 0x279824u: goto label_279824;
        case 0x279828u: goto label_279828;
        case 0x27982cu: goto label_27982c;
        case 0x279830u: goto label_279830;
        case 0x279834u: goto label_279834;
        case 0x279838u: goto label_279838;
        case 0x27983cu: goto label_27983c;
        case 0x279840u: goto label_279840;
        case 0x279844u: goto label_279844;
        case 0x279848u: goto label_279848;
        case 0x27984cu: goto label_27984c;
        case 0x279850u: goto label_279850;
        case 0x279854u: goto label_279854;
        case 0x279858u: goto label_279858;
        case 0x27985cu: goto label_27985c;
        case 0x279860u: goto label_279860;
        case 0x279864u: goto label_279864;
        case 0x279868u: goto label_279868;
        case 0x27986cu: goto label_27986c;
        case 0x279870u: goto label_279870;
        case 0x279874u: goto label_279874;
        case 0x279878u: goto label_279878;
        case 0x27987cu: goto label_27987c;
        case 0x279880u: goto label_279880;
        case 0x279884u: goto label_279884;
        case 0x279888u: goto label_279888;
        case 0x27988cu: goto label_27988c;
        case 0x279890u: goto label_279890;
        case 0x279894u: goto label_279894;
        case 0x279898u: goto label_279898;
        case 0x27989cu: goto label_27989c;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798a4u: goto label_2798a4;
        case 0x2798a8u: goto label_2798a8;
        case 0x2798acu: goto label_2798ac;
        case 0x2798b0u: goto label_2798b0;
        case 0x2798b4u: goto label_2798b4;
        case 0x2798b8u: goto label_2798b8;
        case 0x2798bcu: goto label_2798bc;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798c4u: goto label_2798c4;
        case 0x2798c8u: goto label_2798c8;
        case 0x2798ccu: goto label_2798cc;
        case 0x2798d0u: goto label_2798d0;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798d8u: goto label_2798d8;
        case 0x2798dcu: goto label_2798dc;
        case 0x2798e0u: goto label_2798e0;
        case 0x2798e4u: goto label_2798e4;
        case 0x2798e8u: goto label_2798e8;
        case 0x2798ecu: goto label_2798ec;
        case 0x2798f0u: goto label_2798f0;
        case 0x2798f4u: goto label_2798f4;
        case 0x2798f8u: goto label_2798f8;
        case 0x2798fcu: goto label_2798fc;
        case 0x279900u: goto label_279900;
        case 0x279904u: goto label_279904;
        case 0x279908u: goto label_279908;
        case 0x27990cu: goto label_27990c;
        case 0x279910u: goto label_279910;
        case 0x279914u: goto label_279914;
        case 0x279918u: goto label_279918;
        case 0x27991cu: goto label_27991c;
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        case 0x279aa0u: goto label_279aa0;
        case 0x279aa4u: goto label_279aa4;
        case 0x279aa8u: goto label_279aa8;
        case 0x279aacu: goto label_279aac;
        case 0x279ab0u: goto label_279ab0;
        case 0x279ab4u: goto label_279ab4;
        case 0x279ab8u: goto label_279ab8;
        case 0x279abcu: goto label_279abc;
        case 0x279ac0u: goto label_279ac0;
        case 0x279ac4u: goto label_279ac4;
        case 0x279ac8u: goto label_279ac8;
        case 0x279accu: goto label_279acc;
        case 0x279ad0u: goto label_279ad0;
        case 0x279ad4u: goto label_279ad4;
        case 0x279ad8u: goto label_279ad8;
        case 0x279adcu: goto label_279adc;
        case 0x279ae0u: goto label_279ae0;
        case 0x279ae4u: goto label_279ae4;
        case 0x279ae8u: goto label_279ae8;
        case 0x279aecu: goto label_279aec;
        case 0x279af0u: goto label_279af0;
        case 0x279af4u: goto label_279af4;
        case 0x279af8u: goto label_279af8;
        case 0x279afcu: goto label_279afc;
        case 0x279b00u: goto label_279b00;
        case 0x279b04u: goto label_279b04;
        case 0x279b08u: goto label_279b08;
        case 0x279b0cu: goto label_279b0c;
        case 0x279b10u: goto label_279b10;
        case 0x279b14u: goto label_279b14;
        case 0x279b18u: goto label_279b18;
        case 0x279b1cu: goto label_279b1c;
        case 0x279b20u: goto label_279b20;
        case 0x279b24u: goto label_279b24;
        case 0x279b28u: goto label_279b28;
        case 0x279b2cu: goto label_279b2c;
        case 0x279b30u: goto label_279b30;
        case 0x279b34u: goto label_279b34;
        case 0x279b38u: goto label_279b38;
        case 0x279b3cu: goto label_279b3c;
        case 0x279b40u: goto label_279b40;
        case 0x279b44u: goto label_279b44;
        case 0x279b48u: goto label_279b48;
        case 0x279b4cu: goto label_279b4c;
        case 0x279b50u: goto label_279b50;
        case 0x279b54u: goto label_279b54;
        case 0x279b58u: goto label_279b58;
        case 0x279b5cu: goto label_279b5c;
        case 0x279b60u: goto label_279b60;
        case 0x279b64u: goto label_279b64;
        case 0x279b68u: goto label_279b68;
        case 0x279b6cu: goto label_279b6c;
        case 0x279b70u: goto label_279b70;
        case 0x279b74u: goto label_279b74;
        case 0x279b78u: goto label_279b78;
        case 0x279b7cu: goto label_279b7c;
        case 0x279b80u: goto label_279b80;
        case 0x279b84u: goto label_279b84;
        case 0x279b88u: goto label_279b88;
        case 0x279b8cu: goto label_279b8c;
        case 0x279b90u: goto label_279b90;
        case 0x279b94u: goto label_279b94;
        case 0x279b98u: goto label_279b98;
        case 0x279b9cu: goto label_279b9c;
        case 0x279ba0u: goto label_279ba0;
        case 0x279ba4u: goto label_279ba4;
        case 0x279ba8u: goto label_279ba8;
        case 0x279bacu: goto label_279bac;
        case 0x279bb0u: goto label_279bb0;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bb8u: goto label_279bb8;
        case 0x279bbcu: goto label_279bbc;
        case 0x279bc0u: goto label_279bc0;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bc8u: goto label_279bc8;
        case 0x279bccu: goto label_279bcc;
        case 0x279bd0u: goto label_279bd0;
        case 0x279bd4u: goto label_279bd4;
        case 0x279bd8u: goto label_279bd8;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be0u: goto label_279be0;
        case 0x279be4u: goto label_279be4;
        case 0x279be8u: goto label_279be8;
        case 0x279becu: goto label_279bec;
        case 0x279bf0u: goto label_279bf0;
        case 0x279bf4u: goto label_279bf4;
        case 0x279bf8u: goto label_279bf8;
        case 0x279bfcu: goto label_279bfc;
        case 0x279c00u: goto label_279c00;
        case 0x279c04u: goto label_279c04;
        case 0x279c08u: goto label_279c08;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c10u: goto label_279c10;
        case 0x279c14u: goto label_279c14;
        case 0x279c18u: goto label_279c18;
        case 0x279c1cu: goto label_279c1c;
        case 0x279c20u: goto label_279c20;
        case 0x279c24u: goto label_279c24;
        case 0x279c28u: goto label_279c28;
        case 0x279c2cu: goto label_279c2c;
        case 0x279c30u: goto label_279c30;
        case 0x279c34u: goto label_279c34;
        case 0x279c38u: goto label_279c38;
        case 0x279c3cu: goto label_279c3c;
        case 0x279c40u: goto label_279c40;
        case 0x279c44u: goto label_279c44;
        case 0x279c48u: goto label_279c48;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c50u: goto label_279c50;
        case 0x279c54u: goto label_279c54;
        case 0x279c58u: goto label_279c58;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c60u: goto label_279c60;
        case 0x279c64u: goto label_279c64;
        case 0x279c68u: goto label_279c68;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c70u: goto label_279c70;
        case 0x279c74u: goto label_279c74;
        case 0x279c78u: goto label_279c78;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c80u: goto label_279c80;
        case 0x279c84u: goto label_279c84;
        case 0x279c88u: goto label_279c88;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c90u: goto label_279c90;
        case 0x279c94u: goto label_279c94;
        case 0x279c98u: goto label_279c98;
        case 0x279c9cu: goto label_279c9c;
        case 0x279ca0u: goto label_279ca0;
        case 0x279ca4u: goto label_279ca4;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cacu: goto label_279cac;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cb4u: goto label_279cb4;
        case 0x279cb8u: goto label_279cb8;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cc0u: goto label_279cc0;
        case 0x279cc4u: goto label_279cc4;
        case 0x279cc8u: goto label_279cc8;
        case 0x279cccu: goto label_279ccc;
        case 0x279cd0u: goto label_279cd0;
        case 0x279cd4u: goto label_279cd4;
        case 0x279cd8u: goto label_279cd8;
        case 0x279cdcu: goto label_279cdc;
        case 0x279ce0u: goto label_279ce0;
        case 0x279ce4u: goto label_279ce4;
        case 0x279ce8u: goto label_279ce8;
        case 0x279cecu: goto label_279cec;
        case 0x279cf0u: goto label_279cf0;
        case 0x279cf4u: goto label_279cf4;
        case 0x279cf8u: goto label_279cf8;
        case 0x279cfcu: goto label_279cfc;
        case 0x279d00u: goto label_279d00;
        case 0x279d04u: goto label_279d04;
        case 0x279d08u: goto label_279d08;
        case 0x279d0cu: goto label_279d0c;
        case 0x279d10u: goto label_279d10;
        case 0x279d14u: goto label_279d14;
        case 0x279d18u: goto label_279d18;
        case 0x279d1cu: goto label_279d1c;
        case 0x279d20u: goto label_279d20;
        case 0x279d24u: goto label_279d24;
        case 0x279d28u: goto label_279d28;
        case 0x279d2cu: goto label_279d2c;
        case 0x279d30u: goto label_279d30;
        case 0x279d34u: goto label_279d34;
        case 0x279d38u: goto label_279d38;
        case 0x279d3cu: goto label_279d3c;
        case 0x279d40u: goto label_279d40;
        case 0x279d44u: goto label_279d44;
        case 0x279d48u: goto label_279d48;
        case 0x279d4cu: goto label_279d4c;
        case 0x279d50u: goto label_279d50;
        case 0x279d54u: goto label_279d54;
        case 0x279d58u: goto label_279d58;
        case 0x279d5cu: goto label_279d5c;
        case 0x279d60u: goto label_279d60;
        case 0x279d64u: goto label_279d64;
        case 0x279d68u: goto label_279d68;
        case 0x279d6cu: goto label_279d6c;
        case 0x279d70u: goto label_279d70;
        case 0x279d74u: goto label_279d74;
        case 0x279d78u: goto label_279d78;
        case 0x279d7cu: goto label_279d7c;
        case 0x279d80u: goto label_279d80;
        case 0x279d84u: goto label_279d84;
        case 0x279d88u: goto label_279d88;
        case 0x279d8cu: goto label_279d8c;
        case 0x279d90u: goto label_279d90;
        case 0x279d94u: goto label_279d94;
        case 0x279d98u: goto label_279d98;
        case 0x279d9cu: goto label_279d9c;
        case 0x279da0u: goto label_279da0;
        case 0x279da4u: goto label_279da4;
        case 0x279da8u: goto label_279da8;
        case 0x279dacu: goto label_279dac;
        case 0x279db0u: goto label_279db0;
        case 0x279db4u: goto label_279db4;
        case 0x279db8u: goto label_279db8;
        case 0x279dbcu: goto label_279dbc;
        case 0x279dc0u: goto label_279dc0;
        case 0x279dc4u: goto label_279dc4;
        case 0x279dc8u: goto label_279dc8;
        case 0x279dccu: goto label_279dcc;
        case 0x279dd0u: goto label_279dd0;
        case 0x279dd4u: goto label_279dd4;
        case 0x279dd8u: goto label_279dd8;
        case 0x279ddcu: goto label_279ddc;
        case 0x279de0u: goto label_279de0;
        case 0x279de4u: goto label_279de4;
        case 0x279de8u: goto label_279de8;
        case 0x279decu: goto label_279dec;
        case 0x279df0u: goto label_279df0;
        case 0x279df4u: goto label_279df4;
        case 0x279df8u: goto label_279df8;
        case 0x279dfcu: goto label_279dfc;
        case 0x279e00u: goto label_279e00;
        case 0x279e04u: goto label_279e04;
        case 0x279e08u: goto label_279e08;
        case 0x279e0cu: goto label_279e0c;
        case 0x279e10u: goto label_279e10;
        case 0x279e14u: goto label_279e14;
        case 0x279e18u: goto label_279e18;
        case 0x279e1cu: goto label_279e1c;
        case 0x279e20u: goto label_279e20;
        case 0x279e24u: goto label_279e24;
        case 0x279e28u: goto label_279e28;
        case 0x279e2cu: goto label_279e2c;
        case 0x279e30u: goto label_279e30;
        case 0x279e34u: goto label_279e34;
        case 0x279e38u: goto label_279e38;
        case 0x279e3cu: goto label_279e3c;
        case 0x279e40u: goto label_279e40;
        case 0x279e44u: goto label_279e44;
        case 0x279e48u: goto label_279e48;
        case 0x279e4cu: goto label_279e4c;
        case 0x279e50u: goto label_279e50;
        case 0x279e54u: goto label_279e54;
        case 0x279e58u: goto label_279e58;
        case 0x279e5cu: goto label_279e5c;
        case 0x279e60u: goto label_279e60;
        case 0x279e64u: goto label_279e64;
        case 0x279e68u: goto label_279e68;
        case 0x279e6cu: goto label_279e6c;
        case 0x279e70u: goto label_279e70;
        case 0x279e74u: goto label_279e74;
        case 0x279e78u: goto label_279e78;
        case 0x279e7cu: goto label_279e7c;
        case 0x279e80u: goto label_279e80;
        case 0x279e84u: goto label_279e84;
        case 0x279e88u: goto label_279e88;
        case 0x279e8cu: goto label_279e8c;
        case 0x279e90u: goto label_279e90;
        case 0x279e94u: goto label_279e94;
        case 0x279e98u: goto label_279e98;
        case 0x279e9cu: goto label_279e9c;
        case 0x279ea0u: goto label_279ea0;
        case 0x279ea4u: goto label_279ea4;
        case 0x279ea8u: goto label_279ea8;
        case 0x279eacu: goto label_279eac;
        case 0x279eb0u: goto label_279eb0;
        case 0x279eb4u: goto label_279eb4;
        case 0x279eb8u: goto label_279eb8;
        case 0x279ebcu: goto label_279ebc;
        case 0x279ec0u: goto label_279ec0;
        case 0x279ec4u: goto label_279ec4;
        case 0x279ec8u: goto label_279ec8;
        case 0x279eccu: goto label_279ecc;
        case 0x279ed0u: goto label_279ed0;
        case 0x279ed4u: goto label_279ed4;
        case 0x279ed8u: goto label_279ed8;
        case 0x279edcu: goto label_279edc;
        case 0x279ee0u: goto label_279ee0;
        case 0x279ee4u: goto label_279ee4;
        case 0x279ee8u: goto label_279ee8;
        case 0x279eecu: goto label_279eec;
        case 0x279ef0u: goto label_279ef0;
        case 0x279ef4u: goto label_279ef4;
        case 0x279ef8u: goto label_279ef8;
        case 0x279efcu: goto label_279efc;
        case 0x279f00u: goto label_279f00;
        case 0x279f04u: goto label_279f04;
        case 0x279f08u: goto label_279f08;
        case 0x279f0cu: goto label_279f0c;
        case 0x279f10u: goto label_279f10;
        case 0x279f14u: goto label_279f14;
        case 0x279f18u: goto label_279f18;
        case 0x279f1cu: goto label_279f1c;
        case 0x279f20u: goto label_279f20;
        case 0x279f24u: goto label_279f24;
        case 0x279f28u: goto label_279f28;
        case 0x279f2cu: goto label_279f2c;
        case 0x279f30u: goto label_279f30;
        case 0x279f34u: goto label_279f34;
        case 0x279f38u: goto label_279f38;
        case 0x279f3cu: goto label_279f3c;
        case 0x279f40u: goto label_279f40;
        case 0x279f44u: goto label_279f44;
        case 0x279f48u: goto label_279f48;
        case 0x279f4cu: goto label_279f4c;
        case 0x279f50u: goto label_279f50;
        case 0x279f54u: goto label_279f54;
        case 0x279f58u: goto label_279f58;
        case 0x279f5cu: goto label_279f5c;
        case 0x279f60u: goto label_279f60;
        case 0x279f64u: goto label_279f64;
        case 0x279f68u: goto label_279f68;
        case 0x279f6cu: goto label_279f6c;
        case 0x279f70u: goto label_279f70;
        case 0x279f74u: goto label_279f74;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279f80u: goto label_279f80;
        case 0x279f84u: goto label_279f84;
        case 0x279f88u: goto label_279f88;
        case 0x279f8cu: goto label_279f8c;
        case 0x279f90u: goto label_279f90;
        case 0x279f94u: goto label_279f94;
        case 0x279f98u: goto label_279f98;
        case 0x279f9cu: goto label_279f9c;
        case 0x279fa0u: goto label_279fa0;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fa8u: goto label_279fa8;
        case 0x279facu: goto label_279fac;
        case 0x279fb0u: goto label_279fb0;
        case 0x279fb4u: goto label_279fb4;
        case 0x279fb8u: goto label_279fb8;
        case 0x279fbcu: goto label_279fbc;
        case 0x279fc0u: goto label_279fc0;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fc8u: goto label_279fc8;
        case 0x279fccu: goto label_279fcc;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fd4u: goto label_279fd4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fdcu: goto label_279fdc;
        case 0x279fe0u: goto label_279fe0;
        case 0x279fe4u: goto label_279fe4;
        case 0x279fe8u: goto label_279fe8;
        case 0x279fecu: goto label_279fec;
        case 0x279ff0u: goto label_279ff0;
        case 0x279ff4u: goto label_279ff4;
        case 0x279ff8u: goto label_279ff8;
        case 0x279ffcu: goto label_279ffc;
        case 0x27a000u: goto label_27a000;
        case 0x27a004u: goto label_27a004;
        case 0x27a008u: goto label_27a008;
        case 0x27a00cu: goto label_27a00c;
        case 0x27a010u: goto label_27a010;
        case 0x27a014u: goto label_27a014;
        case 0x27a018u: goto label_27a018;
        case 0x27a01cu: goto label_27a01c;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a028u: goto label_27a028;
        case 0x27a02cu: goto label_27a02c;
        case 0x27a030u: goto label_27a030;
        case 0x27a034u: goto label_27a034;
        case 0x27a038u: goto label_27a038;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a040u: goto label_27a040;
        case 0x27a044u: goto label_27a044;
        case 0x27a048u: goto label_27a048;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a050u: goto label_27a050;
        case 0x27a054u: goto label_27a054;
        case 0x27a058u: goto label_27a058;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a060u: goto label_27a060;
        case 0x27a064u: goto label_27a064;
        case 0x27a068u: goto label_27a068;
        case 0x27a06cu: goto label_27a06c;
        case 0x27a070u: goto label_27a070;
        case 0x27a074u: goto label_27a074;
        case 0x27a078u: goto label_27a078;
        case 0x27a07cu: goto label_27a07c;
        default: break;
    }

    ctx->pc = 0x2796a0u;

label_2796a0:
    // 0x2796a0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2796a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_2796a4:
    // 0x2796a4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2796a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2796a8:
    // 0x2796a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2796a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2796ac:
    // 0x2796ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2796acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2796b0:
    // 0x2796b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2796b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2796b4:
    // 0x2796b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2796b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2796b8:
    // 0x2796b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2796b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2796bc:
    // 0x2796bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2796bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2796c0:
    // 0x2796c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2796c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2796c4:
    // 0x2796c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2796c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2796c8:
    // 0x2796c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2796c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2796cc:
    // 0x2796cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2796ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2796d0:
    // 0x2796d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2796d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2796d4:
    // 0x2796d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2796d8:
    // 0x2796d8: 0x8023e9e8  lb          $v1, -0x1618($at)
    ctx->pc = 0x2796d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961640)));
label_2796dc:
    // 0x2796dc: 0x14600254  bnez        $v1, . + 4 + (0x254 << 2)
label_2796e0:
    if (ctx->pc == 0x2796E0u) {
        ctx->pc = 0x2796E0u;
            // 0x2796e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2796E4u;
        goto label_2796e4;
    }
    ctx->pc = 0x2796DCu;
    {
        const bool branch_taken_0x2796dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2796E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2796DCu;
            // 0x2796e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796dc) {
            ctx->pc = 0x27A030u;
            goto label_27a030;
        }
    }
    ctx->pc = 0x2796E4u;
label_2796e4:
    // 0x2796e4: 0xc086406  jal         func_219018
label_2796e8:
    if (ctx->pc == 0x2796E8u) {
        ctx->pc = 0x2796E8u;
            // 0x2796e8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2796ECu;
        goto label_2796ec;
    }
    ctx->pc = 0x2796E4u;
    SET_GPR_U32(ctx, 31, 0x2796ECu);
    ctx->pc = 0x2796E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2796E4u;
            // 0x2796e8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796ECu; }
        if (ctx->pc != 0x2796ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796ECu; }
        if (ctx->pc != 0x2796ECu) { return; }
    }
    ctx->pc = 0x2796ECu;
label_2796ec:
    // 0x2796ec: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2796ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2796f0:
    // 0x2796f0: 0xa022e9e8  sb          $v0, -0x1618($at)
    ctx->pc = 0x2796f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961640), (uint8_t)GPR_U32(ctx, 2));
label_2796f4:
    // 0x2796f4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2796f8:
    // 0x2796f8: 0x8023e9e8  lb          $v1, -0x1618($at)
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961640)));
label_2796fc:
    // 0x2796fc: 0x1460024c  bnez        $v1, . + 4 + (0x24C << 2)
label_279700:
    if (ctx->pc == 0x279700u) {
        ctx->pc = 0x279704u;
        goto label_279704;
    }
    ctx->pc = 0x2796FCu;
    {
        const bool branch_taken_0x2796fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2796fc) {
            ctx->pc = 0x27A030u;
            goto label_27a030;
        }
    }
    ctx->pc = 0x279704u;
label_279704:
    // 0x279704: 0x10000252  b           . + 4 + (0x252 << 2)
label_279708:
    if (ctx->pc == 0x279708u) {
        ctx->pc = 0x27970Cu;
        goto label_27970c;
    }
    ctx->pc = 0x279704u;
    {
        const bool branch_taken_0x279704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279704) {
            ctx->pc = 0x27A050u;
            goto label_27a050;
        }
    }
    ctx->pc = 0x27970Cu;
label_27970c:
    // 0x27970c: 0x0  nop
    ctx->pc = 0x27970cu;
    // NOP
label_279710:
    // 0x279710: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x279710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_279714:
    // 0x279714: 0x2c61006c  sltiu       $at, $v1, 0x6C
    ctx->pc = 0x279714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
label_279718:
    // 0x279718: 0x10200227  beqz        $at, . + 4 + (0x227 << 2)
label_27971c:
    if (ctx->pc == 0x27971Cu) {
        ctx->pc = 0x27971Cu;
            // 0x27971c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x279720u;
        goto label_279720;
    }
    ctx->pc = 0x279718u;
    {
        const bool branch_taken_0x279718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279718u;
            // 0x27971c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279718) {
            ctx->pc = 0x279FB8u;
            goto label_279fb8;
        }
    }
    ctx->pc = 0x279720u;
label_279720:
    // 0x279720: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_279724:
    // 0x279724: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x279724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_279728:
    // 0x279728: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x279728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_27972c:
    // 0x27972c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279730:
    // 0x279730: 0x800008  jr          $a0
label_279734:
    if (ctx->pc == 0x279734u) {
        ctx->pc = 0x279738u;
        goto label_279738;
    }
    ctx->pc = 0x279730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279738u: goto label_279738;
            case 0x279768u: goto label_279768;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797D0u: goto label_2797d0;
            case 0x279808u: goto label_279808;
            case 0x279838u: goto label_279838;
            case 0x279870u: goto label_279870;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798E8u: goto label_2798e8;
            case 0x279928u: goto label_279928;
            case 0x279970u: goto label_279970;
            case 0x2799C8u: goto label_2799c8;
            case 0x279A18u: goto label_279a18;
            case 0x279A98u: goto label_279a98;
            case 0x279AD0u: goto label_279ad0;
            case 0x279B38u: goto label_279b38;
            case 0x279B48u: goto label_279b48;
            case 0x279B68u: goto label_279b68;
            case 0x279B90u: goto label_279b90;
            case 0x279C40u: goto label_279c40;
            case 0x279CC8u: goto label_279cc8;
            case 0x279D58u: goto label_279d58;
            case 0x279DF8u: goto label_279df8;
            case 0x279E00u: goto label_279e00;
            case 0x279E18u: goto label_279e18;
            case 0x279E38u: goto label_279e38;
            case 0x279E68u: goto label_279e68;
            case 0x279EC0u: goto label_279ec0;
            case 0x279F50u: goto label_279f50;
            case 0x279F78u: goto label_279f78;
            case 0x279FB8u: goto label_279fb8;
            case 0x27A028u: goto label_27a028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279738u;
label_279738:
    // 0x279738: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27973c:
    // 0x27973c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279740:
    // 0x279740: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x279740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279744:
    // 0x279744: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279744u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279748:
    // 0x279748: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x279748u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27974c:
    // 0x27974c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x27974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279750:
    // 0x279750: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x279750u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
label_279754:
    // 0x279754: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279758:
    // 0x279758: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x279758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27975c:
    // 0x27975c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27975cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_279760:
    // 0x279760: 0x10000089  b           . + 4 + (0x89 << 2)
label_279764:
    if (ctx->pc == 0x279764u) {
        ctx->pc = 0x279764u;
            // 0x279764: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x279768u;
        goto label_279768;
    }
    ctx->pc = 0x279760u;
    {
        const bool branch_taken_0x279760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279760u;
            // 0x279764: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279760) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x279768u;
label_279768:
    // 0x279768: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x279768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27976c:
    // 0x27976c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x27976cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279770:
    // 0x279770: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x279770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_279774:
    // 0x279774: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279778:
    // 0x279778: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279778u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27977c:
    // 0x27977c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27977cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279780:
    // 0x279780: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x279780u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_279784:
    // 0x279784: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279788:
    // 0x279788: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x279788u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_27978c:
    // 0x27978c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_279790:
    // 0x279790: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_279794:
    // 0x279794: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x279794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_279798:
    // 0x279798: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27979c:
    if (ctx->pc == 0x27979Cu) {
        ctx->pc = 0x27979Cu;
            // 0x27979c: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2797A0u;
        goto label_2797a0;
    }
    ctx->pc = 0x279798u;
    {
        const bool branch_taken_0x279798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279798u;
            // 0x27979c: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279798) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x2797A0u;
label_2797a0:
    // 0x2797a0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2797a4:
    // 0x2797a4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2797a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2797a8:
    // 0x2797a8: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2797ac:
    // 0x2797ac: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2797acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2797b0:
    // 0x2797b0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2797b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2797b4:
    // 0x2797b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2797b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2797b8:
    // 0x2797b8: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
label_2797bc:
    // 0x2797bc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2797bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2797c0:
    // 0x2797c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2797c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2797c4:
    // 0x2797c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2797c8:
    // 0x2797c8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2797cc:
    if (ctx->pc == 0x2797CCu) {
        ctx->pc = 0x2797CCu;
            // 0x2797cc: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2797D0u;
        goto label_2797d0;
    }
    ctx->pc = 0x2797C8u;
    {
        const bool branch_taken_0x2797c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2797C8u;
            // 0x2797cc: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797c8) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x2797D0u;
label_2797d0:
    // 0x2797d0: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2797d4:
    // 0x2797d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2797d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2797d8:
    // 0x2797d8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2797d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2797dc:
    // 0x2797dc: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x2797dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2797e0:
    // 0x2797e0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2797e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2797e4:
    // 0x2797e4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2797e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2797e8:
    // 0x2797e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x2797e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2797ec:
    // 0x2797ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2797ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2797f0:
    // 0x2797f0: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x2797f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_2797f4:
    // 0x2797f4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x2797f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2797f8:
    // 0x2797f8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2797f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2797fc:
    // 0x2797fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2797fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_279800:
    // 0x279800: 0x10000061  b           . + 4 + (0x61 << 2)
label_279804:
    if (ctx->pc == 0x279804u) {
        ctx->pc = 0x279804u;
            // 0x279804: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x279808u;
        goto label_279808;
    }
    ctx->pc = 0x279800u;
    {
        const bool branch_taken_0x279800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279800u;
            // 0x279804: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279800) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x279808u;
label_279808:
    // 0x279808: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x279808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27980c:
    // 0x27980c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x27980cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279810:
    // 0x279810: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x279810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279814:
    // 0x279814: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279814u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279818:
    // 0x279818: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x279818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27981c:
    // 0x27981c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x27981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279820:
    // 0x279820: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x279820u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
label_279824:
    // 0x279824: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279828:
    // 0x279828: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x279828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27982c:
    // 0x27982c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27982cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_279830:
    // 0x279830: 0x10000055  b           . + 4 + (0x55 << 2)
label_279834:
    if (ctx->pc == 0x279834u) {
        ctx->pc = 0x279834u;
            // 0x279834: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x279838u;
        goto label_279838;
    }
    ctx->pc = 0x279830u;
    {
        const bool branch_taken_0x279830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279830u;
            // 0x279834: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279830) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x279838u;
label_279838:
    // 0x279838: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x279838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27983c:
    // 0x27983c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x27983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279840:
    // 0x279840: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x279840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_279844:
    // 0x279844: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x279844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279848:
    // 0x279848: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279848u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27984c:
    // 0x27984c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27984cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279850:
    // 0x279850: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x279850u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_279854:
    // 0x279854: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279858:
    // 0x279858: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_27985c:
    // 0x27985c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x27985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_279860:
    // 0x279860: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x279860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_279864:
    // 0x279864: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x279864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_279868:
    // 0x279868: 0x10000047  b           . + 4 + (0x47 << 2)
label_27986c:
    if (ctx->pc == 0x27986Cu) {
        ctx->pc = 0x27986Cu;
            // 0x27986c: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x279870u;
        goto label_279870;
    }
    ctx->pc = 0x279868u;
    {
        const bool branch_taken_0x279868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279868u;
            // 0x27986c: 0x24c70001  addiu       $a3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279868) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x279870u;
label_279870:
    // 0x279870: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279870u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279874:
    // 0x279874: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x279874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279878:
    // 0x279878: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27987c:
    // 0x27987c: 0x92490002  lbu         $t1, 0x2($s2)
    ctx->pc = 0x27987cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279880:
    // 0x279880: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x279880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279884:
    // 0x279884: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279888:
    // 0x279888: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x279888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27988c:
    // 0x27988c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279890:
    // 0x279890: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x279890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_279894:
    // 0x279894: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x279894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_279898:
    // 0x279898: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x279898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_27989c:
    // 0x27989c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x27989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_2798a0:
    // 0x2798a0: 0x10000039  b           . + 4 + (0x39 << 2)
label_2798a4:
    if (ctx->pc == 0x2798A4u) {
        ctx->pc = 0x2798A4u;
            // 0x2798a4: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2798A8u;
        goto label_2798a8;
    }
    ctx->pc = 0x2798A0u;
    {
        const bool branch_taken_0x2798a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2798A0u;
            // 0x2798a4: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798a0) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x2798A8u;
label_2798a8:
    // 0x2798a8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2798a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2798ac:
    // 0x2798ac: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x2798acu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2798b0:
    // 0x2798b0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2798b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2798b4:
    // 0x2798b4: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x2798b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2798b8:
    // 0x2798b8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2798b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2798bc:
    // 0x2798bc: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2798bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2798c0:
    // 0x2798c0: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x2798c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2798c4:
    // 0x2798c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2798c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2798c8:
    // 0x2798c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2798c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2798cc:
    // 0x2798cc: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2798ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2798d0:
    // 0x2798d0: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2798d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2798d4:
    // 0x2798d4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2798d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_2798d8:
    // 0x2798d8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2798d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2798dc:
    // 0x2798dc: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2798dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2798e0:
    // 0x2798e0: 0x10000029  b           . + 4 + (0x29 << 2)
label_2798e4:
    if (ctx->pc == 0x2798E4u) {
        ctx->pc = 0x2798E4u;
            // 0x2798e4: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2798E8u;
        goto label_2798e8;
    }
    ctx->pc = 0x2798E0u;
    {
        const bool branch_taken_0x2798e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2798E0u;
            // 0x2798e4: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798e0) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x2798E8u;
label_2798e8:
    // 0x2798e8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2798e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2798ec:
    // 0x2798ec: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2798ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2798f0:
    // 0x2798f0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2798f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2798f4:
    // 0x2798f4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2798f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2798f8:
    // 0x2798f8: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x2798f8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2798fc:
    // 0x2798fc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2798fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279900:
    // 0x279900: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279904:
    // 0x279904: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x279904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_279908:
    // 0x279908: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x279908u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_27990c:
    // 0x27990c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279910:
    // 0x279910: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x279910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_279914:
    // 0x279914: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x279914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_279918:
    // 0x279918: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x279918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_27991c:
    // 0x27991c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x27991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_279920:
    // 0x279920: 0x10000019  b           . + 4 + (0x19 << 2)
label_279924:
    if (ctx->pc == 0x279924u) {
        ctx->pc = 0x279924u;
            // 0x279924: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x279928u;
        goto label_279928;
    }
    ctx->pc = 0x279920u;
    {
        const bool branch_taken_0x279920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279920u;
            // 0x279924: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279920) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x279928u;
label_279928:
    // 0x279928: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279928u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27992c:
    // 0x27992c: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279930:
    // 0x279930: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x279930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_279934:
    // 0x279934: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x279934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279938:
    // 0x279938: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x279938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27993c:
    // 0x27993c: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x27993cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279940:
    // 0x279940: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279944:
    // 0x279944: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x279944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_279948:
    // 0x279948: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x279948u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_27994c:
    // 0x27994c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279950:
    // 0x279950: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x279950u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_279954:
    // 0x279954: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x279954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_279958:
    // 0x279958: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_27995c:
    // 0x27995c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x27995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_279960:
    // 0x279960: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x279960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_279964:
    // 0x279964: 0x10000008  b           . + 4 + (0x8 << 2)
label_279968:
    if (ctx->pc == 0x279968u) {
        ctx->pc = 0x279968u;
            // 0x279968: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x27996Cu;
        goto label_27996c;
    }
    ctx->pc = 0x279964u;
    {
        const bool branch_taken_0x279964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279964u;
            // 0x279968: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279964) {
            ctx->pc = 0x279988u;
            goto label_279988;
        }
    }
    ctx->pc = 0x27996Cu;
label_27996c:
    // 0x27996c: 0x0  nop
    ctx->pc = 0x27996cu;
    // NOP
label_279970:
    // 0x279970: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x279970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_279974:
    // 0x279974: 0x8c65ffc0  lw          $a1, -0x40($v1)
    ctx->pc = 0x279974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
label_279978:
    // 0x279978: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279978u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27997c:
    // 0x27997c: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x27997cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279980:
    // 0x279980: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x279980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279984:
    // 0x279984: 0x0  nop
    ctx->pc = 0x279984u;
    // NOP
label_279988:
    // 0x279988: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x279988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_27998c:
    // 0x27998c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_279990:
    // 0x279990: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
label_279994:
    if (ctx->pc == 0x279994u) {
        ctx->pc = 0x279994u;
            // 0x279994: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x279998u;
        goto label_279998;
    }
    ctx->pc = 0x279990u;
    {
        const bool branch_taken_0x279990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279990u;
            // 0x279994: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279990) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279998u;
label_279998:
    // 0x279998: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x279998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_27999c:
    // 0x27999c: 0x9244ffff  lbu         $a0, -0x1($s2)
    ctx->pc = 0x27999cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_2799a0:
    // 0x2799a0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2799a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2799a4:
    // 0x2799a4: 0x1420ff5a  bnez        $at, . + 4 + (-0xA6 << 2)
label_2799a8:
    if (ctx->pc == 0x2799A8u) {
        ctx->pc = 0x2799A8u;
            // 0x2799a8: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x2799ACu;
        goto label_2799ac;
    }
    ctx->pc = 0x2799A4u;
    {
        const bool branch_taken_0x2799a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799A4u;
            // 0x2799a8: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799a4) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x2799ACu;
label_2799ac:
    // 0x2799ac: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x2799acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2799b0:
    // 0x2799b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2799b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2799b4:
    // 0x2799b4: 0xc09e5a8  jal         func_2796A0
label_2799b8:
    if (ctx->pc == 0x2799B8u) {
        ctx->pc = 0x2799B8u;
            // 0x2799b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2799BCu;
        goto label_2799bc;
    }
    ctx->pc = 0x2799B4u;
    SET_GPR_U32(ctx, 31, 0x2799BCu);
    ctx->pc = 0x2799B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799B4u;
            // 0x2799b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    goto label_2796a0;
    ctx->pc = 0x2799BCu;
label_2799bc:
    // 0x2799bc: 0x1000ff54  b           . + 4 + (-0xAC << 2)
label_2799c0:
    if (ctx->pc == 0x2799C0u) {
        ctx->pc = 0x2799C4u;
        goto label_2799c4;
    }
    ctx->pc = 0x2799BCu;
    {
        const bool branch_taken_0x2799bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799bc) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x2799C4u;
label_2799c4:
    // 0x2799c4: 0x0  nop
    ctx->pc = 0x2799c4u;
    // NOP
label_2799c8:
    // 0x2799c8: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_2799cc:
    // 0x2799cc: 0x8c66ff80  lw          $a2, -0x80($v1)
    ctx->pc = 0x2799ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967168)));
label_2799d0:
    // 0x2799d0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2799d4:
    // 0x2799d4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2799d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2799d8:
    // 0x2799d8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2799d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2799dc:
    // 0x2799dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2799dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2799e0:
    // 0x2799e0: 0x1460ff4b  bnez        $v1, . + 4 + (-0xB5 << 2)
label_2799e4:
    if (ctx->pc == 0x2799E4u) {
        ctx->pc = 0x2799E4u;
            // 0x2799e4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x2799E8u;
        goto label_2799e8;
    }
    ctx->pc = 0x2799E0u;
    {
        const bool branch_taken_0x2799e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799E0u;
            // 0x2799e4: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799e0) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x2799E8u;
label_2799e8:
    // 0x2799e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2799ec:
    // 0x2799ec: 0x9244ffff  lbu         $a0, -0x1($s2)
    ctx->pc = 0x2799ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_2799f0:
    // 0x2799f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2799f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2799f4:
    // 0x2799f4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x2799f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2799f8:
    // 0x2799f8: 0x1420ff45  bnez        $at, . + 4 + (-0xBB << 2)
label_2799fc:
    if (ctx->pc == 0x2799FCu) {
        ctx->pc = 0x2799FCu;
            // 0x2799fc: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x279A00u;
        goto label_279a00;
    }
    ctx->pc = 0x2799F8u;
    {
        const bool branch_taken_0x2799f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2799FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799F8u;
            // 0x2799fc: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799f8) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279A00u;
label_279a00:
    // 0x279a00: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x279a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_279a04:
    // 0x279a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x279a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_279a08:
    // 0x279a08: 0xc09e5a8  jal         func_2796A0
label_279a0c:
    if (ctx->pc == 0x279A0Cu) {
        ctx->pc = 0x279A0Cu;
            // 0x279a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279A10u;
        goto label_279a10;
    }
    ctx->pc = 0x279A08u;
    SET_GPR_U32(ctx, 31, 0x279A10u);
    ctx->pc = 0x279A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279A08u;
            // 0x279a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    goto label_2796a0;
    ctx->pc = 0x279A10u;
label_279a10:
    // 0x279a10: 0x1000ff3f  b           . + 4 + (-0xC1 << 2)
label_279a14:
    if (ctx->pc == 0x279A14u) {
        ctx->pc = 0x279A18u;
        goto label_279a18;
    }
    ctx->pc = 0x279A10u;
    {
        const bool branch_taken_0x279a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a10) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279A18u;
label_279a18:
    // 0x279a18: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x279a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_279a1c:
    // 0x279a1c: 0x8c63ff74  lw          $v1, -0x8C($v1)
    ctx->pc = 0x279a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967156)));
label_279a20:
    // 0x279a20: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279a24:
    // 0x279a24: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x279a24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279a28:
    // 0x279a28: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x279a28u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279a2c:
    // 0x279a2c: 0x92480001  lbu         $t0, 0x1($s2)
    ctx->pc = 0x279a2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279a30:
    // 0x279a30: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x279a30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279a34:
    // 0x279a34: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_279a38:
    // 0x279a38: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x279a38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_279a3c:
    // 0x279a3c: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x279a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_279a40:
    // 0x279a40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x279a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279a44:
    // 0x279a44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_279a48:
    if (ctx->pc == 0x279A48u) {
        ctx->pc = 0x279A48u;
            // 0x279a48: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->pc = 0x279A4Cu;
        goto label_279a4c;
    }
    ctx->pc = 0x279A44u;
    {
        const bool branch_taken_0x279a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A44u;
            // 0x279a48: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a44) {
            ctx->pc = 0x279A58u;
            goto label_279a58;
        }
    }
    ctx->pc = 0x279A4Cu;
label_279a4c:
    // 0x279a4c: 0x1000ff30  b           . + 4 + (-0xD0 << 2)
label_279a50:
    if (ctx->pc == 0x279A50u) {
        ctx->pc = 0x279A50u;
            // 0x279a50: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x279A54u;
        goto label_279a54;
    }
    ctx->pc = 0x279A4Cu;
    {
        const bool branch_taken_0x279a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A4Cu;
            // 0x279a50: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a4c) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279A54u;
label_279a54:
    // 0x279a54: 0x0  nop
    ctx->pc = 0x279a54u;
    // NOP
label_279a58:
    // 0x279a58: 0x9247fffe  lbu         $a3, -0x2($s2)
    ctx->pc = 0x279a58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967294)));
label_279a5c:
    // 0x279a5c: 0x9246ffff  lbu         $a2, -0x1($s2)
    ctx->pc = 0x279a5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_279a60:
    // 0x279a60: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x279a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_279a64:
    // 0x279a64: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x279a64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_279a68:
    // 0x279a68: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_279a6c:
    // 0x279a6c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279a70:
    // 0x279a70: 0x1420ff27  bnez        $at, . + 4 + (-0xD9 << 2)
label_279a74:
    if (ctx->pc == 0x279A74u) {
        ctx->pc = 0x279A74u;
            // 0x279a74: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->pc = 0x279A78u;
        goto label_279a78;
    }
    ctx->pc = 0x279A70u;
    {
        const bool branch_taken_0x279a70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x279A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279A70u;
            // 0x279a74: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a70) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279A78u;
label_279a78:
    // 0x279a78: 0x2461023  subu        $v0, $s2, $a2
    ctx->pc = 0x279a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_279a7c:
    // 0x279a7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x279a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_279a80:
    // 0x279a80: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x279a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_279a84:
    // 0x279a84: 0xc09e5a8  jal         func_2796A0
label_279a88:
    if (ctx->pc == 0x279A88u) {
        ctx->pc = 0x279A88u;
            // 0x279a88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279A8Cu;
        goto label_279a8c;
    }
    ctx->pc = 0x279A84u;
    SET_GPR_U32(ctx, 31, 0x279A8Cu);
    ctx->pc = 0x279A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279A84u;
            // 0x279a88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2796A0u;
    goto label_2796a0;
    ctx->pc = 0x279A8Cu;
label_279a8c:
    // 0x279a8c: 0x1000ff20  b           . + 4 + (-0xE0 << 2)
label_279a90:
    if (ctx->pc == 0x279A90u) {
        ctx->pc = 0x279A94u;
        goto label_279a94;
    }
    ctx->pc = 0x279A8Cu;
    {
        const bool branch_taken_0x279a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a8c) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279A94u;
label_279a94:
    // 0x279a94: 0x0  nop
    ctx->pc = 0x279a94u;
    // NOP
label_279a98:
    // 0x279a98: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x279a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_279a9c:
    // 0x279a9c: 0x8c67ff68  lw          $a3, -0x98($v1)
    ctx->pc = 0x279a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967144)));
label_279aa0:
    // 0x279aa0: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279aa4:
    // 0x279aa4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x279aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279aa8:
    // 0x279aa8: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x279aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279aac:
    // 0x279aac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x279aacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_279ab0:
    // 0x279ab0: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_279ab4:
    if (ctx->pc == 0x279AB4u) {
        ctx->pc = 0x279AB4u;
            // 0x279ab4: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x279AB8u;
        goto label_279ab8;
    }
    ctx->pc = 0x279AB0u;
    {
        const bool branch_taken_0x279ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AB0u;
            // 0x279ab4: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ab0) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279AB8u;
label_279ab8:
    // 0x279ab8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x279ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279abc:
    // 0x279abc: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x279abcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_279ac0:
    // 0x279ac0: 0x14200159  bnez        $at, . + 4 + (0x159 << 2)
label_279ac4:
    if (ctx->pc == 0x279AC4u) {
        ctx->pc = 0x279AC8u;
        goto label_279ac8;
    }
    ctx->pc = 0x279AC0u;
    {
        const bool branch_taken_0x279ac0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x279ac0) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279AC8u;
label_279ac8:
    // 0x279ac8: 0x1000ff11  b           . + 4 + (-0xEF << 2)
label_279acc:
    if (ctx->pc == 0x279ACCu) {
        ctx->pc = 0x279ACCu;
            // 0x279acc: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->pc = 0x279AD0u;
        goto label_279ad0;
    }
    ctx->pc = 0x279AC8u;
    {
        const bool branch_taken_0x279ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279AC8u;
            // 0x279acc: 0x26520003  addiu       $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ac8) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279AD0u;
label_279ad0:
    // 0x279ad0: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x279ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_279ad4:
    // 0x279ad4: 0x8c64ff6c  lw          $a0, -0x94($v1)
    ctx->pc = 0x279ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967148)));
label_279ad8:
    // 0x279ad8: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x279ad8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279adc:
    // 0x279adc: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x279adcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279ae0:
    // 0x279ae0: 0x924b0004  lbu         $t3, 0x4($s2)
    ctx->pc = 0x279ae0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279ae4:
    // 0x279ae4: 0x924a0005  lbu         $t2, 0x5($s2)
    ctx->pc = 0x279ae4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_279ae8:
    // 0x279ae8: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x279ae8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279aec:
    // 0x279aec: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x279aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_279af0:
    // 0x279af0: 0x92490006  lbu         $t1, 0x6($s2)
    ctx->pc = 0x279af0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_279af4:
    // 0x279af4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x279af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_279af8:
    // 0x279af8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x279af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_279afc:
    // 0x279afc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279b00:
    // 0x279b00: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_279b04:
    // 0x279b04: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x279b04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_279b08:
    // 0x279b08: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x279b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_279b0c:
    // 0x279b0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279b10:
    // 0x279b10: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x279b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279b14:
    // 0x279b14: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x279b14u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_279b18:
    // 0x279b18: 0x14a00143  bnez        $a1, . + 4 + (0x143 << 2)
label_279b1c:
    if (ctx->pc == 0x279B1Cu) {
        ctx->pc = 0x279B1Cu;
            // 0x279b1c: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->pc = 0x279B20u;
        goto label_279b20;
    }
    ctx->pc = 0x279B18u;
    {
        const bool branch_taken_0x279b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x279B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B18u;
            // 0x279b1c: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b18) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279B20u;
label_279b20:
    // 0x279b20: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x279b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_279b24:
    // 0x279b24: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x279b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_279b28:
    // 0x279b28: 0x1420013f  bnez        $at, . + 4 + (0x13F << 2)
label_279b2c:
    if (ctx->pc == 0x279B2Cu) {
        ctx->pc = 0x279B30u;
        goto label_279b30;
    }
    ctx->pc = 0x279B28u;
    {
        const bool branch_taken_0x279b28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x279b28) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279B30u;
label_279b30:
    // 0x279b30: 0x1000fef7  b           . + 4 + (-0x109 << 2)
label_279b34:
    if (ctx->pc == 0x279B34u) {
        ctx->pc = 0x279B34u;
            // 0x279b34: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->pc = 0x279B38u;
        goto label_279b38;
    }
    ctx->pc = 0x279B30u;
    {
        const bool branch_taken_0x279b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B30u;
            // 0x279b34: 0x26520007  addiu       $s2, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b30) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279B38u;
label_279b38:
    // 0x279b38: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x279b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279b3c:
    // 0x279b3c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x279b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_279b40:
    // 0x279b40: 0x1000fef3  b           . + 4 + (-0x10D << 2)
label_279b44:
    if (ctx->pc == 0x279B44u) {
        ctx->pc = 0x279B44u;
            // 0x279b44: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x279B48u;
        goto label_279b48;
    }
    ctx->pc = 0x279B40u;
    {
        const bool branch_taken_0x279b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B40u;
            // 0x279b44: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b40) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279B48u;
label_279b48:
    // 0x279b48: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x279b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279b4c:
    // 0x279b4c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279b4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279b50:
    // 0x279b50: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_279b54:
    // 0x279b54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_279b58:
    // 0x279b58: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x279b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_279b5c:
    // 0x279b5c: 0x1000feec  b           . + 4 + (-0x114 << 2)
label_279b60:
    if (ctx->pc == 0x279B60u) {
        ctx->pc = 0x279B60u;
            // 0x279b60: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x279B64u;
        goto label_279b64;
    }
    ctx->pc = 0x279B5Cu;
    {
        const bool branch_taken_0x279b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B5Cu;
            // 0x279b60: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b5c) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279B64u;
label_279b64:
    // 0x279b64: 0x0  nop
    ctx->pc = 0x279b64u;
    // NOP
label_279b68:
    // 0x279b68: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279b68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279b6c:
    // 0x279b6c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x279b6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279b70:
    // 0x279b70: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x279b70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279b74:
    // 0x279b74: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x279b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_279b78:
    // 0x279b78: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_279b7c:
    // 0x279b7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x279b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279b80:
    // 0x279b80: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x279b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_279b84:
    // 0x279b84: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x279b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_279b88:
    // 0x279b88: 0x1000fee1  b           . + 4 + (-0x11F << 2)
label_279b8c:
    if (ctx->pc == 0x279B8Cu) {
        ctx->pc = 0x279B8Cu;
            // 0x279b8c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x279B90u;
        goto label_279b90;
    }
    ctx->pc = 0x279B88u;
    {
        const bool branch_taken_0x279b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279B88u;
            // 0x279b8c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b88) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279B90u;
label_279b90:
    // 0x279b90: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x279b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_279b94:
    // 0x279b94: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x279b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279b98:
    // 0x279b98: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x279b98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_279b9c:
    // 0x279b9c: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x279b9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279ba0:
    // 0x279ba0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x279ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279ba4:
    // 0x279ba4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279ba8:
    // 0x279ba8: 0x653004  sllv        $a2, $a1, $v1
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_279bac:
    // 0x279bac: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x279bacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_279bb0:
    // 0x279bb0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_279bb4:
    // 0x279bb4: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x279bb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_279bb8:
    // 0x279bb8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x279bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279bbc:
    // 0x279bbc: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x279bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_279bc0:
    // 0x279bc0: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x279bc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279bc4:
    // 0x279bc4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x279bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279bc8:
    // 0x279bc8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x279bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279bcc:
    // 0x279bcc: 0x653004  sllv        $a2, $a1, $v1
    ctx->pc = 0x279bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_279bd0:
    // 0x279bd0: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x279bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_279bd4:
    // 0x279bd4: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_279bd8:
    // 0x279bd8: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x279bd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_279bdc:
    // 0x279bdc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x279bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279be0:
    // 0x279be0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x279be0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279be4:
    // 0x279be4: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x279be4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279be8:
    // 0x279be8: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x279be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279bec:
    // 0x279bec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x279becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_279bf0:
    // 0x279bf0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x279bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_279bf4:
    // 0x279bf4: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_279bf8:
    // 0x279bf8: 0x27a302b8  addiu       $v1, $sp, 0x2B8
    ctx->pc = 0x279bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279bfc:
    // 0x279bfc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x279bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_279c00:
    // 0x279c00: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x279c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_279c04:
    // 0x279c04: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x279c04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_279c08:
    // 0x279c08: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x279c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_279c0c:
    // 0x279c0c: 0x27a302a8  addiu       $v1, $sp, 0x2A8
    ctx->pc = 0x279c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_279c10:
    // 0x279c10: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x279c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_279c14:
    // 0x279c14: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x279c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_279c18:
    // 0x279c18: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x279c18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_279c1c:
    // 0x279c1c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x279c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_279c20:
    // 0x279c20: 0x27a302ac  addiu       $v1, $sp, 0x2AC
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_279c24:
    // 0x279c24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x279c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_279c28:
    // 0x279c28: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x279c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279c2c:
    // 0x279c2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x279c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_279c30:
    // 0x279c30: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_279c34:
    // 0x279c34: 0xafa302c4  sw          $v1, 0x2C4($sp)
    ctx->pc = 0x279c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 3));
label_279c38:
    // 0x279c38: 0x1000feb5  b           . + 4 + (-0x14B << 2)
label_279c3c:
    if (ctx->pc == 0x279C3Cu) {
        ctx->pc = 0x279C3Cu;
            // 0x279c3c: 0x27b302a0  addiu       $s3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x279C40u;
        goto label_279c40;
    }
    ctx->pc = 0x279C38u;
    {
        const bool branch_taken_0x279c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C38u;
            // 0x279c3c: 0x27b302a0  addiu       $s3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c38) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279C40u;
label_279c40:
    // 0x279c40: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_279c44:
    // 0x279c44: 0x1263001a  beq         $s3, $v1, . + 4 + (0x1A << 2)
label_279c48:
    if (ctx->pc == 0x279C48u) {
        ctx->pc = 0x279C48u;
            // 0x279c48: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x279C4Cu;
        goto label_279c4c;
    }
    ctx->pc = 0x279C44u;
    {
        const bool branch_taken_0x279c44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x279C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279C44u;
            // 0x279c48: 0x92440001  lbu         $a0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c44) {
            ctx->pc = 0x279CB0u;
            goto label_279cb0;
        }
    }
    ctx->pc = 0x279C4Cu;
label_279c4c:
    // 0x279c4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279c50:
    // 0x279c50: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x279c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_279c54:
    // 0x279c54: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x279c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279c58:
    // 0x279c58: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x279c58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279c5c:
    // 0x279c5c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279c60:
    // 0x279c60: 0x27a502a8  addiu       $a1, $sp, 0x2A8
    ctx->pc = 0x279c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_279c64:
    // 0x279c64: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279c68:
    // 0x279c68: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279c6c:
    // 0x279c6c: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_279c70:
    // 0x279c70: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279c74:
    // 0x279c74: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x279c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279c78:
    // 0x279c78: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x279c78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_279c7c:
    // 0x279c7c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279c80:
    // 0x279c80: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x279c80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_279c84:
    // 0x279c84: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279c88:
    // 0x279c88: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279c8c:
    // 0x279c8c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279c90:
    // 0x279c90: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x279c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279c94:
    // 0x279c94: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x279c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_279c98:
    // 0x279c98: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x279c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_279c9c:
    // 0x279c9c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x279c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_279ca0:
    // 0x279ca0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x279ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ca4:
    // 0x279ca4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x279ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_279ca8:
    // 0x279ca8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x279ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279cac:
    // 0x279cac: 0x0  nop
    ctx->pc = 0x279cacu;
    // NOP
label_279cb0:
    // 0x279cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x279cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279cb4:
    // 0x279cb4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x279cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_279cb8:
    // 0x279cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_279cbc:
    // 0x279cbc: 0x1000fe94  b           . + 4 + (-0x16C << 2)
label_279cc0:
    if (ctx->pc == 0x279CC0u) {
        ctx->pc = 0x279CC0u;
            // 0x279cc0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x279CC4u;
        goto label_279cc4;
    }
    ctx->pc = 0x279CBCu;
    {
        const bool branch_taken_0x279cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279CBCu;
            // 0x279cc0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cbc) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279CC4u;
label_279cc4:
    // 0x279cc4: 0x0  nop
    ctx->pc = 0x279cc4u;
    // NOP
label_279cc8:
    // 0x279cc8: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x279cc8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279ccc:
    // 0x279ccc: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279cccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279cd0:
    // 0x279cd0: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x279cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_279cd4:
    // 0x279cd4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_279cd8:
    // 0x279cd8: 0x12630019  beq         $s3, $v1, . + 4 + (0x19 << 2)
label_279cdc:
    if (ctx->pc == 0x279CDCu) {
        ctx->pc = 0x279CDCu;
            // 0x279cdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x279CE0u;
        goto label_279ce0;
    }
    ctx->pc = 0x279CD8u;
    {
        const bool branch_taken_0x279cd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x279CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279CD8u;
            // 0x279cdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cd8) {
            ctx->pc = 0x279D40u;
            goto label_279d40;
        }
    }
    ctx->pc = 0x279CE0u;
label_279ce0:
    // 0x279ce0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279ce4:
    // 0x279ce4: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x279ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_279ce8:
    // 0x279ce8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x279ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279cec:
    // 0x279cec: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x279cecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279cf0:
    // 0x279cf0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279cf4:
    // 0x279cf4: 0x27a502a8  addiu       $a1, $sp, 0x2A8
    ctx->pc = 0x279cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_279cf8:
    // 0x279cf8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279cfc:
    // 0x279cfc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279d00:
    // 0x279d00: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x279d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_279d04:
    // 0x279d04: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279d08:
    // 0x279d08: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x279d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279d0c:
    // 0x279d0c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x279d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_279d10:
    // 0x279d10: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x279d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279d14:
    // 0x279d14: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x279d14u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_279d18:
    // 0x279d18: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279d1c:
    // 0x279d1c: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279d20:
    // 0x279d20: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279d24:
    // 0x279d24: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x279d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279d28:
    // 0x279d28: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x279d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_279d2c:
    // 0x279d2c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x279d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_279d30:
    // 0x279d30: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x279d30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_279d34:
    // 0x279d34: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x279d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279d38:
    // 0x279d38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x279d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_279d3c:
    // 0x279d3c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x279d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279d40:
    // 0x279d40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279d44:
    // 0x279d44: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_279d48:
    // 0x279d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_279d4c:
    // 0x279d4c: 0x1000fe70  b           . + 4 + (-0x190 << 2)
label_279d50:
    if (ctx->pc == 0x279D50u) {
        ctx->pc = 0x279D50u;
            // 0x279d50: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x279D54u;
        goto label_279d54;
    }
    ctx->pc = 0x279D4Cu;
    {
        const bool branch_taken_0x279d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D4Cu;
            // 0x279d50: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d4c) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279D54u;
label_279d54:
    // 0x279d54: 0x0  nop
    ctx->pc = 0x279d54u;
    // NOP
label_279d58:
    // 0x279d58: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x279d58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279d5c:
    // 0x279d5c: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x279d5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279d60:
    // 0x279d60: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x279d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_279d64:
    // 0x279d64: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x279d64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279d68:
    // 0x279d68: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x279d68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279d6c:
    // 0x279d6c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x279d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_279d70:
    // 0x279d70: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_279d74:
    // 0x279d74: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279d78:
    // 0x279d78: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_279d7c:
    // 0x279d7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279d80:
    // 0x279d80: 0x12630019  beq         $s3, $v1, . + 4 + (0x19 << 2)
label_279d84:
    if (ctx->pc == 0x279D84u) {
        ctx->pc = 0x279D84u;
            // 0x279d84: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x279D88u;
        goto label_279d88;
    }
    ctx->pc = 0x279D80u;
    {
        const bool branch_taken_0x279d80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x279D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279D80u;
            // 0x279d84: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d80) {
            ctx->pc = 0x279DE8u;
            goto label_279de8;
        }
    }
    ctx->pc = 0x279D88u;
label_279d88:
    // 0x279d88: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x279d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279d8c:
    // 0x279d8c: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x279d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_279d90:
    // 0x279d90: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x279d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279d94:
    // 0x279d94: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x279d94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279d98:
    // 0x279d98: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279d9c:
    // 0x279d9c: 0x27a502a8  addiu       $a1, $sp, 0x2A8
    ctx->pc = 0x279d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_279da0:
    // 0x279da0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279da4:
    // 0x279da4: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279da8:
    // 0x279da8: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_279dac:
    // 0x279dac: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279db0:
    // 0x279db0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x279db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279db4:
    // 0x279db4: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x279db4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_279db8:
    // 0x279db8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x279db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279dbc:
    // 0x279dbc: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x279dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_279dc0:
    // 0x279dc0: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279dc4:
    // 0x279dc4: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279dc8:
    // 0x279dc8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279dcc:
    // 0x279dcc: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x279dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279dd0:
    // 0x279dd0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x279dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_279dd4:
    // 0x279dd4: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x279dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_279dd8:
    // 0x279dd8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x279dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_279ddc:
    // 0x279ddc: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x279ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279de0:
    // 0x279de0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x279de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_279de4:
    // 0x279de4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x279de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279de8:
    // 0x279de8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x279de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_279dec:
    // 0x279dec: 0x1000fe48  b           . + 4 + (-0x1B8 << 2)
label_279df0:
    if (ctx->pc == 0x279DF0u) {
        ctx->pc = 0x279DF0u;
            // 0x279df0: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x279DF4u;
        goto label_279df4;
    }
    ctx->pc = 0x279DECu;
    {
        const bool branch_taken_0x279dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DECu;
            // 0x279df0: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dec) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279DF4u;
label_279df4:
    // 0x279df4: 0x0  nop
    ctx->pc = 0x279df4u;
    // NOP
label_279df8:
    // 0x279df8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_279dfc:
    if (ctx->pc == 0x279DFCu) {
        ctx->pc = 0x279DFCu;
            // 0x279dfc: 0x92500001  lbu         $s0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x279E00u;
        goto label_279e00;
    }
    ctx->pc = 0x279DF8u;
    {
        const bool branch_taken_0x279df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DF8u;
            // 0x279dfc: 0x92500001  lbu         $s0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279df8) {
            ctx->pc = 0x279E70u;
            goto label_279e70;
        }
    }
    ctx->pc = 0x279E00u;
label_279e00:
    // 0x279e00: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x279e00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279e04:
    // 0x279e04: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279e04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279e08:
    // 0x279e08: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_279e0c:
    // 0x279e0c: 0x10000018  b           . + 4 + (0x18 << 2)
label_279e10:
    if (ctx->pc == 0x279E10u) {
        ctx->pc = 0x279E10u;
            // 0x279e10: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x279E14u;
        goto label_279e14;
    }
    ctx->pc = 0x279E0Cu;
    {
        const bool branch_taken_0x279e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E0Cu;
            // 0x279e10: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e0c) {
            ctx->pc = 0x279E70u;
            goto label_279e70;
        }
    }
    ctx->pc = 0x279E14u;
label_279e14:
    // 0x279e14: 0x0  nop
    ctx->pc = 0x279e14u;
    // NOP
label_279e18:
    // 0x279e18: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279e18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279e1c:
    // 0x279e1c: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x279e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279e20:
    // 0x279e20: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x279e20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279e24:
    // 0x279e24: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x279e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_279e28:
    // 0x279e28: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x279e28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_279e2c:
    // 0x279e2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x279e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_279e30:
    // 0x279e30: 0x1000000f  b           . + 4 + (0xF << 2)
label_279e34:
    if (ctx->pc == 0x279E34u) {
        ctx->pc = 0x279E34u;
            // 0x279e34: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->pc = 0x279E38u;
        goto label_279e38;
    }
    ctx->pc = 0x279E30u;
    {
        const bool branch_taken_0x279e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E30u;
            // 0x279e34: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e30) {
            ctx->pc = 0x279E70u;
            goto label_279e70;
        }
    }
    ctx->pc = 0x279E38u;
label_279e38:
    // 0x279e38: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x279e38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279e3c:
    // 0x279e3c: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x279e3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279e40:
    // 0x279e40: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x279e40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279e44:
    // 0x279e44: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x279e44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279e48:
    // 0x279e48: 0x68600  sll         $s0, $a2, 24
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_279e4c:
    // 0x279e4c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_279e50:
    // 0x279e50: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_279e54:
    // 0x279e54: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x279e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_279e58:
    // 0x279e58: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x279e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_279e5c:
    // 0x279e5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_279e60:
    if (ctx->pc == 0x279E60u) {
        ctx->pc = 0x279E60u;
            // 0x279e60: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x279E64u;
        goto label_279e64;
    }
    ctx->pc = 0x279E5Cu;
    {
        const bool branch_taken_0x279e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E5Cu;
            // 0x279e60: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e5c) {
            ctx->pc = 0x279E70u;
            goto label_279e70;
        }
    }
    ctx->pc = 0x279E64u;
label_279e64:
    // 0x279e64: 0x0  nop
    ctx->pc = 0x279e64u;
    // NOP
label_279e68:
    // 0x279e68: 0x2470ffd0  addiu       $s0, $v1, -0x30
    ctx->pc = 0x279e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_279e6c:
    // 0x279e6c: 0x0  nop
    ctx->pc = 0x279e6cu;
    // NOP
label_279e70:
    // 0x279e70: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279e74:
    // 0x279e74: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x279e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_279e78:
    // 0x279e78: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x279e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_279e7c:
    // 0x279e7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_279e80:
    // 0x279e80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_279e84:
    // 0x279e84: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x279e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_279e88:
    // 0x279e88: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x279e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_279e8c:
    // 0x279e8c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_279e90:
    if (ctx->pc == 0x279E90u) {
        ctx->pc = 0x279E90u;
            // 0x279e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279E94u;
        goto label_279e94;
    }
    ctx->pc = 0x279E8Cu;
    {
        const bool branch_taken_0x279e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x279E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E8Cu;
            // 0x279e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e8c) {
            ctx->pc = 0x279EA0u;
            goto label_279ea0;
        }
    }
    ctx->pc = 0x279E94u;
label_279e94:
    // 0x279e94: 0xc0a728c  jal         func_29CA30
label_279e98:
    if (ctx->pc == 0x279E98u) {
        ctx->pc = 0x279E98u;
            // 0x279e98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x279E9Cu;
        goto label_279e9c;
    }
    ctx->pc = 0x279E94u;
    SET_GPR_U32(ctx, 31, 0x279E9Cu);
    ctx->pc = 0x279E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E94u;
            // 0x279e98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E9Cu; }
        if (ctx->pc != 0x279E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E9Cu; }
        if (ctx->pc != 0x279E9Cu) { return; }
    }
    ctx->pc = 0x279E9Cu;
label_279e9c:
    // 0x279e9c: 0x0  nop
    ctx->pc = 0x279e9cu;
    // NOP
label_279ea0:
    // 0x279ea0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x279ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_279ea4:
    // 0x279ea4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_279ea8:
    // 0x279ea8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x279ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_279eac:
    // 0x279eac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_279eb0:
    // 0x279eb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x279eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279eb4:
    // 0x279eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_279eb8:
    // 0x279eb8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_279ebc:
    if (ctx->pc == 0x279EBCu) {
        ctx->pc = 0x279EBCu;
            // 0x279ebc: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x279EC0u;
        goto label_279ec0;
    }
    ctx->pc = 0x279EB8u;
    {
        const bool branch_taken_0x279eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EB8u;
            // 0x279ebc: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279eb8) {
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279EC0u;
label_279ec0:
    // 0x279ec0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x279ec0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279ec4:
    // 0x279ec4: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x279ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
label_279ec8:
    // 0x279ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_279ecc:
    // 0x279ecc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x279eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_279ed0:
    // 0x279ed0: 0xac6402c4  sw          $a0, 0x2C4($v1)
    ctx->pc = 0x279ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 4));
label_279ed4:
    // 0x279ed4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x279ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_279ed8:
    // 0x279ed8: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x279ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_279edc:
    // 0x279edc: 0x1263001a  beq         $s3, $v1, . + 4 + (0x1A << 2)
label_279ee0:
    if (ctx->pc == 0x279EE0u) {
        ctx->pc = 0x279EE0u;
            // 0x279ee0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x279EE4u;
        goto label_279ee4;
    }
    ctx->pc = 0x279EDCu;
    {
        const bool branch_taken_0x279edc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x279EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279EDCu;
            // 0x279ee0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279edc) {
            ctx->pc = 0x279F48u;
            goto label_279f48;
        }
    }
    ctx->pc = 0x279EE4u;
label_279ee4:
    // 0x279ee4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x279ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_279ee8:
    // 0x279ee8: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x279ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
label_279eec:
    // 0x279eec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x279eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_279ef0:
    // 0x279ef0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x279ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_279ef4:
    // 0x279ef4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x279ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_279ef8:
    // 0x279ef8: 0x27a502a8  addiu       $a1, $sp, 0x2A8
    ctx->pc = 0x279ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_279efc:
    // 0x279efc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279f00:
    // 0x279f00: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x279f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_279f04:
    // 0x279f04: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x279f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_279f08:
    // 0x279f08: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279f0c:
    // 0x279f0c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_279f10:
    // 0x279f10: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x279f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
label_279f14:
    // 0x279f14: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x279f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_279f18:
    // 0x279f18: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x279f18u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_279f1c:
    // 0x279f1c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x279f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_279f20:
    // 0x279f20: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x279f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_279f24:
    // 0x279f24: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_279f28:
    // 0x279f28: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x279f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_279f2c:
    // 0x279f2c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x279f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_279f30:
    // 0x279f30: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x279f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_279f34:
    // 0x279f34: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x279f34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_279f38:
    // 0x279f38: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x279f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279f3c:
    // 0x279f3c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x279f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_279f40:
    // 0x279f40: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x279f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279f44:
    // 0x279f44: 0x0  nop
    ctx->pc = 0x279f44u;
    // NOP
label_279f48:
    // 0x279f48: 0x1000fdf1  b           . + 4 + (-0x20F << 2)
label_279f4c:
    if (ctx->pc == 0x279F4Cu) {
        ctx->pc = 0x279F4Cu;
            // 0x279f4c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x279F50u;
        goto label_279f50;
    }
    ctx->pc = 0x279F48u;
    {
        const bool branch_taken_0x279f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F48u;
            // 0x279f4c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f48) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x279F50u;
label_279f50:
    // 0x279f50: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x279f50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279f54:
    // 0x279f54: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x279f54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279f58:
    // 0x279f58: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x279f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_279f5c:
    // 0x279f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_279f60:
    // 0x279f60: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_279f64:
    // 0x279f64: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_279f68:
    // 0x279f68: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x279f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_279f6c:
    // 0x279f6c: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x279f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_279f70:
    // 0x279f70: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_279f74:
    if (ctx->pc == 0x279F74u) {
        ctx->pc = 0x279F74u;
            // 0x279f74: 0xac6402c4  sw          $a0, 0x2C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 4));
        ctx->pc = 0x279F78u;
        goto label_279f78;
    }
    ctx->pc = 0x279F70u;
    {
        const bool branch_taken_0x279f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F70u;
            // 0x279f74: 0xac6402c4  sw          $a0, 0x2C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f70) {
            ctx->pc = 0x279ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279ed8;
        }
    }
    ctx->pc = 0x279F78u;
label_279f78:
    // 0x279f78: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x279f78u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_279f7c:
    // 0x279f7c: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x279f7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_279f80:
    // 0x279f80: 0x2463ff98  addiu       $v1, $v1, -0x68
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967192));
label_279f84:
    // 0x279f84: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x279f84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_279f88:
    // 0x279f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_279f8c:
    // 0x279f8c: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x279f8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_279f90:
    // 0x279f90: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_279f94:
    // 0x279f94: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_279f98:
    // 0x279f98: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x279f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_279f9c:
    // 0x279f9c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_279fa0:
    // 0x279fa0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_279fa4:
    // 0x279fa4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x279fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_279fa8:
    // 0x279fa8: 0x26520005  addiu       $s2, $s2, 0x5
    ctx->pc = 0x279fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_279fac:
    // 0x279fac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x279facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_279fb0:
    // 0x279fb0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_279fb4:
    if (ctx->pc == 0x279FB4u) {
        ctx->pc = 0x279FB4u;
            // 0x279fb4: 0xac6402c4  sw          $a0, 0x2C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 4));
        ctx->pc = 0x279FB8u;
        goto label_279fb8;
    }
    ctx->pc = 0x279FB0u;
    {
        const bool branch_taken_0x279fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FB0u;
            // 0x279fb4: 0xac6402c4  sw          $a0, 0x2C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fb0) {
            ctx->pc = 0x279ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279ed8;
        }
    }
    ctx->pc = 0x279FB8u;
label_279fb8:
    // 0x279fb8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x279fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_279fbc:
    // 0x279fbc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x279fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_279fc0:
    // 0x279fc0: 0xc0a7214  jal         func_29C850
label_279fc4:
    if (ctx->pc == 0x279FC4u) {
        ctx->pc = 0x279FC4u;
            // 0x279fc4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x279FC8u;
        goto label_279fc8;
    }
    ctx->pc = 0x279FC0u;
    SET_GPR_U32(ctx, 31, 0x279FC8u);
    ctx->pc = 0x279FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FC0u;
            // 0x279fc4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FC8u; }
        if (ctx->pc != 0x279FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FC8u; }
        if (ctx->pc != 0x279FC8u) { return; }
    }
    ctx->pc = 0x279FC8u;
label_279fc8:
    // 0x279fc8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x279fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_279fcc:
    // 0x279fcc: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_279fd0:
    // 0x279fd0: 0xc0a7fc0  jal         func_29FF00
label_279fd4:
    if (ctx->pc == 0x279FD4u) {
        ctx->pc = 0x279FD4u;
            // 0x279fd4: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->pc = 0x279FD8u;
        goto label_279fd8;
    }
    ctx->pc = 0x279FD0u;
    SET_GPR_U32(ctx, 31, 0x279FD8u);
    ctx->pc = 0x279FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FD0u;
            // 0x279fd4: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FD8u; }
        if (ctx->pc != 0x279FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FD8u; }
        if (ctx->pc != 0x279FD8u) { return; }
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x279fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_279fdc:
    // 0x279fdc: 0x3c021298  lui         $v0, 0x1298
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4760 << 16));
label_279fe0:
    // 0x279fe0: 0x8c24ea18  lw          $a0, -0x15E8($at)
    ctx->pc = 0x279fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961688)));
label_279fe4:
    // 0x279fe4: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x279fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_279fe8:
    // 0x279fe8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x279fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_279fec:
    // 0x279fec: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x279fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_279ff0:
    // 0x279ff0: 0x3446fedd  ori         $a2, $v0, 0xFEDD
    ctx->pc = 0x279ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65245);
label_279ff4:
    // 0x279ff4: 0x2508d430  addiu       $t0, $t0, -0x2BD0
    ctx->pc = 0x279ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956080));
label_279ff8:
    // 0x279ff8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279ffc:
    // 0x279ffc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x279ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27a000:
    // 0x27a000: 0x320f809  jalr        $t9
label_27a004:
    if (ctx->pc == 0x27A004u) {
        ctx->pc = 0x27A004u;
            // 0x27a004: 0x24090124  addiu       $t1, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->pc = 0x27A008u;
        goto label_27a008;
    }
    ctx->pc = 0x27A000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A008u);
        ctx->pc = 0x27A004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A000u;
            // 0x27a004: 0x24090124  addiu       $t1, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27A008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27A008u; }
            if (ctx->pc != 0x27A008u) { return; }
        }
        }
    }
    ctx->pc = 0x27A008u;
label_27a008:
    // 0x27a008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27a00c:
    // 0x27a00c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x27a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_27a010:
    // 0x27a010: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_27a014:
    // 0x27a014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a018:
    // 0x27a018: 0xc0a7f78  jal         func_29FDE0
label_27a01c:
    if (ctx->pc == 0x27A01Cu) {
        ctx->pc = 0x27A01Cu;
            // 0x27a01c: 0xafa202d0  sw          $v0, 0x2D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
        ctx->pc = 0x27A020u;
        goto label_27a020;
    }
    ctx->pc = 0x27A018u;
    SET_GPR_U32(ctx, 31, 0x27A020u);
    ctx->pc = 0x27A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A018u;
            // 0x27a01c: 0xafa202d0  sw          $v0, 0x2D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A020u; }
        if (ctx->pc != 0x27A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A020u; }
        if (ctx->pc != 0x27A020u) { return; }
    }
    ctx->pc = 0x27A020u;
label_27a020:
    // 0x27a020: 0x1000fdbb  b           . + 4 + (-0x245 << 2)
label_27a024:
    if (ctx->pc == 0x27A024u) {
        ctx->pc = 0x27A028u;
        goto label_27a028;
    }
    ctx->pc = 0x27A020u;
    {
        const bool branch_taken_0x27a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a020) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x27A028u;
label_27a028:
    // 0x27a028: 0x10000009  b           . + 4 + (0x9 << 2)
label_27a02c:
    if (ctx->pc == 0x27A02Cu) {
        ctx->pc = 0x27A030u;
        goto label_27a030;
    }
    ctx->pc = 0x27A028u;
    {
        const bool branch_taken_0x27a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a028) {
            ctx->pc = 0x27A050u;
            goto label_27a050;
        }
    }
    ctx->pc = 0x27A030u;
label_27a030:
    // 0x27a030: 0x27b502c0  addiu       $s5, $sp, 0x2C0
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_27a034:
    // 0x27a034: 0x27b602b0  addiu       $s6, $sp, 0x2B0
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_27a038:
    // 0x27a038: 0x27b702b4  addiu       $s7, $sp, 0x2B4
    ctx->pc = 0x27a038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_27a03c:
    // 0x27a03c: 0x27be02a4  addiu       $fp, $sp, 0x2A4
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
label_27a040:
    // 0x27a040: 0x27b102bc  addiu       $s1, $sp, 0x2BC
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_27a044:
    // 0x27a044: 0x1000fdb2  b           . + 4 + (-0x24E << 2)
label_27a048:
    if (ctx->pc == 0x27A048u) {
        ctx->pc = 0x27A048u;
            // 0x27a048: 0x27b002c4  addiu       $s0, $sp, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
        ctx->pc = 0x27A04Cu;
        goto label_27a04c;
    }
    ctx->pc = 0x27A044u;
    {
        const bool branch_taken_0x27a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A044u;
            // 0x27a048: 0x27b002c4  addiu       $s0, $sp, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a044) {
            ctx->pc = 0x279710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279710;
        }
    }
    ctx->pc = 0x27A04Cu;
label_27a04c:
    // 0x27a04c: 0x0  nop
    ctx->pc = 0x27a04cu;
    // NOP
label_27a050:
    // 0x27a050: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27a050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27a054:
    // 0x27a054: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27a054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27a058:
    // 0x27a058: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27a058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27a05c:
    // 0x27a05c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27a05cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27a060:
    // 0x27a060: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27a060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27a064:
    // 0x27a064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27a064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27a068:
    // 0x27a068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27a06c:
    // 0x27a06c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a070:
    // 0x27a070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a074:
    // 0x27a074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27a078:
    // 0x27a078: 0x3e00008  jr          $ra
label_27a07c:
    if (ctx->pc == 0x27A07Cu) {
        ctx->pc = 0x27A07Cu;
            // 0x27a07c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x27A080u;
        goto label_fallthrough_0x27a078;
    }
    ctx->pc = 0x27A078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A078u;
            // 0x27a07c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27a078:
    ctx->pc = 0x27A080u;
}
