#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDE90
// Address: 0x2cde90 - 0x2cdf30
void sub_002CDE90_0x2cde90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDE90_0x2cde90");
#endif

    ctx->pc = 0x2cde90u;

    // 0x2cde90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cde94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cde94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cde98: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x2cde98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x2cde9c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x2cde9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2cdea0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2cdea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cdea4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDEA4u;
    {
        const bool branch_taken_0x2cdea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdea4) {
            ctx->pc = 0x2CDEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDEA4u;
            // 0x2cdea8: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDEB8u;
            goto label_2cdeb8;
        }
    }
    ctx->pc = 0x2CDEACu;
    // 0x2cdeac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdeb0: 0xac65e390  sw          $a1, -0x1C70($v1)
    ctx->pc = 0x2cdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 5));
    // 0x2cdeb4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cdeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cdeb8:
    // 0x2cdeb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdebc: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x2cdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x2cdec0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2cdec4: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2cdec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cdec8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDEC8u;
    {
        const bool branch_taken_0x2cdec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdec8) {
            ctx->pc = 0x2CDECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDEC8u;
            // 0x2cdecc: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDED0u;
    // 0x2cded0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cded0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cded4: 0xac65e388  sw          $a1, -0x1C78($v1)
    ctx->pc = 0x2cded4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 5));
    // 0x2cded8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cdedc:
    // 0x2cdedc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdee0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x2cdee4: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x2cdee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2cdee8: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2cdee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cdeec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDEECu;
    {
        const bool branch_taken_0x2cdeec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdeec) {
            ctx->pc = 0x2CDEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDEECu;
            // 0x2cdef0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF00u;
            goto label_2cdf00;
        }
    }
    ctx->pc = 0x2CDEF4u;
    // 0x2cdef4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdef8: 0xac65e398  sw          $a1, -0x1C68($v1)
    ctx->pc = 0x2cdef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 5));
    // 0x2cdefc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cdf00:
    // 0x2cdf00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdf04: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x2cdf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x2cdf08: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2cdf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2cdf0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2cdf0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2cdf10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF10u;
    {
        const bool branch_taken_0x2cdf10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf10) {
            ctx->pc = 0x2CDF20u;
            goto label_2cdf20;
        }
    }
    ctx->pc = 0x2CDF18u;
    // 0x2cdf18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2cdf1c: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x2cdf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_2cdf20:
    // 0x2cdf20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDF28u;
    // 0x2cdf28: 0x0  nop
    ctx->pc = 0x2cdf28u;
    // NOP
    // 0x2cdf2c: 0x0  nop
    ctx->pc = 0x2cdf2cu;
    // NOP
}
