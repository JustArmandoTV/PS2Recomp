#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F940
// Address: 0x21f940 - 0x21f990
void sub_0021F940_0x21f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F940_0x21f940");
#endif

    ctx->pc = 0x21f940u;

    // 0x21f940: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21f940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21f944: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21f948: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f94c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21f950: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21f954: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f95c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21f95cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21f964: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x21f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
    // 0x21f968: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f96c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21f970: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21f970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f974: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x21f974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x21f978: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x21f978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x21f97c: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x21f97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f980: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21f980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21f984: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x21f984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x21f988: 0x3e00008  jr          $ra
    ctx->pc = 0x21F988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F988u;
            // 0x21f98c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F990u;
}
