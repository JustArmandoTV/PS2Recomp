#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DFD80
// Address: 0x3dfd80 - 0x3dfdf0
void sub_003DFD80_0x3dfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFD80_0x3dfd80");
#endif

    switch (ctx->pc) {
        case 0x3dfdc0u: goto label_3dfdc0;
        case 0x3dfdd8u: goto label_3dfdd8;
        default: break;
    }

    ctx->pc = 0x3dfd80u;

    // 0x3dfd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dfd84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dfd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dfd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dfd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dfd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfd94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DFD94u;
    {
        const bool branch_taken_0x3dfd94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD94u;
            // 0x3dfd98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd94) {
            ctx->pc = 0x3DFDD8u;
            goto label_3dfdd8;
        }
    }
    ctx->pc = 0x3DFD9Cu;
    // 0x3dfd9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DFD9Cu;
    {
        const bool branch_taken_0x3dfd9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd9c) {
            ctx->pc = 0x3DFDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD9Cu;
            // 0x3dfda0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFDC4u;
            goto label_3dfdc4;
        }
    }
    ctx->pc = 0x3DFDA4u;
    // 0x3dfda4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFDA4u;
    {
        const bool branch_taken_0x3dfda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfda4) {
            ctx->pc = 0x3DFDC0u;
            goto label_3dfdc0;
        }
    }
    ctx->pc = 0x3DFDACu;
    // 0x3dfdac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3dfdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dfdb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFDB0u;
    {
        const bool branch_taken_0x3dfdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfdb0) {
            ctx->pc = 0x3DFDC0u;
            goto label_3dfdc0;
        }
    }
    ctx->pc = 0x3DFDB8u;
    // 0x3dfdb8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DFDB8u;
    SET_GPR_U32(ctx, 31, 0x3DFDC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFDC0u; }
        if (ctx->pc != 0x3DFDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFDC0u; }
        if (ctx->pc != 0x3DFDC0u) { return; }
    }
    ctx->pc = 0x3DFDC0u;
label_3dfdc0:
    // 0x3dfdc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dfdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3dfdc4:
    // 0x3dfdc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dfdc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dfdc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFDC8u;
    {
        const bool branch_taken_0x3dfdc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dfdc8) {
            ctx->pc = 0x3DFDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFDC8u;
            // 0x3dfdcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFDDCu;
            goto label_3dfddc;
        }
    }
    ctx->pc = 0x3DFDD0u;
    // 0x3dfdd0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DFDD0u;
    SET_GPR_U32(ctx, 31, 0x3DFDD8u);
    ctx->pc = 0x3DFDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFDD0u;
            // 0x3dfdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFDD8u; }
        if (ctx->pc != 0x3DFDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFDD8u; }
        if (ctx->pc != 0x3DFDD8u) { return; }
    }
    ctx->pc = 0x3DFDD8u;
label_3dfdd8:
    // 0x3dfdd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3dfdd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfddc:
    // 0x3dfddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dfddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dfde0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dfde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfde8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFDE8u;
            // 0x3dfdec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFDF0u;
}
