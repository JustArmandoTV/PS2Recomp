#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFF50
// Address: 0x1dff50 - 0x1e00b0
void sub_001DFF50_0x1dff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF50_0x1dff50");
#endif

    switch (ctx->pc) {
        case 0x1dff50u: goto label_1dff50;
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff58u: goto label_1dff58;
        case 0x1dff5cu: goto label_1dff5c;
        case 0x1dff60u: goto label_1dff60;
        case 0x1dff64u: goto label_1dff64;
        case 0x1dff68u: goto label_1dff68;
        case 0x1dff6cu: goto label_1dff6c;
        case 0x1dff70u: goto label_1dff70;
        case 0x1dff74u: goto label_1dff74;
        case 0x1dff78u: goto label_1dff78;
        case 0x1dff7cu: goto label_1dff7c;
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff84u: goto label_1dff84;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff8cu: goto label_1dff8c;
        case 0x1dff90u: goto label_1dff90;
        case 0x1dff94u: goto label_1dff94;
        case 0x1dff98u: goto label_1dff98;
        case 0x1dff9cu: goto label_1dff9c;
        case 0x1dffa0u: goto label_1dffa0;
        case 0x1dffa4u: goto label_1dffa4;
        case 0x1dffa8u: goto label_1dffa8;
        case 0x1dffacu: goto label_1dffac;
        case 0x1dffb0u: goto label_1dffb0;
        case 0x1dffb4u: goto label_1dffb4;
        case 0x1dffb8u: goto label_1dffb8;
        case 0x1dffbcu: goto label_1dffbc;
        case 0x1dffc0u: goto label_1dffc0;
        case 0x1dffc4u: goto label_1dffc4;
        case 0x1dffc8u: goto label_1dffc8;
        case 0x1dffccu: goto label_1dffcc;
        case 0x1dffd0u: goto label_1dffd0;
        case 0x1dffd4u: goto label_1dffd4;
        case 0x1dffd8u: goto label_1dffd8;
        case 0x1dffdcu: goto label_1dffdc;
        case 0x1dffe0u: goto label_1dffe0;
        case 0x1dffe4u: goto label_1dffe4;
        case 0x1dffe8u: goto label_1dffe8;
        case 0x1dffecu: goto label_1dffec;
        case 0x1dfff0u: goto label_1dfff0;
        case 0x1dfff4u: goto label_1dfff4;
        case 0x1dfff8u: goto label_1dfff8;
        case 0x1dfffcu: goto label_1dfffc;
        case 0x1e0000u: goto label_1e0000;
        case 0x1e0004u: goto label_1e0004;
        case 0x1e0008u: goto label_1e0008;
        case 0x1e000cu: goto label_1e000c;
        case 0x1e0010u: goto label_1e0010;
        case 0x1e0014u: goto label_1e0014;
        case 0x1e0018u: goto label_1e0018;
        case 0x1e001cu: goto label_1e001c;
        case 0x1e0020u: goto label_1e0020;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0028u: goto label_1e0028;
        case 0x1e002cu: goto label_1e002c;
        case 0x1e0030u: goto label_1e0030;
        case 0x1e0034u: goto label_1e0034;
        case 0x1e0038u: goto label_1e0038;
        case 0x1e003cu: goto label_1e003c;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0044u: goto label_1e0044;
        case 0x1e0048u: goto label_1e0048;
        case 0x1e004cu: goto label_1e004c;
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0054u: goto label_1e0054;
        case 0x1e0058u: goto label_1e0058;
        case 0x1e005cu: goto label_1e005c;
        case 0x1e0060u: goto label_1e0060;
        case 0x1e0064u: goto label_1e0064;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0070u: goto label_1e0070;
        case 0x1e0074u: goto label_1e0074;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e007cu: goto label_1e007c;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e0084u: goto label_1e0084;
        case 0x1e0088u: goto label_1e0088;
        case 0x1e008cu: goto label_1e008c;
        case 0x1e0090u: goto label_1e0090;
        case 0x1e0094u: goto label_1e0094;
        case 0x1e0098u: goto label_1e0098;
        case 0x1e009cu: goto label_1e009c;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00a4u: goto label_1e00a4;
        case 0x1e00a8u: goto label_1e00a8;
        case 0x1e00acu: goto label_1e00ac;
        default: break;
    }

    ctx->pc = 0x1dff50u;

label_1dff50:
    // 0x1dff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dff54:
    // 0x1dff54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dff58:
    // 0x1dff58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dff5c:
    // 0x1dff5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dff60:
    // 0x1dff60: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_1dff64:
    // 0x1dff64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dff68:
    // 0x1dff68: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1dff6c:
    if (ctx->pc == 0x1DFF6Cu) {
        ctx->pc = 0x1DFF6Cu;
            // 0x1dff6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF70u;
        goto label_1dff70;
    }
    ctx->pc = 0x1DFF68u;
    {
        const bool branch_taken_0x1dff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF68u;
            // 0x1dff6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff68) {
            ctx->pc = 0x1E0008u;
            goto label_1e0008;
        }
    }
    ctx->pc = 0x1DFF70u;
label_1dff70:
    // 0x1dff70: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1dff74:
    // 0x1dff74: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1dff74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1dff78:
    // 0x1dff78: 0x8e031140  lw          $v1, 0x1140($s0)
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
label_1dff7c:
    // 0x1dff7c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x1dff7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_1dff80:
    // 0x1dff80: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1dff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_1dff84:
    // 0x1dff84: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x1dff84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_1dff88:
    // 0x1dff88: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x1dff88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_1dff8c:
    // 0x1dff8c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1dff90:
    if (ctx->pc == 0x1DFF90u) {
        ctx->pc = 0x1DFF90u;
            // 0x1dff90: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x1DFF94u;
        goto label_1dff94;
    }
    ctx->pc = 0x1DFF8Cu;
    {
        const bool branch_taken_0x1dff8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dff8c) {
            ctx->pc = 0x1DFF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF8Cu;
            // 0x1dff90: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFFACu;
            goto label_1dffac;
        }
    }
    ctx->pc = 0x1DFF94u;
label_1dff94:
    // 0x1dff94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dff94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dff98:
    // 0x1dff98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1dff98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1dff9c:
    // 0x1dff9c: 0x320f809  jalr        $t9
label_1dffa0:
    if (ctx->pc == 0x1DFFA0u) {
        ctx->pc = 0x1DFFA0u;
            // 0x1dffa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DFFA4u;
        goto label_1dffa4;
    }
    ctx->pc = 0x1DFF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFFA4u);
        ctx->pc = 0x1DFFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF9Cu;
            // 0x1dffa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFFA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFFA4u; }
            if (ctx->pc != 0x1DFFA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFFA4u;
label_1dffa4:
    // 0x1dffa4: 0xae000eac  sw          $zero, 0xEAC($s0)
    ctx->pc = 0x1dffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3756), GPR_U32(ctx, 0));
label_1dffa8:
    // 0x1dffa8: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x1dffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1dffac:
    // 0x1dffac: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1dffacu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1dffb0:
    // 0x1dffb0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1dffb4:
    if (ctx->pc == 0x1DFFB4u) {
        ctx->pc = 0x1DFFB4u;
            // 0x1dffb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFB8u;
        goto label_1dffb8;
    }
    ctx->pc = 0x1DFFB0u;
    {
        const bool branch_taken_0x1dffb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DFFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFFB0u;
            // 0x1dffb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffb0) {
            ctx->pc = 0x1DFFC8u;
            goto label_1dffc8;
        }
    }
    ctx->pc = 0x1DFFB8u;
label_1dffb8:
    // 0x1dffb8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1dffb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1dffbc:
    // 0x1dffbc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dffc0:
    if (ctx->pc == 0x1DFFC0u) {
        ctx->pc = 0x1DFFC4u;
        goto label_1dffc4;
    }
    ctx->pc = 0x1DFFBCu;
    {
        const bool branch_taken_0x1dffbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dffbc) {
            ctx->pc = 0x1DFFC8u;
            goto label_1dffc8;
        }
    }
    ctx->pc = 0x1DFFC4u;
label_1dffc4:
    // 0x1dffc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dffc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dffc8:
    // 0x1dffc8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1dffcc:
    if (ctx->pc == 0x1DFFCCu) {
        ctx->pc = 0x1DFFD0u;
        goto label_1dffd0;
    }
    ctx->pc = 0x1DFFC8u;
    {
        const bool branch_taken_0x1dffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dffc8) {
            ctx->pc = 0x1E0008u;
            goto label_1e0008;
        }
    }
    ctx->pc = 0x1DFFD0u;
label_1dffd0:
    // 0x1dffd0: 0x820211aa  lb          $v0, 0x11AA($s0)
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1dffd4:
    // 0x1dffd4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dffd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1dffd8:
    // 0x1dffd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dffdc:
    // 0x1dffdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dffe0:
    if (ctx->pc == 0x1DFFE0u) {
        ctx->pc = 0x1DFFE4u;
        goto label_1dffe4;
    }
    ctx->pc = 0x1DFFDCu;
    {
        const bool branch_taken_0x1dffdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dffdc) {
            ctx->pc = 0x1DFFFCu;
            goto label_1dfffc;
        }
    }
    ctx->pc = 0x1DFFE4u;
label_1dffe4:
    // 0x1dffe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dffe8:
    // 0x1dffe8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1dffec:
    // 0x1dffec: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dffecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1dfff0:
    // 0x1dfff0: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dfff0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1dfff4:
    // 0x1dfff4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dfff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dfff8:
    // 0x1dfff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dfff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dfffc:
    // 0x1dfffc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1e0000:
    if (ctx->pc == 0x1E0000u) {
        ctx->pc = 0x1E0004u;
        goto label_1e0004;
    }
    ctx->pc = 0x1DFFFCu;
    {
        const bool branch_taken_0x1dfffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfffc) {
            ctx->pc = 0x1E0008u;
            goto label_1e0008;
        }
    }
    ctx->pc = 0x1E0004u;
label_1e0004:
    // 0x1e0004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e0004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0008:
    // 0x1e0008: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1e0008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1e000c:
    // 0x1e000c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1e000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_1e0010:
    // 0x1e0010: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1e0010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_1e0014:
    // 0x1e0014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e0014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1e0018:
    // 0x1e0018: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e0018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e001c:
    // 0x1e001c: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e001cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
label_1e0020:
    // 0x1e0020: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x1e0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1e0024:
    // 0x1e0024: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_1e0028:
    // 0x1e0028: 0xc14ca20  jal         func_532880
label_1e002c:
    if (ctx->pc == 0x1E002Cu) {
        ctx->pc = 0x1E002Cu;
            // 0x1e002c: 0x92050d98  lbu         $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x1E0030u;
        goto label_1e0030;
    }
    ctx->pc = 0x1E0028u;
    SET_GPR_U32(ctx, 31, 0x1E0030u);
    ctx->pc = 0x1E002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0028u;
            // 0x1e002c: 0x92050d98  lbu         $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x532880u;
    if (runtime->hasFunction(0x532880u)) {
        auto targetFn = runtime->lookupFunction(0x532880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0030u; }
        if (ctx->pc != 0x1E0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00532880_0x532880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0030u; }
        if (ctx->pc != 0x1E0030u) { return; }
    }
    ctx->pc = 0x1E0030u;
label_1e0030:
    // 0x1e0030: 0x8e04122c  lw          $a0, 0x122C($s0)
    ctx->pc = 0x1e0030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4652)));
label_1e0034:
    // 0x1e0034: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e0038:
    if (ctx->pc == 0x1E0038u) {
        ctx->pc = 0x1E0038u;
            // 0x1e0038: 0xae00122c  sw          $zero, 0x122C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 0));
        ctx->pc = 0x1E003Cu;
        goto label_1e003c;
    }
    ctx->pc = 0x1E0034u;
    {
        const bool branch_taken_0x1e0034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0034) {
            ctx->pc = 0x1E0038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0034u;
            // 0x1e0038: 0xae00122c  sw          $zero, 0x122C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0050u;
            goto label_1e0050;
        }
    }
    ctx->pc = 0x1E003Cu;
label_1e003c:
    // 0x1e003c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e003cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0040:
    // 0x1e0040: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e0040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e0044:
    // 0x1e0044: 0x320f809  jalr        $t9
label_1e0048:
    if (ctx->pc == 0x1E0048u) {
        ctx->pc = 0x1E0048u;
            // 0x1e0048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E004Cu;
        goto label_1e004c;
    }
    ctx->pc = 0x1E0044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E004Cu);
        ctx->pc = 0x1E0048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0044u;
            // 0x1e0048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E004Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E004Cu; }
            if (ctx->pc != 0x1E004Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E004Cu;
label_1e004c:
    // 0x1e004c: 0xae00122c  sw          $zero, 0x122C($s0)
    ctx->pc = 0x1e004cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 0));
label_1e0050:
    // 0x1e0050: 0x8e041230  lw          $a0, 0x1230($s0)
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_1e0054:
    // 0x1e0054: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e0058:
    if (ctx->pc == 0x1E0058u) {
        ctx->pc = 0x1E0058u;
            // 0x1e0058: 0xae001230  sw          $zero, 0x1230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 0));
        ctx->pc = 0x1E005Cu;
        goto label_1e005c;
    }
    ctx->pc = 0x1E0054u;
    {
        const bool branch_taken_0x1e0054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0054) {
            ctx->pc = 0x1E0058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0054u;
            // 0x1e0058: 0xae001230  sw          $zero, 0x1230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0070u;
            goto label_1e0070;
        }
    }
    ctx->pc = 0x1E005Cu;
label_1e005c:
    // 0x1e005c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0060:
    // 0x1e0060: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e0060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e0064:
    // 0x1e0064: 0x320f809  jalr        $t9
label_1e0068:
    if (ctx->pc == 0x1E0068u) {
        ctx->pc = 0x1E0068u;
            // 0x1e0068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E006Cu;
        goto label_1e006c;
    }
    ctx->pc = 0x1E0064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E006Cu);
        ctx->pc = 0x1E0068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0064u;
            // 0x1e0068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E006Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E006Cu; }
            if (ctx->pc != 0x1E006Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E006Cu;
label_1e006c:
    // 0x1e006c: 0xae001230  sw          $zero, 0x1230($s0)
    ctx->pc = 0x1e006cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 0));
label_1e0070:
    // 0x1e0070: 0xae000e70  sw          $zero, 0xE70($s0)
    ctx->pc = 0x1e0070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3696), GPR_U32(ctx, 0));
label_1e0074:
    // 0x1e0074: 0xae000e6c  sw          $zero, 0xE6C($s0)
    ctx->pc = 0x1e0074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3692), GPR_U32(ctx, 0));
label_1e0078:
    // 0x1e0078: 0xae000e68  sw          $zero, 0xE68($s0)
    ctx->pc = 0x1e0078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3688), GPR_U32(ctx, 0));
label_1e007c:
    // 0x1e007c: 0xae000e64  sw          $zero, 0xE64($s0)
    ctx->pc = 0x1e007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3684), GPR_U32(ctx, 0));
label_1e0080:
    // 0x1e0080: 0xae000e54  sw          $zero, 0xE54($s0)
    ctx->pc = 0x1e0080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3668), GPR_U32(ctx, 0));
label_1e0084:
    // 0x1e0084: 0xae000e50  sw          $zero, 0xE50($s0)
    ctx->pc = 0x1e0084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3664), GPR_U32(ctx, 0));
label_1e0088:
    // 0x1e0088: 0xae000e60  sw          $zero, 0xE60($s0)
    ctx->pc = 0x1e0088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3680), GPR_U32(ctx, 0));
label_1e008c:
    // 0x1e008c: 0xae000e74  sw          $zero, 0xE74($s0)
    ctx->pc = 0x1e008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3700), GPR_U32(ctx, 0));
label_1e0090:
    // 0x1e0090: 0xae000e5c  sw          $zero, 0xE5C($s0)
    ctx->pc = 0x1e0090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 0));
label_1e0094:
    // 0x1e0094: 0xae000e58  sw          $zero, 0xE58($s0)
    ctx->pc = 0x1e0094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3672), GPR_U32(ctx, 0));
label_1e0098:
    // 0x1e0098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e009c:
    // 0x1e009c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e009cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e00a0:
    // 0x1e00a0: 0x3e00008  jr          $ra
label_1e00a4:
    if (ctx->pc == 0x1E00A4u) {
        ctx->pc = 0x1E00A4u;
            // 0x1e00a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E00A8u;
        goto label_1e00a8;
    }
    ctx->pc = 0x1E00A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E00A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E00A0u;
            // 0x1e00a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E00A8u;
label_1e00a8:
    // 0x1e00a8: 0x0  nop
    ctx->pc = 0x1e00a8u;
    // NOP
label_1e00ac:
    // 0x1e00ac: 0x0  nop
    ctx->pc = 0x1e00acu;
    // NOP
}
