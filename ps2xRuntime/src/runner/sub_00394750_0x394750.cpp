#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00394750
// Address: 0x394750 - 0x394d70
void sub_00394750_0x394750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394750_0x394750");
#endif

    switch (ctx->pc) {
        case 0x394750u: goto label_394750;
        case 0x394754u: goto label_394754;
        case 0x394758u: goto label_394758;
        case 0x39475cu: goto label_39475c;
        case 0x394760u: goto label_394760;
        case 0x394764u: goto label_394764;
        case 0x394768u: goto label_394768;
        case 0x39476cu: goto label_39476c;
        case 0x394770u: goto label_394770;
        case 0x394774u: goto label_394774;
        case 0x394778u: goto label_394778;
        case 0x39477cu: goto label_39477c;
        case 0x394780u: goto label_394780;
        case 0x394784u: goto label_394784;
        case 0x394788u: goto label_394788;
        case 0x39478cu: goto label_39478c;
        case 0x394790u: goto label_394790;
        case 0x394794u: goto label_394794;
        case 0x394798u: goto label_394798;
        case 0x39479cu: goto label_39479c;
        case 0x3947a0u: goto label_3947a0;
        case 0x3947a4u: goto label_3947a4;
        case 0x3947a8u: goto label_3947a8;
        case 0x3947acu: goto label_3947ac;
        case 0x3947b0u: goto label_3947b0;
        case 0x3947b4u: goto label_3947b4;
        case 0x3947b8u: goto label_3947b8;
        case 0x3947bcu: goto label_3947bc;
        case 0x3947c0u: goto label_3947c0;
        case 0x3947c4u: goto label_3947c4;
        case 0x3947c8u: goto label_3947c8;
        case 0x3947ccu: goto label_3947cc;
        case 0x3947d0u: goto label_3947d0;
        case 0x3947d4u: goto label_3947d4;
        case 0x3947d8u: goto label_3947d8;
        case 0x3947dcu: goto label_3947dc;
        case 0x3947e0u: goto label_3947e0;
        case 0x3947e4u: goto label_3947e4;
        case 0x3947e8u: goto label_3947e8;
        case 0x3947ecu: goto label_3947ec;
        case 0x3947f0u: goto label_3947f0;
        case 0x3947f4u: goto label_3947f4;
        case 0x3947f8u: goto label_3947f8;
        case 0x3947fcu: goto label_3947fc;
        case 0x394800u: goto label_394800;
        case 0x394804u: goto label_394804;
        case 0x394808u: goto label_394808;
        case 0x39480cu: goto label_39480c;
        case 0x394810u: goto label_394810;
        case 0x394814u: goto label_394814;
        case 0x394818u: goto label_394818;
        case 0x39481cu: goto label_39481c;
        case 0x394820u: goto label_394820;
        case 0x394824u: goto label_394824;
        case 0x394828u: goto label_394828;
        case 0x39482cu: goto label_39482c;
        case 0x394830u: goto label_394830;
        case 0x394834u: goto label_394834;
        case 0x394838u: goto label_394838;
        case 0x39483cu: goto label_39483c;
        case 0x394840u: goto label_394840;
        case 0x394844u: goto label_394844;
        case 0x394848u: goto label_394848;
        case 0x39484cu: goto label_39484c;
        case 0x394850u: goto label_394850;
        case 0x394854u: goto label_394854;
        case 0x394858u: goto label_394858;
        case 0x39485cu: goto label_39485c;
        case 0x394860u: goto label_394860;
        case 0x394864u: goto label_394864;
        case 0x394868u: goto label_394868;
        case 0x39486cu: goto label_39486c;
        case 0x394870u: goto label_394870;
        case 0x394874u: goto label_394874;
        case 0x394878u: goto label_394878;
        case 0x39487cu: goto label_39487c;
        case 0x394880u: goto label_394880;
        case 0x394884u: goto label_394884;
        case 0x394888u: goto label_394888;
        case 0x39488cu: goto label_39488c;
        case 0x394890u: goto label_394890;
        case 0x394894u: goto label_394894;
        case 0x394898u: goto label_394898;
        case 0x39489cu: goto label_39489c;
        case 0x3948a0u: goto label_3948a0;
        case 0x3948a4u: goto label_3948a4;
        case 0x3948a8u: goto label_3948a8;
        case 0x3948acu: goto label_3948ac;
        case 0x3948b0u: goto label_3948b0;
        case 0x3948b4u: goto label_3948b4;
        case 0x3948b8u: goto label_3948b8;
        case 0x3948bcu: goto label_3948bc;
        case 0x3948c0u: goto label_3948c0;
        case 0x3948c4u: goto label_3948c4;
        case 0x3948c8u: goto label_3948c8;
        case 0x3948ccu: goto label_3948cc;
        case 0x3948d0u: goto label_3948d0;
        case 0x3948d4u: goto label_3948d4;
        case 0x3948d8u: goto label_3948d8;
        case 0x3948dcu: goto label_3948dc;
        case 0x3948e0u: goto label_3948e0;
        case 0x3948e4u: goto label_3948e4;
        case 0x3948e8u: goto label_3948e8;
        case 0x3948ecu: goto label_3948ec;
        case 0x3948f0u: goto label_3948f0;
        case 0x3948f4u: goto label_3948f4;
        case 0x3948f8u: goto label_3948f8;
        case 0x3948fcu: goto label_3948fc;
        case 0x394900u: goto label_394900;
        case 0x394904u: goto label_394904;
        case 0x394908u: goto label_394908;
        case 0x39490cu: goto label_39490c;
        case 0x394910u: goto label_394910;
        case 0x394914u: goto label_394914;
        case 0x394918u: goto label_394918;
        case 0x39491cu: goto label_39491c;
        case 0x394920u: goto label_394920;
        case 0x394924u: goto label_394924;
        case 0x394928u: goto label_394928;
        case 0x39492cu: goto label_39492c;
        case 0x394930u: goto label_394930;
        case 0x394934u: goto label_394934;
        case 0x394938u: goto label_394938;
        case 0x39493cu: goto label_39493c;
        case 0x394940u: goto label_394940;
        case 0x394944u: goto label_394944;
        case 0x394948u: goto label_394948;
        case 0x39494cu: goto label_39494c;
        case 0x394950u: goto label_394950;
        case 0x394954u: goto label_394954;
        case 0x394958u: goto label_394958;
        case 0x39495cu: goto label_39495c;
        case 0x394960u: goto label_394960;
        case 0x394964u: goto label_394964;
        case 0x394968u: goto label_394968;
        case 0x39496cu: goto label_39496c;
        case 0x394970u: goto label_394970;
        case 0x394974u: goto label_394974;
        case 0x394978u: goto label_394978;
        case 0x39497cu: goto label_39497c;
        case 0x394980u: goto label_394980;
        case 0x394984u: goto label_394984;
        case 0x394988u: goto label_394988;
        case 0x39498cu: goto label_39498c;
        case 0x394990u: goto label_394990;
        case 0x394994u: goto label_394994;
        case 0x394998u: goto label_394998;
        case 0x39499cu: goto label_39499c;
        case 0x3949a0u: goto label_3949a0;
        case 0x3949a4u: goto label_3949a4;
        case 0x3949a8u: goto label_3949a8;
        case 0x3949acu: goto label_3949ac;
        case 0x3949b0u: goto label_3949b0;
        case 0x3949b4u: goto label_3949b4;
        case 0x3949b8u: goto label_3949b8;
        case 0x3949bcu: goto label_3949bc;
        case 0x3949c0u: goto label_3949c0;
        case 0x3949c4u: goto label_3949c4;
        case 0x3949c8u: goto label_3949c8;
        case 0x3949ccu: goto label_3949cc;
        case 0x3949d0u: goto label_3949d0;
        case 0x3949d4u: goto label_3949d4;
        case 0x3949d8u: goto label_3949d8;
        case 0x3949dcu: goto label_3949dc;
        case 0x3949e0u: goto label_3949e0;
        case 0x3949e4u: goto label_3949e4;
        case 0x3949e8u: goto label_3949e8;
        case 0x3949ecu: goto label_3949ec;
        case 0x3949f0u: goto label_3949f0;
        case 0x3949f4u: goto label_3949f4;
        case 0x3949f8u: goto label_3949f8;
        case 0x3949fcu: goto label_3949fc;
        case 0x394a00u: goto label_394a00;
        case 0x394a04u: goto label_394a04;
        case 0x394a08u: goto label_394a08;
        case 0x394a0cu: goto label_394a0c;
        case 0x394a10u: goto label_394a10;
        case 0x394a14u: goto label_394a14;
        case 0x394a18u: goto label_394a18;
        case 0x394a1cu: goto label_394a1c;
        case 0x394a20u: goto label_394a20;
        case 0x394a24u: goto label_394a24;
        case 0x394a28u: goto label_394a28;
        case 0x394a2cu: goto label_394a2c;
        case 0x394a30u: goto label_394a30;
        case 0x394a34u: goto label_394a34;
        case 0x394a38u: goto label_394a38;
        case 0x394a3cu: goto label_394a3c;
        case 0x394a40u: goto label_394a40;
        case 0x394a44u: goto label_394a44;
        case 0x394a48u: goto label_394a48;
        case 0x394a4cu: goto label_394a4c;
        case 0x394a50u: goto label_394a50;
        case 0x394a54u: goto label_394a54;
        case 0x394a58u: goto label_394a58;
        case 0x394a5cu: goto label_394a5c;
        case 0x394a60u: goto label_394a60;
        case 0x394a64u: goto label_394a64;
        case 0x394a68u: goto label_394a68;
        case 0x394a6cu: goto label_394a6c;
        case 0x394a70u: goto label_394a70;
        case 0x394a74u: goto label_394a74;
        case 0x394a78u: goto label_394a78;
        case 0x394a7cu: goto label_394a7c;
        case 0x394a80u: goto label_394a80;
        case 0x394a84u: goto label_394a84;
        case 0x394a88u: goto label_394a88;
        case 0x394a8cu: goto label_394a8c;
        case 0x394a90u: goto label_394a90;
        case 0x394a94u: goto label_394a94;
        case 0x394a98u: goto label_394a98;
        case 0x394a9cu: goto label_394a9c;
        case 0x394aa0u: goto label_394aa0;
        case 0x394aa4u: goto label_394aa4;
        case 0x394aa8u: goto label_394aa8;
        case 0x394aacu: goto label_394aac;
        case 0x394ab0u: goto label_394ab0;
        case 0x394ab4u: goto label_394ab4;
        case 0x394ab8u: goto label_394ab8;
        case 0x394abcu: goto label_394abc;
        case 0x394ac0u: goto label_394ac0;
        case 0x394ac4u: goto label_394ac4;
        case 0x394ac8u: goto label_394ac8;
        case 0x394accu: goto label_394acc;
        case 0x394ad0u: goto label_394ad0;
        case 0x394ad4u: goto label_394ad4;
        case 0x394ad8u: goto label_394ad8;
        case 0x394adcu: goto label_394adc;
        case 0x394ae0u: goto label_394ae0;
        case 0x394ae4u: goto label_394ae4;
        case 0x394ae8u: goto label_394ae8;
        case 0x394aecu: goto label_394aec;
        case 0x394af0u: goto label_394af0;
        case 0x394af4u: goto label_394af4;
        case 0x394af8u: goto label_394af8;
        case 0x394afcu: goto label_394afc;
        case 0x394b00u: goto label_394b00;
        case 0x394b04u: goto label_394b04;
        case 0x394b08u: goto label_394b08;
        case 0x394b0cu: goto label_394b0c;
        case 0x394b10u: goto label_394b10;
        case 0x394b14u: goto label_394b14;
        case 0x394b18u: goto label_394b18;
        case 0x394b1cu: goto label_394b1c;
        case 0x394b20u: goto label_394b20;
        case 0x394b24u: goto label_394b24;
        case 0x394b28u: goto label_394b28;
        case 0x394b2cu: goto label_394b2c;
        case 0x394b30u: goto label_394b30;
        case 0x394b34u: goto label_394b34;
        case 0x394b38u: goto label_394b38;
        case 0x394b3cu: goto label_394b3c;
        case 0x394b40u: goto label_394b40;
        case 0x394b44u: goto label_394b44;
        case 0x394b48u: goto label_394b48;
        case 0x394b4cu: goto label_394b4c;
        case 0x394b50u: goto label_394b50;
        case 0x394b54u: goto label_394b54;
        case 0x394b58u: goto label_394b58;
        case 0x394b5cu: goto label_394b5c;
        case 0x394b60u: goto label_394b60;
        case 0x394b64u: goto label_394b64;
        case 0x394b68u: goto label_394b68;
        case 0x394b6cu: goto label_394b6c;
        case 0x394b70u: goto label_394b70;
        case 0x394b74u: goto label_394b74;
        case 0x394b78u: goto label_394b78;
        case 0x394b7cu: goto label_394b7c;
        case 0x394b80u: goto label_394b80;
        case 0x394b84u: goto label_394b84;
        case 0x394b88u: goto label_394b88;
        case 0x394b8cu: goto label_394b8c;
        case 0x394b90u: goto label_394b90;
        case 0x394b94u: goto label_394b94;
        case 0x394b98u: goto label_394b98;
        case 0x394b9cu: goto label_394b9c;
        case 0x394ba0u: goto label_394ba0;
        case 0x394ba4u: goto label_394ba4;
        case 0x394ba8u: goto label_394ba8;
        case 0x394bacu: goto label_394bac;
        case 0x394bb0u: goto label_394bb0;
        case 0x394bb4u: goto label_394bb4;
        case 0x394bb8u: goto label_394bb8;
        case 0x394bbcu: goto label_394bbc;
        case 0x394bc0u: goto label_394bc0;
        case 0x394bc4u: goto label_394bc4;
        case 0x394bc8u: goto label_394bc8;
        case 0x394bccu: goto label_394bcc;
        case 0x394bd0u: goto label_394bd0;
        case 0x394bd4u: goto label_394bd4;
        case 0x394bd8u: goto label_394bd8;
        case 0x394bdcu: goto label_394bdc;
        case 0x394be0u: goto label_394be0;
        case 0x394be4u: goto label_394be4;
        case 0x394be8u: goto label_394be8;
        case 0x394becu: goto label_394bec;
        case 0x394bf0u: goto label_394bf0;
        case 0x394bf4u: goto label_394bf4;
        case 0x394bf8u: goto label_394bf8;
        case 0x394bfcu: goto label_394bfc;
        case 0x394c00u: goto label_394c00;
        case 0x394c04u: goto label_394c04;
        case 0x394c08u: goto label_394c08;
        case 0x394c0cu: goto label_394c0c;
        case 0x394c10u: goto label_394c10;
        case 0x394c14u: goto label_394c14;
        case 0x394c18u: goto label_394c18;
        case 0x394c1cu: goto label_394c1c;
        case 0x394c20u: goto label_394c20;
        case 0x394c24u: goto label_394c24;
        case 0x394c28u: goto label_394c28;
        case 0x394c2cu: goto label_394c2c;
        case 0x394c30u: goto label_394c30;
        case 0x394c34u: goto label_394c34;
        case 0x394c38u: goto label_394c38;
        case 0x394c3cu: goto label_394c3c;
        case 0x394c40u: goto label_394c40;
        case 0x394c44u: goto label_394c44;
        case 0x394c48u: goto label_394c48;
        case 0x394c4cu: goto label_394c4c;
        case 0x394c50u: goto label_394c50;
        case 0x394c54u: goto label_394c54;
        case 0x394c58u: goto label_394c58;
        case 0x394c5cu: goto label_394c5c;
        case 0x394c60u: goto label_394c60;
        case 0x394c64u: goto label_394c64;
        case 0x394c68u: goto label_394c68;
        case 0x394c6cu: goto label_394c6c;
        case 0x394c70u: goto label_394c70;
        case 0x394c74u: goto label_394c74;
        case 0x394c78u: goto label_394c78;
        case 0x394c7cu: goto label_394c7c;
        case 0x394c80u: goto label_394c80;
        case 0x394c84u: goto label_394c84;
        case 0x394c88u: goto label_394c88;
        case 0x394c8cu: goto label_394c8c;
        case 0x394c90u: goto label_394c90;
        case 0x394c94u: goto label_394c94;
        case 0x394c98u: goto label_394c98;
        case 0x394c9cu: goto label_394c9c;
        case 0x394ca0u: goto label_394ca0;
        case 0x394ca4u: goto label_394ca4;
        case 0x394ca8u: goto label_394ca8;
        case 0x394cacu: goto label_394cac;
        case 0x394cb0u: goto label_394cb0;
        case 0x394cb4u: goto label_394cb4;
        case 0x394cb8u: goto label_394cb8;
        case 0x394cbcu: goto label_394cbc;
        case 0x394cc0u: goto label_394cc0;
        case 0x394cc4u: goto label_394cc4;
        case 0x394cc8u: goto label_394cc8;
        case 0x394cccu: goto label_394ccc;
        case 0x394cd0u: goto label_394cd0;
        case 0x394cd4u: goto label_394cd4;
        case 0x394cd8u: goto label_394cd8;
        case 0x394cdcu: goto label_394cdc;
        case 0x394ce0u: goto label_394ce0;
        case 0x394ce4u: goto label_394ce4;
        case 0x394ce8u: goto label_394ce8;
        case 0x394cecu: goto label_394cec;
        case 0x394cf0u: goto label_394cf0;
        case 0x394cf4u: goto label_394cf4;
        case 0x394cf8u: goto label_394cf8;
        case 0x394cfcu: goto label_394cfc;
        case 0x394d00u: goto label_394d00;
        case 0x394d04u: goto label_394d04;
        case 0x394d08u: goto label_394d08;
        case 0x394d0cu: goto label_394d0c;
        case 0x394d10u: goto label_394d10;
        case 0x394d14u: goto label_394d14;
        case 0x394d18u: goto label_394d18;
        case 0x394d1cu: goto label_394d1c;
        case 0x394d20u: goto label_394d20;
        case 0x394d24u: goto label_394d24;
        case 0x394d28u: goto label_394d28;
        case 0x394d2cu: goto label_394d2c;
        case 0x394d30u: goto label_394d30;
        case 0x394d34u: goto label_394d34;
        case 0x394d38u: goto label_394d38;
        case 0x394d3cu: goto label_394d3c;
        case 0x394d40u: goto label_394d40;
        case 0x394d44u: goto label_394d44;
        case 0x394d48u: goto label_394d48;
        case 0x394d4cu: goto label_394d4c;
        case 0x394d50u: goto label_394d50;
        case 0x394d54u: goto label_394d54;
        case 0x394d58u: goto label_394d58;
        case 0x394d5cu: goto label_394d5c;
        case 0x394d60u: goto label_394d60;
        case 0x394d64u: goto label_394d64;
        case 0x394d68u: goto label_394d68;
        case 0x394d6cu: goto label_394d6c;
        default: break;
    }

    ctx->pc = 0x394750u;

label_394750:
    // 0x394750: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x394750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_394754:
    // 0x394754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394758:
    // 0x394758: 0x24846130  addiu       $a0, $a0, 0x6130
    ctx->pc = 0x394758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
label_39475c:
    // 0x39475c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_394760:
    // 0x394760: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x394760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_394764:
    // 0x394764: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x394764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_394768:
    // 0x394768: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x394768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_39476c:
    // 0x39476c: 0x0  nop
    ctx->pc = 0x39476cu;
    // NOP
label_394770:
    // 0x394770: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_394774:
    if (ctx->pc == 0x394774u) {
        ctx->pc = 0x394778u;
        goto label_394778;
    }
    ctx->pc = 0x394770u;
    {
        const bool branch_taken_0x394770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x394770) {
            ctx->pc = 0x39475Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39475c;
        }
    }
    ctx->pc = 0x394778u;
label_394778:
    // 0x394778: 0x3e00008  jr          $ra
label_39477c:
    if (ctx->pc == 0x39477Cu) {
        ctx->pc = 0x394780u;
        goto label_394780;
    }
    ctx->pc = 0x394778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394780u;
label_394780:
    // 0x394780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_394784:
    // 0x394784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_394788:
    // 0x394788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39478c:
    // 0x39478c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_394790:
    // 0x394790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394794:
    // 0x394794: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_394798:
    if (ctx->pc == 0x394798u) {
        ctx->pc = 0x394798u;
            // 0x394798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39479Cu;
        goto label_39479c;
    }
    ctx->pc = 0x394794u;
    {
        const bool branch_taken_0x394794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394794u;
            // 0x394798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394794) {
            ctx->pc = 0x3947D8u;
            goto label_3947d8;
        }
    }
    ctx->pc = 0x39479Cu;
label_39479c:
    // 0x39479c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3947a0:
    // 0x3947a0: 0x24428050  addiu       $v0, $v0, -0x7FB0
    ctx->pc = 0x3947a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934608));
label_3947a4:
    // 0x3947a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3947a8:
    if (ctx->pc == 0x3947A8u) {
        ctx->pc = 0x3947A8u;
            // 0x3947a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3947ACu;
        goto label_3947ac;
    }
    ctx->pc = 0x3947A4u;
    {
        const bool branch_taken_0x3947a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3947A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3947A4u;
            // 0x3947a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947a4) {
            ctx->pc = 0x3947C0u;
            goto label_3947c0;
        }
    }
    ctx->pc = 0x3947ACu;
label_3947ac:
    // 0x3947ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3947acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3947b0:
    // 0x3947b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3947b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3947b4:
    // 0x3947b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3947b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3947b8:
    // 0x3947b8: 0xc057a68  jal         func_15E9A0
label_3947bc:
    if (ctx->pc == 0x3947BCu) {
        ctx->pc = 0x3947BCu;
            // 0x3947bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3947C0u;
        goto label_3947c0;
    }
    ctx->pc = 0x3947B8u;
    SET_GPR_U32(ctx, 31, 0x3947C0u);
    ctx->pc = 0x3947BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3947B8u;
            // 0x3947bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3947C0u; }
        if (ctx->pc != 0x3947C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3947C0u; }
        if (ctx->pc != 0x3947C0u) { return; }
    }
    ctx->pc = 0x3947C0u;
label_3947c0:
    // 0x3947c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3947c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3947c4:
    // 0x3947c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3947c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3947c8:
    // 0x3947c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3947cc:
    if (ctx->pc == 0x3947CCu) {
        ctx->pc = 0x3947CCu;
            // 0x3947cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3947D0u;
        goto label_3947d0;
    }
    ctx->pc = 0x3947C8u;
    {
        const bool branch_taken_0x3947c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3947c8) {
            ctx->pc = 0x3947CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3947C8u;
            // 0x3947cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3947DCu;
            goto label_3947dc;
        }
    }
    ctx->pc = 0x3947D0u;
label_3947d0:
    // 0x3947d0: 0xc0400a8  jal         func_1002A0
label_3947d4:
    if (ctx->pc == 0x3947D4u) {
        ctx->pc = 0x3947D4u;
            // 0x3947d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3947D8u;
        goto label_3947d8;
    }
    ctx->pc = 0x3947D0u;
    SET_GPR_U32(ctx, 31, 0x3947D8u);
    ctx->pc = 0x3947D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3947D0u;
            // 0x3947d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3947D8u; }
        if (ctx->pc != 0x3947D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3947D8u; }
        if (ctx->pc != 0x3947D8u) { return; }
    }
    ctx->pc = 0x3947D8u;
label_3947d8:
    // 0x3947d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3947d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3947dc:
    // 0x3947dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3947dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3947e0:
    // 0x3947e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3947e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3947e4:
    // 0x3947e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3947e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3947e8:
    // 0x3947e8: 0x3e00008  jr          $ra
label_3947ec:
    if (ctx->pc == 0x3947ECu) {
        ctx->pc = 0x3947ECu;
            // 0x3947ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3947F0u;
        goto label_3947f0;
    }
    ctx->pc = 0x3947E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3947ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3947E8u;
            // 0x3947ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3947F0u;
label_3947f0:
    // 0x3947f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3947f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3947f4:
    // 0x3947f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3947f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3947f8:
    // 0x3947f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3947f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3947fc:
    // 0x3947fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3947fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_394800:
    // 0x394800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x394800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_394804:
    // 0x394804: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x394804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_394808:
    // 0x394808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x394808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39480c:
    // 0x39480c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x39480cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_394810:
    // 0x394810: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x394810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_394814:
    // 0x394814: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x394814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_394818:
    // 0x394818: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x394818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39481c:
    // 0x39481c: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
label_394820:
    if (ctx->pc == 0x394820u) {
        ctx->pc = 0x394820u;
            // 0x394820: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394824u;
        goto label_394824;
    }
    ctx->pc = 0x39481Cu;
    {
        const bool branch_taken_0x39481c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39481Cu;
            // 0x394820: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39481c) {
            ctx->pc = 0x394AC8u;
            goto label_394ac8;
        }
    }
    ctx->pc = 0x394824u;
label_394824:
    // 0x394824: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x394824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_394828:
    // 0x394828: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_39482c:
    if (ctx->pc == 0x39482Cu) {
        ctx->pc = 0x39482Cu;
            // 0x39482c: 0xc6410064  lwc1        $f1, 0x64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x394830u;
        goto label_394830;
    }
    ctx->pc = 0x394828u;
    {
        const bool branch_taken_0x394828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x394828) {
            ctx->pc = 0x39482Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394828u;
            // 0x39482c: 0xc6410064  lwc1        $f1, 0x64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3948C8u;
            goto label_3948c8;
        }
    }
    ctx->pc = 0x394830u;
label_394830:
    // 0x394830: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x394830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_394834:
    // 0x394834: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x394834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_394838:
    // 0x394838: 0x5020001c  beql        $at, $zero, . + 4 + (0x1C << 2)
label_39483c:
    if (ctx->pc == 0x39483Cu) {
        ctx->pc = 0x39483Cu;
            // 0x39483c: 0xc6410088  lwc1        $f1, 0x88($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x394840u;
        goto label_394840;
    }
    ctx->pc = 0x394838u;
    {
        const bool branch_taken_0x394838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x394838) {
            ctx->pc = 0x39483Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394838u;
            // 0x39483c: 0xc6410088  lwc1        $f1, 0x88($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3948ACu;
            goto label_3948ac;
        }
    }
    ctx->pc = 0x394840u;
label_394840:
    // 0x394840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x394840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394844:
    // 0x394844: 0x0  nop
    ctx->pc = 0x394844u;
    // NOP
label_394848:
    // 0x394848: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x394848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_39484c:
    // 0x39484c: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x39484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394850:
    // 0x394850: 0xc6450064  lwc1        $f5, 0x64($s2)
    ctx->pc = 0x394850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_394854:
    // 0x394854: 0xc6440088  lwc1        $f4, 0x88($s2)
    ctx->pc = 0x394854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_394858:
    // 0x394858: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x394858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_39485c:
    // 0x39485c: 0x46052001  sub.s       $f0, $f4, $f5
    ctx->pc = 0x39485cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_394860:
    // 0x394860: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x394860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_394864:
    // 0x394864: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x394864u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_394868:
    // 0x394868: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39486c:
    // 0x39486c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39486cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_394870:
    // 0x394870: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x394870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_394874:
    // 0x394874: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_394878:
    // 0x394878: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x394878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_39487c:
    // 0x39487c: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x39487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394880:
    // 0x394880: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x394880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394884:
    // 0x394884: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x394884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_394888:
    // 0x394888: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x394888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_39488c:
    // 0x39488c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x39488cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_394890:
    // 0x394890: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_394894:
    // 0x394894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x394894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_394898:
    // 0x394898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x394898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_39489c:
    // 0x39489c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39489cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3948a0:
    // 0x3948a0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3948a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3948a4:
    // 0x3948a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3948a8:
    if (ctx->pc == 0x3948A8u) {
        ctx->pc = 0x3948A8u;
            // 0x3948a8: 0x8e4a0074  lw          $t2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x3948ACu;
        goto label_3948ac;
    }
    ctx->pc = 0x3948A4u;
    {
        const bool branch_taken_0x3948a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3948A4u;
            // 0x3948a8: 0x8e4a0074  lw          $t2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948a4) {
            ctx->pc = 0x3948E0u;
            goto label_3948e0;
        }
    }
    ctx->pc = 0x3948ACu;
label_3948ac:
    // 0x3948ac: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x3948acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3948b0:
    // 0x3948b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3948b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3948b4:
    // 0x3948b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3948b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3948b8:
    // 0x3948b8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x3948b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_3948bc:
    // 0x3948bc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3948bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3948c0:
    // 0x3948c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3948c4:
    if (ctx->pc == 0x3948C4u) {
        ctx->pc = 0x3948C8u;
        goto label_3948c8;
    }
    ctx->pc = 0x3948C0u;
    {
        const bool branch_taken_0x3948c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3948c0) {
            ctx->pc = 0x3948DCu;
            goto label_3948dc;
        }
    }
    ctx->pc = 0x3948C8u;
label_3948c8:
    // 0x3948c8: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x3948c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3948cc:
    // 0x3948cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3948ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3948d0:
    // 0x3948d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3948d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3948d4:
    // 0x3948d4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x3948d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_3948d8:
    // 0x3948d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3948d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3948dc:
    // 0x3948dc: 0x8e4a0074  lw          $t2, 0x74($s2)
    ctx->pc = 0x3948dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_3948e0:
    // 0x3948e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3948e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3948e4:
    // 0x3948e4: 0x51420046  beql        $t2, $v0, . + 4 + (0x46 << 2)
label_3948e8:
    if (ctx->pc == 0x3948E8u) {
        ctx->pc = 0x3948E8u;
            // 0x3948e8: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->pc = 0x3948ECu;
        goto label_3948ec;
    }
    ctx->pc = 0x3948E4u;
    {
        const bool branch_taken_0x3948e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x3948e4) {
            ctx->pc = 0x3948E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3948E4u;
            // 0x3948e8: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394A00u;
            goto label_394a00;
        }
    }
    ctx->pc = 0x3948ECu;
label_3948ec:
    // 0x3948ec: 0x8e490080  lw          $t1, 0x80($s2)
    ctx->pc = 0x3948ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_3948f0:
    // 0x3948f0: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x3948f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3948f4:
    // 0x3948f4: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x3948f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3948f8:
    // 0x3948f8: 0x5020003b  beql        $at, $zero, . + 4 + (0x3B << 2)
label_3948fc:
    if (ctx->pc == 0x3948FCu) {
        ctx->pc = 0x3948FCu;
            // 0x3948fc: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->pc = 0x394900u;
        goto label_394900;
    }
    ctx->pc = 0x3948F8u;
    {
        const bool branch_taken_0x3948f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3948f8) {
            ctx->pc = 0x3948FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3948F8u;
            // 0x3948fc: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3949E8u;
            goto label_3949e8;
        }
    }
    ctx->pc = 0x394900u;
label_394900:
    // 0x394900: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x394900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_394904:
    // 0x394904: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x394904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_394908:
    // 0x394908: 0x25e02  srl         $t3, $v0, 24
    ctx->pc = 0x394908u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
label_39490c:
    // 0x39490c: 0x6a3824  and         $a3, $v1, $t2
    ctx->pc = 0x39490cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_394910:
    // 0x394910: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x394910u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_394914:
    // 0x394914: 0x71e02  srl         $v1, $a3, 24
    ctx->pc = 0x394914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_394918:
    // 0x394918: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x394918u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
label_39491c:
    // 0x39491c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x39491cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_394920:
    // 0x394920: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x394920u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
label_394924:
    // 0x394924: 0x1856023  subu        $t4, $t4, $a1
    ctx->pc = 0x394924u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_394928:
    // 0x394928: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x394928u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_39492c:
    // 0x39492c: 0x10c6818  mult        $t5, $t0, $t4
    ctx->pc = 0x39492cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_394930:
    // 0x394930: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x394930u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_394934:
    // 0x394934: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x394934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_394938:
    // 0x394938: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x394938u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
label_39493c:
    // 0x39493c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x39493cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_394940:
    // 0x394940: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x394940u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_394944:
    // 0x394944: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x394944u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_394948:
    // 0x394948: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x394948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_39494c:
    // 0x39494c: 0x1a9001a  div         $zero, $t5, $t1
    ctx->pc = 0x39494cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_394950:
    // 0x394950: 0x710b6018  mult1       $t4, $t0, $t3
    ctx->pc = 0x394950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_394954:
    // 0x394954: 0x25a02  srl         $t3, $v0, 8
    ctx->pc = 0x394954u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_394958:
    // 0x394958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x394958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39495c:
    // 0x39495c: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x39495cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_394960:
    // 0x394960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x394960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_394964:
    // 0x394964: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x394964u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
label_394968:
    // 0x394968: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x394968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_39496c:
    // 0x39496c: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x39496cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_394970:
    // 0x394970: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x394970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_394974:
    // 0x394974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x394974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_394978:
    // 0x394978: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x394978u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_39497c:
    // 0x39497c: 0x710b5818  mult1       $t3, $t0, $t3
    ctx->pc = 0x39497cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_394980:
    // 0x394980: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x394980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_394984:
    // 0x394984: 0x71021018  mult1       $v0, $t0, $v0
    ctx->pc = 0x394984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_394988:
    // 0x394988: 0x6812  mflo        $t5
    ctx->pc = 0x394988u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_39498c:
    // 0x39498c: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x39498cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_394990:
    // 0x394990: 0xad4021  addu        $t0, $a1, $t5
    ctx->pc = 0x394990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_394994:
    // 0x394994: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x394994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_394998:
    // 0x394998: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_39499c:
    // 0x39499c: 0x2812  mflo        $a1
    ctx->pc = 0x39499cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3949a0:
    // 0x3949a0: 0x169001a  div         $zero, $t3, $t1
    ctx->pc = 0x3949a0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3949a4:
    // 0x3949a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3949a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3949a8:
    // 0x3949a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3949a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3949ac:
    // 0x3949ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3949acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_3949b0:
    // 0x3949b0: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x3949b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
label_3949b4:
    // 0x3949b4: 0x2012  mflo        $a0
    ctx->pc = 0x3949b4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3949b8:
    // 0x3949b8: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x3949b8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3949bc:
    // 0x3949bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3949bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3949c0:
    // 0x3949c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3949c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3949c4:
    // 0x3949c4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3949c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3949c8:
    // 0x3949c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3949c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3949cc:
    // 0x3949cc: 0x1012  mflo        $v0
    ctx->pc = 0x3949ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3949d0:
    // 0x3949d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3949d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3949d4:
    // 0x3949d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3949d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3949d8:
    // 0x3949d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3949d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3949dc:
    // 0x3949dc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3949dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_3949e0:
    // 0x3949e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3949e4:
    if (ctx->pc == 0x3949E4u) {
        ctx->pc = 0x3949E4u;
            // 0x3949e4: 0xe29825  or          $s3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->pc = 0x3949E8u;
        goto label_3949e8;
    }
    ctx->pc = 0x3949E0u;
    {
        const bool branch_taken_0x3949e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3949E0u;
            // 0x3949e4: 0xe29825  or          $s3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949e0) {
            ctx->pc = 0x394A04u;
            goto label_394a04;
        }
    }
    ctx->pc = 0x3949E8u;
label_3949e8:
    // 0x3949e8: 0x1401827  not         $v1, $t2
    ctx->pc = 0x3949e8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 10) | GPR_U64(ctx, 0)));
label_3949ec:
    // 0x3949ec: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x3949ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3949f0:
    // 0x3949f0: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x3949f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
label_3949f4:
    // 0x3949f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3949f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3949f8:
    // 0x3949f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3949fc:
    if (ctx->pc == 0x3949FCu) {
        ctx->pc = 0x3949FCu;
            // 0x3949fc: 0x829825  or          $s3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->pc = 0x394A00u;
        goto label_394a00;
    }
    ctx->pc = 0x3949F8u;
    {
        const bool branch_taken_0x3949f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3949F8u;
            // 0x3949fc: 0x829825  or          $s3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949f8) {
            ctx->pc = 0x394A04u;
            goto label_394a04;
        }
    }
    ctx->pc = 0x394A00u;
label_394a00:
    // 0x394a00: 0x4a9824  and         $s3, $v0, $t2
    ctx->pc = 0x394a00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_394a04:
    // 0x394a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394a08:
    // 0x394a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394a0c:
    // 0x394a0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x394a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394a10:
    // 0x394a10: 0xc0506b8  jal         func_141AE0
label_394a14:
    if (ctx->pc == 0x394A14u) {
        ctx->pc = 0x394A14u;
            // 0x394a14: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394A18u;
        goto label_394a18;
    }
    ctx->pc = 0x394A10u;
    SET_GPR_U32(ctx, 31, 0x394A18u);
    ctx->pc = 0x394A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394A10u;
            // 0x394a14: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394A18u; }
        if (ctx->pc != 0x394A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394A18u; }
        if (ctx->pc != 0x394A18u) { return; }
    }
    ctx->pc = 0x394A18u;
label_394a18:
    // 0x394a18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x394a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_394a1c:
    // 0x394a1c: 0x8c446140  lw          $a0, 0x6140($v0)
    ctx->pc = 0x394a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24896)));
label_394a20:
    // 0x394a20: 0xc0506ac  jal         func_141AB0
label_394a24:
    if (ctx->pc == 0x394A24u) {
        ctx->pc = 0x394A24u;
            // 0x394a24: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x394A28u;
        goto label_394a28;
    }
    ctx->pc = 0x394A20u;
    SET_GPR_U32(ctx, 31, 0x394A28u);
    ctx->pc = 0x394A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394A20u;
            // 0x394a24: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394A28u; }
        if (ctx->pc != 0x394A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394A28u; }
        if (ctx->pc != 0x394A28u) { return; }
    }
    ctx->pc = 0x394A28u;
label_394a28:
    // 0x394a28: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x394a28u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394a2c:
    // 0x394a2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x394a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_394a30:
    // 0x394a30: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x394a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_394a34:
    // 0x394a34: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x394a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_394a38:
    // 0x394a38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x394a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394a3c:
    // 0x394a3c: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x394a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_394a40:
    // 0x394a40: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x394a40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_394a44:
    // 0x394a44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x394a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394a48:
    // 0x394a48: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x394a48u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_394a4c:
    // 0x394a4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x394a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_394a50:
    // 0x394a50: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x394a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_394a54:
    // 0x394a54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x394a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_394a58:
    // 0x394a58: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x394a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394a5c:
    // 0x394a5c: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x394a5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_394a60:
    // 0x394a60: 0x320f809  jalr        $t9
label_394a64:
    if (ctx->pc == 0x394A64u) {
        ctx->pc = 0x394A64u;
            // 0x394a64: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x394A68u;
        goto label_394a68;
    }
    ctx->pc = 0x394A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394A68u);
        ctx->pc = 0x394A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394A60u;
            // 0x394a64: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394A68u; }
            if (ctx->pc != 0x394A68u) { return; }
        }
        }
    }
    ctx->pc = 0x394A68u;
label_394a68:
    // 0x394a68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x394a68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394a6c:
    // 0x394a6c: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x394a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_394a70:
    // 0x394a70: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x394a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_394a74:
    // 0x394a74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x394a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394a78:
    // 0x394a78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x394a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394a7c:
    // 0x394a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394a80:
    // 0x394a80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x394a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_394a84:
    // 0x394a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x394a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394a88:
    // 0x394a88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x394a88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_394a8c:
    // 0x394a8c: 0x0  nop
    ctx->pc = 0x394a8cu;
    // NOP
label_394a90:
    // 0x394a90: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x394a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_394a94:
    // 0x394a94: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x394a94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_394a98:
    // 0x394a98: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x394a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_394a9c:
    // 0x394a9c: 0x320f809  jalr        $t9
label_394aa0:
    if (ctx->pc == 0x394AA0u) {
        ctx->pc = 0x394AA0u;
            // 0x394aa0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x394AA4u;
        goto label_394aa4;
    }
    ctx->pc = 0x394A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394AA4u);
        ctx->pc = 0x394AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394A9Cu;
            // 0x394aa0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394AA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394AA4u; }
            if (ctx->pc != 0x394AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x394AA4u;
label_394aa4:
    // 0x394aa4: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x394aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_394aa8:
    // 0x394aa8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x394aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394aac:
    // 0x394aac: 0x320f809  jalr        $t9
label_394ab0:
    if (ctx->pc == 0x394AB0u) {
        ctx->pc = 0x394AB0u;
            // 0x394ab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394AB4u;
        goto label_394ab4;
    }
    ctx->pc = 0x394AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394AB4u);
        ctx->pc = 0x394AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394AACu;
            // 0x394ab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394AB4u; }
            if (ctx->pc != 0x394AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x394AB4u;
label_394ab4:
    // 0x394ab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x394ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394ab8:
    // 0x394ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x394ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394abc:
    // 0x394abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394ac0:
    // 0x394ac0: 0xc0506b8  jal         func_141AE0
label_394ac4:
    if (ctx->pc == 0x394AC4u) {
        ctx->pc = 0x394AC4u;
            // 0x394ac4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394AC8u;
        goto label_394ac8;
    }
    ctx->pc = 0x394AC0u;
    SET_GPR_U32(ctx, 31, 0x394AC8u);
    ctx->pc = 0x394AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394AC0u;
            // 0x394ac4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394AC8u; }
        if (ctx->pc != 0x394AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394AC8u; }
        if (ctx->pc != 0x394AC8u) { return; }
    }
    ctx->pc = 0x394AC8u;
label_394ac8:
    // 0x394ac8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x394ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_394acc:
    // 0x394acc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x394accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394ad0:
    // 0x394ad0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x394ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394ad4:
    // 0x394ad4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394ad8:
    // 0x394ad8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x394ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_394adc:
    // 0x394adc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x394adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394ae0:
    // 0x394ae0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x394ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394ae4:
    // 0x394ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x394ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394ae8:
    // 0x394ae8: 0x3e00008  jr          $ra
label_394aec:
    if (ctx->pc == 0x394AECu) {
        ctx->pc = 0x394AECu;
            // 0x394aec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x394AF0u;
        goto label_394af0;
    }
    ctx->pc = 0x394AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394AE8u;
            // 0x394aec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394AF0u;
label_394af0:
    // 0x394af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_394af4:
    // 0x394af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x394af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394af8:
    // 0x394af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x394af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_394afc:
    // 0x394afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_394b00:
    // 0x394b00: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x394b00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_394b04:
    // 0x394b04: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
label_394b08:
    if (ctx->pc == 0x394B08u) {
        ctx->pc = 0x394B08u;
            // 0x394b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394B0Cu;
        goto label_394b0c;
    }
    ctx->pc = 0x394B04u;
    {
        const bool branch_taken_0x394b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x394B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394B04u;
            // 0x394b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b04) {
            ctx->pc = 0x394BA8u;
            goto label_394ba8;
        }
    }
    ctx->pc = 0x394B0Cu;
label_394b0c:
    // 0x394b0c: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
label_394b10:
    if (ctx->pc == 0x394B10u) {
        ctx->pc = 0x394B10u;
            // 0x394b10: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x394B14u;
        goto label_394b14;
    }
    ctx->pc = 0x394B0Cu;
    {
        const bool branch_taken_0x394b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x394b0c) {
            ctx->pc = 0x394B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394B0Cu;
            // 0x394b10: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394B94u;
            goto label_394b94;
        }
    }
    ctx->pc = 0x394B14u;
label_394b14:
    // 0x394b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x394b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394b18:
    // 0x394b18: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_394b1c:
    if (ctx->pc == 0x394B1Cu) {
        ctx->pc = 0x394B1Cu;
            // 0x394b1c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x394B20u;
        goto label_394b20;
    }
    ctx->pc = 0x394B18u;
    {
        const bool branch_taken_0x394b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x394b18) {
            ctx->pc = 0x394B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394B18u;
            // 0x394b1c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x394B44u;
            goto label_394b44;
        }
    }
    ctx->pc = 0x394B20u;
label_394b20:
    // 0x394b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_394b24:
    // 0x394b24: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_394b28:
    if (ctx->pc == 0x394B28u) {
        ctx->pc = 0x394B28u;
            // 0x394b28: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x394B2Cu;
        goto label_394b2c;
    }
    ctx->pc = 0x394B24u;
    {
        const bool branch_taken_0x394b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x394b24) {
            ctx->pc = 0x394B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394B24u;
            // 0x394b28: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394B34u;
            goto label_394b34;
        }
    }
    ctx->pc = 0x394B2Cu;
label_394b2c:
    // 0x394b2c: 0x10000036  b           . + 4 + (0x36 << 2)
label_394b30:
    if (ctx->pc == 0x394B30u) {
        ctx->pc = 0x394B34u;
        goto label_394b34;
    }
    ctx->pc = 0x394B2Cu;
    {
        const bool branch_taken_0x394b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394b2c) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394B34u;
label_394b34:
    // 0x394b34: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x394b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394b38:
    // 0x394b38: 0x320f809  jalr        $t9
label_394b3c:
    if (ctx->pc == 0x394B3Cu) {
        ctx->pc = 0x394B40u;
        goto label_394b40;
    }
    ctx->pc = 0x394B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394B40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x394B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394B40u; }
            if (ctx->pc != 0x394B40u) { return; }
        }
        }
    }
    ctx->pc = 0x394B40u;
label_394b40:
    // 0x394b40: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x394b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394b44:
    // 0x394b44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x394b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_394b48:
    // 0x394b48: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x394b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_394b4c:
    // 0x394b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x394b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_394b50:
    // 0x394b50: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x394b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_394b54:
    // 0x394b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x394b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_394b58:
    // 0x394b58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_394b5c:
    // 0x394b5c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x394b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_394b60:
    // 0x394b60: 0x0  nop
    ctx->pc = 0x394b60u;
    // NOP
label_394b64:
    // 0x394b64: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x394b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_394b68:
    // 0x394b68: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x394b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_394b6c:
    // 0x394b6c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x394b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_394b70:
    // 0x394b70: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_394b74:
    if (ctx->pc == 0x394B74u) {
        ctx->pc = 0x394B78u;
        goto label_394b78;
    }
    ctx->pc = 0x394B70u;
    {
        const bool branch_taken_0x394b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x394b70) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394B78u;
label_394b78:
    // 0x394b78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x394b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394b7c:
    // 0x394b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394b80:
    // 0x394b80: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x394b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_394b84:
    // 0x394b84: 0x320f809  jalr        $t9
label_394b88:
    if (ctx->pc == 0x394B88u) {
        ctx->pc = 0x394B88u;
            // 0x394b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394B8Cu;
        goto label_394b8c;
    }
    ctx->pc = 0x394B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394B8Cu);
        ctx->pc = 0x394B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394B84u;
            // 0x394b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394B8Cu; }
            if (ctx->pc != 0x394B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x394B8Cu;
label_394b8c:
    // 0x394b8c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_394b90:
    if (ctx->pc == 0x394B90u) {
        ctx->pc = 0x394B94u;
        goto label_394b94;
    }
    ctx->pc = 0x394B8Cu;
    {
        const bool branch_taken_0x394b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394b8c) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394B94u;
label_394b94:
    // 0x394b94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x394b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_394b98:
    // 0x394b98: 0x320f809  jalr        $t9
label_394b9c:
    if (ctx->pc == 0x394B9Cu) {
        ctx->pc = 0x394BA0u;
        goto label_394ba0;
    }
    ctx->pc = 0x394B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394BA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x394BA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394BA0u; }
            if (ctx->pc != 0x394BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x394BA0u;
label_394ba0:
    // 0x394ba0: 0x10000019  b           . + 4 + (0x19 << 2)
label_394ba4:
    if (ctx->pc == 0x394BA4u) {
        ctx->pc = 0x394BA8u;
        goto label_394ba8;
    }
    ctx->pc = 0x394BA0u;
    {
        const bool branch_taken_0x394ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394ba0) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394BA8u;
label_394ba8:
    // 0x394ba8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_394bac:
    if (ctx->pc == 0x394BACu) {
        ctx->pc = 0x394BB0u;
        goto label_394bb0;
    }
    ctx->pc = 0x394BA8u;
    {
        const bool branch_taken_0x394ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x394ba8) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394BB0u;
label_394bb0:
    // 0x394bb0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x394bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_394bb4:
    // 0x394bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394bb8:
    // 0x394bb8: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x394bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
label_394bbc:
    // 0x394bbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x394bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_394bc0:
    // 0x394bc0: 0x5470000d  bnel        $v1, $s0, . + 4 + (0xD << 2)
label_394bc4:
    if (ctx->pc == 0x394BC4u) {
        ctx->pc = 0x394BC4u;
            // 0x394bc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x394BC8u;
        goto label_394bc8;
    }
    ctx->pc = 0x394BC0u;
    {
        const bool branch_taken_0x394bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x394bc0) {
            ctx->pc = 0x394BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394BC0u;
            // 0x394bc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394BF8u;
            goto label_394bf8;
        }
    }
    ctx->pc = 0x394BC8u;
label_394bc8:
    // 0x394bc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x394bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394bcc:
    // 0x394bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394bd0:
    // 0x394bd0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x394bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_394bd4:
    // 0x394bd4: 0x320f809  jalr        $t9
label_394bd8:
    if (ctx->pc == 0x394BD8u) {
        ctx->pc = 0x394BD8u;
            // 0x394bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394BDCu;
        goto label_394bdc;
    }
    ctx->pc = 0x394BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394BDCu);
        ctx->pc = 0x394BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394BD4u;
            // 0x394bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x394BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x394BDCu; }
            if (ctx->pc != 0x394BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x394BDCu;
label_394bdc:
    // 0x394bdc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x394bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_394be0:
    // 0x394be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394be4:
    // 0x394be4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x394be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_394be8:
    // 0x394be8: 0xc057b7c  jal         func_15EDF0
label_394bec:
    if (ctx->pc == 0x394BECu) {
        ctx->pc = 0x394BECu;
            // 0x394bec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x394BF0u;
        goto label_394bf0;
    }
    ctx->pc = 0x394BE8u;
    SET_GPR_U32(ctx, 31, 0x394BF0u);
    ctx->pc = 0x394BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394BE8u;
            // 0x394bec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394BF0u; }
        if (ctx->pc != 0x394BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394BF0u; }
        if (ctx->pc != 0x394BF0u) { return; }
    }
    ctx->pc = 0x394BF0u;
label_394bf0:
    // 0x394bf0: 0x10000005  b           . + 4 + (0x5 << 2)
label_394bf4:
    if (ctx->pc == 0x394BF4u) {
        ctx->pc = 0x394BF8u;
        goto label_394bf8;
    }
    ctx->pc = 0x394BF0u;
    {
        const bool branch_taken_0x394bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394bf0) {
            ctx->pc = 0x394C08u;
            goto label_394c08;
        }
    }
    ctx->pc = 0x394BF8u;
label_394bf8:
    // 0x394bf8: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x394bf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_394bfc:
    // 0x394bfc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_394c00:
    if (ctx->pc == 0x394C00u) {
        ctx->pc = 0x394C00u;
            // 0x394c00: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x394C04u;
        goto label_394c04;
    }
    ctx->pc = 0x394BFCu;
    {
        const bool branch_taken_0x394bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394BFCu;
            // 0x394c00: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bfc) {
            ctx->pc = 0x394BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_394bbc;
        }
    }
    ctx->pc = 0x394C04u;
label_394c04:
    // 0x394c04: 0x0  nop
    ctx->pc = 0x394c04u;
    // NOP
label_394c08:
    // 0x394c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x394c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_394c0c:
    // 0x394c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394c10:
    // 0x394c10: 0x3e00008  jr          $ra
label_394c14:
    if (ctx->pc == 0x394C14u) {
        ctx->pc = 0x394C14u;
            // 0x394c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x394C18u;
        goto label_394c18;
    }
    ctx->pc = 0x394C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394C10u;
            // 0x394c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394C18u;
label_394c18:
    // 0x394c18: 0x0  nop
    ctx->pc = 0x394c18u;
    // NOP
label_394c1c:
    // 0x394c1c: 0x0  nop
    ctx->pc = 0x394c1cu;
    // NOP
label_394c20:
    // 0x394c20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x394c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_394c24:
    // 0x394c24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x394c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_394c28:
    // 0x394c28: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x394c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_394c2c:
    // 0x394c2c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x394c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_394c30:
    // 0x394c30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x394c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_394c34:
    // 0x394c34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x394c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_394c38:
    // 0x394c38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x394c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_394c3c:
    // 0x394c3c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x394c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_394c40:
    // 0x394c40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x394c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_394c44:
    // 0x394c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x394c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_394c48:
    // 0x394c48: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x394c48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_394c4c:
    // 0x394c4c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x394c4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_394c50:
    // 0x394c50: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x394c50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_394c54:
    // 0x394c54: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x394c54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_394c58:
    // 0x394c58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x394c58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_394c5c:
    // 0x394c5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x394c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_394c60:
    // 0x394c60: 0x8c940034  lw          $s4, 0x34($a0)
    ctx->pc = 0x394c60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_394c64:
    // 0x394c64: 0x8c970014  lw          $s7, 0x14($a0)
    ctx->pc = 0x394c64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_394c68:
    // 0x394c68: 0xc4980054  lwc1        $f24, 0x54($a0)
    ctx->pc = 0x394c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_394c6c:
    // 0x394c6c: 0x8c950024  lw          $s5, 0x24($a0)
    ctx->pc = 0x394c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_394c70:
    // 0x394c70: 0xc4970064  lwc1        $f23, 0x64($a0)
    ctx->pc = 0x394c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_394c74:
    // 0x394c74: 0x8c930084  lw          $s3, 0x84($a0)
    ctx->pc = 0x394c74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_394c78:
    // 0x394c78: 0xc4960074  lwc1        $f22, 0x74($a0)
    ctx->pc = 0x394c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_394c7c:
    // 0x394c7c: 0x8c920094  lw          $s2, 0x94($a0)
    ctx->pc = 0x394c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_394c80:
    // 0x394c80: 0xc49500d4  lwc1        $f21, 0xD4($a0)
    ctx->pc = 0x394c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394c84:
    // 0x394c84: 0x8c9600a4  lw          $s6, 0xA4($a0)
    ctx->pc = 0x394c84u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_394c88:
    // 0x394c88: 0xc49400e4  lwc1        $f20, 0xE4($a0)
    ctx->pc = 0x394c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394c8c:
    // 0x394c8c: 0x8c9100b4  lw          $s1, 0xB4($a0)
    ctx->pc = 0x394c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_394c90:
    // 0x394c90: 0x8c9000c4  lw          $s0, 0xC4($a0)
    ctx->pc = 0x394c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_394c94:
    // 0x394c94: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
label_394c98:
    if (ctx->pc == 0x394C98u) {
        ctx->pc = 0x394C98u;
            // 0x394c98: 0xc4990044  lwc1        $f25, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->pc = 0x394C9Cu;
        goto label_394c9c;
    }
    ctx->pc = 0x394C94u;
    {
        const bool branch_taken_0x394c94 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x394C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394C94u;
            // 0x394c98: 0xc4990044  lwc1        $f25, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c94) {
            ctx->pc = 0x394CA0u;
            goto label_394ca0;
        }
    }
    ctx->pc = 0x394C9Cu;
label_394c9c:
    // 0x394c9c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x394c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394ca0:
    // 0x394ca0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_394ca4:
    if (ctx->pc == 0x394CA4u) {
        ctx->pc = 0x394CA8u;
        goto label_394ca8;
    }
    ctx->pc = 0x394CA0u;
    {
        const bool branch_taken_0x394ca0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x394ca0) {
            ctx->pc = 0x394CACu;
            goto label_394cac;
        }
    }
    ctx->pc = 0x394CA8u;
label_394ca8:
    // 0x394ca8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x394ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394cac:
    // 0x394cac: 0x6030003  bgezl       $s0, . + 4 + (0x3 << 2)
label_394cb0:
    if (ctx->pc == 0x394CB0u) {
        ctx->pc = 0x394CB0u;
            // 0x394cb0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x394CB4u;
        goto label_394cb4;
    }
    ctx->pc = 0x394CACu;
    {
        const bool branch_taken_0x394cac = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x394cac) {
            ctx->pc = 0x394CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394CACu;
            // 0x394cb0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394CBCu;
            goto label_394cbc;
        }
    }
    ctx->pc = 0x394CB4u;
label_394cb4:
    // 0x394cb4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x394cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394cb8:
    // 0x394cb8: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x394cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_394cbc:
    // 0x394cbc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x394cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_394cc0:
    // 0x394cc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x394cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_394cc4:
    // 0x394cc4: 0xc040140  jal         func_100500
label_394cc8:
    if (ctx->pc == 0x394CC8u) {
        ctx->pc = 0x394CC8u;
            // 0x394cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394CCCu;
        goto label_394ccc;
    }
    ctx->pc = 0x394CC4u;
    SET_GPR_U32(ctx, 31, 0x394CCCu);
    ctx->pc = 0x394CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394CC4u;
            // 0x394cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394CCCu; }
        if (ctx->pc != 0x394CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394CCCu; }
        if (ctx->pc != 0x394CCCu) { return; }
    }
    ctx->pc = 0x394CCCu;
label_394ccc:
    // 0x394ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x394cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394cd0:
    // 0x394cd0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_394cd4:
    if (ctx->pc == 0x394CD4u) {
        ctx->pc = 0x394CD8u;
        goto label_394cd8;
    }
    ctx->pc = 0x394CD0u;
    {
        const bool branch_taken_0x394cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x394cd0) {
            ctx->pc = 0x394D14u;
            goto label_394d14;
        }
    }
    ctx->pc = 0x394CD8u;
label_394cd8:
    // 0x394cd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x394cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_394cdc:
    // 0x394cdc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x394cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394ce0:
    // 0x394ce0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x394ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_394ce4:
    // 0x394ce4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x394ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394ce8:
    // 0x394ce8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x394ce8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_394cec:
    // 0x394cec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x394cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394cf0:
    // 0x394cf0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x394cf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_394cf4:
    // 0x394cf4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x394cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_394cf8:
    // 0x394cf8: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x394cf8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_394cfc:
    // 0x394cfc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x394cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394d00:
    // 0x394d00: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x394d00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394d04:
    // 0x394d04: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x394d04u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
label_394d08:
    // 0x394d08: 0xc0e5380  jal         func_394E00
label_394d0c:
    if (ctx->pc == 0x394D0Cu) {
        ctx->pc = 0x394D0Cu;
            // 0x394d0c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x394D10u;
        goto label_394d10;
    }
    ctx->pc = 0x394D08u;
    SET_GPR_U32(ctx, 31, 0x394D10u);
    ctx->pc = 0x394D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394D08u;
            // 0x394d0c: 0x4600a446  mov.s       $f17, $f20 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x394E00u;
    if (runtime->hasFunction(0x394E00u)) {
        auto targetFn = runtime->lookupFunction(0x394E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394D10u; }
        if (ctx->pc != 0x394D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00394E00_0x394e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394D10u; }
        if (ctx->pc != 0x394D10u) { return; }
    }
    ctx->pc = 0x394D10u;
label_394d10:
    // 0x394d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x394d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394d14:
    // 0x394d14: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x394d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_394d18:
    // 0x394d18: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x394d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_394d1c:
    // 0x394d1c: 0x24636150  addiu       $v1, $v1, 0x6150
    ctx->pc = 0x394d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
label_394d20:
    // 0x394d20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x394d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_394d24:
    // 0x394d24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x394d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_394d28:
    // 0x394d28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x394d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_394d2c:
    // 0x394d2c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x394d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_394d30:
    // 0x394d30: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x394d30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_394d34:
    // 0x394d34: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x394d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_394d38:
    // 0x394d38: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x394d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394d3c:
    // 0x394d3c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x394d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_394d40:
    // 0x394d40: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x394d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394d44:
    // 0x394d44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x394d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_394d48:
    // 0x394d48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x394d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_394d4c:
    // 0x394d4c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x394d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394d50:
    // 0x394d50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x394d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394d54:
    // 0x394d54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394d58:
    // 0x394d58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x394d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_394d5c:
    // 0x394d5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x394d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394d60:
    // 0x394d60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x394d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394d64:
    // 0x394d64: 0x3e00008  jr          $ra
label_394d68:
    if (ctx->pc == 0x394D68u) {
        ctx->pc = 0x394D68u;
            // 0x394d68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x394D6Cu;
        goto label_394d6c;
    }
    ctx->pc = 0x394D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394D64u;
            // 0x394d68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394D6Cu;
label_394d6c:
    // 0x394d6c: 0x0  nop
    ctx->pc = 0x394d6cu;
    // NOP
}
