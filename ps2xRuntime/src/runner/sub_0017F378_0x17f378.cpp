#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F378
// Address: 0x17f378 - 0x17f3d0
void sub_0017F378_0x17f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F378_0x17f378");
#endif

    switch (ctx->pc) {
        case 0x17f39cu: goto label_17f39c;
        case 0x17f3a8u: goto label_17f3a8;
        default: break;
    }

    ctx->pc = 0x17f378u;

    // 0x17f378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f37c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x17f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17f380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f384: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x17f384u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x17f388: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x17f38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f394: 0xc05fcd8  jal         func_17F360
    ctx->pc = 0x17F394u;
    SET_GPR_U32(ctx, 31, 0x17F39Cu);
    ctx->pc = 0x17F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F394u;
            // 0x17f398: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F360u;
    if (runtime->hasFunction(0x17F360u)) {
        auto targetFn = runtime->lookupFunction(0x17F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F39Cu; }
        if (ctx->pc != 0x17F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F360_0x17f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F39Cu; }
        if (ctx->pc != 0x17F39Cu) { return; }
    }
    ctx->pc = 0x17F39Cu;
label_17f39c:
    // 0x17f39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3a0: 0xc05fcd8  jal         func_17F360
    ctx->pc = 0x17F3A0u;
    SET_GPR_U32(ctx, 31, 0x17F3A8u);
    ctx->pc = 0x17F3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3A0u;
            // 0x17f3a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F360u;
    if (runtime->hasFunction(0x17F360u)) {
        auto targetFn = runtime->lookupFunction(0x17F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3A8u; }
        if (ctx->pc != 0x17F3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F360_0x17f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3A8u; }
        if (ctx->pc != 0x17F3A8u) { return; }
    }
    ctx->pc = 0x17F3A8u;
label_17f3a8:
    // 0x17f3a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f3ac: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x17f3acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x17f3b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17f3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3b4: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x17f3b4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17f3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3C4u;
            // 0x17f3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F3CCu;
    // 0x17f3cc: 0x0  nop
    ctx->pc = 0x17f3ccu;
    // NOP
}
