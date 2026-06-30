#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197620
// Address: 0x197620 - 0x197670
void sub_00197620_0x197620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197620_0x197620");
#endif

    ctx->pc = 0x197620u;

    // 0x197620: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x197624: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x197628: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x197628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x19762c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x197630: 0xb27c2  srl         $a0, $t3, 31
    ctx->pc = 0x197630u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x197634: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x197638: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x197638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x19763c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x197640: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x197644: 0x28490000  slti        $t1, $v0, 0x0
    ctx->pc = 0x197644u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197648: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x197648u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x19764c: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x19764cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x197650: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x197650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x197654: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x197654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x197658: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x197658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x19765c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x19765cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x197660: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x197660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x197664: 0x3e00008  jr          $ra
    ctx->pc = 0x197664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197664u;
            // 0x197668: 0xaccb0000  sw          $t3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19766Cu;
    // 0x19766c: 0x0  nop
    ctx->pc = 0x19766cu;
    // NOP
}
