#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FD80
// Address: 0x29fd80 - 0x29fde0
void sub_0029FD80_0x29fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FD80_0x29fd80");
#endif

    ctx->pc = 0x29fd80u;

    // 0x29fd80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29fd84: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x29fd88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29fd8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29fd90: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x29fd94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29fd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd9c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29fd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x29fda0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x29fda4: 0x2442f850  addiu       $v0, $v0, -0x7B0
    ctx->pc = 0x29fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965328));
    // 0x29fda8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29fdac: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29FDACu;
    {
        const bool branch_taken_0x29fdac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDACu;
            // 0x29fdb0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdac) {
            ctx->pc = 0x29FDCCu;
            goto label_29fdcc;
        }
    }
    ctx->pc = 0x29FDB4u;
    // 0x29fdb4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x29fdb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29fdb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FDB8u;
    {
        const bool branch_taken_0x29fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fdb8) {
            ctx->pc = 0x29FDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDB8u;
            // 0x29fdbc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FDD0u;
            goto label_29fdd0;
        }
    }
    ctx->pc = 0x29FDC0u;
    // 0x29fdc0: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x29fdc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29fdc8: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x29fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_29fdcc:
    // 0x29fdcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29fdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fdd0:
    // 0x29fdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x29FDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FDD8u;
    // 0x29fdd8: 0x0  nop
    ctx->pc = 0x29fdd8u;
    // NOP
    // 0x29fddc: 0x0  nop
    ctx->pc = 0x29fddcu;
    // NOP
}
