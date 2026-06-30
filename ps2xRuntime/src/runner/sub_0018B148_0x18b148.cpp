#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B148
// Address: 0x18b148 - 0x18b1b8
void sub_0018B148_0x18b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B148_0x18b148");
#endif

    ctx->pc = 0x18b148u;

    // 0x18b148: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18b148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b14c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b150: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x18b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x18b154: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B154u;
    {
        const bool branch_taken_0x18b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b154) {
            ctx->pc = 0x18B158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B154u;
            // 0x18b158: 0x8ca203c8  lw          $v0, 0x3C8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B168u;
            goto label_18b168;
        }
    }
    ctx->pc = 0x18B15Cu;
    // 0x18b15c: 0xaca003c8  sw          $zero, 0x3C8($a1)
    ctx->pc = 0x18b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 0));
    // 0x18b160: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B160u;
    {
        const bool branch_taken_0x18b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B160u;
            // 0x18b164: 0xaca003c4  sw          $zero, 0x3C4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b160) {
            ctx->pc = 0x18B188u;
            goto label_18b188;
        }
    }
    ctx->pc = 0x18B168u;
label_18b168:
    // 0x18b168: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x18b16c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b170: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b174: 0xaca403c8  sw          $a0, 0x3C8($a1)
    ctx->pc = 0x18b174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 4));
    // 0x18b178: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x18b178u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x18b17c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18b180: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18b180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b184: 0xaca203c4  sw          $v0, 0x3C4($a1)
    ctx->pc = 0x18b184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
label_18b188:
    // 0x18b188: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x18b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x18b18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b190: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x18b194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b198: 0x8c638200  lw          $v1, -0x7E00($v1)
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935040)));
    // 0x18b19c: 0xaca30320  sw          $v1, 0x320($a1)
    ctx->pc = 0x18b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 3));
    // 0x18b1a0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x18b1a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18b1a8: 0x8c848210  lw          $a0, -0x7DF0($a0)
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935056)));
    // 0x18b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1ACu;
            // 0x18b1b0: 0xaca40330  sw          $a0, 0x330($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B1B4u;
    // 0x18b1b4: 0x0  nop
    ctx->pc = 0x18b1b4u;
    // NOP
}
