#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234C80
// Address: 0x234c80 - 0x234d00
void sub_00234C80_0x234c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234C80_0x234c80");
#endif

    ctx->pc = 0x234c80u;

    // 0x234c80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234c84: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x234c88: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x234c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x234c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234c94: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x234c98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x234c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234ca0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x234ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x234ca4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234ca8: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x234cac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234CACu;
    {
        const bool branch_taken_0x234cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CACu;
            // 0x234cb0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cac) {
            ctx->pc = 0x234CC0u;
            goto label_234cc0;
        }
    }
    ctx->pc = 0x234CB4u;
    // 0x234cb4: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x234cb8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x234cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x234cbc: 0xa0c20019  sb          $v0, 0x19($a2)
    ctx->pc = 0x234cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 25), (uint8_t)GPR_U32(ctx, 2));
label_234cc0:
    // 0x234cc0: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x234cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x234cc4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x234cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x234cc8: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x234cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x234ccc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x234cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x234cd0: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x234cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x234cd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x234cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x234cd8: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x234cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x234cdc: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x234cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x234ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234CE0u;
    {
        const bool branch_taken_0x234ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CE0u;
            // 0x234ce4: 0xa4800044  sh          $zero, 0x44($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce0) {
            ctx->pc = 0x234CF4u;
            goto label_234cf4;
        }
    }
    ctx->pc = 0x234CE8u;
    // 0x234ce8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x234ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x234cec: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x234cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x234cf0: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x234cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_234cf4:
    // 0x234cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x234CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CF4u;
            // 0x234cf8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234CFCu;
    // 0x234cfc: 0x0  nop
    ctx->pc = 0x234cfcu;
    // NOP
}
