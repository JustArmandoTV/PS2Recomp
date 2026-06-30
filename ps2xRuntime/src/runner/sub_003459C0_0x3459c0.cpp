#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003459C0
// Address: 0x3459c0 - 0x345b70
void sub_003459C0_0x3459c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003459C0_0x3459c0");
#endif

    switch (ctx->pc) {
        case 0x3459c0u: goto label_3459c0;
        case 0x3459c4u: goto label_3459c4;
        case 0x3459c8u: goto label_3459c8;
        case 0x3459ccu: goto label_3459cc;
        case 0x3459d0u: goto label_3459d0;
        case 0x3459d4u: goto label_3459d4;
        case 0x3459d8u: goto label_3459d8;
        case 0x3459dcu: goto label_3459dc;
        case 0x3459e0u: goto label_3459e0;
        case 0x3459e4u: goto label_3459e4;
        case 0x3459e8u: goto label_3459e8;
        case 0x3459ecu: goto label_3459ec;
        case 0x3459f0u: goto label_3459f0;
        case 0x3459f4u: goto label_3459f4;
        case 0x3459f8u: goto label_3459f8;
        case 0x3459fcu: goto label_3459fc;
        case 0x345a00u: goto label_345a00;
        case 0x345a04u: goto label_345a04;
        case 0x345a08u: goto label_345a08;
        case 0x345a0cu: goto label_345a0c;
        case 0x345a10u: goto label_345a10;
        case 0x345a14u: goto label_345a14;
        case 0x345a18u: goto label_345a18;
        case 0x345a1cu: goto label_345a1c;
        case 0x345a20u: goto label_345a20;
        case 0x345a24u: goto label_345a24;
        case 0x345a28u: goto label_345a28;
        case 0x345a2cu: goto label_345a2c;
        case 0x345a30u: goto label_345a30;
        case 0x345a34u: goto label_345a34;
        case 0x345a38u: goto label_345a38;
        case 0x345a3cu: goto label_345a3c;
        case 0x345a40u: goto label_345a40;
        case 0x345a44u: goto label_345a44;
        case 0x345a48u: goto label_345a48;
        case 0x345a4cu: goto label_345a4c;
        case 0x345a50u: goto label_345a50;
        case 0x345a54u: goto label_345a54;
        case 0x345a58u: goto label_345a58;
        case 0x345a5cu: goto label_345a5c;
        case 0x345a60u: goto label_345a60;
        case 0x345a64u: goto label_345a64;
        case 0x345a68u: goto label_345a68;
        case 0x345a6cu: goto label_345a6c;
        case 0x345a70u: goto label_345a70;
        case 0x345a74u: goto label_345a74;
        case 0x345a78u: goto label_345a78;
        case 0x345a7cu: goto label_345a7c;
        case 0x345a80u: goto label_345a80;
        case 0x345a84u: goto label_345a84;
        case 0x345a88u: goto label_345a88;
        case 0x345a8cu: goto label_345a8c;
        case 0x345a90u: goto label_345a90;
        case 0x345a94u: goto label_345a94;
        case 0x345a98u: goto label_345a98;
        case 0x345a9cu: goto label_345a9c;
        case 0x345aa0u: goto label_345aa0;
        case 0x345aa4u: goto label_345aa4;
        case 0x345aa8u: goto label_345aa8;
        case 0x345aacu: goto label_345aac;
        case 0x345ab0u: goto label_345ab0;
        case 0x345ab4u: goto label_345ab4;
        case 0x345ab8u: goto label_345ab8;
        case 0x345abcu: goto label_345abc;
        case 0x345ac0u: goto label_345ac0;
        case 0x345ac4u: goto label_345ac4;
        case 0x345ac8u: goto label_345ac8;
        case 0x345accu: goto label_345acc;
        case 0x345ad0u: goto label_345ad0;
        case 0x345ad4u: goto label_345ad4;
        case 0x345ad8u: goto label_345ad8;
        case 0x345adcu: goto label_345adc;
        case 0x345ae0u: goto label_345ae0;
        case 0x345ae4u: goto label_345ae4;
        case 0x345ae8u: goto label_345ae8;
        case 0x345aecu: goto label_345aec;
        case 0x345af0u: goto label_345af0;
        case 0x345af4u: goto label_345af4;
        case 0x345af8u: goto label_345af8;
        case 0x345afcu: goto label_345afc;
        case 0x345b00u: goto label_345b00;
        case 0x345b04u: goto label_345b04;
        case 0x345b08u: goto label_345b08;
        case 0x345b0cu: goto label_345b0c;
        case 0x345b10u: goto label_345b10;
        case 0x345b14u: goto label_345b14;
        case 0x345b18u: goto label_345b18;
        case 0x345b1cu: goto label_345b1c;
        case 0x345b20u: goto label_345b20;
        case 0x345b24u: goto label_345b24;
        case 0x345b28u: goto label_345b28;
        case 0x345b2cu: goto label_345b2c;
        case 0x345b30u: goto label_345b30;
        case 0x345b34u: goto label_345b34;
        case 0x345b38u: goto label_345b38;
        case 0x345b3cu: goto label_345b3c;
        case 0x345b40u: goto label_345b40;
        case 0x345b44u: goto label_345b44;
        case 0x345b48u: goto label_345b48;
        case 0x345b4cu: goto label_345b4c;
        case 0x345b50u: goto label_345b50;
        case 0x345b54u: goto label_345b54;
        case 0x345b58u: goto label_345b58;
        case 0x345b5cu: goto label_345b5c;
        case 0x345b60u: goto label_345b60;
        case 0x345b64u: goto label_345b64;
        case 0x345b68u: goto label_345b68;
        case 0x345b6cu: goto label_345b6c;
        default: break;
    }

    ctx->pc = 0x3459c0u;

label_3459c0:
    // 0x3459c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3459c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3459c4:
    // 0x3459c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3459c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3459c8:
    // 0x3459c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3459c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3459cc:
    // 0x3459cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3459ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3459d0:
    // 0x3459d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3459d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3459d4:
    // 0x3459d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3459d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3459d8:
    // 0x3459d8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_3459dc:
    if (ctx->pc == 0x3459DCu) {
        ctx->pc = 0x3459DCu;
            // 0x3459dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3459E0u;
        goto label_3459e0;
    }
    ctx->pc = 0x3459D8u;
    {
        const bool branch_taken_0x3459d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3459DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3459D8u;
            // 0x3459dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459d8) {
            ctx->pc = 0x345A28u;
            goto label_345a28;
        }
    }
    ctx->pc = 0x3459E0u;
label_3459e0:
    // 0x3459e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3459e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3459e4:
    // 0x3459e4: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x3459e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3459e8:
    // 0x3459e8: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x3459e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3459ec:
    // 0x3459ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3459ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3459f0:
    // 0x3459f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3459f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3459f4:
    // 0x3459f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3459f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3459f8:
    // 0x3459f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3459fc:
    if (ctx->pc == 0x3459FCu) {
        ctx->pc = 0x345A00u;
        goto label_345a00;
    }
    ctx->pc = 0x3459F8u;
    {
        const bool branch_taken_0x3459f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459f8) {
            ctx->pc = 0x345A10u;
            goto label_345a10;
        }
    }
    ctx->pc = 0x345A00u;
label_345a00:
    // 0x345a00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x345a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_345a04:
    // 0x345a04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x345a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_345a08:
    // 0x345a08: 0x320f809  jalr        $t9
label_345a0c:
    if (ctx->pc == 0x345A0Cu) {
        ctx->pc = 0x345A0Cu;
            // 0x345a0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x345A10u;
        goto label_345a10;
    }
    ctx->pc = 0x345A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x345A10u);
        ctx->pc = 0x345A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345A08u;
            // 0x345a0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x345A10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x345A10u; }
            if (ctx->pc != 0x345A10u) { return; }
        }
        }
    }
    ctx->pc = 0x345A10u;
label_345a10:
    // 0x345a10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x345a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_345a14:
    // 0x345a14: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_345a18:
    if (ctx->pc == 0x345A18u) {
        ctx->pc = 0x345A18u;
            // 0x345a18: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x345A1Cu;
        goto label_345a1c;
    }
    ctx->pc = 0x345A14u;
    {
        const bool branch_taken_0x345a14 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x345A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345A14u;
            // 0x345a18: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a14) {
            ctx->pc = 0x3459ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3459ec;
        }
    }
    ctx->pc = 0x345A1Cu;
label_345a1c:
    // 0x345a1c: 0xc04008c  jal         func_100230
label_345a20:
    if (ctx->pc == 0x345A20u) {
        ctx->pc = 0x345A20u;
            // 0x345a20: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x345A24u;
        goto label_345a24;
    }
    ctx->pc = 0x345A1Cu;
    SET_GPR_U32(ctx, 31, 0x345A24u);
    ctx->pc = 0x345A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345A1Cu;
            // 0x345a20: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A24u; }
        if (ctx->pc != 0x345A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A24u; }
        if (ctx->pc != 0x345A24u) { return; }
    }
    ctx->pc = 0x345A24u;
label_345a24:
    // 0x345a24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x345a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_345a28:
    // 0x345a28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x345a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_345a2c:
    // 0x345a2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_345a30:
    if (ctx->pc == 0x345A30u) {
        ctx->pc = 0x345A30u;
            // 0x345a30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x345A34u;
        goto label_345a34;
    }
    ctx->pc = 0x345A2Cu;
    {
        const bool branch_taken_0x345a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a2c) {
            ctx->pc = 0x345A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345A2Cu;
            // 0x345a30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345A48u;
            goto label_345a48;
        }
    }
    ctx->pc = 0x345A34u;
label_345a34:
    // 0x345a34: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345a38:
    // 0x345a38: 0xc0407c0  jal         func_101F00
label_345a3c:
    if (ctx->pc == 0x345A3Cu) {
        ctx->pc = 0x345A3Cu;
            // 0x345a3c: 0x24a55a60  addiu       $a1, $a1, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23136));
        ctx->pc = 0x345A40u;
        goto label_345a40;
    }
    ctx->pc = 0x345A38u;
    SET_GPR_U32(ctx, 31, 0x345A40u);
    ctx->pc = 0x345A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345A38u;
            // 0x345a3c: 0x24a55a60  addiu       $a1, $a1, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A40u; }
        if (ctx->pc != 0x345A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A40u; }
        if (ctx->pc != 0x345A40u) { return; }
    }
    ctx->pc = 0x345A40u;
label_345a40:
    // 0x345a40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x345a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_345a44:
    // 0x345a44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_345a48:
    // 0x345a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x345a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_345a4c:
    // 0x345a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345a50:
    // 0x345a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345a54:
    // 0x345a54: 0x3e00008  jr          $ra
label_345a58:
    if (ctx->pc == 0x345A58u) {
        ctx->pc = 0x345A58u;
            // 0x345a58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x345A5Cu;
        goto label_345a5c;
    }
    ctx->pc = 0x345A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345A54u;
            // 0x345a58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345A5Cu;
label_345a5c:
    // 0x345a5c: 0x0  nop
    ctx->pc = 0x345a5cu;
    // NOP
label_345a60:
    // 0x345a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_345a64:
    // 0x345a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_345a68:
    // 0x345a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_345a6c:
    // 0x345a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_345a70:
    // 0x345a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x345a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345a74:
    // 0x345a74: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_345a78:
    if (ctx->pc == 0x345A78u) {
        ctx->pc = 0x345A78u;
            // 0x345a78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345A7Cu;
        goto label_345a7c;
    }
    ctx->pc = 0x345A74u;
    {
        const bool branch_taken_0x345a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345A74u;
            // 0x345a78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a74) {
            ctx->pc = 0x345AC8u;
            goto label_345ac8;
        }
    }
    ctx->pc = 0x345A7Cu;
label_345a7c:
    // 0x345a7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345a80:
    // 0x345a80: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x345a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
label_345a84:
    // 0x345a84: 0xc0d19b0  jal         func_3466C0
label_345a88:
    if (ctx->pc == 0x345A88u) {
        ctx->pc = 0x345A88u;
            // 0x345a88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x345A8Cu;
        goto label_345a8c;
    }
    ctx->pc = 0x345A84u;
    SET_GPR_U32(ctx, 31, 0x345A8Cu);
    ctx->pc = 0x345A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345A84u;
            // 0x345a88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3466C0u;
    if (runtime->hasFunction(0x3466C0u)) {
        auto targetFn = runtime->lookupFunction(0x3466C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A8Cu; }
        if (ctx->pc != 0x345A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003466C0_0x3466c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345A8Cu; }
        if (ctx->pc != 0x345A8Cu) { return; }
    }
    ctx->pc = 0x345A8Cu;
label_345a8c:
    // 0x345a8c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_345a90:
    if (ctx->pc == 0x345A90u) {
        ctx->pc = 0x345A90u;
            // 0x345a90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x345A94u;
        goto label_345a94;
    }
    ctx->pc = 0x345A8Cu;
    {
        const bool branch_taken_0x345a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a8c) {
            ctx->pc = 0x345A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345A8Cu;
            // 0x345a90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345AB4u;
            goto label_345ab4;
        }
    }
    ctx->pc = 0x345A94u;
label_345a94:
    // 0x345a94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345a98:
    // 0x345a98: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x345a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_345a9c:
    // 0x345a9c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_345aa0:
    if (ctx->pc == 0x345AA0u) {
        ctx->pc = 0x345AA0u;
            // 0x345aa0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x345AA4u;
        goto label_345aa4;
    }
    ctx->pc = 0x345A9Cu;
    {
        const bool branch_taken_0x345a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x345AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345A9Cu;
            // 0x345aa0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a9c) {
            ctx->pc = 0x345AB0u;
            goto label_345ab0;
        }
    }
    ctx->pc = 0x345AA4u;
label_345aa4:
    // 0x345aa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345aa8:
    // 0x345aa8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_345aac:
    // 0x345aac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x345aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_345ab0:
    // 0x345ab0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x345ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_345ab4:
    // 0x345ab4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x345ab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_345ab8:
    // 0x345ab8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_345abc:
    if (ctx->pc == 0x345ABCu) {
        ctx->pc = 0x345ABCu;
            // 0x345abc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345AC0u;
        goto label_345ac0;
    }
    ctx->pc = 0x345AB8u;
    {
        const bool branch_taken_0x345ab8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x345ab8) {
            ctx->pc = 0x345ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345AB8u;
            // 0x345abc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345ACCu;
            goto label_345acc;
        }
    }
    ctx->pc = 0x345AC0u;
label_345ac0:
    // 0x345ac0: 0xc0400a8  jal         func_1002A0
label_345ac4:
    if (ctx->pc == 0x345AC4u) {
        ctx->pc = 0x345AC4u;
            // 0x345ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345AC8u;
        goto label_345ac8;
    }
    ctx->pc = 0x345AC0u;
    SET_GPR_U32(ctx, 31, 0x345AC8u);
    ctx->pc = 0x345AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345AC0u;
            // 0x345ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345AC8u; }
        if (ctx->pc != 0x345AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345AC8u; }
        if (ctx->pc != 0x345AC8u) { return; }
    }
    ctx->pc = 0x345AC8u;
label_345ac8:
    // 0x345ac8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x345ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345acc:
    // 0x345acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345ad0:
    // 0x345ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345ad4:
    // 0x345ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345ad8:
    // 0x345ad8: 0x3e00008  jr          $ra
label_345adc:
    if (ctx->pc == 0x345ADCu) {
        ctx->pc = 0x345ADCu;
            // 0x345adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x345AE0u;
        goto label_345ae0;
    }
    ctx->pc = 0x345AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345AD8u;
            // 0x345adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345AE0u;
label_345ae0:
    // 0x345ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_345ae4:
    // 0x345ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_345ae8:
    // 0x345ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_345aec:
    // 0x345aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_345af0:
    // 0x345af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345af4:
    // 0x345af4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_345af8:
    if (ctx->pc == 0x345AF8u) {
        ctx->pc = 0x345AF8u;
            // 0x345af8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345AFCu;
        goto label_345afc;
    }
    ctx->pc = 0x345AF4u;
    {
        const bool branch_taken_0x345af4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345AF4u;
            // 0x345af8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345af4) {
            ctx->pc = 0x345B58u;
            goto label_345b58;
        }
    }
    ctx->pc = 0x345AFCu;
label_345afc:
    // 0x345afc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345b00:
    // 0x345b00: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x345b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
label_345b04:
    // 0x345b04: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_345b08:
    if (ctx->pc == 0x345B08u) {
        ctx->pc = 0x345B08u;
            // 0x345b08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x345B0Cu;
        goto label_345b0c;
    }
    ctx->pc = 0x345B04u;
    {
        const bool branch_taken_0x345b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345B04u;
            // 0x345b08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b04) {
            ctx->pc = 0x345B40u;
            goto label_345b40;
        }
    }
    ctx->pc = 0x345B0Cu;
label_345b0c:
    // 0x345b0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345b10:
    // 0x345b10: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x345b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_345b14:
    // 0x345b14: 0xc0d37dc  jal         func_34DF70
label_345b18:
    if (ctx->pc == 0x345B18u) {
        ctx->pc = 0x345B18u;
            // 0x345b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x345B1Cu;
        goto label_345b1c;
    }
    ctx->pc = 0x345B14u;
    SET_GPR_U32(ctx, 31, 0x345B1Cu);
    ctx->pc = 0x345B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345B14u;
            // 0x345b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345B1Cu; }
        if (ctx->pc != 0x345B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345B1Cu; }
        if (ctx->pc != 0x345B1Cu) { return; }
    }
    ctx->pc = 0x345B1Cu;
label_345b1c:
    // 0x345b1c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_345b20:
    if (ctx->pc == 0x345B20u) {
        ctx->pc = 0x345B20u;
            // 0x345b20: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x345B24u;
        goto label_345b24;
    }
    ctx->pc = 0x345B1Cu;
    {
        const bool branch_taken_0x345b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x345b1c) {
            ctx->pc = 0x345B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345B1Cu;
            // 0x345b20: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345B44u;
            goto label_345b44;
        }
    }
    ctx->pc = 0x345B24u;
label_345b24:
    // 0x345b24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345b28:
    // 0x345b28: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x345b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_345b2c:
    // 0x345b2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_345b30:
    if (ctx->pc == 0x345B30u) {
        ctx->pc = 0x345B30u;
            // 0x345b30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x345B34u;
        goto label_345b34;
    }
    ctx->pc = 0x345B2Cu;
    {
        const bool branch_taken_0x345b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345B2Cu;
            // 0x345b30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b2c) {
            ctx->pc = 0x345B40u;
            goto label_345b40;
        }
    }
    ctx->pc = 0x345B34u;
label_345b34:
    // 0x345b34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345b38:
    // 0x345b38: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x345b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_345b3c:
    // 0x345b3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x345b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_345b40:
    // 0x345b40: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x345b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_345b44:
    // 0x345b44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x345b44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_345b48:
    // 0x345b48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_345b4c:
    if (ctx->pc == 0x345B4Cu) {
        ctx->pc = 0x345B4Cu;
            // 0x345b4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345B50u;
        goto label_345b50;
    }
    ctx->pc = 0x345B48u;
    {
        const bool branch_taken_0x345b48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x345b48) {
            ctx->pc = 0x345B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345B48u;
            // 0x345b4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345B5Cu;
            goto label_345b5c;
        }
    }
    ctx->pc = 0x345B50u;
label_345b50:
    // 0x345b50: 0xc0400a8  jal         func_1002A0
label_345b54:
    if (ctx->pc == 0x345B54u) {
        ctx->pc = 0x345B54u;
            // 0x345b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345B58u;
        goto label_345b58;
    }
    ctx->pc = 0x345B50u;
    SET_GPR_U32(ctx, 31, 0x345B58u);
    ctx->pc = 0x345B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345B50u;
            // 0x345b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345B58u; }
        if (ctx->pc != 0x345B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345B58u; }
        if (ctx->pc != 0x345B58u) { return; }
    }
    ctx->pc = 0x345B58u;
label_345b58:
    // 0x345b58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_345b5c:
    // 0x345b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345b60:
    // 0x345b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345b64:
    // 0x345b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345b68:
    // 0x345b68: 0x3e00008  jr          $ra
label_345b6c:
    if (ctx->pc == 0x345B6Cu) {
        ctx->pc = 0x345B6Cu;
            // 0x345b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x345B70u;
        goto label_fallthrough_0x345b68;
    }
    ctx->pc = 0x345B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345B68u;
            // 0x345b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x345b68:
    ctx->pc = 0x345B70u;
}
