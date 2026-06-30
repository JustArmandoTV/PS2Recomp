#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004738A0
// Address: 0x4738a0 - 0x473d70
void sub_004738A0_0x4738a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004738A0_0x4738a0");
#endif

    switch (ctx->pc) {
        case 0x4738a0u: goto label_4738a0;
        case 0x4738a4u: goto label_4738a4;
        case 0x4738a8u: goto label_4738a8;
        case 0x4738acu: goto label_4738ac;
        case 0x4738b0u: goto label_4738b0;
        case 0x4738b4u: goto label_4738b4;
        case 0x4738b8u: goto label_4738b8;
        case 0x4738bcu: goto label_4738bc;
        case 0x4738c0u: goto label_4738c0;
        case 0x4738c4u: goto label_4738c4;
        case 0x4738c8u: goto label_4738c8;
        case 0x4738ccu: goto label_4738cc;
        case 0x4738d0u: goto label_4738d0;
        case 0x4738d4u: goto label_4738d4;
        case 0x4738d8u: goto label_4738d8;
        case 0x4738dcu: goto label_4738dc;
        case 0x4738e0u: goto label_4738e0;
        case 0x4738e4u: goto label_4738e4;
        case 0x4738e8u: goto label_4738e8;
        case 0x4738ecu: goto label_4738ec;
        case 0x4738f0u: goto label_4738f0;
        case 0x4738f4u: goto label_4738f4;
        case 0x4738f8u: goto label_4738f8;
        case 0x4738fcu: goto label_4738fc;
        case 0x473900u: goto label_473900;
        case 0x473904u: goto label_473904;
        case 0x473908u: goto label_473908;
        case 0x47390cu: goto label_47390c;
        case 0x473910u: goto label_473910;
        case 0x473914u: goto label_473914;
        case 0x473918u: goto label_473918;
        case 0x47391cu: goto label_47391c;
        case 0x473920u: goto label_473920;
        case 0x473924u: goto label_473924;
        case 0x473928u: goto label_473928;
        case 0x47392cu: goto label_47392c;
        case 0x473930u: goto label_473930;
        case 0x473934u: goto label_473934;
        case 0x473938u: goto label_473938;
        case 0x47393cu: goto label_47393c;
        case 0x473940u: goto label_473940;
        case 0x473944u: goto label_473944;
        case 0x473948u: goto label_473948;
        case 0x47394cu: goto label_47394c;
        case 0x473950u: goto label_473950;
        case 0x473954u: goto label_473954;
        case 0x473958u: goto label_473958;
        case 0x47395cu: goto label_47395c;
        case 0x473960u: goto label_473960;
        case 0x473964u: goto label_473964;
        case 0x473968u: goto label_473968;
        case 0x47396cu: goto label_47396c;
        case 0x473970u: goto label_473970;
        case 0x473974u: goto label_473974;
        case 0x473978u: goto label_473978;
        case 0x47397cu: goto label_47397c;
        case 0x473980u: goto label_473980;
        case 0x473984u: goto label_473984;
        case 0x473988u: goto label_473988;
        case 0x47398cu: goto label_47398c;
        case 0x473990u: goto label_473990;
        case 0x473994u: goto label_473994;
        case 0x473998u: goto label_473998;
        case 0x47399cu: goto label_47399c;
        case 0x4739a0u: goto label_4739a0;
        case 0x4739a4u: goto label_4739a4;
        case 0x4739a8u: goto label_4739a8;
        case 0x4739acu: goto label_4739ac;
        case 0x4739b0u: goto label_4739b0;
        case 0x4739b4u: goto label_4739b4;
        case 0x4739b8u: goto label_4739b8;
        case 0x4739bcu: goto label_4739bc;
        case 0x4739c0u: goto label_4739c0;
        case 0x4739c4u: goto label_4739c4;
        case 0x4739c8u: goto label_4739c8;
        case 0x4739ccu: goto label_4739cc;
        case 0x4739d0u: goto label_4739d0;
        case 0x4739d4u: goto label_4739d4;
        case 0x4739d8u: goto label_4739d8;
        case 0x4739dcu: goto label_4739dc;
        case 0x4739e0u: goto label_4739e0;
        case 0x4739e4u: goto label_4739e4;
        case 0x4739e8u: goto label_4739e8;
        case 0x4739ecu: goto label_4739ec;
        case 0x4739f0u: goto label_4739f0;
        case 0x4739f4u: goto label_4739f4;
        case 0x4739f8u: goto label_4739f8;
        case 0x4739fcu: goto label_4739fc;
        case 0x473a00u: goto label_473a00;
        case 0x473a04u: goto label_473a04;
        case 0x473a08u: goto label_473a08;
        case 0x473a0cu: goto label_473a0c;
        case 0x473a10u: goto label_473a10;
        case 0x473a14u: goto label_473a14;
        case 0x473a18u: goto label_473a18;
        case 0x473a1cu: goto label_473a1c;
        case 0x473a20u: goto label_473a20;
        case 0x473a24u: goto label_473a24;
        case 0x473a28u: goto label_473a28;
        case 0x473a2cu: goto label_473a2c;
        case 0x473a30u: goto label_473a30;
        case 0x473a34u: goto label_473a34;
        case 0x473a38u: goto label_473a38;
        case 0x473a3cu: goto label_473a3c;
        case 0x473a40u: goto label_473a40;
        case 0x473a44u: goto label_473a44;
        case 0x473a48u: goto label_473a48;
        case 0x473a4cu: goto label_473a4c;
        case 0x473a50u: goto label_473a50;
        case 0x473a54u: goto label_473a54;
        case 0x473a58u: goto label_473a58;
        case 0x473a5cu: goto label_473a5c;
        case 0x473a60u: goto label_473a60;
        case 0x473a64u: goto label_473a64;
        case 0x473a68u: goto label_473a68;
        case 0x473a6cu: goto label_473a6c;
        case 0x473a70u: goto label_473a70;
        case 0x473a74u: goto label_473a74;
        case 0x473a78u: goto label_473a78;
        case 0x473a7cu: goto label_473a7c;
        case 0x473a80u: goto label_473a80;
        case 0x473a84u: goto label_473a84;
        case 0x473a88u: goto label_473a88;
        case 0x473a8cu: goto label_473a8c;
        case 0x473a90u: goto label_473a90;
        case 0x473a94u: goto label_473a94;
        case 0x473a98u: goto label_473a98;
        case 0x473a9cu: goto label_473a9c;
        case 0x473aa0u: goto label_473aa0;
        case 0x473aa4u: goto label_473aa4;
        case 0x473aa8u: goto label_473aa8;
        case 0x473aacu: goto label_473aac;
        case 0x473ab0u: goto label_473ab0;
        case 0x473ab4u: goto label_473ab4;
        case 0x473ab8u: goto label_473ab8;
        case 0x473abcu: goto label_473abc;
        case 0x473ac0u: goto label_473ac0;
        case 0x473ac4u: goto label_473ac4;
        case 0x473ac8u: goto label_473ac8;
        case 0x473accu: goto label_473acc;
        case 0x473ad0u: goto label_473ad0;
        case 0x473ad4u: goto label_473ad4;
        case 0x473ad8u: goto label_473ad8;
        case 0x473adcu: goto label_473adc;
        case 0x473ae0u: goto label_473ae0;
        case 0x473ae4u: goto label_473ae4;
        case 0x473ae8u: goto label_473ae8;
        case 0x473aecu: goto label_473aec;
        case 0x473af0u: goto label_473af0;
        case 0x473af4u: goto label_473af4;
        case 0x473af8u: goto label_473af8;
        case 0x473afcu: goto label_473afc;
        case 0x473b00u: goto label_473b00;
        case 0x473b04u: goto label_473b04;
        case 0x473b08u: goto label_473b08;
        case 0x473b0cu: goto label_473b0c;
        case 0x473b10u: goto label_473b10;
        case 0x473b14u: goto label_473b14;
        case 0x473b18u: goto label_473b18;
        case 0x473b1cu: goto label_473b1c;
        case 0x473b20u: goto label_473b20;
        case 0x473b24u: goto label_473b24;
        case 0x473b28u: goto label_473b28;
        case 0x473b2cu: goto label_473b2c;
        case 0x473b30u: goto label_473b30;
        case 0x473b34u: goto label_473b34;
        case 0x473b38u: goto label_473b38;
        case 0x473b3cu: goto label_473b3c;
        case 0x473b40u: goto label_473b40;
        case 0x473b44u: goto label_473b44;
        case 0x473b48u: goto label_473b48;
        case 0x473b4cu: goto label_473b4c;
        case 0x473b50u: goto label_473b50;
        case 0x473b54u: goto label_473b54;
        case 0x473b58u: goto label_473b58;
        case 0x473b5cu: goto label_473b5c;
        case 0x473b60u: goto label_473b60;
        case 0x473b64u: goto label_473b64;
        case 0x473b68u: goto label_473b68;
        case 0x473b6cu: goto label_473b6c;
        case 0x473b70u: goto label_473b70;
        case 0x473b74u: goto label_473b74;
        case 0x473b78u: goto label_473b78;
        case 0x473b7cu: goto label_473b7c;
        case 0x473b80u: goto label_473b80;
        case 0x473b84u: goto label_473b84;
        case 0x473b88u: goto label_473b88;
        case 0x473b8cu: goto label_473b8c;
        case 0x473b90u: goto label_473b90;
        case 0x473b94u: goto label_473b94;
        case 0x473b98u: goto label_473b98;
        case 0x473b9cu: goto label_473b9c;
        case 0x473ba0u: goto label_473ba0;
        case 0x473ba4u: goto label_473ba4;
        case 0x473ba8u: goto label_473ba8;
        case 0x473bacu: goto label_473bac;
        case 0x473bb0u: goto label_473bb0;
        case 0x473bb4u: goto label_473bb4;
        case 0x473bb8u: goto label_473bb8;
        case 0x473bbcu: goto label_473bbc;
        case 0x473bc0u: goto label_473bc0;
        case 0x473bc4u: goto label_473bc4;
        case 0x473bc8u: goto label_473bc8;
        case 0x473bccu: goto label_473bcc;
        case 0x473bd0u: goto label_473bd0;
        case 0x473bd4u: goto label_473bd4;
        case 0x473bd8u: goto label_473bd8;
        case 0x473bdcu: goto label_473bdc;
        case 0x473be0u: goto label_473be0;
        case 0x473be4u: goto label_473be4;
        case 0x473be8u: goto label_473be8;
        case 0x473becu: goto label_473bec;
        case 0x473bf0u: goto label_473bf0;
        case 0x473bf4u: goto label_473bf4;
        case 0x473bf8u: goto label_473bf8;
        case 0x473bfcu: goto label_473bfc;
        case 0x473c00u: goto label_473c00;
        case 0x473c04u: goto label_473c04;
        case 0x473c08u: goto label_473c08;
        case 0x473c0cu: goto label_473c0c;
        case 0x473c10u: goto label_473c10;
        case 0x473c14u: goto label_473c14;
        case 0x473c18u: goto label_473c18;
        case 0x473c1cu: goto label_473c1c;
        case 0x473c20u: goto label_473c20;
        case 0x473c24u: goto label_473c24;
        case 0x473c28u: goto label_473c28;
        case 0x473c2cu: goto label_473c2c;
        case 0x473c30u: goto label_473c30;
        case 0x473c34u: goto label_473c34;
        case 0x473c38u: goto label_473c38;
        case 0x473c3cu: goto label_473c3c;
        case 0x473c40u: goto label_473c40;
        case 0x473c44u: goto label_473c44;
        case 0x473c48u: goto label_473c48;
        case 0x473c4cu: goto label_473c4c;
        case 0x473c50u: goto label_473c50;
        case 0x473c54u: goto label_473c54;
        case 0x473c58u: goto label_473c58;
        case 0x473c5cu: goto label_473c5c;
        case 0x473c60u: goto label_473c60;
        case 0x473c64u: goto label_473c64;
        case 0x473c68u: goto label_473c68;
        case 0x473c6cu: goto label_473c6c;
        case 0x473c70u: goto label_473c70;
        case 0x473c74u: goto label_473c74;
        case 0x473c78u: goto label_473c78;
        case 0x473c7cu: goto label_473c7c;
        case 0x473c80u: goto label_473c80;
        case 0x473c84u: goto label_473c84;
        case 0x473c88u: goto label_473c88;
        case 0x473c8cu: goto label_473c8c;
        case 0x473c90u: goto label_473c90;
        case 0x473c94u: goto label_473c94;
        case 0x473c98u: goto label_473c98;
        case 0x473c9cu: goto label_473c9c;
        case 0x473ca0u: goto label_473ca0;
        case 0x473ca4u: goto label_473ca4;
        case 0x473ca8u: goto label_473ca8;
        case 0x473cacu: goto label_473cac;
        case 0x473cb0u: goto label_473cb0;
        case 0x473cb4u: goto label_473cb4;
        case 0x473cb8u: goto label_473cb8;
        case 0x473cbcu: goto label_473cbc;
        case 0x473cc0u: goto label_473cc0;
        case 0x473cc4u: goto label_473cc4;
        case 0x473cc8u: goto label_473cc8;
        case 0x473cccu: goto label_473ccc;
        case 0x473cd0u: goto label_473cd0;
        case 0x473cd4u: goto label_473cd4;
        case 0x473cd8u: goto label_473cd8;
        case 0x473cdcu: goto label_473cdc;
        case 0x473ce0u: goto label_473ce0;
        case 0x473ce4u: goto label_473ce4;
        case 0x473ce8u: goto label_473ce8;
        case 0x473cecu: goto label_473cec;
        case 0x473cf0u: goto label_473cf0;
        case 0x473cf4u: goto label_473cf4;
        case 0x473cf8u: goto label_473cf8;
        case 0x473cfcu: goto label_473cfc;
        case 0x473d00u: goto label_473d00;
        case 0x473d04u: goto label_473d04;
        case 0x473d08u: goto label_473d08;
        case 0x473d0cu: goto label_473d0c;
        case 0x473d10u: goto label_473d10;
        case 0x473d14u: goto label_473d14;
        case 0x473d18u: goto label_473d18;
        case 0x473d1cu: goto label_473d1c;
        case 0x473d20u: goto label_473d20;
        case 0x473d24u: goto label_473d24;
        case 0x473d28u: goto label_473d28;
        case 0x473d2cu: goto label_473d2c;
        case 0x473d30u: goto label_473d30;
        case 0x473d34u: goto label_473d34;
        case 0x473d38u: goto label_473d38;
        case 0x473d3cu: goto label_473d3c;
        case 0x473d40u: goto label_473d40;
        case 0x473d44u: goto label_473d44;
        case 0x473d48u: goto label_473d48;
        case 0x473d4cu: goto label_473d4c;
        case 0x473d50u: goto label_473d50;
        case 0x473d54u: goto label_473d54;
        case 0x473d58u: goto label_473d58;
        case 0x473d5cu: goto label_473d5c;
        case 0x473d60u: goto label_473d60;
        case 0x473d64u: goto label_473d64;
        case 0x473d68u: goto label_473d68;
        case 0x473d6cu: goto label_473d6c;
        default: break;
    }

    ctx->pc = 0x4738a0u;

label_4738a0:
    // 0x4738a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4738a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4738a4:
    // 0x4738a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4738a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4738a8:
    // 0x4738a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4738a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4738ac:
    // 0x4738ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4738acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4738b0:
    // 0x4738b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4738b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4738b4:
    // 0x4738b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4738b8:
    if (ctx->pc == 0x4738B8u) {
        ctx->pc = 0x4738B8u;
            // 0x4738b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4738BCu;
        goto label_4738bc;
    }
    ctx->pc = 0x4738B4u;
    {
        const bool branch_taken_0x4738b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4738B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4738B4u;
            // 0x4738b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4738b4) {
            ctx->pc = 0x4739E8u;
            goto label_4739e8;
        }
    }
    ctx->pc = 0x4738BCu;
label_4738bc:
    // 0x4738bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4738bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4738c0:
    // 0x4738c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4738c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4738c4:
    // 0x4738c4: 0x2463ea80  addiu       $v1, $v1, -0x1580
    ctx->pc = 0x4738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
label_4738c8:
    // 0x4738c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x4738c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_4738cc:
    // 0x4738cc: 0x2442eab8  addiu       $v0, $v0, -0x1548
    ctx->pc = 0x4738ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
label_4738d0:
    // 0x4738d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4738d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4738d4:
    // 0x4738d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4738d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4738d8:
    // 0x4738d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4738d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4738dc:
    // 0x4738dc: 0xc0407c0  jal         func_101F00
label_4738e0:
    if (ctx->pc == 0x4738E0u) {
        ctx->pc = 0x4738E0u;
            // 0x4738e0: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->pc = 0x4738E4u;
        goto label_4738e4;
    }
    ctx->pc = 0x4738DCu;
    SET_GPR_U32(ctx, 31, 0x4738E4u);
    ctx->pc = 0x4738E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4738DCu;
            // 0x4738e0: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4738E4u; }
        if (ctx->pc != 0x4738E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4738E4u; }
        if (ctx->pc != 0x4738E4u) { return; }
    }
    ctx->pc = 0x4738E4u;
label_4738e4:
    // 0x4738e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4738e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4738e8:
    // 0x4738e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4738ec:
    if (ctx->pc == 0x4738ECu) {
        ctx->pc = 0x4738ECu;
            // 0x4738ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4738F0u;
        goto label_4738f0;
    }
    ctx->pc = 0x4738E8u;
    {
        const bool branch_taken_0x4738e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4738e8) {
            ctx->pc = 0x4738ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4738E8u;
            // 0x4738ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4738FCu;
            goto label_4738fc;
        }
    }
    ctx->pc = 0x4738F0u;
label_4738f0:
    // 0x4738f0: 0xc07507c  jal         func_1D41F0
label_4738f4:
    if (ctx->pc == 0x4738F4u) {
        ctx->pc = 0x4738F4u;
            // 0x4738f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4738F8u;
        goto label_4738f8;
    }
    ctx->pc = 0x4738F0u;
    SET_GPR_U32(ctx, 31, 0x4738F8u);
    ctx->pc = 0x4738F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4738F0u;
            // 0x4738f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4738F8u; }
        if (ctx->pc != 0x4738F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4738F8u; }
        if (ctx->pc != 0x4738F8u) { return; }
    }
    ctx->pc = 0x4738F8u;
label_4738f8:
    // 0x4738f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4738f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4738fc:
    // 0x4738fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_473900:
    if (ctx->pc == 0x473900u) {
        ctx->pc = 0x473900u;
            // 0x473900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x473904u;
        goto label_473904;
    }
    ctx->pc = 0x4738FCu;
    {
        const bool branch_taken_0x4738fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4738fc) {
            ctx->pc = 0x473900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4738FCu;
            // 0x473900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47392Cu;
            goto label_47392c;
        }
    }
    ctx->pc = 0x473904u;
label_473904:
    // 0x473904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_473908:
    if (ctx->pc == 0x473908u) {
        ctx->pc = 0x47390Cu;
        goto label_47390c;
    }
    ctx->pc = 0x473904u;
    {
        const bool branch_taken_0x473904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473904) {
            ctx->pc = 0x473928u;
            goto label_473928;
        }
    }
    ctx->pc = 0x47390Cu;
label_47390c:
    // 0x47390c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_473910:
    if (ctx->pc == 0x473910u) {
        ctx->pc = 0x473914u;
        goto label_473914;
    }
    ctx->pc = 0x47390Cu;
    {
        const bool branch_taken_0x47390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47390c) {
            ctx->pc = 0x473928u;
            goto label_473928;
        }
    }
    ctx->pc = 0x473914u;
label_473914:
    // 0x473914: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x473914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_473918:
    // 0x473918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47391c:
    if (ctx->pc == 0x47391Cu) {
        ctx->pc = 0x473920u;
        goto label_473920;
    }
    ctx->pc = 0x473918u;
    {
        const bool branch_taken_0x473918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473918) {
            ctx->pc = 0x473928u;
            goto label_473928;
        }
    }
    ctx->pc = 0x473920u;
label_473920:
    // 0x473920: 0xc0400a8  jal         func_1002A0
label_473924:
    if (ctx->pc == 0x473924u) {
        ctx->pc = 0x473928u;
        goto label_473928;
    }
    ctx->pc = 0x473920u;
    SET_GPR_U32(ctx, 31, 0x473928u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473928u; }
        if (ctx->pc != 0x473928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473928u; }
        if (ctx->pc != 0x473928u) { return; }
    }
    ctx->pc = 0x473928u;
label_473928:
    // 0x473928: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x473928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_47392c:
    // 0x47392c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_473930:
    if (ctx->pc == 0x473930u) {
        ctx->pc = 0x473930u;
            // 0x473930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x473934u;
        goto label_473934;
    }
    ctx->pc = 0x47392Cu;
    {
        const bool branch_taken_0x47392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47392c) {
            ctx->pc = 0x473930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47392Cu;
            // 0x473930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47395Cu;
            goto label_47395c;
        }
    }
    ctx->pc = 0x473934u;
label_473934:
    // 0x473934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_473938:
    if (ctx->pc == 0x473938u) {
        ctx->pc = 0x47393Cu;
        goto label_47393c;
    }
    ctx->pc = 0x473934u;
    {
        const bool branch_taken_0x473934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473934) {
            ctx->pc = 0x473958u;
            goto label_473958;
        }
    }
    ctx->pc = 0x47393Cu;
label_47393c:
    // 0x47393c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_473940:
    if (ctx->pc == 0x473940u) {
        ctx->pc = 0x473944u;
        goto label_473944;
    }
    ctx->pc = 0x47393Cu;
    {
        const bool branch_taken_0x47393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47393c) {
            ctx->pc = 0x473958u;
            goto label_473958;
        }
    }
    ctx->pc = 0x473944u;
label_473944:
    // 0x473944: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x473944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_473948:
    // 0x473948: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47394c:
    if (ctx->pc == 0x47394Cu) {
        ctx->pc = 0x473950u;
        goto label_473950;
    }
    ctx->pc = 0x473948u;
    {
        const bool branch_taken_0x473948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473948) {
            ctx->pc = 0x473958u;
            goto label_473958;
        }
    }
    ctx->pc = 0x473950u;
label_473950:
    // 0x473950: 0xc0400a8  jal         func_1002A0
label_473954:
    if (ctx->pc == 0x473954u) {
        ctx->pc = 0x473958u;
        goto label_473958;
    }
    ctx->pc = 0x473950u;
    SET_GPR_U32(ctx, 31, 0x473958u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473958u; }
        if (ctx->pc != 0x473958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473958u; }
        if (ctx->pc != 0x473958u) { return; }
    }
    ctx->pc = 0x473958u;
label_473958:
    // 0x473958: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x473958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_47395c:
    // 0x47395c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_473960:
    if (ctx->pc == 0x473960u) {
        ctx->pc = 0x473964u;
        goto label_473964;
    }
    ctx->pc = 0x47395Cu;
    {
        const bool branch_taken_0x47395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47395c) {
            ctx->pc = 0x473978u;
            goto label_473978;
        }
    }
    ctx->pc = 0x473964u;
label_473964:
    // 0x473964: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x473964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_473968:
    // 0x473968: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47396c:
    // 0x47396c: 0x2463ea68  addiu       $v1, $v1, -0x1598
    ctx->pc = 0x47396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961768));
label_473970:
    // 0x473970: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x473970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_473974:
    // 0x473974: 0xac407608  sw          $zero, 0x7608($v0)
    ctx->pc = 0x473974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30216), GPR_U32(ctx, 0));
label_473978:
    // 0x473978: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_47397c:
    if (ctx->pc == 0x47397Cu) {
        ctx->pc = 0x47397Cu;
            // 0x47397c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x473980u;
        goto label_473980;
    }
    ctx->pc = 0x473978u;
    {
        const bool branch_taken_0x473978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x473978) {
            ctx->pc = 0x47397Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473978u;
            // 0x47397c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4739D4u;
            goto label_4739d4;
        }
    }
    ctx->pc = 0x473980u;
label_473980:
    // 0x473980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473984:
    // 0x473984: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x473984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_473988:
    // 0x473988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x473988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47398c:
    // 0x47398c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x47398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_473990:
    // 0x473990: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_473994:
    if (ctx->pc == 0x473994u) {
        ctx->pc = 0x473994u;
            // 0x473994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x473998u;
        goto label_473998;
    }
    ctx->pc = 0x473990u;
    {
        const bool branch_taken_0x473990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473990) {
            ctx->pc = 0x473994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473990u;
            // 0x473994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4739ACu;
            goto label_4739ac;
        }
    }
    ctx->pc = 0x473998u;
label_473998:
    // 0x473998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47399c:
    // 0x47399c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47399cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4739a0:
    // 0x4739a0: 0x320f809  jalr        $t9
label_4739a4:
    if (ctx->pc == 0x4739A4u) {
        ctx->pc = 0x4739A4u;
            // 0x4739a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4739A8u;
        goto label_4739a8;
    }
    ctx->pc = 0x4739A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4739A8u);
        ctx->pc = 0x4739A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4739A0u;
            // 0x4739a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4739A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4739A8u; }
            if (ctx->pc != 0x4739A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4739A8u;
label_4739a8:
    // 0x4739a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4739a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4739ac:
    // 0x4739ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4739b0:
    if (ctx->pc == 0x4739B0u) {
        ctx->pc = 0x4739B0u;
            // 0x4739b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4739B4u;
        goto label_4739b4;
    }
    ctx->pc = 0x4739ACu;
    {
        const bool branch_taken_0x4739ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4739ac) {
            ctx->pc = 0x4739B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4739ACu;
            // 0x4739b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4739C8u;
            goto label_4739c8;
        }
    }
    ctx->pc = 0x4739B4u;
label_4739b4:
    // 0x4739b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4739b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4739b8:
    // 0x4739b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4739b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4739bc:
    // 0x4739bc: 0x320f809  jalr        $t9
label_4739c0:
    if (ctx->pc == 0x4739C0u) {
        ctx->pc = 0x4739C0u;
            // 0x4739c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4739C4u;
        goto label_4739c4;
    }
    ctx->pc = 0x4739BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4739C4u);
        ctx->pc = 0x4739C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4739BCu;
            // 0x4739c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4739C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4739C4u; }
            if (ctx->pc != 0x4739C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4739C4u;
label_4739c4:
    // 0x4739c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4739c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4739c8:
    // 0x4739c8: 0xc075bf8  jal         func_1D6FE0
label_4739cc:
    if (ctx->pc == 0x4739CCu) {
        ctx->pc = 0x4739CCu;
            // 0x4739cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4739D0u;
        goto label_4739d0;
    }
    ctx->pc = 0x4739C8u;
    SET_GPR_U32(ctx, 31, 0x4739D0u);
    ctx->pc = 0x4739CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4739C8u;
            // 0x4739cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4739D0u; }
        if (ctx->pc != 0x4739D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4739D0u; }
        if (ctx->pc != 0x4739D0u) { return; }
    }
    ctx->pc = 0x4739D0u;
label_4739d0:
    // 0x4739d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4739d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4739d4:
    // 0x4739d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4739d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4739d8:
    // 0x4739d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4739dc:
    if (ctx->pc == 0x4739DCu) {
        ctx->pc = 0x4739DCu;
            // 0x4739dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4739E0u;
        goto label_4739e0;
    }
    ctx->pc = 0x4739D8u;
    {
        const bool branch_taken_0x4739d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4739d8) {
            ctx->pc = 0x4739DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4739D8u;
            // 0x4739dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4739ECu;
            goto label_4739ec;
        }
    }
    ctx->pc = 0x4739E0u;
label_4739e0:
    // 0x4739e0: 0xc0400a8  jal         func_1002A0
label_4739e4:
    if (ctx->pc == 0x4739E4u) {
        ctx->pc = 0x4739E4u;
            // 0x4739e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4739E8u;
        goto label_4739e8;
    }
    ctx->pc = 0x4739E0u;
    SET_GPR_U32(ctx, 31, 0x4739E8u);
    ctx->pc = 0x4739E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4739E0u;
            // 0x4739e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4739E8u; }
        if (ctx->pc != 0x4739E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4739E8u; }
        if (ctx->pc != 0x4739E8u) { return; }
    }
    ctx->pc = 0x4739E8u;
label_4739e8:
    // 0x4739e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4739e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4739ec:
    // 0x4739ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4739ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4739f0:
    // 0x4739f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4739f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4739f4:
    // 0x4739f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4739f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4739f8:
    // 0x4739f8: 0x3e00008  jr          $ra
label_4739fc:
    if (ctx->pc == 0x4739FCu) {
        ctx->pc = 0x4739FCu;
            // 0x4739fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x473A00u;
        goto label_473a00;
    }
    ctx->pc = 0x4739F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4739FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4739F8u;
            // 0x4739fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473A00u;
label_473a00:
    // 0x473a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x473a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_473a04:
    // 0x473a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x473a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_473a08:
    // 0x473a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_473a0c:
    // 0x473a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_473a10:
    // 0x473a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x473a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473a14:
    // 0x473a14: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_473a18:
    if (ctx->pc == 0x473A18u) {
        ctx->pc = 0x473A18u;
            // 0x473a18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x473A1Cu;
        goto label_473a1c;
    }
    ctx->pc = 0x473A14u;
    {
        const bool branch_taken_0x473a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x473A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473A14u;
            // 0x473a18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473a14) {
            ctx->pc = 0x473B1Cu;
            goto label_473b1c;
        }
    }
    ctx->pc = 0x473A1Cu;
label_473a1c:
    // 0x473a1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x473a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_473a20:
    // 0x473a20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x473a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_473a24:
    // 0x473a24: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x473a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_473a28:
    // 0x473a28: 0x2442eb60  addiu       $v0, $v0, -0x14A0
    ctx->pc = 0x473a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
label_473a2c:
    // 0x473a2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x473a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_473a30:
    // 0x473a30: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x473a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_473a34:
    // 0x473a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473a38:
    // 0x473a38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x473a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_473a3c:
    // 0x473a3c: 0x320f809  jalr        $t9
label_473a40:
    if (ctx->pc == 0x473A40u) {
        ctx->pc = 0x473A44u;
        goto label_473a44;
    }
    ctx->pc = 0x473A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473A44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x473A44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x473A44u; }
            if (ctx->pc != 0x473A44u) { return; }
        }
        }
    }
    ctx->pc = 0x473A44u;
label_473a44:
    // 0x473a44: 0x262400ac  addiu       $a0, $s1, 0xAC
    ctx->pc = 0x473a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_473a48:
    // 0x473a48: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_473a4c:
    if (ctx->pc == 0x473A4Cu) {
        ctx->pc = 0x473A50u;
        goto label_473a50;
    }
    ctx->pc = 0x473A48u;
    {
        const bool branch_taken_0x473a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a48) {
            ctx->pc = 0x473A84u;
            goto label_473a84;
        }
    }
    ctx->pc = 0x473A50u;
label_473a50:
    // 0x473a50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x473a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_473a54:
    // 0x473a54: 0x2442ea58  addiu       $v0, $v0, -0x15A8
    ctx->pc = 0x473a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961752));
label_473a58:
    // 0x473a58: 0xc11d4b4  jal         func_4752D0
label_473a5c:
    if (ctx->pc == 0x473A5Cu) {
        ctx->pc = 0x473A5Cu;
            // 0x473a5c: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x473A60u;
        goto label_473a60;
    }
    ctx->pc = 0x473A58u;
    SET_GPR_U32(ctx, 31, 0x473A60u);
    ctx->pc = 0x473A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473A58u;
            // 0x473a5c: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4752D0u;
    if (runtime->hasFunction(0x4752D0u)) {
        auto targetFn = runtime->lookupFunction(0x4752D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473A60u; }
        if (ctx->pc != 0x473A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004752D0_0x4752d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473A60u; }
        if (ctx->pc != 0x473A60u) { return; }
    }
    ctx->pc = 0x473A60u;
label_473a60:
    // 0x473a60: 0x262200ac  addiu       $v0, $s1, 0xAC
    ctx->pc = 0x473a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_473a64:
    // 0x473a64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_473a68:
    if (ctx->pc == 0x473A68u) {
        ctx->pc = 0x473A6Cu;
        goto label_473a6c;
    }
    ctx->pc = 0x473A64u;
    {
        const bool branch_taken_0x473a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a64) {
            ctx->pc = 0x473A84u;
            goto label_473a84;
        }
    }
    ctx->pc = 0x473A6Cu;
label_473a6c:
    // 0x473a6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473a70:
    // 0x473a70: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x473a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_473a74:
    // 0x473a74: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x473a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_473a78:
    // 0x473a78: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x473a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_473a7c:
    // 0x473a7c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x473a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_473a80:
    // 0x473a80: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x473a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_473a84:
    // 0x473a84: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_473a88:
    if (ctx->pc == 0x473A88u) {
        ctx->pc = 0x473A88u;
            // 0x473a88: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x473A8Cu;
        goto label_473a8c;
    }
    ctx->pc = 0x473A84u;
    {
        const bool branch_taken_0x473a84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a84) {
            ctx->pc = 0x473A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473A84u;
            // 0x473a88: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473B08u;
            goto label_473b08;
        }
    }
    ctx->pc = 0x473A8Cu;
label_473a8c:
    // 0x473a8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473a90:
    // 0x473a90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x473a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_473a94:
    // 0x473a94: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x473a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_473a98:
    // 0x473a98: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x473a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_473a9c:
    // 0x473a9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x473a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_473aa0:
    // 0x473aa0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x473aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_473aa4:
    // 0x473aa4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_473aa8:
    if (ctx->pc == 0x473AA8u) {
        ctx->pc = 0x473AA8u;
            // 0x473aa8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x473AACu;
        goto label_473aac;
    }
    ctx->pc = 0x473AA4u;
    {
        const bool branch_taken_0x473aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473AA4u;
            // 0x473aa8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473aa4) {
            ctx->pc = 0x473AE0u;
            goto label_473ae0;
        }
    }
    ctx->pc = 0x473AACu;
label_473aac:
    // 0x473aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473ab0:
    // 0x473ab0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x473ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_473ab4:
    // 0x473ab4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x473ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_473ab8:
    // 0x473ab8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x473ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_473abc:
    // 0x473abc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_473ac0:
    if (ctx->pc == 0x473AC0u) {
        ctx->pc = 0x473AC4u;
        goto label_473ac4;
    }
    ctx->pc = 0x473ABCu;
    {
        const bool branch_taken_0x473abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473abc) {
            ctx->pc = 0x473AE0u;
            goto label_473ae0;
        }
    }
    ctx->pc = 0x473AC4u;
label_473ac4:
    // 0x473ac4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_473ac8:
    if (ctx->pc == 0x473AC8u) {
        ctx->pc = 0x473AC8u;
            // 0x473ac8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x473ACCu;
        goto label_473acc;
    }
    ctx->pc = 0x473AC4u;
    {
        const bool branch_taken_0x473ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473ac4) {
            ctx->pc = 0x473AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473AC4u;
            // 0x473ac8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473AE0u;
            goto label_473ae0;
        }
    }
    ctx->pc = 0x473ACCu;
label_473acc:
    // 0x473acc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473ad0:
    // 0x473ad0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x473ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_473ad4:
    // 0x473ad4: 0x320f809  jalr        $t9
label_473ad8:
    if (ctx->pc == 0x473AD8u) {
        ctx->pc = 0x473AD8u;
            // 0x473ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x473ADCu;
        goto label_473adc;
    }
    ctx->pc = 0x473AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473ADCu);
        ctx->pc = 0x473AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473AD4u;
            // 0x473ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x473ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x473ADCu; }
            if (ctx->pc != 0x473ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x473ADCu;
label_473adc:
    // 0x473adc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x473adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_473ae0:
    // 0x473ae0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_473ae4:
    if (ctx->pc == 0x473AE4u) {
        ctx->pc = 0x473AE8u;
        goto label_473ae8;
    }
    ctx->pc = 0x473AE0u;
    {
        const bool branch_taken_0x473ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x473ae0) {
            ctx->pc = 0x473B04u;
            goto label_473b04;
        }
    }
    ctx->pc = 0x473AE8u;
label_473ae8:
    // 0x473ae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473aec:
    // 0x473aec: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x473aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_473af0:
    // 0x473af0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_473af4:
    if (ctx->pc == 0x473AF4u) {
        ctx->pc = 0x473AF4u;
            // 0x473af4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x473AF8u;
        goto label_473af8;
    }
    ctx->pc = 0x473AF0u;
    {
        const bool branch_taken_0x473af0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x473AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473AF0u;
            // 0x473af4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473af0) {
            ctx->pc = 0x473B04u;
            goto label_473b04;
        }
    }
    ctx->pc = 0x473AF8u;
label_473af8:
    // 0x473af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x473af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_473afc:
    // 0x473afc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x473afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_473b00:
    // 0x473b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x473b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_473b04:
    // 0x473b04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x473b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_473b08:
    // 0x473b08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x473b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_473b0c:
    // 0x473b0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_473b10:
    if (ctx->pc == 0x473B10u) {
        ctx->pc = 0x473B10u;
            // 0x473b10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x473B14u;
        goto label_473b14;
    }
    ctx->pc = 0x473B0Cu;
    {
        const bool branch_taken_0x473b0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x473b0c) {
            ctx->pc = 0x473B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473B0Cu;
            // 0x473b10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473B20u;
            goto label_473b20;
        }
    }
    ctx->pc = 0x473B14u;
label_473b14:
    // 0x473b14: 0xc0400a8  jal         func_1002A0
label_473b18:
    if (ctx->pc == 0x473B18u) {
        ctx->pc = 0x473B18u;
            // 0x473b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x473B1Cu;
        goto label_473b1c;
    }
    ctx->pc = 0x473B14u;
    SET_GPR_U32(ctx, 31, 0x473B1Cu);
    ctx->pc = 0x473B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473B14u;
            // 0x473b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473B1Cu; }
        if (ctx->pc != 0x473B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473B1Cu; }
        if (ctx->pc != 0x473B1Cu) { return; }
    }
    ctx->pc = 0x473B1Cu;
label_473b1c:
    // 0x473b1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x473b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473b20:
    // 0x473b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x473b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_473b24:
    // 0x473b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473b28:
    // 0x473b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_473b2c:
    // 0x473b2c: 0x3e00008  jr          $ra
label_473b30:
    if (ctx->pc == 0x473B30u) {
        ctx->pc = 0x473B30u;
            // 0x473b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x473B34u;
        goto label_473b34;
    }
    ctx->pc = 0x473B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473B2Cu;
            // 0x473b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473B34u;
label_473b34:
    // 0x473b34: 0x0  nop
    ctx->pc = 0x473b34u;
    // NOP
label_473b38:
    // 0x473b38: 0x0  nop
    ctx->pc = 0x473b38u;
    // NOP
label_473b3c:
    // 0x473b3c: 0x0  nop
    ctx->pc = 0x473b3cu;
    // NOP
label_473b40:
    // 0x473b40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x473b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_473b44:
    // 0x473b44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x473b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_473b48:
    // 0x473b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x473b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_473b4c:
    // 0x473b4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x473b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_473b50:
    // 0x473b50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x473b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_473b54:
    // 0x473b54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x473b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_473b58:
    // 0x473b58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x473b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_473b5c:
    // 0x473b5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x473b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_473b60:
    // 0x473b60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x473b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_473b64:
    // 0x473b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_473b68:
    // 0x473b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_473b6c:
    // 0x473b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_473b70:
    // 0x473b70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x473b70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_473b74:
    // 0x473b74: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_473b78:
    if (ctx->pc == 0x473B78u) {
        ctx->pc = 0x473B78u;
            // 0x473b78: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->pc = 0x473B7Cu;
        goto label_473b7c;
    }
    ctx->pc = 0x473B74u;
    {
        const bool branch_taken_0x473b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x473B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473B74u;
            // 0x473b78: 0xafa400bc  sw          $a0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473b74) {
            ctx->pc = 0x473BC4u;
            goto label_473bc4;
        }
    }
    ctx->pc = 0x473B7Cu;
label_473b7c:
    // 0x473b7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x473b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_473b80:
    // 0x473b80: 0x50a3006f  beql        $a1, $v1, . + 4 + (0x6F << 2)
label_473b84:
    if (ctx->pc == 0x473B84u) {
        ctx->pc = 0x473B84u;
            // 0x473b84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x473B88u;
        goto label_473b88;
    }
    ctx->pc = 0x473B80u;
    {
        const bool branch_taken_0x473b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x473b80) {
            ctx->pc = 0x473B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473B80u;
            // 0x473b84: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473D40u;
            goto label_473d40;
        }
    }
    ctx->pc = 0x473B88u;
label_473b88:
    // 0x473b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x473b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_473b8c:
    // 0x473b8c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_473b90:
    if (ctx->pc == 0x473B90u) {
        ctx->pc = 0x473B94u;
        goto label_473b94;
    }
    ctx->pc = 0x473B8Cu;
    {
        const bool branch_taken_0x473b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x473b8c) {
            ctx->pc = 0x473B9Cu;
            goto label_473b9c;
        }
    }
    ctx->pc = 0x473B94u;
label_473b94:
    // 0x473b94: 0x10000069  b           . + 4 + (0x69 << 2)
label_473b98:
    if (ctx->pc == 0x473B98u) {
        ctx->pc = 0x473B9Cu;
        goto label_473b9c;
    }
    ctx->pc = 0x473B94u;
    {
        const bool branch_taken_0x473b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473b94) {
            ctx->pc = 0x473D3Cu;
            goto label_473d3c;
        }
    }
    ctx->pc = 0x473B9Cu;
label_473b9c:
    // 0x473b9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_473ba0:
    // 0x473ba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473ba4:
    // 0x473ba4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x473ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_473ba8:
    // 0x473ba8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x473ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_473bac:
    // 0x473bac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x473bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_473bb0:
    // 0x473bb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x473bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_473bb4:
    // 0x473bb4: 0x320f809  jalr        $t9
label_473bb8:
    if (ctx->pc == 0x473BB8u) {
        ctx->pc = 0x473BB8u;
            // 0x473bb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x473BBCu;
        goto label_473bbc;
    }
    ctx->pc = 0x473BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473BBCu);
        ctx->pc = 0x473BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473BB4u;
            // 0x473bb8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x473BBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x473BBCu; }
            if (ctx->pc != 0x473BBCu) { return; }
        }
        }
    }
    ctx->pc = 0x473BBCu;
label_473bbc:
    // 0x473bbc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_473bc0:
    if (ctx->pc == 0x473BC0u) {
        ctx->pc = 0x473BC4u;
        goto label_473bc4;
    }
    ctx->pc = 0x473BBCu;
    {
        const bool branch_taken_0x473bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473bbc) {
            ctx->pc = 0x473D3Cu;
            goto label_473d3c;
        }
    }
    ctx->pc = 0x473BC4u;
label_473bc4:
    // 0x473bc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x473bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473bc8:
    // 0x473bc8: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x473bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_473bcc:
    // 0x473bcc: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
label_473bd0:
    if (ctx->pc == 0x473BD0u) {
        ctx->pc = 0x473BD4u;
        goto label_473bd4;
    }
    ctx->pc = 0x473BCCu;
    {
        const bool branch_taken_0x473bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x473bcc) {
            ctx->pc = 0x473D3Cu;
            goto label_473d3c;
        }
    }
    ctx->pc = 0x473BD4u;
label_473bd4:
    // 0x473bd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473bd8:
    // 0x473bd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_473bdc:
    // 0x473bdc: 0x24550084  addiu       $s5, $v0, 0x84
    ctx->pc = 0x473bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_473be0:
    // 0x473be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473be4:
    // 0x473be4: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x473be4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_473be8:
    // 0x473be8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x473be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_473bec:
    // 0x473bec: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x473becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_473bf0:
    // 0x473bf0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x473bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_473bf4:
    // 0x473bf4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x473bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_473bf8:
    // 0x473bf8: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x473bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_473bfc:
    // 0x473bfc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x473bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_473c00:
    // 0x473c00: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x473c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_473c04:
    // 0x473c04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473c08:
    // 0x473c08: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x473c08u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_473c0c:
    // 0x473c0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x473c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_473c10:
    // 0x473c10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x473c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473c14:
    // 0x473c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473c18:
    // 0x473c18: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x473c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_473c1c:
    // 0x473c1c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x473c1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_473c20:
    // 0x473c20: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x473c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_473c24:
    // 0x473c24: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x473c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_473c28:
    // 0x473c28: 0xc04e738  jal         func_139CE0
label_473c2c:
    if (ctx->pc == 0x473C2Cu) {
        ctx->pc = 0x473C2Cu;
            // 0x473c2c: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x473C30u;
        goto label_473c30;
    }
    ctx->pc = 0x473C28u;
    SET_GPR_U32(ctx, 31, 0x473C30u);
    ctx->pc = 0x473C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C28u;
            // 0x473c2c: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C30u; }
        if (ctx->pc != 0x473C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C30u; }
        if (ctx->pc != 0x473C30u) { return; }
    }
    ctx->pc = 0x473C30u;
label_473c30:
    // 0x473c30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x473c30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473c34:
    // 0x473c34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x473c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473c38:
    // 0x473c38: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x473c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_473c3c:
    // 0x473c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x473c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_473c40:
    // 0x473c40: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x473c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_473c44:
    // 0x473c44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x473c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_473c48:
    // 0x473c48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x473c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_473c4c:
    // 0x473c4c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x473c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_473c50:
    // 0x473c50: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x473c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_473c54:
    // 0x473c54: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
label_473c58:
    if (ctx->pc == 0x473C58u) {
        ctx->pc = 0x473C5Cu;
        goto label_473c5c;
    }
    ctx->pc = 0x473C54u;
    {
        const bool branch_taken_0x473c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x473c54) {
            ctx->pc = 0x473CF8u;
            goto label_473cf8;
        }
    }
    ctx->pc = 0x473C5Cu;
label_473c5c:
    // 0x473c5c: 0xc0d1c14  jal         func_347050
label_473c60:
    if (ctx->pc == 0x473C60u) {
        ctx->pc = 0x473C60u;
            // 0x473c60: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x473C64u;
        goto label_473c64;
    }
    ctx->pc = 0x473C5Cu;
    SET_GPR_U32(ctx, 31, 0x473C64u);
    ctx->pc = 0x473C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C5Cu;
            // 0x473c60: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C64u; }
        if (ctx->pc != 0x473C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C64u; }
        if (ctx->pc != 0x473C64u) { return; }
    }
    ctx->pc = 0x473C64u;
label_473c64:
    // 0x473c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x473c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473c68:
    // 0x473c68: 0xc04f278  jal         func_13C9E0
label_473c6c:
    if (ctx->pc == 0x473C6Cu) {
        ctx->pc = 0x473C6Cu;
            // 0x473c6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x473C70u;
        goto label_473c70;
    }
    ctx->pc = 0x473C68u;
    SET_GPR_U32(ctx, 31, 0x473C70u);
    ctx->pc = 0x473C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C68u;
            // 0x473c6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C70u; }
        if (ctx->pc != 0x473C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C70u; }
        if (ctx->pc != 0x473C70u) { return; }
    }
    ctx->pc = 0x473C70u;
label_473c70:
    // 0x473c70: 0xc0d1c10  jal         func_347040
label_473c74:
    if (ctx->pc == 0x473C74u) {
        ctx->pc = 0x473C74u;
            // 0x473c74: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x473C78u;
        goto label_473c78;
    }
    ctx->pc = 0x473C70u;
    SET_GPR_U32(ctx, 31, 0x473C78u);
    ctx->pc = 0x473C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C70u;
            // 0x473c74: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C78u; }
        if (ctx->pc != 0x473C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C78u; }
        if (ctx->pc != 0x473C78u) { return; }
    }
    ctx->pc = 0x473C78u;
label_473c78:
    // 0x473c78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x473c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473c7c:
    // 0x473c7c: 0xc04ce80  jal         func_133A00
label_473c80:
    if (ctx->pc == 0x473C80u) {
        ctx->pc = 0x473C80u;
            // 0x473c80: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x473C84u;
        goto label_473c84;
    }
    ctx->pc = 0x473C7Cu;
    SET_GPR_U32(ctx, 31, 0x473C84u);
    ctx->pc = 0x473C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C7Cu;
            // 0x473c80: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C84u; }
        if (ctx->pc != 0x473C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C84u; }
        if (ctx->pc != 0x473C84u) { return; }
    }
    ctx->pc = 0x473C84u;
label_473c84:
    // 0x473c84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x473c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_473c88:
    // 0x473c88: 0xc0d1c0c  jal         func_347030
label_473c8c:
    if (ctx->pc == 0x473C8Cu) {
        ctx->pc = 0x473C8Cu;
            // 0x473c8c: 0x244400ac  addiu       $a0, $v0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
        ctx->pc = 0x473C90u;
        goto label_473c90;
    }
    ctx->pc = 0x473C88u;
    SET_GPR_U32(ctx, 31, 0x473C90u);
    ctx->pc = 0x473C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473C88u;
            // 0x473c8c: 0x244400ac  addiu       $a0, $v0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C90u; }
        if (ctx->pc != 0x473C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473C90u; }
        if (ctx->pc != 0x473C90u) { return; }
    }
    ctx->pc = 0x473C90u;
label_473c90:
    // 0x473c90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x473c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473c94:
    // 0x473c94: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
label_473c98:
    if (ctx->pc == 0x473C98u) {
        ctx->pc = 0x473C9Cu;
        goto label_473c9c;
    }
    ctx->pc = 0x473C94u;
    {
        const bool branch_taken_0x473c94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x473c94) {
            ctx->pc = 0x473CF8u;
            goto label_473cf8;
        }
    }
    ctx->pc = 0x473C9Cu;
label_473c9c:
    // 0x473c9c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x473c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_473ca0:
    // 0x473ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x473ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473ca4:
    // 0x473ca4: 0xc11cff4  jal         func_473FD0
label_473ca8:
    if (ctx->pc == 0x473CA8u) {
        ctx->pc = 0x473CA8u;
            // 0x473ca8: 0x244400ac  addiu       $a0, $v0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
        ctx->pc = 0x473CACu;
        goto label_473cac;
    }
    ctx->pc = 0x473CA4u;
    SET_GPR_U32(ctx, 31, 0x473CACu);
    ctx->pc = 0x473CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473CA4u;
            // 0x473ca8: 0x244400ac  addiu       $a0, $v0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x473FD0u;
    if (runtime->hasFunction(0x473FD0u)) {
        auto targetFn = runtime->lookupFunction(0x473FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473CACu; }
        if (ctx->pc != 0x473CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00473FD0_0x473fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473CACu; }
        if (ctx->pc != 0x473CACu) { return; }
    }
    ctx->pc = 0x473CACu;
label_473cac:
    // 0x473cac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x473cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473cb0:
    // 0x473cb0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x473cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_473cb4:
    // 0x473cb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473cb8:
    // 0x473cb8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x473cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_473cbc:
    // 0x473cbc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x473cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_473cc0:
    // 0x473cc0: 0x320f809  jalr        $t9
label_473cc4:
    if (ctx->pc == 0x473CC4u) {
        ctx->pc = 0x473CC8u;
        goto label_473cc8;
    }
    ctx->pc = 0x473CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x473CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x473CC8u; }
            if (ctx->pc != 0x473CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x473CC8u;
label_473cc8:
    // 0x473cc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x473cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_473ccc:
    // 0x473ccc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x473cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_473cd0:
    // 0x473cd0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x473cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_473cd4:
    // 0x473cd4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x473cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_473cd8:
    // 0x473cd8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x473cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_473cdc:
    // 0x473cdc: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x473cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_473ce0:
    // 0x473ce0: 0xc11cf5c  jal         func_473D70
label_473ce4:
    if (ctx->pc == 0x473CE4u) {
        ctx->pc = 0x473CE4u;
            // 0x473ce4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x473CE8u;
        goto label_473ce8;
    }
    ctx->pc = 0x473CE0u;
    SET_GPR_U32(ctx, 31, 0x473CE8u);
    ctx->pc = 0x473CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473CE0u;
            // 0x473ce4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x473D70u;
    if (runtime->hasFunction(0x473D70u)) {
        auto targetFn = runtime->lookupFunction(0x473D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473CE8u; }
        if (ctx->pc != 0x473CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00473D70_0x473d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473CE8u; }
        if (ctx->pc != 0x473CE8u) { return; }
    }
    ctx->pc = 0x473CE8u;
label_473ce8:
    // 0x473ce8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x473ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_473cec:
    // 0x473cec: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x473cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_473cf0:
    // 0x473cf0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_473cf4:
    if (ctx->pc == 0x473CF4u) {
        ctx->pc = 0x473CF4u;
            // 0x473cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x473CF8u;
        goto label_473cf8;
    }
    ctx->pc = 0x473CF0u;
    {
        const bool branch_taken_0x473cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x473CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473CF0u;
            // 0x473cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473cf0) {
            ctx->pc = 0x473CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_473cb0;
        }
    }
    ctx->pc = 0x473CF8u;
label_473cf8:
    // 0x473cf8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x473cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_473cfc:
    // 0x473cfc: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x473cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_473d00:
    // 0x473d00: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_473d04:
    if (ctx->pc == 0x473D04u) {
        ctx->pc = 0x473D04u;
            // 0x473d04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x473D08u;
        goto label_473d08;
    }
    ctx->pc = 0x473D00u;
    {
        const bool branch_taken_0x473d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x473D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473D00u;
            // 0x473d04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473d00) {
            ctx->pc = 0x473C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_473c38;
        }
    }
    ctx->pc = 0x473D08u;
label_473d08:
    // 0x473d08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_473d0c:
    // 0x473d0c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x473d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_473d10:
    // 0x473d10: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_473d14:
    if (ctx->pc == 0x473D14u) {
        ctx->pc = 0x473D14u;
            // 0x473d14: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x473D18u;
        goto label_473d18;
    }
    ctx->pc = 0x473D10u;
    {
        const bool branch_taken_0x473d10 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x473D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473D10u;
            // 0x473d14: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473d10) {
            ctx->pc = 0x473D3Cu;
            goto label_473d3c;
        }
    }
    ctx->pc = 0x473D18u;
label_473d18:
    // 0x473d18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_473d1c:
    // 0x473d1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_473d20:
    // 0x473d20: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x473d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_473d24:
    // 0x473d24: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x473d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_473d28:
    // 0x473d28: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x473d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_473d2c:
    // 0x473d2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x473d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473d30:
    // 0x473d30: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x473d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_473d34:
    // 0x473d34: 0xc055ea8  jal         func_157AA0
label_473d38:
    if (ctx->pc == 0x473D38u) {
        ctx->pc = 0x473D38u;
            // 0x473d38: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x473D3Cu;
        goto label_473d3c;
    }
    ctx->pc = 0x473D34u;
    SET_GPR_U32(ctx, 31, 0x473D3Cu);
    ctx->pc = 0x473D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473D34u;
            // 0x473d38: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473D3Cu; }
        if (ctx->pc != 0x473D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473D3Cu; }
        if (ctx->pc != 0x473D3Cu) { return; }
    }
    ctx->pc = 0x473D3Cu;
label_473d3c:
    // 0x473d3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x473d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_473d40:
    // 0x473d40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x473d40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_473d44:
    // 0x473d44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x473d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_473d48:
    // 0x473d48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x473d48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_473d4c:
    // 0x473d4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x473d4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_473d50:
    // 0x473d50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x473d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_473d54:
    // 0x473d54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x473d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473d58:
    // 0x473d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x473d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473d5c:
    // 0x473d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473d60:
    // 0x473d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_473d64:
    // 0x473d64: 0x3e00008  jr          $ra
label_473d68:
    if (ctx->pc == 0x473D68u) {
        ctx->pc = 0x473D68u;
            // 0x473d68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x473D6Cu;
        goto label_473d6c;
    }
    ctx->pc = 0x473D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473D64u;
            // 0x473d68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473D6Cu;
label_473d6c:
    // 0x473d6c: 0x0  nop
    ctx->pc = 0x473d6cu;
    // NOP
}
