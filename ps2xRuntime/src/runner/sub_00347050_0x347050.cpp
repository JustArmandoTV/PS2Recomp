#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347050
// Address: 0x347050 - 0x347160
void sub_00347050_0x347050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347050_0x347050");
#endif

    switch (ctx->pc) {
        case 0x347050u: goto label_347050;
        case 0x347054u: goto label_347054;
        case 0x347058u: goto label_347058;
        case 0x34705cu: goto label_34705c;
        case 0x347060u: goto label_347060;
        case 0x347064u: goto label_347064;
        case 0x347068u: goto label_347068;
        case 0x34706cu: goto label_34706c;
        case 0x347070u: goto label_347070;
        case 0x347074u: goto label_347074;
        case 0x347078u: goto label_347078;
        case 0x34707cu: goto label_34707c;
        case 0x347080u: goto label_347080;
        case 0x347084u: goto label_347084;
        case 0x347088u: goto label_347088;
        case 0x34708cu: goto label_34708c;
        case 0x347090u: goto label_347090;
        case 0x347094u: goto label_347094;
        case 0x347098u: goto label_347098;
        case 0x34709cu: goto label_34709c;
        case 0x3470a0u: goto label_3470a0;
        case 0x3470a4u: goto label_3470a4;
        case 0x3470a8u: goto label_3470a8;
        case 0x3470acu: goto label_3470ac;
        case 0x3470b0u: goto label_3470b0;
        case 0x3470b4u: goto label_3470b4;
        case 0x3470b8u: goto label_3470b8;
        case 0x3470bcu: goto label_3470bc;
        case 0x3470c0u: goto label_3470c0;
        case 0x3470c4u: goto label_3470c4;
        case 0x3470c8u: goto label_3470c8;
        case 0x3470ccu: goto label_3470cc;
        case 0x3470d0u: goto label_3470d0;
        case 0x3470d4u: goto label_3470d4;
        case 0x3470d8u: goto label_3470d8;
        case 0x3470dcu: goto label_3470dc;
        case 0x3470e0u: goto label_3470e0;
        case 0x3470e4u: goto label_3470e4;
        case 0x3470e8u: goto label_3470e8;
        case 0x3470ecu: goto label_3470ec;
        case 0x3470f0u: goto label_3470f0;
        case 0x3470f4u: goto label_3470f4;
        case 0x3470f8u: goto label_3470f8;
        case 0x3470fcu: goto label_3470fc;
        case 0x347100u: goto label_347100;
        case 0x347104u: goto label_347104;
        case 0x347108u: goto label_347108;
        case 0x34710cu: goto label_34710c;
        case 0x347110u: goto label_347110;
        case 0x347114u: goto label_347114;
        case 0x347118u: goto label_347118;
        case 0x34711cu: goto label_34711c;
        case 0x347120u: goto label_347120;
        case 0x347124u: goto label_347124;
        case 0x347128u: goto label_347128;
        case 0x34712cu: goto label_34712c;
        case 0x347130u: goto label_347130;
        case 0x347134u: goto label_347134;
        case 0x347138u: goto label_347138;
        case 0x34713cu: goto label_34713c;
        case 0x347140u: goto label_347140;
        case 0x347144u: goto label_347144;
        case 0x347148u: goto label_347148;
        case 0x34714cu: goto label_34714c;
        case 0x347150u: goto label_347150;
        case 0x347154u: goto label_347154;
        case 0x347158u: goto label_347158;
        case 0x34715cu: goto label_34715c;
        default: break;
    }

    ctx->pc = 0x347050u;

label_347050:
    // 0x347050: 0x3e00008  jr          $ra
label_347054:
    if (ctx->pc == 0x347054u) {
        ctx->pc = 0x347054u;
            // 0x347054: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x347058u;
        goto label_347058;
    }
    ctx->pc = 0x347050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347050u;
            // 0x347054: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347058u;
label_347058:
    // 0x347058: 0x0  nop
    ctx->pc = 0x347058u;
    // NOP
label_34705c:
    // 0x34705c: 0x0  nop
    ctx->pc = 0x34705cu;
    // NOP
label_347060:
    // 0x347060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x347060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_347064:
    // 0x347064: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x347064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_347068:
    // 0x347068: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x347068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34706c:
    // 0x34706c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_347070:
    // 0x347070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_347074:
    // 0x347074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_347078:
    // 0x347078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34707c:
    // 0x34707c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347080:
    // 0x347080: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x347080u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_347084:
    // 0x347084: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_347088:
    if (ctx->pc == 0x347088u) {
        ctx->pc = 0x347088u;
            // 0x347088: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34708Cu;
        goto label_34708c;
    }
    ctx->pc = 0x347084u;
    {
        const bool branch_taken_0x347084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x347088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347084u;
            // 0x347088: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347084) {
            ctx->pc = 0x3470B8u;
            goto label_3470b8;
        }
    }
    ctx->pc = 0x34708Cu;
label_34708c:
    // 0x34708c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_347090:
    // 0x347090: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_347094:
    if (ctx->pc == 0x347094u) {
        ctx->pc = 0x347094u;
            // 0x347094: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x347098u;
        goto label_347098;
    }
    ctx->pc = 0x347090u;
    {
        const bool branch_taken_0x347090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x347090) {
            ctx->pc = 0x347094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347090u;
            // 0x347094: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3470ACu;
            goto label_3470ac;
        }
    }
    ctx->pc = 0x347098u;
label_347098:
    // 0x347098: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34709c:
    // 0x34709c: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
label_3470a0:
    if (ctx->pc == 0x3470A0u) {
        ctx->pc = 0x3470A4u;
        goto label_3470a4;
    }
    ctx->pc = 0x34709Cu;
    {
        const bool branch_taken_0x34709c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34709c) {
            ctx->pc = 0x347138u;
            goto label_347138;
        }
    }
    ctx->pc = 0x3470A4u;
label_3470a4:
    // 0x3470a4: 0x10000024  b           . + 4 + (0x24 << 2)
label_3470a8:
    if (ctx->pc == 0x3470A8u) {
        ctx->pc = 0x3470ACu;
        goto label_3470ac;
    }
    ctx->pc = 0x3470A4u;
    {
        const bool branch_taken_0x3470a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3470a4) {
            ctx->pc = 0x347138u;
            goto label_347138;
        }
    }
    ctx->pc = 0x3470ACu;
label_3470ac:
    // 0x3470ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3470acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3470b0:
    // 0x3470b0: 0x320f809  jalr        $t9
label_3470b4:
    if (ctx->pc == 0x3470B4u) {
        ctx->pc = 0x3470B8u;
        goto label_3470b8;
    }
    ctx->pc = 0x3470B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3470B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3470B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3470B8u; }
            if (ctx->pc != 0x3470B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3470B8u;
label_3470b8:
    // 0x3470b8: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x3470b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_3470bc:
    // 0x3470bc: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_3470c0:
    if (ctx->pc == 0x3470C0u) {
        ctx->pc = 0x3470C4u;
        goto label_3470c4;
    }
    ctx->pc = 0x3470BCu;
    {
        const bool branch_taken_0x3470bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3470bc) {
            ctx->pc = 0x347138u;
            goto label_347138;
        }
    }
    ctx->pc = 0x3470C4u;
label_3470c4:
    // 0x3470c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3470c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3470c8:
    // 0x3470c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3470c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3470cc:
    // 0x3470cc: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3470d0:
    // 0x3470d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3470d4:
    // 0x3470d4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x3470d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3470d8:
    // 0x3470d8: 0xc0d1dd0  jal         func_347740
label_3470dc:
    if (ctx->pc == 0x3470DCu) {
        ctx->pc = 0x3470DCu;
            // 0x3470dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3470E0u;
        goto label_3470e0;
    }
    ctx->pc = 0x3470D8u;
    SET_GPR_U32(ctx, 31, 0x3470E0u);
    ctx->pc = 0x3470DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3470D8u;
            // 0x3470dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347740u;
    if (runtime->hasFunction(0x347740u)) {
        auto targetFn = runtime->lookupFunction(0x347740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3470E0u; }
        if (ctx->pc != 0x3470E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347740_0x347740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3470E0u; }
        if (ctx->pc != 0x3470E0u) { return; }
    }
    ctx->pc = 0x3470E0u;
label_3470e0:
    // 0x3470e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3470e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3470e4:
    // 0x3470e4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_3470e8:
    if (ctx->pc == 0x3470E8u) {
        ctx->pc = 0x3470ECu;
        goto label_3470ec;
    }
    ctx->pc = 0x3470E4u;
    {
        const bool branch_taken_0x3470e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3470e4) {
            ctx->pc = 0x347118u;
            goto label_347118;
        }
    }
    ctx->pc = 0x3470ECu;
label_3470ec:
    // 0x3470ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3470f0:
    if (ctx->pc == 0x3470F0u) {
        ctx->pc = 0x3470F4u;
        goto label_3470f4;
    }
    ctx->pc = 0x3470ECu;
    {
        const bool branch_taken_0x3470ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3470ec) {
            ctx->pc = 0x347100u;
            goto label_347100;
        }
    }
    ctx->pc = 0x3470F4u;
label_3470f4:
    // 0x3470f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3470f8:
    if (ctx->pc == 0x3470F8u) {
        ctx->pc = 0x3470FCu;
        goto label_3470fc;
    }
    ctx->pc = 0x3470F4u;
    {
        const bool branch_taken_0x3470f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3470f4) {
            ctx->pc = 0x347128u;
            goto label_347128;
        }
    }
    ctx->pc = 0x3470FCu;
label_3470fc:
    // 0x3470fc: 0x0  nop
    ctx->pc = 0x3470fcu;
    // NOP
label_347100:
    // 0x347100: 0xc0d209c  jal         func_348270
label_347104:
    if (ctx->pc == 0x347104u) {
        ctx->pc = 0x347104u;
            // 0x347104: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347108u;
        goto label_347108;
    }
    ctx->pc = 0x347100u;
    SET_GPR_U32(ctx, 31, 0x347108u);
    ctx->pc = 0x347104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347100u;
            // 0x347104: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348270u;
    if (runtime->hasFunction(0x348270u)) {
        auto targetFn = runtime->lookupFunction(0x348270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347108u; }
        if (ctx->pc != 0x347108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348270_0x348270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347108u; }
        if (ctx->pc != 0x347108u) { return; }
    }
    ctx->pc = 0x347108u;
label_347108:
    // 0x347108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x347108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34710c:
    // 0x34710c: 0xc0d1dcc  jal         func_347730
label_347110:
    if (ctx->pc == 0x347110u) {
        ctx->pc = 0x347110u;
            // 0x347110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x347114u;
        goto label_347114;
    }
    ctx->pc = 0x34710Cu;
    SET_GPR_U32(ctx, 31, 0x347114u);
    ctx->pc = 0x347110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34710Cu;
            // 0x347110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347730u;
    if (runtime->hasFunction(0x347730u)) {
        auto targetFn = runtime->lookupFunction(0x347730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347114u; }
        if (ctx->pc != 0x347114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347730_0x347730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347114u; }
        if (ctx->pc != 0x347114u) { return; }
    }
    ctx->pc = 0x347114u;
label_347114:
    // 0x347114: 0x0  nop
    ctx->pc = 0x347114u;
    // NOP
label_347118:
    // 0x347118: 0xc0d1c58  jal         func_347160
label_34711c:
    if (ctx->pc == 0x34711Cu) {
        ctx->pc = 0x34711Cu;
            // 0x34711c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347120u;
        goto label_347120;
    }
    ctx->pc = 0x347118u;
    SET_GPR_U32(ctx, 31, 0x347120u);
    ctx->pc = 0x34711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347118u;
            // 0x34711c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347160u;
    if (runtime->hasFunction(0x347160u)) {
        auto targetFn = runtime->lookupFunction(0x347160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347120u; }
        if (ctx->pc != 0x347120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347160_0x347160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347120u; }
        if (ctx->pc != 0x347120u) { return; }
    }
    ctx->pc = 0x347120u;
label_347120:
    // 0x347120: 0xc0d22ec  jal         func_348BB0
label_347124:
    if (ctx->pc == 0x347124u) {
        ctx->pc = 0x347124u;
            // 0x347124: 0x268400a4  addiu       $a0, $s4, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
        ctx->pc = 0x347128u;
        goto label_347128;
    }
    ctx->pc = 0x347120u;
    SET_GPR_U32(ctx, 31, 0x347128u);
    ctx->pc = 0x347124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347120u;
            // 0x347124: 0x268400a4  addiu       $a0, $s4, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348BB0u;
    if (runtime->hasFunction(0x348BB0u)) {
        auto targetFn = runtime->lookupFunction(0x348BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347128u; }
        if (ctx->pc != 0x347128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348BB0_0x348bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347128u; }
        if (ctx->pc != 0x347128u) { return; }
    }
    ctx->pc = 0x347128u;
label_347128:
    // 0x347128: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x347128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_34712c:
    // 0x34712c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x34712cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_347130:
    // 0x347130: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_347134:
    if (ctx->pc == 0x347134u) {
        ctx->pc = 0x347134u;
            // 0x347134: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x347138u;
        goto label_347138;
    }
    ctx->pc = 0x347130u;
    {
        const bool branch_taken_0x347130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x347134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347130u;
            // 0x347134: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347130) {
            ctx->pc = 0x3470CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3470cc;
        }
    }
    ctx->pc = 0x347138u;
label_347138:
    // 0x347138: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x347138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34713c:
    // 0x34713c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34713cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_347140:
    // 0x347140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_347144:
    // 0x347144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_347148:
    // 0x347148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34714c:
    // 0x34714c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34714cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_347150:
    // 0x347150: 0x3e00008  jr          $ra
label_347154:
    if (ctx->pc == 0x347154u) {
        ctx->pc = 0x347154u;
            // 0x347154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x347158u;
        goto label_347158;
    }
    ctx->pc = 0x347150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347150u;
            // 0x347154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347158u;
label_347158:
    // 0x347158: 0x0  nop
    ctx->pc = 0x347158u;
    // NOP
label_34715c:
    // 0x34715c: 0x0  nop
    ctx->pc = 0x34715cu;
    // NOP
}
