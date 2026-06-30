#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4980
// Address: 0x1f4980 - 0x1f4a10
void sub_001F4980_0x1f4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4980_0x1f4980");
#endif

    ctx->pc = 0x1f4980u;

    // 0x1f4980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4984: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f4988: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f498c: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x1f4990: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f4994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4998: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f499c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f499cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f49a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49a4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1f49a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f49a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f49ac: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f49b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f49b4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f49b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f49b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49BCu;
            // 0x1f49c0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F49C4u;
    // 0x1f49c4: 0x0  nop
    ctx->pc = 0x1f49c4u;
    // NOP
    // 0x1f49c8: 0x0  nop
    ctx->pc = 0x1f49c8u;
    // NOP
    // 0x1f49cc: 0x0  nop
    ctx->pc = 0x1f49ccu;
    // NOP
    // 0x1f49d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F49D8u;
    // 0x1f49d8: 0x0  nop
    ctx->pc = 0x1f49d8u;
    // NOP
    // 0x1f49dc: 0x0  nop
    ctx->pc = 0x1f49dcu;
    // NOP
    // 0x1f49e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F49E8u;
    // 0x1f49e8: 0x0  nop
    ctx->pc = 0x1f49e8u;
    // NOP
    // 0x1f49ec: 0x0  nop
    ctx->pc = 0x1f49ecu;
    // NOP
    // 0x1f49f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F49F8u;
    // 0x1f49f8: 0x0  nop
    ctx->pc = 0x1f49f8u;
    // NOP
    // 0x1f49fc: 0x0  nop
    ctx->pc = 0x1f49fcu;
    // NOP
    // 0x1f4a00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f4a04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A04u;
            // 0x1f4a08: 0x2442e498  addiu       $v0, $v0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A0Cu;
    // 0x1f4a0c: 0x0  nop
    ctx->pc = 0x1f4a0cu;
    // NOP
}
