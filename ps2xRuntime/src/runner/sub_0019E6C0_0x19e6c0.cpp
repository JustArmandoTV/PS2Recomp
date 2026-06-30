#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E6C0
// Address: 0x19e6c0 - 0x19e7a0
void sub_0019E6C0_0x19e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E6C0_0x19e6c0");
#endif

    switch (ctx->pc) {
        case 0x19e730u: goto label_19e730;
        case 0x19e75cu: goto label_19e75c;
        default: break;
    }

    ctx->pc = 0x19e6c0u;

    // 0x19e6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e6c8: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6d0: 0x806a2a6  j           func_1A8A98
    ctx->pc = 0x19E6D0u;
    ctx->pc = 0x19E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6D0u;
            // 0x19e6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A98u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E6D8u;
    // 0x19e6d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19e6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6e0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x19e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19e6e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e6e8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x19e6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E6ECu;
    {
        const bool branch_taken_0x19e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6ECu;
            // 0x19e6f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6ec) {
            ctx->pc = 0x19E708u;
            goto label_19e708;
        }
    }
    ctx->pc = 0x19E6F4u;
    // 0x19e6f4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6fc: 0x24849dd8  addiu       $a0, $a0, -0x6228
    ctx->pc = 0x19e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942168));
    // 0x19e700: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E700u;
    ctx->pc = 0x19E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E700u;
            // 0x19e704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E708u;
label_19e708:
    // 0x19e708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e70c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x19e710: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E710u;
    ctx->pc = 0x19E714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E710u;
            // 0x19e714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E718u;
    // 0x19e718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e71c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e720: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x19e724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e728: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x19E728u;
    SET_GPR_U32(ctx, 31, 0x19E730u);
    ctx->pc = 0x19E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E728u;
            // 0x19e72c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E730u; }
        if (ctx->pc != 0x19E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5FD0_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E730u; }
        if (ctx->pc != 0x19E730u) { return; }
    }
    ctx->pc = 0x19E730u;
label_19e730:
    // 0x19e730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e738: 0x3e00008  jr          $ra
    ctx->pc = 0x19E738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E738u;
            // 0x19e73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E740u;
    // 0x19e740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e748: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e750: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e754: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E754u;
    SET_GPR_U32(ctx, 31, 0x19E75Cu);
    ctx->pc = 0x19E758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E754u;
            // 0x19e758: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E75Cu; }
        if (ctx->pc != 0x19E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E75Cu; }
        if (ctx->pc != 0x19E75Cu) { return; }
    }
    ctx->pc = 0x19E75Cu;
label_19e75c:
    // 0x19e75c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e764: 0x24849e00  addiu       $a0, $a0, -0x6200
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942208));
    // 0x19e768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e76c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E76Cu;
    {
        const bool branch_taken_0x19e76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E76Cu;
            // 0x19e770: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e76c) {
            ctx->pc = 0x19E788u;
            goto label_19e788;
        }
    }
    ctx->pc = 0x19E774u;
    // 0x19e774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e77c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e780: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E780u;
    ctx->pc = 0x19E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E780u;
            // 0x19e784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E788u;
label_19e788:
    // 0x19e788: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x19e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19e78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e798: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E798u;
    ctx->pc = 0x19E79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E798u;
            // 0x19e79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E7A0u;
}
