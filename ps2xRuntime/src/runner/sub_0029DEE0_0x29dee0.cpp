#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DEE0
// Address: 0x29dee0 - 0x29df20
void sub_0029DEE0_0x29dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DEE0_0x29dee0");
#endif

    ctx->pc = 0x29dee0u;

    // 0x29dee0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29dee4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x29dee8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29deec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29def0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x29def4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29def4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29def8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29defc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29defcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x29df00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29df04: 0x2442f7a0  addiu       $v0, $v0, -0x860
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x29df08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29df08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29df0c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF0Cu;
            // 0x29df10: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DF14u;
    // 0x29df14: 0x0  nop
    ctx->pc = 0x29df14u;
    // NOP
    // 0x29df18: 0x0  nop
    ctx->pc = 0x29df18u;
    // NOP
    // 0x29df1c: 0x0  nop
    ctx->pc = 0x29df1cu;
    // NOP
}
