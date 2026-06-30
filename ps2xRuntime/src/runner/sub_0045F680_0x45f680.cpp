#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045F680
// Address: 0x45f680 - 0x45f750
void sub_0045F680_0x45f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F680_0x45f680");
#endif

    switch (ctx->pc) {
        case 0x45f6a4u: goto label_45f6a4;
        case 0x45f6b4u: goto label_45f6b4;
        case 0x45f6c4u: goto label_45f6c4;
        case 0x45f6d4u: goto label_45f6d4;
        case 0x45f72cu: goto label_45f72c;
        default: break;
    }

    ctx->pc = 0x45f680u;

    // 0x45f680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45f684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45f688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45f68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45f690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45f694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45f694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f698: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45f69c: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45F69Cu;
    SET_GPR_U32(ctx, 31, 0x45F6A4u);
    ctx->pc = 0x45F6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F69Cu;
            // 0x45f6a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6A4u; }
        if (ctx->pc != 0x45F6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6A4u; }
        if (ctx->pc != 0x45F6A4u) { return; }
    }
    ctx->pc = 0x45F6A4u;
label_45f6a4:
    // 0x45f6a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45f6a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45f6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f6ac: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F6ACu;
    SET_GPR_U32(ctx, 31, 0x45F6B4u);
    ctx->pc = 0x45F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F6ACu;
            // 0x45f6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6B4u; }
        if (ctx->pc != 0x45F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6B4u; }
        if (ctx->pc != 0x45F6B4u) { return; }
    }
    ctx->pc = 0x45F6B4u;
label_45f6b4:
    // 0x45f6b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45f6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45f6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f6bc: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F6BCu;
    SET_GPR_U32(ctx, 31, 0x45F6C4u);
    ctx->pc = 0x45F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F6BCu;
            // 0x45f6c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6C4u; }
        if (ctx->pc != 0x45F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6C4u; }
        if (ctx->pc != 0x45F6C4u) { return; }
    }
    ctx->pc = 0x45F6C4u;
label_45f6c4:
    // 0x45f6c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x45f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x45f6c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45f6cc: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F6CCu;
    SET_GPR_U32(ctx, 31, 0x45F6D4u);
    ctx->pc = 0x45F6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F6CCu;
            // 0x45f6d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6D4u; }
        if (ctx->pc != 0x45F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F6D4u; }
        if (ctx->pc != 0x45F6D4u) { return; }
    }
    ctx->pc = 0x45F6D4u;
label_45f6d4:
    // 0x45f6d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x45f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x45f6d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x45F6D8u;
    {
        const bool branch_taken_0x45f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f6d8) {
            ctx->pc = 0x45F6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F6D8u;
            // 0x45f6dc: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F6F4u;
            goto label_45f6f4;
        }
    }
    ctx->pc = 0x45F6E0u;
    // 0x45f6e0: 0x2e410009  sltiu       $at, $s2, 0x9
    ctx->pc = 0x45f6e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x45f6e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x45F6E4u;
    {
        const bool branch_taken_0x45f6e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f6e4) {
            ctx->pc = 0x45F6F0u;
            goto label_45f6f0;
        }
    }
    ctx->pc = 0x45F6ECu;
    // 0x45f6ec: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x45f6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_45f6f0:
    // 0x45f6f0: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x45f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_45f6f4:
    // 0x45f6f4: 0x2408fc18  addiu       $t0, $zero, -0x3E8
    ctx->pc = 0x45f6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x45f6f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x45f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45f6fc: 0x2625ffc3  addiu       $a1, $s1, -0x3D
    ctx->pc = 0x45f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967235));
    // 0x45f700: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x45f700u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45f704: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45f708: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x45f708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x45f70c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x45f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x45f710: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x45f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x45f714: 0x24660071  addiu       $a2, $v1, 0x71
    ctx->pc = 0x45f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 113));
    // 0x45f718: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x45f718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x45f71c: 0x2407ff24  addiu       $a3, $zero, -0xDC
    ctx->pc = 0x45f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
    // 0x45f720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45f720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x45f724: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x45F724u;
    SET_GPR_U32(ctx, 31, 0x45F72Cu);
    ctx->pc = 0x45F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F724u;
            // 0x45f728: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F72Cu; }
        if (ctx->pc != 0x45F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F72Cu; }
        if (ctx->pc != 0x45F72Cu) { return; }
    }
    ctx->pc = 0x45F72Cu;
label_45f72c:
    // 0x45f72c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45f730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45f730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x45F73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F73Cu;
            // 0x45f740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45F744u;
    // 0x45f744: 0x0  nop
    ctx->pc = 0x45f744u;
    // NOP
    // 0x45f748: 0x0  nop
    ctx->pc = 0x45f748u;
    // NOP
    // 0x45f74c: 0x0  nop
    ctx->pc = 0x45f74cu;
    // NOP
}
