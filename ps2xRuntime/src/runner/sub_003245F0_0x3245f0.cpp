#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003245F0
// Address: 0x3245f0 - 0x324640
void sub_003245F0_0x3245f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003245F0_0x3245f0");
#endif

    ctx->pc = 0x3245f0u;

    // 0x3245f0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3245f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3245f4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3245f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3245f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3245fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3245fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x324600: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x324600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x324604: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x324604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x324608: 0x24640164  addiu       $a0, $v1, 0x164
    ctx->pc = 0x324608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x32460c: 0x8c630164  lw          $v1, 0x164($v1)
    ctx->pc = 0x32460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x324610: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324610u;
    {
        const bool branch_taken_0x324610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324610u;
            // 0x324614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324610) {
            ctx->pc = 0x324620u;
            goto label_324620;
        }
    }
    ctx->pc = 0x324618u;
    // 0x324618: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x324618u;
    {
        const bool branch_taken_0x324618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324618u;
            // 0x32461c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324618) {
            ctx->pc = 0x324630u;
            goto label_324630;
        }
    }
    ctx->pc = 0x324620u;
label_324620:
    // 0x324620: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x324620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x324624: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x324624u;
    {
        const bool branch_taken_0x324624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324624) {
            ctx->pc = 0x324630u;
            goto label_324630;
        }
    }
    ctx->pc = 0x32462Cu;
    // 0x32462c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x32462cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_324630:
    // 0x324630: 0x3e00008  jr          $ra
    ctx->pc = 0x324630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324638u;
    // 0x324638: 0x0  nop
    ctx->pc = 0x324638u;
    // NOP
    // 0x32463c: 0x0  nop
    ctx->pc = 0x32463cu;
    // NOP
}
