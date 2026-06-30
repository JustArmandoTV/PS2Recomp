#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183FE8
// Address: 0x183fe8 - 0x1841a8
void sub_00183FE8_0x183fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183FE8_0x183fe8");
#endif

    switch (ctx->pc) {
        case 0x183fe8u: goto label_183fe8;
        case 0x183fecu: goto label_183fec;
        case 0x183ff0u: goto label_183ff0;
        case 0x183ff4u: goto label_183ff4;
        case 0x183ff8u: goto label_183ff8;
        case 0x183ffcu: goto label_183ffc;
        case 0x184000u: goto label_184000;
        case 0x184004u: goto label_184004;
        case 0x184008u: goto label_184008;
        case 0x18400cu: goto label_18400c;
        case 0x184010u: goto label_184010;
        case 0x184014u: goto label_184014;
        case 0x184018u: goto label_184018;
        case 0x18401cu: goto label_18401c;
        case 0x184020u: goto label_184020;
        case 0x184024u: goto label_184024;
        case 0x184028u: goto label_184028;
        case 0x18402cu: goto label_18402c;
        case 0x184030u: goto label_184030;
        case 0x184034u: goto label_184034;
        case 0x184038u: goto label_184038;
        case 0x18403cu: goto label_18403c;
        case 0x184040u: goto label_184040;
        case 0x184044u: goto label_184044;
        case 0x184048u: goto label_184048;
        case 0x18404cu: goto label_18404c;
        case 0x184050u: goto label_184050;
        case 0x184054u: goto label_184054;
        case 0x184058u: goto label_184058;
        case 0x18405cu: goto label_18405c;
        case 0x184060u: goto label_184060;
        case 0x184064u: goto label_184064;
        case 0x184068u: goto label_184068;
        case 0x18406cu: goto label_18406c;
        case 0x184070u: goto label_184070;
        case 0x184074u: goto label_184074;
        case 0x184078u: goto label_184078;
        case 0x18407cu: goto label_18407c;
        case 0x184080u: goto label_184080;
        case 0x184084u: goto label_184084;
        case 0x184088u: goto label_184088;
        case 0x18408cu: goto label_18408c;
        case 0x184090u: goto label_184090;
        case 0x184094u: goto label_184094;
        case 0x184098u: goto label_184098;
        case 0x18409cu: goto label_18409c;
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
        case 0x184170u: goto label_184170;
        case 0x184174u: goto label_184174;
        case 0x184178u: goto label_184178;
        case 0x18417cu: goto label_18417c;
        case 0x184180u: goto label_184180;
        case 0x184184u: goto label_184184;
        case 0x184188u: goto label_184188;
        case 0x18418cu: goto label_18418c;
        case 0x184190u: goto label_184190;
        case 0x184194u: goto label_184194;
        case 0x184198u: goto label_184198;
        case 0x18419cu: goto label_18419c;
        case 0x1841a0u: goto label_1841a0;
        case 0x1841a4u: goto label_1841a4;
        default: break;
    }

    ctx->pc = 0x183fe8u;

label_183fe8:
    // 0x183fe8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_183fec:
    // 0x183fec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183ff0:
    // 0x183ff0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_183ff4:
    // 0x183ff4: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_183ff8:
    if (ctx->pc == 0x183FF8u) {
        ctx->pc = 0x183FF8u;
            // 0x183ff8: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x183FFCu;
        goto label_183ffc;
    }
    ctx->pc = 0x183FF4u;
    {
        const bool branch_taken_0x183ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x183ff4) {
            ctx->pc = 0x183FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183FF4u;
            // 0x183ff8: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18400Cu;
            goto label_18400c;
        }
    }
    ctx->pc = 0x183FFCu;
label_183ffc:
    // 0x183ffc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184000:
    // 0x184000: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x184000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184004:
    // 0x184004: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_184008:
    if (ctx->pc == 0x184008u) {
        ctx->pc = 0x184008u;
            // 0x184008: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x18400Cu;
        goto label_18400c;
    }
    ctx->pc = 0x184004u;
    {
        const bool branch_taken_0x184004 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x184004) {
            ctx->pc = 0x184008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184004u;
            // 0x184008: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18400Cu;
            goto label_18400c;
        }
    }
    ctx->pc = 0x18400Cu;
label_18400c:
    // 0x18400c: 0x3e00008  jr          $ra
label_184010:
    if (ctx->pc == 0x184010u) {
        ctx->pc = 0x184014u;
        goto label_184014;
    }
    ctx->pc = 0x18400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184014u;
label_184014:
    // 0x184014: 0x0  nop
    ctx->pc = 0x184014u;
    // NOP
label_184018:
    // 0x184018: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18401c:
    // 0x18401c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184020:
    // 0x184020: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184024:
    // 0x184024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184028:
    // 0x184028: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_18402c:
    if (ctx->pc == 0x18402Cu) {
        ctx->pc = 0x18402Cu;
            // 0x18402c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184030u;
        goto label_184030;
    }
    ctx->pc = 0x184028u;
    {
        const bool branch_taken_0x184028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184028u;
            // 0x18402c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184028) {
            ctx->pc = 0x184040u;
            goto label_184040;
        }
    }
    ctx->pc = 0x184030u;
label_184030:
    // 0x184030: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184034:
    // 0x184034: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184038:
    // 0x184038: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_18403c:
    if (ctx->pc == 0x18403Cu) {
        ctx->pc = 0x18403Cu;
            // 0x18403c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x184040u;
        goto label_184040;
    }
    ctx->pc = 0x184038u;
    {
        const bool branch_taken_0x184038 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184038u;
            // 0x18403c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184038) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x184040u;
label_184040:
    // 0x184040: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184044:
    // 0x184044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184048:
    // 0x184048: 0x24847778  addiu       $a0, $a0, 0x7778
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30584));
label_18404c:
    // 0x18404c: 0x805b99c  j           func_16E670
label_184050:
    if (ctx->pc == 0x184050u) {
        ctx->pc = 0x184050u;
            // 0x184050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184054u;
        goto label_184054;
    }
    ctx->pc = 0x18404Cu;
    ctx->pc = 0x184050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18404Cu;
            // 0x184050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184054u;
label_184054:
    // 0x184054: 0x0  nop
    ctx->pc = 0x184054u;
    // NOP
label_184058:
    // 0x184058: 0x3e00008  jr          $ra
label_18405c:
    if (ctx->pc == 0x18405Cu) {
        ctx->pc = 0x18405Cu;
            // 0x18405c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184060u;
        goto label_184060;
    }
    ctx->pc = 0x184058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184058u;
            // 0x18405c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184060u;
label_184060:
    // 0x184060: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184064:
    // 0x184064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184068:
    // 0x184068: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18406c:
    // 0x18406c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184070:
    // 0x184070: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_184074:
    if (ctx->pc == 0x184074u) {
        ctx->pc = 0x184074u;
            // 0x184074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184078u;
        goto label_184078;
    }
    ctx->pc = 0x184070u;
    {
        const bool branch_taken_0x184070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184070u;
            // 0x184074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184070) {
            ctx->pc = 0x184088u;
            goto label_184088;
        }
    }
    ctx->pc = 0x184078u;
label_184078:
    // 0x184078: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18407c:
    // 0x18407c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184080:
    // 0x184080: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_184084:
    if (ctx->pc == 0x184084u) {
        ctx->pc = 0x184084u;
            // 0x184084: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x184088u;
        goto label_184088;
    }
    ctx->pc = 0x184080u;
    {
        const bool branch_taken_0x184080 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184080u;
            // 0x184084: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184080) {
            ctx->pc = 0x1840A0u;
            goto label_1840a0;
        }
    }
    ctx->pc = 0x184088u;
label_184088:
    // 0x184088: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_18408c:
    // 0x18408c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184090:
    // 0x184090: 0x248477a0  addiu       $a0, $a0, 0x77A0
    ctx->pc = 0x184090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30624));
label_184094:
    // 0x184094: 0x805b99c  j           func_16E670
label_184098:
    if (ctx->pc == 0x184098u) {
        ctx->pc = 0x184098u;
            // 0x184098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18409Cu;
        goto label_18409c;
    }
    ctx->pc = 0x184094u;
    ctx->pc = 0x184098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184094u;
            // 0x184098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18409Cu;
label_18409c:
    // 0x18409c: 0x0  nop
    ctx->pc = 0x18409cu;
    // NOP
label_1840a0:
    // 0x1840a0: 0x3e00008  jr          $ra
label_1840a4:
    if (ctx->pc == 0x1840A4u) {
        ctx->pc = 0x1840A4u;
            // 0x1840a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1840A8u;
        goto label_1840a8;
    }
    ctx->pc = 0x1840A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1840A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840A0u;
            // 0x1840a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1840A8u;
label_1840a8:
    // 0x1840a8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1840a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1840ac:
    // 0x1840ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1840acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1840b0:
    // 0x1840b0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1840b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1840b4:
    // 0x1840b4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1840b8:
    if (ctx->pc == 0x1840B8u) {
        ctx->pc = 0x1840B8u;
            // 0x1840b8: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->pc = 0x1840BCu;
        goto label_1840bc;
    }
    ctx->pc = 0x1840B4u;
    {
        const bool branch_taken_0x1840b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1840B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840B4u;
            // 0x1840b8: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840b4) {
            ctx->pc = 0x1840CCu;
            goto label_1840cc;
        }
    }
    ctx->pc = 0x1840BCu;
label_1840bc:
    // 0x1840bc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1840bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1840c0:
    // 0x1840c0: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1840c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1840c4:
    // 0x1840c4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1840c8:
    if (ctx->pc == 0x1840C8u) {
        ctx->pc = 0x1840C8u;
            // 0x1840c8: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->pc = 0x1840CCu;
        goto label_1840cc;
    }
    ctx->pc = 0x1840C4u;
    {
        const bool branch_taken_0x1840c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1840C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840C4u;
            // 0x1840c8: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840c4) {
            ctx->pc = 0x1840D4u;
            goto label_1840d4;
        }
    }
    ctx->pc = 0x1840CCu;
label_1840cc:
    // 0x1840cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1840ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1840d0:
    // 0x1840d0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1840d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1840d4:
    // 0x1840d4: 0x3e00008  jr          $ra
label_1840d8:
    if (ctx->pc == 0x1840D8u) {
        ctx->pc = 0x1840DCu;
        goto label_1840dc;
    }
    ctx->pc = 0x1840D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1840DCu;
label_1840dc:
    // 0x1840dc: 0x0  nop
    ctx->pc = 0x1840dcu;
    // NOP
label_1840e0:
    // 0x1840e0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1840e4:
    // 0x1840e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1840e8:
    // 0x1840e8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1840ec:
    // 0x1840ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1840f0:
    // 0x1840f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1840f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1840f4:
    // 0x1840f4: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1840f8:
    if (ctx->pc == 0x1840F8u) {
        ctx->pc = 0x1840F8u;
            // 0x1840f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1840FCu;
        goto label_1840fc;
    }
    ctx->pc = 0x1840F4u;
    {
        const bool branch_taken_0x1840f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1840F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840F4u;
            // 0x1840f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840f4) {
            ctx->pc = 0x18410Cu;
            goto label_18410c;
        }
    }
    ctx->pc = 0x1840FCu;
label_1840fc:
    // 0x1840fc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184100:
    // 0x184100: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_184104:
    // 0x184104: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_184108:
    if (ctx->pc == 0x184108u) {
        ctx->pc = 0x184108u;
            // 0x184108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18410Cu;
        goto label_18410c;
    }
    ctx->pc = 0x184104u;
    {
        const bool branch_taken_0x184104 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184104u;
            // 0x184108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184104) {
            ctx->pc = 0x184138u;
            goto label_184138;
        }
    }
    ctx->pc = 0x18410Cu;
label_18410c:
    // 0x18410c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_184110:
    // 0x184110: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_184114:
    // 0x184114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x184114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184118:
    // 0x184118: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_18411c:
    // 0x18411c: 0x40f809  jalr        $v0
label_184120:
    if (ctx->pc == 0x184120u) {
        ctx->pc = 0x184120u;
            // 0x184120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184124u;
        goto label_184124;
    }
    ctx->pc = 0x18411Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184124u);
        ctx->pc = 0x184120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18411Cu;
            // 0x184120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184124u; }
            if (ctx->pc != 0x184124u) { return; }
        }
        }
    }
    ctx->pc = 0x184124u;
label_184124:
    // 0x184124: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x184124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_184128:
    // 0x184128: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x184128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18412c:
    // 0x18412c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x18412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_184130:
    // 0x184130: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184134:
    // 0x184134: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x184134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_184138:
    // 0x184138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18413c:
    // 0x18413c: 0x3e00008  jr          $ra
label_184140:
    if (ctx->pc == 0x184140u) {
        ctx->pc = 0x184140u;
            // 0x184140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184144u;
        goto label_184144;
    }
    ctx->pc = 0x18413Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18413Cu;
            // 0x184140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184144u;
label_184144:
    // 0x184144: 0x0  nop
    ctx->pc = 0x184144u;
    // NOP
label_184148:
    // 0x184148: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18414c:
    // 0x18414c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184150:
    // 0x184150: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184154:
    // 0x184154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x184154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184158:
    // 0x184158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18415c:
    // 0x18415c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_184160:
    if (ctx->pc == 0x184160u) {
        ctx->pc = 0x184160u;
            // 0x184160: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184164u;
        goto label_184164;
    }
    ctx->pc = 0x18415Cu;
    {
        const bool branch_taken_0x18415c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x184160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18415Cu;
            // 0x184160: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18415c) {
            ctx->pc = 0x184174u;
            goto label_184174;
        }
    }
    ctx->pc = 0x184164u;
label_184164:
    // 0x184164: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184168:
    // 0x184168: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_18416c:
    // 0x18416c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_184170:
    if (ctx->pc == 0x184170u) {
        ctx->pc = 0x184170u;
            // 0x184170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184174u;
        goto label_184174;
    }
    ctx->pc = 0x18416Cu;
    {
        const bool branch_taken_0x18416c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18416Cu;
            // 0x184170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18416c) {
            ctx->pc = 0x184198u;
            goto label_184198;
        }
    }
    ctx->pc = 0x184174u;
label_184174:
    // 0x184174: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x184174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_184178:
    // 0x184178: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x184178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18417c:
    // 0x18417c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184180:
    // 0x184180: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_184184:
    // 0x184184: 0x40f809  jalr        $v0
label_184188:
    if (ctx->pc == 0x184188u) {
        ctx->pc = 0x184188u;
            // 0x184188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18418Cu;
        goto label_18418c;
    }
    ctx->pc = 0x184184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18418Cu);
        ctx->pc = 0x184188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184184u;
            // 0x184188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18418Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18418Cu; }
            if (ctx->pc != 0x18418Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18418Cu;
label_18418c:
    // 0x18418c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x18418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_184190:
    // 0x184190: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184194:
    // 0x184194: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x184194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_184198:
    // 0x184198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18419c:
    // 0x18419c: 0x3e00008  jr          $ra
label_1841a0:
    if (ctx->pc == 0x1841A0u) {
        ctx->pc = 0x1841A0u;
            // 0x1841a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1841A4u;
        goto label_1841a4;
    }
    ctx->pc = 0x18419Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1841A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18419Cu;
            // 0x1841a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1841A4u;
label_1841a4:
    // 0x1841a4: 0x0  nop
    ctx->pc = 0x1841a4u;
    // NOP
}
