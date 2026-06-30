#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA210
// Address: 0x1ba210 - 0x1ba280
void sub_001BA210_0x1ba210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA210_0x1ba210");
#endif

    ctx->pc = 0x1ba210u;

    // 0x1ba210: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ba210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ba214: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1ba214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ba218: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BA218u;
    {
        const bool branch_taken_0x1ba218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba218) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA220u;
    // 0x1ba220: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ba220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ba224: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1ba228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba22c: 0x8c63b0d0  lw          $v1, -0x4F30($v1)
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947024)));
    // 0x1ba230: 0x600008  jr          $v1
    ctx->pc = 0x1BA230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA270u: goto label_1ba270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA238u;
label_1ba238:
    // 0x1ba238: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA238u;
            // 0x1ba23c: 0x24025da8  addiu       $v0, $zero, 0x5DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA240u;
label_1ba240:
    // 0x1ba240: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA240u;
            // 0x1ba244: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA248u;
label_1ba248:
    // 0x1ba248: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA248u;
            // 0x1ba24c: 0x240261a8  addiu       $v0, $zero, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA250u;
label_1ba250:
    // 0x1ba250: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA250u;
            // 0x1ba254: 0x24027512  addiu       $v0, $zero, 0x7512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA258u;
label_1ba258:
    // 0x1ba258: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA258u;
            // 0x1ba25c: 0x24027530  addiu       $v0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA260u;
label_1ba260:
    // 0x1ba260: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA260u;
            // 0x1ba264: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA268u;
label_1ba268:
    // 0x1ba268: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA268u;
            // 0x1ba26c: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA270u;
label_1ba270:
    // 0x1ba270: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA270u;
            // 0x1ba274: 0x3402ea60  ori         $v0, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA278u;
label_1ba278:
    // 0x1ba278: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA278u;
            // 0x1ba27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA280u;
}
