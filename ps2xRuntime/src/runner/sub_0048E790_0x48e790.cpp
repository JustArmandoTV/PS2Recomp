#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048E790
// Address: 0x48e790 - 0x48e810
void sub_0048E790_0x48e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E790_0x48e790");
#endif

    switch (ctx->pc) {
        case 0x48e7c8u: goto label_48e7c8;
        case 0x48e7e4u: goto label_48e7e4;
        default: break;
    }

    ctx->pc = 0x48e790u;

    // 0x48e790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e798: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x48e798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x48e79c: 0x8c880058  lw          $t0, 0x58($a0)
    ctx->pc = 0x48e79cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x48e7a0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x48e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x48e7a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x48e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x48e7a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48e7ac: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x48e7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x48e7b0: 0x1071826  xor         $v1, $t0, $a3
    ctx->pc = 0x48e7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x48e7b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e7b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48e7bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x48E7BCu;
    {
        const bool branch_taken_0x48e7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e7bc) {
            ctx->pc = 0x48E800u;
            goto label_48e800;
        }
    }
    ctx->pc = 0x48E7C4u;
    // 0x48e7c4: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x48e7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
label_48e7c8:
    // 0x48e7c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x48e7c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x48e7cc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x48e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x48e7d0: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48E7D0u;
    {
        const bool branch_taken_0x48e7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x48e7d0) {
            ctx->pc = 0x48E7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E7D0u;
            // 0x48e7d4: 0x24c8000c  addiu       $t0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E7ECu;
            goto label_48e7ec;
        }
    }
    ctx->pc = 0x48E7D8u;
    // 0x48e7d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x48e7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48e7dc: 0xc125d6c  jal         func_4975B0
    ctx->pc = 0x48E7DCu;
    SET_GPR_U32(ctx, 31, 0x48E7E4u);
    ctx->pc = 0x48E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48E7DCu;
            // 0x48e7e0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4975B0u;
    if (runtime->hasFunction(0x4975B0u)) {
        auto targetFn = runtime->lookupFunction(0x4975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E7E4u; }
        if (ctx->pc != 0x48E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004975B0_0x4975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48E7E4u; }
        if (ctx->pc != 0x48E7E4u) { return; }
    }
    ctx->pc = 0x48E7E4u;
label_48e7e4:
    // 0x48e7e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48E7E4u;
    {
        const bool branch_taken_0x48e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e7e4) {
            ctx->pc = 0x48E800u;
            goto label_48e800;
        }
    }
    ctx->pc = 0x48E7ECu;
label_48e7ec:
    // 0x48e7ec: 0x1071826  xor         $v1, $t0, $a3
    ctx->pc = 0x48e7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x48e7f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e7f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48e7f4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x48e7f8: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x48E7F8u;
    {
        const bool branch_taken_0x48e7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e7f8) {
            ctx->pc = 0x48E7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E7F8u;
            // 0x48e7fc: 0x8303c  dsll32      $a2, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48e7c8;
        }
    }
    ctx->pc = 0x48E800u;
label_48e800:
    // 0x48e800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e804: 0x3e00008  jr          $ra
    ctx->pc = 0x48E804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E804u;
            // 0x48e808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E80Cu;
    // 0x48e80c: 0x0  nop
    ctx->pc = 0x48e80cu;
    // NOP
}
