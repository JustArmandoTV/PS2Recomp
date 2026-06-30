#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001277E0
// Address: 0x1277e0 - 0x127840
void sub_001277E0_0x1277e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001277E0_0x1277e0");
#endif

    ctx->pc = 0x1277e0u;

    // 0x1277e0: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1277e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x1277e4: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x1277e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x1277e8: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x1277ec: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x1277ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1277f0: 0x25efbb20  addiu       $t7, $t7, -0x44E0
    ctx->pc = 0x1277f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949664));
    // 0x1277f4: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x1277f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1277f8: 0x25cebb80  addiu       $t6, $t6, -0x4480
    ctx->pc = 0x1277f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949760));
    // 0x1277fc: 0xac8f0020  sw          $t7, 0x20($a0)
    ctx->pc = 0x1277fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 15));
    // 0x127800: 0xac8e0024  sw          $t6, 0x24($a0)
    ctx->pc = 0x127800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 14));
    // 0x127804: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x127808: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x127808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12780c: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x12780cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x127810: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x127810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x127814: 0x25efbc00  addiu       $t7, $t7, -0x4400
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949888));
    // 0x127818: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x127818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12781c: 0x25cebc68  addiu       $t6, $t6, -0x4398
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949992));
    // 0x127820: 0xac8f0028  sw          $t7, 0x28($a0)
    ctx->pc = 0x127820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 15));
    // 0x127824: 0xac8e002c  sw          $t6, 0x2C($a0)
    ctx->pc = 0x127824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 14));
    // 0x127828: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x127828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12782c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12782cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x127830: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x127830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x127834: 0x3e00008  jr          $ra
    ctx->pc = 0x127834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127834u;
            // 0x127838: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12783Cu;
    // 0x12783c: 0x0  nop
    ctx->pc = 0x12783cu;
    // NOP
}
