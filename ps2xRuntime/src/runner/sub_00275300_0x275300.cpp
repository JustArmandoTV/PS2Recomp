#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275300
// Address: 0x275300 - 0x275380
void sub_00275300_0x275300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275300_0x275300");
#endif

    ctx->pc = 0x275300u;

    // 0x275300: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x275304: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x275304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x275308: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x275308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x27530c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x275310: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x275310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x275314: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x275314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x275318: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x275318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x27531c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27531cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x275320: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x275320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x275324: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x275324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x275328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27532c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27532Cu;
    {
        const bool branch_taken_0x27532c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x275330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27532Cu;
            // 0x275330: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27532c) {
            ctx->pc = 0x275360u;
            goto label_275360;
        }
    }
    ctx->pc = 0x275334u;
    // 0x275334: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275334u;
    {
        const bool branch_taken_0x275334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x275334) {
            ctx->pc = 0x275348u;
            goto label_275348;
        }
    }
    ctx->pc = 0x27533Cu;
    // 0x27533c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27533Cu;
    {
        const bool branch_taken_0x27533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27533c) {
            ctx->pc = 0x275370u;
            goto label_275370;
        }
    }
    ctx->pc = 0x275344u;
    // 0x275344: 0x0  nop
    ctx->pc = 0x275344u;
    // NOP
label_275348:
    // 0x275348: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x275348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x27534c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x27534cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x275350: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x275350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x275354: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x275354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x275358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275358u;
    {
        const bool branch_taken_0x275358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27535Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275358u;
            // 0x27535c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275358) {
            ctx->pc = 0x275370u;
            goto label_275370;
        }
    }
    ctx->pc = 0x275360u;
label_275360:
    // 0x275360: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x275364: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x275364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x275368: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x275368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x27536c: 0x0  nop
    ctx->pc = 0x27536cu;
    // NOP
label_275370:
    // 0x275370: 0x3e00008  jr          $ra
    ctx->pc = 0x275370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275370u;
            // 0x275374: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275378u;
    // 0x275378: 0x0  nop
    ctx->pc = 0x275378u;
    // NOP
    // 0x27537c: 0x0  nop
    ctx->pc = 0x27537cu;
    // NOP
}
