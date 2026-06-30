#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209510
// Address: 0x209510 - 0x209580
void sub_00209510_0x209510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209510_0x209510");
#endif

    ctx->pc = 0x209510u;

    // 0x209510: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x209510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x209514: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x209514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x209518: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x209518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x20951c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x20951cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x209520: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x209524: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x209524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x209528: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20952c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x20952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x209530: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x209530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x209534: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x209534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x209538: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x209538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20953c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209540: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x209540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x209544: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x209544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209548: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x209548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x20954c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x20954cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x209550: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x209550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x209554: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x209554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x209558: 0xa083001d  sb          $v1, 0x1D($a0)
    ctx->pc = 0x209558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x20955c: 0xa083001f  sb          $v1, 0x1F($a0)
    ctx->pc = 0x20955cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x209560: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x209560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x209564: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x209564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x209568: 0xa0830021  sb          $v1, 0x21($a0)
    ctx->pc = 0x209568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x20956c: 0x3e00008  jr          $ra
    ctx->pc = 0x20956Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20956Cu;
            // 0x209570: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209574u;
    // 0x209574: 0x0  nop
    ctx->pc = 0x209574u;
    // NOP
    // 0x209578: 0x0  nop
    ctx->pc = 0x209578u;
    // NOP
    // 0x20957c: 0x0  nop
    ctx->pc = 0x20957cu;
    // NOP
}
