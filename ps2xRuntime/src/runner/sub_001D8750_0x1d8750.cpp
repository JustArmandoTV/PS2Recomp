#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8750
// Address: 0x1d8750 - 0x1d8830
void sub_001D8750_0x1d8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8750_0x1d8750");
#endif

    ctx->pc = 0x1d8750u;

    // 0x1d8750: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1d8754: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x1d8758: 0x8ca50968  lw          $a1, 0x968($a1)
    ctx->pc = 0x1d8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
    // 0x1d875c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d8760: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8760u;
    {
        const bool branch_taken_0x1d8760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8760) {
            ctx->pc = 0x1D8764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8760u;
            // 0x1d8764: 0x8c850da0  lw          $a1, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D878Cu;
            goto label_1d878c;
        }
    }
    ctx->pc = 0x1D8768u;
    // 0x1d8768: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d876c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D876Cu;
    {
        const bool branch_taken_0x1d876c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d876c) {
            ctx->pc = 0x1D8770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D876Cu;
            // 0x1d8770: 0x8c850da0  lw          $a1, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D877Cu;
            goto label_1d877c;
        }
    }
    ctx->pc = 0x1D8774u;
    // 0x1d8774: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D8774u;
    {
        const bool branch_taken_0x1d8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8774) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D877Cu;
label_1d877c:
    // 0x1d877c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1d877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1d8780: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d8780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d8784: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1D8784u;
    {
        const bool branch_taken_0x1d8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8784u;
            // 0x1d8788: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8784) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D878Cu;
label_1d878c:
    // 0x1d878c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1d878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1d8790: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x1d8790u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1d8794: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d8794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d8798: 0xac830da0  sw          $v1, 0xDA0($a0)
    ctx->pc = 0x1d8798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
    // 0x1d879c: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x1d87a0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D87A0u;
    {
        const bool branch_taken_0x1d87a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D87A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87A0u;
            // 0x1d87a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87a0) {
            ctx->pc = 0x1D87B8u;
            goto label_1d87b8;
        }
    }
    ctx->pc = 0x1D87A8u;
    // 0x1d87a8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d87ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D87ACu;
    {
        const bool branch_taken_0x1d87ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d87ac) {
            ctx->pc = 0x1D87B8u;
            goto label_1d87b8;
        }
    }
    ctx->pc = 0x1D87B4u;
    // 0x1d87b4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d87b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d87b8:
    // 0x1d87b8: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1D87B8u;
    {
        const bool branch_taken_0x1d87b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87b8) {
            ctx->pc = 0x1D87F8u;
            goto label_1d87f8;
        }
    }
    ctx->pc = 0x1D87C0u;
    // 0x1d87c0: 0x808311aa  lb          $v1, 0x11AA($a0)
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
    // 0x1d87c4: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1d87c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d87c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d87c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d87cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D87CCu;
    {
        const bool branch_taken_0x1d87cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d87cc) {
            ctx->pc = 0x1D87ECu;
            goto label_1d87ec;
        }
    }
    ctx->pc = 0x1D87D4u;
    // 0x1d87d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d87d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1d87d8: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1d87dc: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1d87e0: 0x601827  not         $v1, $v1
    ctx->pc = 0x1d87e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1d87e4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d87e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d87e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d87e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d87ec:
    // 0x1d87ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D87ECu;
    {
        const bool branch_taken_0x1d87ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87ec) {
            ctx->pc = 0x1D87F8u;
            goto label_1d87f8;
        }
    }
    ctx->pc = 0x1D87F4u;
    // 0x1d87f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d87f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d87f8:
    // 0x1d87f8: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1D87F8u;
    {
        const bool branch_taken_0x1d87f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d87f8) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D8800u;
    // 0x1d8800: 0x8c860d98  lw          $a2, 0xD98($a0)
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
    // 0x1d8804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8808: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1d880c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x1d880cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x1d8810: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d8814: 0x90846080  lbu         $a0, 0x6080($a0)
    ctx->pc = 0x1d8814u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24704)));
    // 0x1d8818: 0xa02827  not         $a1, $a1
    ctx->pc = 0x1d8818u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x1d881c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d881cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d8820: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1d8824: 0xa0646080  sb          $a0, 0x6080($v1)
    ctx->pc = 0x1d8824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24704), (uint8_t)GPR_U32(ctx, 4));
label_1d8828:
    // 0x1d8828: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8830u;
}
