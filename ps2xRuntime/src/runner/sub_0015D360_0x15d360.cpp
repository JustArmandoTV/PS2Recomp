#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D360
// Address: 0x15d360 - 0x15d430
void sub_0015D360_0x15d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D360_0x15d360");
#endif

    switch (ctx->pc) {
        case 0x15d398u: goto label_15d398;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d41cu: goto label_15d41c;
        default: break;
    }

    ctx->pc = 0x15d360u;

    // 0x15d360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d364: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x15d364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15d368: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d36c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d370: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d374: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x15d378: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d380: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d384: 0x2442ce60  addiu       $v0, $v0, -0x31A0
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954592));
    // 0x15d388: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x15d38c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d390: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x15D390u;
    SET_GPR_U32(ctx, 31, 0x15D398u);
    ctx->pc = 0x15D394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D390u;
            // 0x15d394: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D398u; }
        if (ctx->pc != 0x15D398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D398u; }
        if (ctx->pc != 0x15D398u) { return; }
    }
    ctx->pc = 0x15D398u;
label_15d398:
    // 0x15d398: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x15d398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15d3a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15d3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d3ac:
    // 0x15d3ac: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x15d3acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15d3b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D3B0u;
    {
        const bool branch_taken_0x15d3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3B0u;
            // 0x15d3b4: 0xde050000  ld          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3b0) {
            ctx->pc = 0x15D3D0u;
            goto label_15d3d0;
        }
    }
    ctx->pc = 0x15D3B8u;
    // 0x15d3b8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x15d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x15d3bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15d3c0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x15d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x15d3c4: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x15d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x15d3c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15d3cc: 0x0  nop
    ctx->pc = 0x15d3ccu;
    // NOP
label_15d3d0:
    // 0x15d3d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15d3d4: 0x28e30016  slti        $v1, $a3, 0x16
    ctx->pc = 0x15d3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x15d3d8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D3D8u;
    {
        const bool branch_taken_0x15d3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3D8u;
            // 0x15d3dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3d8) {
            ctx->pc = 0x15D3ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d3ac;
        }
    }
    ctx->pc = 0x15D3E0u;
    // 0x15d3e0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x15D3E0u;
    {
        const bool branch_taken_0x15d3e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3e0) {
            ctx->pc = 0x15D414u;
            goto label_15d414;
        }
    }
    ctx->pc = 0x15D3E8u;
    // 0x15d3e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3ec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15d3f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x15d3f4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d3f8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x15d3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d3fc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x15d3fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x15d400: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15d400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15d404: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d408: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x15d408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x15d40c: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x15d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x15d410: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x15d410u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
label_15d414:
    // 0x15d414: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x15D414u;
    SET_GPR_U32(ctx, 31, 0x15D41Cu);
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D41Cu; }
        if (ctx->pc != 0x15D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D41Cu; }
        if (ctx->pc != 0x15D41Cu) { return; }
    }
    ctx->pc = 0x15D41Cu;
label_15d41c:
    // 0x15d41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d424: 0x3e00008  jr          $ra
    ctx->pc = 0x15D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D424u;
            // 0x15d428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D42Cu;
    // 0x15d42c: 0x0  nop
    ctx->pc = 0x15d42cu;
    // NOP
}
