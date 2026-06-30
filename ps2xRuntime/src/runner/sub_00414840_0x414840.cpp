#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414840
// Address: 0x414840 - 0x414c20
void sub_00414840_0x414840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414840_0x414840");
#endif

    switch (ctx->pc) {
        case 0x414840u: goto label_414840;
        case 0x414844u: goto label_414844;
        case 0x414848u: goto label_414848;
        case 0x41484cu: goto label_41484c;
        case 0x414850u: goto label_414850;
        case 0x414854u: goto label_414854;
        case 0x414858u: goto label_414858;
        case 0x41485cu: goto label_41485c;
        case 0x414860u: goto label_414860;
        case 0x414864u: goto label_414864;
        case 0x414868u: goto label_414868;
        case 0x41486cu: goto label_41486c;
        case 0x414870u: goto label_414870;
        case 0x414874u: goto label_414874;
        case 0x414878u: goto label_414878;
        case 0x41487cu: goto label_41487c;
        case 0x414880u: goto label_414880;
        case 0x414884u: goto label_414884;
        case 0x414888u: goto label_414888;
        case 0x41488cu: goto label_41488c;
        case 0x414890u: goto label_414890;
        case 0x414894u: goto label_414894;
        case 0x414898u: goto label_414898;
        case 0x41489cu: goto label_41489c;
        case 0x4148a0u: goto label_4148a0;
        case 0x4148a4u: goto label_4148a4;
        case 0x4148a8u: goto label_4148a8;
        case 0x4148acu: goto label_4148ac;
        case 0x4148b0u: goto label_4148b0;
        case 0x4148b4u: goto label_4148b4;
        case 0x4148b8u: goto label_4148b8;
        case 0x4148bcu: goto label_4148bc;
        case 0x4148c0u: goto label_4148c0;
        case 0x4148c4u: goto label_4148c4;
        case 0x4148c8u: goto label_4148c8;
        case 0x4148ccu: goto label_4148cc;
        case 0x4148d0u: goto label_4148d0;
        case 0x4148d4u: goto label_4148d4;
        case 0x4148d8u: goto label_4148d8;
        case 0x4148dcu: goto label_4148dc;
        case 0x4148e0u: goto label_4148e0;
        case 0x4148e4u: goto label_4148e4;
        case 0x4148e8u: goto label_4148e8;
        case 0x4148ecu: goto label_4148ec;
        case 0x4148f0u: goto label_4148f0;
        case 0x4148f4u: goto label_4148f4;
        case 0x4148f8u: goto label_4148f8;
        case 0x4148fcu: goto label_4148fc;
        case 0x414900u: goto label_414900;
        case 0x414904u: goto label_414904;
        case 0x414908u: goto label_414908;
        case 0x41490cu: goto label_41490c;
        case 0x414910u: goto label_414910;
        case 0x414914u: goto label_414914;
        case 0x414918u: goto label_414918;
        case 0x41491cu: goto label_41491c;
        case 0x414920u: goto label_414920;
        case 0x414924u: goto label_414924;
        case 0x414928u: goto label_414928;
        case 0x41492cu: goto label_41492c;
        case 0x414930u: goto label_414930;
        case 0x414934u: goto label_414934;
        case 0x414938u: goto label_414938;
        case 0x41493cu: goto label_41493c;
        case 0x414940u: goto label_414940;
        case 0x414944u: goto label_414944;
        case 0x414948u: goto label_414948;
        case 0x41494cu: goto label_41494c;
        case 0x414950u: goto label_414950;
        case 0x414954u: goto label_414954;
        case 0x414958u: goto label_414958;
        case 0x41495cu: goto label_41495c;
        case 0x414960u: goto label_414960;
        case 0x414964u: goto label_414964;
        case 0x414968u: goto label_414968;
        case 0x41496cu: goto label_41496c;
        case 0x414970u: goto label_414970;
        case 0x414974u: goto label_414974;
        case 0x414978u: goto label_414978;
        case 0x41497cu: goto label_41497c;
        case 0x414980u: goto label_414980;
        case 0x414984u: goto label_414984;
        case 0x414988u: goto label_414988;
        case 0x41498cu: goto label_41498c;
        case 0x414990u: goto label_414990;
        case 0x414994u: goto label_414994;
        case 0x414998u: goto label_414998;
        case 0x41499cu: goto label_41499c;
        case 0x4149a0u: goto label_4149a0;
        case 0x4149a4u: goto label_4149a4;
        case 0x4149a8u: goto label_4149a8;
        case 0x4149acu: goto label_4149ac;
        case 0x4149b0u: goto label_4149b0;
        case 0x4149b4u: goto label_4149b4;
        case 0x4149b8u: goto label_4149b8;
        case 0x4149bcu: goto label_4149bc;
        case 0x4149c0u: goto label_4149c0;
        case 0x4149c4u: goto label_4149c4;
        case 0x4149c8u: goto label_4149c8;
        case 0x4149ccu: goto label_4149cc;
        case 0x4149d0u: goto label_4149d0;
        case 0x4149d4u: goto label_4149d4;
        case 0x4149d8u: goto label_4149d8;
        case 0x4149dcu: goto label_4149dc;
        case 0x4149e0u: goto label_4149e0;
        case 0x4149e4u: goto label_4149e4;
        case 0x4149e8u: goto label_4149e8;
        case 0x4149ecu: goto label_4149ec;
        case 0x4149f0u: goto label_4149f0;
        case 0x4149f4u: goto label_4149f4;
        case 0x4149f8u: goto label_4149f8;
        case 0x4149fcu: goto label_4149fc;
        case 0x414a00u: goto label_414a00;
        case 0x414a04u: goto label_414a04;
        case 0x414a08u: goto label_414a08;
        case 0x414a0cu: goto label_414a0c;
        case 0x414a10u: goto label_414a10;
        case 0x414a14u: goto label_414a14;
        case 0x414a18u: goto label_414a18;
        case 0x414a1cu: goto label_414a1c;
        case 0x414a20u: goto label_414a20;
        case 0x414a24u: goto label_414a24;
        case 0x414a28u: goto label_414a28;
        case 0x414a2cu: goto label_414a2c;
        case 0x414a30u: goto label_414a30;
        case 0x414a34u: goto label_414a34;
        case 0x414a38u: goto label_414a38;
        case 0x414a3cu: goto label_414a3c;
        case 0x414a40u: goto label_414a40;
        case 0x414a44u: goto label_414a44;
        case 0x414a48u: goto label_414a48;
        case 0x414a4cu: goto label_414a4c;
        case 0x414a50u: goto label_414a50;
        case 0x414a54u: goto label_414a54;
        case 0x414a58u: goto label_414a58;
        case 0x414a5cu: goto label_414a5c;
        case 0x414a60u: goto label_414a60;
        case 0x414a64u: goto label_414a64;
        case 0x414a68u: goto label_414a68;
        case 0x414a6cu: goto label_414a6c;
        case 0x414a70u: goto label_414a70;
        case 0x414a74u: goto label_414a74;
        case 0x414a78u: goto label_414a78;
        case 0x414a7cu: goto label_414a7c;
        case 0x414a80u: goto label_414a80;
        case 0x414a84u: goto label_414a84;
        case 0x414a88u: goto label_414a88;
        case 0x414a8cu: goto label_414a8c;
        case 0x414a90u: goto label_414a90;
        case 0x414a94u: goto label_414a94;
        case 0x414a98u: goto label_414a98;
        case 0x414a9cu: goto label_414a9c;
        case 0x414aa0u: goto label_414aa0;
        case 0x414aa4u: goto label_414aa4;
        case 0x414aa8u: goto label_414aa8;
        case 0x414aacu: goto label_414aac;
        case 0x414ab0u: goto label_414ab0;
        case 0x414ab4u: goto label_414ab4;
        case 0x414ab8u: goto label_414ab8;
        case 0x414abcu: goto label_414abc;
        case 0x414ac0u: goto label_414ac0;
        case 0x414ac4u: goto label_414ac4;
        case 0x414ac8u: goto label_414ac8;
        case 0x414accu: goto label_414acc;
        case 0x414ad0u: goto label_414ad0;
        case 0x414ad4u: goto label_414ad4;
        case 0x414ad8u: goto label_414ad8;
        case 0x414adcu: goto label_414adc;
        case 0x414ae0u: goto label_414ae0;
        case 0x414ae4u: goto label_414ae4;
        case 0x414ae8u: goto label_414ae8;
        case 0x414aecu: goto label_414aec;
        case 0x414af0u: goto label_414af0;
        case 0x414af4u: goto label_414af4;
        case 0x414af8u: goto label_414af8;
        case 0x414afcu: goto label_414afc;
        case 0x414b00u: goto label_414b00;
        case 0x414b04u: goto label_414b04;
        case 0x414b08u: goto label_414b08;
        case 0x414b0cu: goto label_414b0c;
        case 0x414b10u: goto label_414b10;
        case 0x414b14u: goto label_414b14;
        case 0x414b18u: goto label_414b18;
        case 0x414b1cu: goto label_414b1c;
        case 0x414b20u: goto label_414b20;
        case 0x414b24u: goto label_414b24;
        case 0x414b28u: goto label_414b28;
        case 0x414b2cu: goto label_414b2c;
        case 0x414b30u: goto label_414b30;
        case 0x414b34u: goto label_414b34;
        case 0x414b38u: goto label_414b38;
        case 0x414b3cu: goto label_414b3c;
        case 0x414b40u: goto label_414b40;
        case 0x414b44u: goto label_414b44;
        case 0x414b48u: goto label_414b48;
        case 0x414b4cu: goto label_414b4c;
        case 0x414b50u: goto label_414b50;
        case 0x414b54u: goto label_414b54;
        case 0x414b58u: goto label_414b58;
        case 0x414b5cu: goto label_414b5c;
        case 0x414b60u: goto label_414b60;
        case 0x414b64u: goto label_414b64;
        case 0x414b68u: goto label_414b68;
        case 0x414b6cu: goto label_414b6c;
        case 0x414b70u: goto label_414b70;
        case 0x414b74u: goto label_414b74;
        case 0x414b78u: goto label_414b78;
        case 0x414b7cu: goto label_414b7c;
        case 0x414b80u: goto label_414b80;
        case 0x414b84u: goto label_414b84;
        case 0x414b88u: goto label_414b88;
        case 0x414b8cu: goto label_414b8c;
        case 0x414b90u: goto label_414b90;
        case 0x414b94u: goto label_414b94;
        case 0x414b98u: goto label_414b98;
        case 0x414b9cu: goto label_414b9c;
        case 0x414ba0u: goto label_414ba0;
        case 0x414ba4u: goto label_414ba4;
        case 0x414ba8u: goto label_414ba8;
        case 0x414bacu: goto label_414bac;
        case 0x414bb0u: goto label_414bb0;
        case 0x414bb4u: goto label_414bb4;
        case 0x414bb8u: goto label_414bb8;
        case 0x414bbcu: goto label_414bbc;
        case 0x414bc0u: goto label_414bc0;
        case 0x414bc4u: goto label_414bc4;
        case 0x414bc8u: goto label_414bc8;
        case 0x414bccu: goto label_414bcc;
        case 0x414bd0u: goto label_414bd0;
        case 0x414bd4u: goto label_414bd4;
        case 0x414bd8u: goto label_414bd8;
        case 0x414bdcu: goto label_414bdc;
        case 0x414be0u: goto label_414be0;
        case 0x414be4u: goto label_414be4;
        case 0x414be8u: goto label_414be8;
        case 0x414becu: goto label_414bec;
        case 0x414bf0u: goto label_414bf0;
        case 0x414bf4u: goto label_414bf4;
        case 0x414bf8u: goto label_414bf8;
        case 0x414bfcu: goto label_414bfc;
        case 0x414c00u: goto label_414c00;
        case 0x414c04u: goto label_414c04;
        case 0x414c08u: goto label_414c08;
        case 0x414c0cu: goto label_414c0c;
        case 0x414c10u: goto label_414c10;
        case 0x414c14u: goto label_414c14;
        case 0x414c18u: goto label_414c18;
        case 0x414c1cu: goto label_414c1c;
        default: break;
    }

    ctx->pc = 0x414840u;

label_414840:
    // 0x414840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_414844:
    // 0x414844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_414848:
    // 0x414848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41484c:
    // 0x41484c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41484cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414850:
    // 0x414850: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_414854:
    if (ctx->pc == 0x414854u) {
        ctx->pc = 0x414854u;
            // 0x414854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414858u;
        goto label_414858;
    }
    ctx->pc = 0x414850u;
    {
        const bool branch_taken_0x414850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414850) {
            ctx->pc = 0x414854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414850u;
            // 0x414854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41487Cu;
            goto label_41487c;
        }
    }
    ctx->pc = 0x414858u;
label_414858:
    // 0x414858: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x414858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_41485c:
    // 0x41485c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41485cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_414860:
    // 0x414860: 0x2463b0f8  addiu       $v1, $v1, -0x4F08
    ctx->pc = 0x414860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947064));
label_414864:
    // 0x414864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x414864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_414868:
    // 0x414868: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_41486c:
    if (ctx->pc == 0x41486Cu) {
        ctx->pc = 0x41486Cu;
            // 0x41486c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x414870u;
        goto label_414870;
    }
    ctx->pc = 0x414868u;
    {
        const bool branch_taken_0x414868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414868u;
            // 0x41486c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414868) {
            ctx->pc = 0x414878u;
            goto label_414878;
        }
    }
    ctx->pc = 0x414870u;
label_414870:
    // 0x414870: 0xc0400a8  jal         func_1002A0
label_414874:
    if (ctx->pc == 0x414874u) {
        ctx->pc = 0x414878u;
        goto label_414878;
    }
    ctx->pc = 0x414870u;
    SET_GPR_U32(ctx, 31, 0x414878u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414878u; }
        if (ctx->pc != 0x414878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414878u; }
        if (ctx->pc != 0x414878u) { return; }
    }
    ctx->pc = 0x414878u;
label_414878:
    // 0x414878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41487c:
    // 0x41487c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414880:
    // 0x414880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_414884:
    // 0x414884: 0x3e00008  jr          $ra
label_414888:
    if (ctx->pc == 0x414888u) {
        ctx->pc = 0x414888u;
            // 0x414888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41488Cu;
        goto label_41488c;
    }
    ctx->pc = 0x414884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414884u;
            // 0x414888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41488Cu;
label_41488c:
    // 0x41488c: 0x0  nop
    ctx->pc = 0x41488cu;
    // NOP
label_414890:
    // 0x414890: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x414890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_414894:
    // 0x414894: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x414894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414898:
    // 0x414898: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x414898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_41489c:
    // 0x41489c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x41489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4148a0:
    // 0x4148a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4148a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4148a4:
    // 0x4148a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4148a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4148a8:
    // 0x4148a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4148a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4148ac:
    // 0x4148ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4148acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4148b0:
    // 0x4148b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4148b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4148b4:
    // 0x4148b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4148b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4148b8:
    // 0x4148b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4148b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4148bc:
    // 0x4148bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4148bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4148c0:
    // 0x4148c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4148c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4148c4:
    // 0x4148c4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4148c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4148c8:
    // 0x4148c8: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_4148cc:
    if (ctx->pc == 0x4148CCu) {
        ctx->pc = 0x4148CCu;
            // 0x4148cc: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x4148D0u;
        goto label_4148d0;
    }
    ctx->pc = 0x4148C8u;
    {
        const bool branch_taken_0x4148c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4148c8) {
            ctx->pc = 0x4148CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4148C8u;
            // 0x4148cc: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4148F0u;
            goto label_4148f0;
        }
    }
    ctx->pc = 0x4148D0u;
label_4148d0:
    // 0x4148d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4148d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4148d4:
    // 0x4148d4: 0x5083003c  beql        $a0, $v1, . + 4 + (0x3C << 2)
label_4148d8:
    if (ctx->pc == 0x4148D8u) {
        ctx->pc = 0x4148D8u;
            // 0x4148d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4148DCu;
        goto label_4148dc;
    }
    ctx->pc = 0x4148D4u;
    {
        const bool branch_taken_0x4148d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4148d4) {
            ctx->pc = 0x4148D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4148D4u;
            // 0x4148d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4149C8u;
            goto label_4149c8;
        }
    }
    ctx->pc = 0x4148DCu;
label_4148dc:
    // 0x4148dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4148dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4148e0:
    // 0x4148e0: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
label_4148e4:
    if (ctx->pc == 0x4148E4u) {
        ctx->pc = 0x4148E8u;
        goto label_4148e8;
    }
    ctx->pc = 0x4148E0u;
    {
        const bool branch_taken_0x4148e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4148e0) {
            ctx->pc = 0x4149C4u;
            goto label_4149c4;
        }
    }
    ctx->pc = 0x4148E8u;
label_4148e8:
    // 0x4148e8: 0x10000036  b           . + 4 + (0x36 << 2)
label_4148ec:
    if (ctx->pc == 0x4148ECu) {
        ctx->pc = 0x4148F0u;
        goto label_4148f0;
    }
    ctx->pc = 0x4148E8u;
    {
        const bool branch_taken_0x4148e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4148e8) {
            ctx->pc = 0x4149C4u;
            goto label_4149c4;
        }
    }
    ctx->pc = 0x4148F0u;
label_4148f0:
    // 0x4148f0: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_4148f4:
    if (ctx->pc == 0x4148F4u) {
        ctx->pc = 0x4148F8u;
        goto label_4148f8;
    }
    ctx->pc = 0x4148F0u;
    {
        const bool branch_taken_0x4148f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4148f0) {
            ctx->pc = 0x4149C4u;
            goto label_4149c4;
        }
    }
    ctx->pc = 0x4148F8u;
label_4148f8:
    // 0x4148f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4148f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4148fc:
    // 0x4148fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_414900:
    // 0x414900: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x414900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_414904:
    // 0x414904: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x414904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_414908:
    // 0x414908: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x414908u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_41490c:
    // 0x41490c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_414910:
    // 0x414910: 0x8c940130  lw          $s4, 0x130($a0)
    ctx->pc = 0x414910u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_414914:
    // 0x414914: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x414914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_414918:
    // 0x414918: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x414918u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_41491c:
    // 0x41491c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x41491cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_414920:
    // 0x414920: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x414920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_414924:
    // 0x414924: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x414924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_414928:
    // 0x414928: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x414928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_41492c:
    // 0x41492c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_414930:
    // 0x414930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x414930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414934:
    // 0x414934: 0xc04e738  jal         func_139CE0
label_414938:
    if (ctx->pc == 0x414938u) {
        ctx->pc = 0x414938u;
            // 0x414938: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x41493Cu;
        goto label_41493c;
    }
    ctx->pc = 0x414934u;
    SET_GPR_U32(ctx, 31, 0x41493Cu);
    ctx->pc = 0x414938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414934u;
            // 0x414938: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41493Cu; }
        if (ctx->pc != 0x41493Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41493Cu; }
        if (ctx->pc != 0x41493Cu) { return; }
    }
    ctx->pc = 0x41493Cu;
label_41493c:
    // 0x41493c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41493cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_414940:
    // 0x414940: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x414940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_414944:
    // 0x414944: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x414944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_414948:
    // 0x414948: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x414948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41494c:
    // 0x41494c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x41494cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_414950:
    // 0x414950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x414950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414954:
    // 0x414954: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x414954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_414958:
    // 0x414958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x414958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41495c:
    // 0x41495c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x41495cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_414960:
    // 0x414960: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x414960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_414964:
    // 0x414964: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x414964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_414968:
    // 0x414968: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x414968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_41496c:
    // 0x41496c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_414970:
    // 0x414970: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x414970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414974:
    // 0x414974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x414974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_414978:
    // 0x414978: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x414978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_41497c:
    // 0x41497c: 0x320f809  jalr        $t9
label_414980:
    if (ctx->pc == 0x414980u) {
        ctx->pc = 0x414980u;
            // 0x414980: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414984u;
        goto label_414984;
    }
    ctx->pc = 0x41497Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x414984u);
        ctx->pc = 0x414980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41497Cu;
            // 0x414980: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x414984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x414984u; }
            if (ctx->pc != 0x414984u) { return; }
        }
        }
    }
    ctx->pc = 0x414984u;
label_414984:
    // 0x414984: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x414984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_414988:
    // 0x414988: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x414988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41498c:
    // 0x41498c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_414990:
    if (ctx->pc == 0x414990u) {
        ctx->pc = 0x414990u;
            // 0x414990: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x414994u;
        goto label_414994;
    }
    ctx->pc = 0x41498Cu;
    {
        const bool branch_taken_0x41498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x414990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41498Cu;
            // 0x414990: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41498c) {
            ctx->pc = 0x414954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_414954;
        }
    }
    ctx->pc = 0x414994u;
label_414994:
    // 0x414994: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x414994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_414998:
    // 0x414998: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x414998u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_41499c:
    // 0x41499c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4149a0:
    if (ctx->pc == 0x4149A0u) {
        ctx->pc = 0x4149A0u;
            // 0x4149a0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4149A4u;
        goto label_4149a4;
    }
    ctx->pc = 0x41499Cu;
    {
        const bool branch_taken_0x41499c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4149A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41499Cu;
            // 0x4149a0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41499c) {
            ctx->pc = 0x4149C4u;
            goto label_4149c4;
        }
    }
    ctx->pc = 0x4149A4u;
label_4149a4:
    // 0x4149a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4149a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4149a8:
    // 0x4149a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4149ac:
    // 0x4149ac: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4149acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4149b0:
    // 0x4149b0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4149b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4149b4:
    // 0x4149b4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4149b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4149b8:
    // 0x4149b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4149b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4149bc:
    // 0x4149bc: 0xc055d28  jal         func_1574A0
label_4149c0:
    if (ctx->pc == 0x4149C0u) {
        ctx->pc = 0x4149C0u;
            // 0x4149c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4149C4u;
        goto label_4149c4;
    }
    ctx->pc = 0x4149BCu;
    SET_GPR_U32(ctx, 31, 0x4149C4u);
    ctx->pc = 0x4149C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4149BCu;
            // 0x4149c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4149C4u; }
        if (ctx->pc != 0x4149C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4149C4u; }
        if (ctx->pc != 0x4149C4u) { return; }
    }
    ctx->pc = 0x4149C4u;
label_4149c4:
    // 0x4149c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4149c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4149c8:
    // 0x4149c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4149c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4149cc:
    // 0x4149cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4149ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4149d0:
    // 0x4149d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4149d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4149d4:
    // 0x4149d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4149d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4149d8:
    // 0x4149d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4149d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4149dc:
    // 0x4149dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4149dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4149e0:
    // 0x4149e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4149e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4149e4:
    // 0x4149e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4149e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4149e8:
    // 0x4149e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4149e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4149ec:
    // 0x4149ec: 0x3e00008  jr          $ra
label_4149f0:
    if (ctx->pc == 0x4149F0u) {
        ctx->pc = 0x4149F0u;
            // 0x4149f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4149F4u;
        goto label_4149f4;
    }
    ctx->pc = 0x4149ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4149F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4149ECu;
            // 0x4149f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4149F4u;
label_4149f4:
    // 0x4149f4: 0x0  nop
    ctx->pc = 0x4149f4u;
    // NOP
label_4149f8:
    // 0x4149f8: 0x0  nop
    ctx->pc = 0x4149f8u;
    // NOP
label_4149fc:
    // 0x4149fc: 0x0  nop
    ctx->pc = 0x4149fcu;
    // NOP
label_414a00:
    // 0x414a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_414a04:
    // 0x414a04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x414a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414a08:
    // 0x414a08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x414a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_414a0c:
    // 0x414a0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x414a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_414a10:
    // 0x414a10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414a14:
    // 0x414a14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x414a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_414a18:
    // 0x414a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_414a1c:
    // 0x414a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_414a20:
    // 0x414a20: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x414a20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_414a24:
    // 0x414a24: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_414a28:
    if (ctx->pc == 0x414A28u) {
        ctx->pc = 0x414A28u;
            // 0x414a28: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414A2Cu;
        goto label_414a2c;
    }
    ctx->pc = 0x414A24u;
    {
        const bool branch_taken_0x414a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x414A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414A24u;
            // 0x414a28: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a24) {
            ctx->pc = 0x414A8Cu;
            goto label_414a8c;
        }
    }
    ctx->pc = 0x414A2Cu;
label_414a2c:
    // 0x414a2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x414a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_414a30:
    // 0x414a30: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_414a34:
    if (ctx->pc == 0x414A34u) {
        ctx->pc = 0x414A34u;
            // 0x414a34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x414A38u;
        goto label_414a38;
    }
    ctx->pc = 0x414A30u;
    {
        const bool branch_taken_0x414a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x414a30) {
            ctx->pc = 0x414A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414A30u;
            // 0x414a34: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414A80u;
            goto label_414a80;
        }
    }
    ctx->pc = 0x414A38u;
label_414a38:
    // 0x414a38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x414a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414a3c:
    // 0x414a3c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_414a40:
    if (ctx->pc == 0x414A40u) {
        ctx->pc = 0x414A40u;
            // 0x414a40: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->pc = 0x414A44u;
        goto label_414a44;
    }
    ctx->pc = 0x414A3Cu;
    {
        const bool branch_taken_0x414a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x414a3c) {
            ctx->pc = 0x414A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414A3Cu;
            // 0x414a40: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414A4Cu;
            goto label_414a4c;
        }
    }
    ctx->pc = 0x414A44u;
label_414a44:
    // 0x414a44: 0x10000030  b           . + 4 + (0x30 << 2)
label_414a48:
    if (ctx->pc == 0x414A48u) {
        ctx->pc = 0x414A4Cu;
        goto label_414a4c;
    }
    ctx->pc = 0x414A44u;
    {
        const bool branch_taken_0x414a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x414a44) {
            ctx->pc = 0x414B08u;
            goto label_414b08;
        }
    }
    ctx->pc = 0x414A4Cu;
label_414a4c:
    // 0x414a4c: 0xc0db62c  jal         func_36D8B0
label_414a50:
    if (ctx->pc == 0x414A50u) {
        ctx->pc = 0x414A50u;
            // 0x414a50: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x414A54u;
        goto label_414a54;
    }
    ctx->pc = 0x414A4Cu;
    SET_GPR_U32(ctx, 31, 0x414A54u);
    ctx->pc = 0x414A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414A4Cu;
            // 0x414a50: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8B0u;
    if (runtime->hasFunction(0x36D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414A54u; }
        if (ctx->pc != 0x414A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8B0_0x36d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414A54u; }
        if (ctx->pc != 0x414A54u) { return; }
    }
    ctx->pc = 0x414A54u;
label_414a54:
    // 0x414a54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_414a58:
    // 0x414a58: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x414a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_414a5c:
    // 0x414a5c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x414a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_414a60:
    // 0x414a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x414a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_414a64:
    // 0x414a64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x414a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_414a68:
    // 0x414a68: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x414a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_414a6c:
    // 0x414a6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x414a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_414a70:
    // 0x414a70: 0x320f809  jalr        $t9
label_414a74:
    if (ctx->pc == 0x414A74u) {
        ctx->pc = 0x414A74u;
            // 0x414a74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x414A78u;
        goto label_414a78;
    }
    ctx->pc = 0x414A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x414A78u);
        ctx->pc = 0x414A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414A70u;
            // 0x414a74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x414A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x414A78u; }
            if (ctx->pc != 0x414A78u) { return; }
        }
        }
    }
    ctx->pc = 0x414A78u;
label_414a78:
    // 0x414a78: 0x10000023  b           . + 4 + (0x23 << 2)
label_414a7c:
    if (ctx->pc == 0x414A7Cu) {
        ctx->pc = 0x414A80u;
        goto label_414a80;
    }
    ctx->pc = 0x414A78u;
    {
        const bool branch_taken_0x414a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x414a78) {
            ctx->pc = 0x414B08u;
            goto label_414b08;
        }
    }
    ctx->pc = 0x414A80u;
label_414a80:
    // 0x414a80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x414a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_414a84:
    // 0x414a84: 0x320f809  jalr        $t9
label_414a88:
    if (ctx->pc == 0x414A88u) {
        ctx->pc = 0x414A8Cu;
        goto label_414a8c;
    }
    ctx->pc = 0x414A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x414A8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x414A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x414A8Cu; }
            if (ctx->pc != 0x414A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x414A8Cu;
label_414a8c:
    // 0x414a8c: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x414a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_414a90:
    // 0x414a90: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_414a94:
    if (ctx->pc == 0x414A94u) {
        ctx->pc = 0x414A98u;
        goto label_414a98;
    }
    ctx->pc = 0x414A90u;
    {
        const bool branch_taken_0x414a90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414a90) {
            ctx->pc = 0x414B08u;
            goto label_414b08;
        }
    }
    ctx->pc = 0x414A98u;
label_414a98:
    // 0x414a98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x414a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414a9c:
    // 0x414a9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x414a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414aa0:
    // 0x414aa0: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x414aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_414aa4:
    // 0x414aa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x414aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_414aa8:
    // 0x414aa8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x414aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414aac:
    // 0x414aac: 0xc0f4cb0  jal         func_3D32C0
label_414ab0:
    if (ctx->pc == 0x414AB0u) {
        ctx->pc = 0x414AB0u;
            // 0x414ab0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x414AB4u;
        goto label_414ab4;
    }
    ctx->pc = 0x414AACu;
    SET_GPR_U32(ctx, 31, 0x414AB4u);
    ctx->pc = 0x414AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414AACu;
            // 0x414ab0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AB4u; }
        if (ctx->pc != 0x414AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AB4u; }
        if (ctx->pc != 0x414AB4u) { return; }
    }
    ctx->pc = 0x414AB4u;
label_414ab4:
    // 0x414ab4: 0xc0e3658  jal         func_38D960
label_414ab8:
    if (ctx->pc == 0x414AB8u) {
        ctx->pc = 0x414AB8u;
            // 0x414ab8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x414ABCu;
        goto label_414abc;
    }
    ctx->pc = 0x414AB4u;
    SET_GPR_U32(ctx, 31, 0x414ABCu);
    ctx->pc = 0x414AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414AB4u;
            // 0x414ab8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414ABCu; }
        if (ctx->pc != 0x414ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414ABCu; }
        if (ctx->pc != 0x414ABCu) { return; }
    }
    ctx->pc = 0x414ABCu;
label_414abc:
    // 0x414abc: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x414abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_414ac0:
    // 0x414ac0: 0xc0db608  jal         func_36D820
label_414ac4:
    if (ctx->pc == 0x414AC4u) {
        ctx->pc = 0x414AC4u;
            // 0x414ac4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414AC8u;
        goto label_414ac8;
    }
    ctx->pc = 0x414AC0u;
    SET_GPR_U32(ctx, 31, 0x414AC8u);
    ctx->pc = 0x414AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414AC0u;
            // 0x414ac4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D820u;
    if (runtime->hasFunction(0x36D820u)) {
        auto targetFn = runtime->lookupFunction(0x36D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AC8u; }
        if (ctx->pc != 0x414AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D820_0x36d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AC8u; }
        if (ctx->pc != 0x414AC8u) { return; }
    }
    ctx->pc = 0x414AC8u;
label_414ac8:
    // 0x414ac8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_414acc:
    if (ctx->pc == 0x414ACCu) {
        ctx->pc = 0x414AD0u;
        goto label_414ad0;
    }
    ctx->pc = 0x414AC8u;
    {
        const bool branch_taken_0x414ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414ac8) {
            ctx->pc = 0x414AF0u;
            goto label_414af0;
        }
    }
    ctx->pc = 0x414AD0u;
label_414ad0:
    // 0x414ad0: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x414ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_414ad4:
    // 0x414ad4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x414ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414ad8:
    // 0x414ad8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_414adc:
    if (ctx->pc == 0x414ADCu) {
        ctx->pc = 0x414AE0u;
        goto label_414ae0;
    }
    ctx->pc = 0x414AD8u;
    {
        const bool branch_taken_0x414ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x414ad8) {
            ctx->pc = 0x414AF0u;
            goto label_414af0;
        }
    }
    ctx->pc = 0x414AE0u;
label_414ae0:
    // 0x414ae0: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x414ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_414ae4:
    // 0x414ae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x414ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_414ae8:
    // 0x414ae8: 0xc0db628  jal         func_36D8A0
label_414aec:
    if (ctx->pc == 0x414AECu) {
        ctx->pc = 0x414AECu;
            // 0x414aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x414AF0u;
        goto label_414af0;
    }
    ctx->pc = 0x414AE8u;
    SET_GPR_U32(ctx, 31, 0x414AF0u);
    ctx->pc = 0x414AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414AE8u;
            // 0x414aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8A0u;
    if (runtime->hasFunction(0x36D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AF0u; }
        if (ctx->pc != 0x414AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8A0_0x36d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AF0u; }
        if (ctx->pc != 0x414AF0u) { return; }
    }
    ctx->pc = 0x414AF0u;
label_414af0:
    // 0x414af0: 0xc0f4ac4  jal         func_3D2B10
label_414af4:
    if (ctx->pc == 0x414AF4u) {
        ctx->pc = 0x414AF4u;
            // 0x414af4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x414AF8u;
        goto label_414af8;
    }
    ctx->pc = 0x414AF0u;
    SET_GPR_U32(ctx, 31, 0x414AF8u);
    ctx->pc = 0x414AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414AF0u;
            // 0x414af4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AF8u; }
        if (ctx->pc != 0x414AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414AF8u; }
        if (ctx->pc != 0x414AF8u) { return; }
    }
    ctx->pc = 0x414AF8u;
label_414af8:
    // 0x414af8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x414af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_414afc:
    // 0x414afc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x414afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_414b00:
    // 0x414b00: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_414b04:
    if (ctx->pc == 0x414B04u) {
        ctx->pc = 0x414B04u;
            // 0x414b04: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x414B08u;
        goto label_414b08;
    }
    ctx->pc = 0x414B00u;
    {
        const bool branch_taken_0x414b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x414B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414B00u;
            // 0x414b04: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b00) {
            ctx->pc = 0x414AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_414aa0;
        }
    }
    ctx->pc = 0x414B08u;
label_414b08:
    // 0x414b08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x414b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_414b0c:
    // 0x414b0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x414b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414b10:
    // 0x414b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x414b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414b14:
    // 0x414b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x414b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414b18:
    // 0x414b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414b1c:
    // 0x414b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_414b20:
    // 0x414b20: 0x3e00008  jr          $ra
label_414b24:
    if (ctx->pc == 0x414B24u) {
        ctx->pc = 0x414B24u;
            // 0x414b24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x414B28u;
        goto label_414b28;
    }
    ctx->pc = 0x414B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414B20u;
            // 0x414b24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414B28u;
label_414b28:
    // 0x414b28: 0x0  nop
    ctx->pc = 0x414b28u;
    // NOP
label_414b2c:
    // 0x414b2c: 0x0  nop
    ctx->pc = 0x414b2cu;
    // NOP
label_414b30:
    // 0x414b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_414b34:
    // 0x414b34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x414b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414b38:
    // 0x414b38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x414b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_414b3c:
    // 0x414b3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x414b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_414b40:
    // 0x414b40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414b44:
    // 0x414b44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x414b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414b48:
    // 0x414b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x414b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_414b4c:
    // 0x414b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_414b50:
    // 0x414b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_414b54:
    // 0x414b54: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x414b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_414b58:
    // 0x414b58: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x414b58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_414b5c:
    // 0x414b5c: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
label_414b60:
    if (ctx->pc == 0x414B60u) {
        ctx->pc = 0x414B60u;
            // 0x414b60: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x414B64u;
        goto label_414b64;
    }
    ctx->pc = 0x414B5Cu;
    {
        const bool branch_taken_0x414b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x414b5c) {
            ctx->pc = 0x414B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414B5Cu;
            // 0x414b60: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414BC4u;
            goto label_414bc4;
        }
    }
    ctx->pc = 0x414B64u;
label_414b64:
    // 0x414b64: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_414b68:
    if (ctx->pc == 0x414B68u) {
        ctx->pc = 0x414B6Cu;
        goto label_414b6c;
    }
    ctx->pc = 0x414B64u;
    {
        const bool branch_taken_0x414b64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414b64) {
            ctx->pc = 0x414BB8u;
            goto label_414bb8;
        }
    }
    ctx->pc = 0x414B6Cu;
label_414b6c:
    // 0x414b6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x414b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414b70:
    // 0x414b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x414b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414b74:
    // 0x414b74: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x414b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_414b78:
    // 0x414b78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x414b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_414b7c:
    // 0x414b7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x414b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414b80:
    // 0x414b80: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x414b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_414b84:
    // 0x414b84: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_414b88:
    if (ctx->pc == 0x414B88u) {
        ctx->pc = 0x414B8Cu;
        goto label_414b8c;
    }
    ctx->pc = 0x414B84u;
    {
        const bool branch_taken_0x414b84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x414b84) {
            ctx->pc = 0x414BA8u;
            goto label_414ba8;
        }
    }
    ctx->pc = 0x414B8Cu;
label_414b8c:
    // 0x414b8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x414b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414b90:
    // 0x414b90: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x414b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_414b94:
    // 0x414b94: 0x320f809  jalr        $t9
label_414b98:
    if (ctx->pc == 0x414B98u) {
        ctx->pc = 0x414B98u;
            // 0x414b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414B9Cu;
        goto label_414b9c;
    }
    ctx->pc = 0x414B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x414B9Cu);
        ctx->pc = 0x414B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414B94u;
            // 0x414b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x414B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x414B9Cu; }
            if (ctx->pc != 0x414B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x414B9Cu;
label_414b9c:
    // 0x414b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414ba0:
    // 0x414ba0: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x414ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_414ba4:
    // 0x414ba4: 0x0  nop
    ctx->pc = 0x414ba4u;
    // NOP
label_414ba8:
    // 0x414ba8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x414ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_414bac:
    // 0x414bac: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x414bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_414bb0:
    // 0x414bb0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_414bb4:
    if (ctx->pc == 0x414BB4u) {
        ctx->pc = 0x414BB4u;
            // 0x414bb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x414BB8u;
        goto label_414bb8;
    }
    ctx->pc = 0x414BB0u;
    {
        const bool branch_taken_0x414bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414BB0u;
            // 0x414bb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414bb0) {
            ctx->pc = 0x414B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_414b74;
        }
    }
    ctx->pc = 0x414BB8u;
label_414bb8:
    // 0x414bb8: 0xc0db61c  jal         func_36D870
label_414bbc:
    if (ctx->pc == 0x414BBCu) {
        ctx->pc = 0x414BBCu;
            // 0x414bbc: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x414BC0u;
        goto label_414bc0;
    }
    ctx->pc = 0x414BB8u;
    SET_GPR_U32(ctx, 31, 0x414BC0u);
    ctx->pc = 0x414BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414BB8u;
            // 0x414bbc: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D870u;
    if (runtime->hasFunction(0x36D870u)) {
        auto targetFn = runtime->lookupFunction(0x36D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414BC0u; }
        if (ctx->pc != 0x414BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D870_0x36d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414BC0u; }
        if (ctx->pc != 0x414BC0u) { return; }
    }
    ctx->pc = 0x414BC0u;
label_414bc0:
    // 0x414bc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x414bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_414bc4:
    // 0x414bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x414bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414bc8:
    // 0x414bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x414bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414bcc:
    // 0x414bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x414bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414bd0:
    // 0x414bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414bd4:
    // 0x414bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_414bd8:
    // 0x414bd8: 0x3e00008  jr          $ra
label_414bdc:
    if (ctx->pc == 0x414BDCu) {
        ctx->pc = 0x414BDCu;
            // 0x414bdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x414BE0u;
        goto label_414be0;
    }
    ctx->pc = 0x414BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414BD8u;
            // 0x414bdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414BE0u;
label_414be0:
    // 0x414be0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x414be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_414be4:
    // 0x414be4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_414be8:
    if (ctx->pc == 0x414BE8u) {
        ctx->pc = 0x414BE8u;
            // 0x414be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414BECu;
        goto label_414bec;
    }
    ctx->pc = 0x414BE4u;
    {
        const bool branch_taken_0x414be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414be4) {
            ctx->pc = 0x414BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414BE4u;
            // 0x414be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414BF8u;
            goto label_414bf8;
        }
    }
    ctx->pc = 0x414BECu;
label_414bec:
    // 0x414bec: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x414becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_414bf0:
    // 0x414bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x414bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414bf4:
    // 0x414bf4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x414bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_414bf8:
    // 0x414bf8: 0x3e00008  jr          $ra
label_414bfc:
    if (ctx->pc == 0x414BFCu) {
        ctx->pc = 0x414C00u;
        goto label_414c00;
    }
    ctx->pc = 0x414BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414C00u;
label_414c00:
    // 0x414c00: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x414c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_414c04:
    // 0x414c04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_414c08:
    if (ctx->pc == 0x414C08u) {
        ctx->pc = 0x414C08u;
            // 0x414c08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x414C0Cu;
        goto label_414c0c;
    }
    ctx->pc = 0x414C04u;
    {
        const bool branch_taken_0x414c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414c04) {
            ctx->pc = 0x414C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414C04u;
            // 0x414c08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414C18u;
            goto label_414c18;
        }
    }
    ctx->pc = 0x414C0Cu;
label_414c0c:
    // 0x414c0c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x414c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_414c10:
    // 0x414c10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x414c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414c14:
    // 0x414c14: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x414c14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_414c18:
    // 0x414c18: 0x3e00008  jr          $ra
label_414c1c:
    if (ctx->pc == 0x414C1Cu) {
        ctx->pc = 0x414C20u;
        goto label_fallthrough_0x414c18;
    }
    ctx->pc = 0x414C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x414c18:
    ctx->pc = 0x414C20u;
}
