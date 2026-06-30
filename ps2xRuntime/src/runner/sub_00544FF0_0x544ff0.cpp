#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00544FF0
// Address: 0x544ff0 - 0x545300
void sub_00544FF0_0x544ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00544FF0_0x544ff0");
#endif

    switch (ctx->pc) {
        case 0x544ff0u: goto label_544ff0;
        case 0x544ff4u: goto label_544ff4;
        case 0x544ff8u: goto label_544ff8;
        case 0x544ffcu: goto label_544ffc;
        case 0x545000u: goto label_545000;
        case 0x545004u: goto label_545004;
        case 0x545008u: goto label_545008;
        case 0x54500cu: goto label_54500c;
        case 0x545010u: goto label_545010;
        case 0x545014u: goto label_545014;
        case 0x545018u: goto label_545018;
        case 0x54501cu: goto label_54501c;
        case 0x545020u: goto label_545020;
        case 0x545024u: goto label_545024;
        case 0x545028u: goto label_545028;
        case 0x54502cu: goto label_54502c;
        case 0x545030u: goto label_545030;
        case 0x545034u: goto label_545034;
        case 0x545038u: goto label_545038;
        case 0x54503cu: goto label_54503c;
        case 0x545040u: goto label_545040;
        case 0x545044u: goto label_545044;
        case 0x545048u: goto label_545048;
        case 0x54504cu: goto label_54504c;
        case 0x545050u: goto label_545050;
        case 0x545054u: goto label_545054;
        case 0x545058u: goto label_545058;
        case 0x54505cu: goto label_54505c;
        case 0x545060u: goto label_545060;
        case 0x545064u: goto label_545064;
        case 0x545068u: goto label_545068;
        case 0x54506cu: goto label_54506c;
        case 0x545070u: goto label_545070;
        case 0x545074u: goto label_545074;
        case 0x545078u: goto label_545078;
        case 0x54507cu: goto label_54507c;
        case 0x545080u: goto label_545080;
        case 0x545084u: goto label_545084;
        case 0x545088u: goto label_545088;
        case 0x54508cu: goto label_54508c;
        case 0x545090u: goto label_545090;
        case 0x545094u: goto label_545094;
        case 0x545098u: goto label_545098;
        case 0x54509cu: goto label_54509c;
        case 0x5450a0u: goto label_5450a0;
        case 0x5450a4u: goto label_5450a4;
        case 0x5450a8u: goto label_5450a8;
        case 0x5450acu: goto label_5450ac;
        case 0x5450b0u: goto label_5450b0;
        case 0x5450b4u: goto label_5450b4;
        case 0x5450b8u: goto label_5450b8;
        case 0x5450bcu: goto label_5450bc;
        case 0x5450c0u: goto label_5450c0;
        case 0x5450c4u: goto label_5450c4;
        case 0x5450c8u: goto label_5450c8;
        case 0x5450ccu: goto label_5450cc;
        case 0x5450d0u: goto label_5450d0;
        case 0x5450d4u: goto label_5450d4;
        case 0x5450d8u: goto label_5450d8;
        case 0x5450dcu: goto label_5450dc;
        case 0x5450e0u: goto label_5450e0;
        case 0x5450e4u: goto label_5450e4;
        case 0x5450e8u: goto label_5450e8;
        case 0x5450ecu: goto label_5450ec;
        case 0x5450f0u: goto label_5450f0;
        case 0x5450f4u: goto label_5450f4;
        case 0x5450f8u: goto label_5450f8;
        case 0x5450fcu: goto label_5450fc;
        case 0x545100u: goto label_545100;
        case 0x545104u: goto label_545104;
        case 0x545108u: goto label_545108;
        case 0x54510cu: goto label_54510c;
        case 0x545110u: goto label_545110;
        case 0x545114u: goto label_545114;
        case 0x545118u: goto label_545118;
        case 0x54511cu: goto label_54511c;
        case 0x545120u: goto label_545120;
        case 0x545124u: goto label_545124;
        case 0x545128u: goto label_545128;
        case 0x54512cu: goto label_54512c;
        case 0x545130u: goto label_545130;
        case 0x545134u: goto label_545134;
        case 0x545138u: goto label_545138;
        case 0x54513cu: goto label_54513c;
        case 0x545140u: goto label_545140;
        case 0x545144u: goto label_545144;
        case 0x545148u: goto label_545148;
        case 0x54514cu: goto label_54514c;
        case 0x545150u: goto label_545150;
        case 0x545154u: goto label_545154;
        case 0x545158u: goto label_545158;
        case 0x54515cu: goto label_54515c;
        case 0x545160u: goto label_545160;
        case 0x545164u: goto label_545164;
        case 0x545168u: goto label_545168;
        case 0x54516cu: goto label_54516c;
        case 0x545170u: goto label_545170;
        case 0x545174u: goto label_545174;
        case 0x545178u: goto label_545178;
        case 0x54517cu: goto label_54517c;
        case 0x545180u: goto label_545180;
        case 0x545184u: goto label_545184;
        case 0x545188u: goto label_545188;
        case 0x54518cu: goto label_54518c;
        case 0x545190u: goto label_545190;
        case 0x545194u: goto label_545194;
        case 0x545198u: goto label_545198;
        case 0x54519cu: goto label_54519c;
        case 0x5451a0u: goto label_5451a0;
        case 0x5451a4u: goto label_5451a4;
        case 0x5451a8u: goto label_5451a8;
        case 0x5451acu: goto label_5451ac;
        case 0x5451b0u: goto label_5451b0;
        case 0x5451b4u: goto label_5451b4;
        case 0x5451b8u: goto label_5451b8;
        case 0x5451bcu: goto label_5451bc;
        case 0x5451c0u: goto label_5451c0;
        case 0x5451c4u: goto label_5451c4;
        case 0x5451c8u: goto label_5451c8;
        case 0x5451ccu: goto label_5451cc;
        case 0x5451d0u: goto label_5451d0;
        case 0x5451d4u: goto label_5451d4;
        case 0x5451d8u: goto label_5451d8;
        case 0x5451dcu: goto label_5451dc;
        case 0x5451e0u: goto label_5451e0;
        case 0x5451e4u: goto label_5451e4;
        case 0x5451e8u: goto label_5451e8;
        case 0x5451ecu: goto label_5451ec;
        case 0x5451f0u: goto label_5451f0;
        case 0x5451f4u: goto label_5451f4;
        case 0x5451f8u: goto label_5451f8;
        case 0x5451fcu: goto label_5451fc;
        case 0x545200u: goto label_545200;
        case 0x545204u: goto label_545204;
        case 0x545208u: goto label_545208;
        case 0x54520cu: goto label_54520c;
        case 0x545210u: goto label_545210;
        case 0x545214u: goto label_545214;
        case 0x545218u: goto label_545218;
        case 0x54521cu: goto label_54521c;
        case 0x545220u: goto label_545220;
        case 0x545224u: goto label_545224;
        case 0x545228u: goto label_545228;
        case 0x54522cu: goto label_54522c;
        case 0x545230u: goto label_545230;
        case 0x545234u: goto label_545234;
        case 0x545238u: goto label_545238;
        case 0x54523cu: goto label_54523c;
        case 0x545240u: goto label_545240;
        case 0x545244u: goto label_545244;
        case 0x545248u: goto label_545248;
        case 0x54524cu: goto label_54524c;
        case 0x545250u: goto label_545250;
        case 0x545254u: goto label_545254;
        case 0x545258u: goto label_545258;
        case 0x54525cu: goto label_54525c;
        case 0x545260u: goto label_545260;
        case 0x545264u: goto label_545264;
        case 0x545268u: goto label_545268;
        case 0x54526cu: goto label_54526c;
        case 0x545270u: goto label_545270;
        case 0x545274u: goto label_545274;
        case 0x545278u: goto label_545278;
        case 0x54527cu: goto label_54527c;
        case 0x545280u: goto label_545280;
        case 0x545284u: goto label_545284;
        case 0x545288u: goto label_545288;
        case 0x54528cu: goto label_54528c;
        case 0x545290u: goto label_545290;
        case 0x545294u: goto label_545294;
        case 0x545298u: goto label_545298;
        case 0x54529cu: goto label_54529c;
        case 0x5452a0u: goto label_5452a0;
        case 0x5452a4u: goto label_5452a4;
        case 0x5452a8u: goto label_5452a8;
        case 0x5452acu: goto label_5452ac;
        case 0x5452b0u: goto label_5452b0;
        case 0x5452b4u: goto label_5452b4;
        case 0x5452b8u: goto label_5452b8;
        case 0x5452bcu: goto label_5452bc;
        case 0x5452c0u: goto label_5452c0;
        case 0x5452c4u: goto label_5452c4;
        case 0x5452c8u: goto label_5452c8;
        case 0x5452ccu: goto label_5452cc;
        case 0x5452d0u: goto label_5452d0;
        case 0x5452d4u: goto label_5452d4;
        case 0x5452d8u: goto label_5452d8;
        case 0x5452dcu: goto label_5452dc;
        case 0x5452e0u: goto label_5452e0;
        case 0x5452e4u: goto label_5452e4;
        case 0x5452e8u: goto label_5452e8;
        case 0x5452ecu: goto label_5452ec;
        case 0x5452f0u: goto label_5452f0;
        case 0x5452f4u: goto label_5452f4;
        case 0x5452f8u: goto label_5452f8;
        case 0x5452fcu: goto label_5452fc;
        default: break;
    }

    ctx->pc = 0x544ff0u;

label_544ff0:
    // 0x544ff0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x544ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_544ff4:
    // 0x544ff4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x544ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_544ff8:
    // 0x544ff8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x544ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_544ffc:
    // 0x544ffc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x544ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_545000:
    // 0x545000: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x545000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545004:
    // 0x545004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x545004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_545008:
    // 0x545008: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x545008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54500c:
    // 0x54500c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_545010:
    // 0x545010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_545014:
    // 0x545014: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x545014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_545018:
    // 0x545018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54501c:
    // 0x54501c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x54501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_545020:
    // 0x545020: 0x9082004e  lbu         $v0, 0x4E($a0)
    ctx->pc = 0x545020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
label_545024:
    // 0x545024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_545028:
    if (ctx->pc == 0x545028u) {
        ctx->pc = 0x545028u;
            // 0x545028: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54502Cu;
        goto label_54502c;
    }
    ctx->pc = 0x545024u;
    {
        const bool branch_taken_0x545024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x545028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545024u;
            // 0x545028: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545024) {
            ctx->pc = 0x545034u;
            goto label_545034;
        }
    }
    ctx->pc = 0x54502Cu;
label_54502c:
    // 0x54502c: 0x10000086  b           . + 4 + (0x86 << 2)
label_545030:
    if (ctx->pc == 0x545030u) {
        ctx->pc = 0x545030u;
            // 0x545030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545034u;
        goto label_545034;
    }
    ctx->pc = 0x54502Cu;
    {
        const bool branch_taken_0x54502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x545030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54502Cu;
            // 0x545030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54502c) {
            ctx->pc = 0x545248u;
            goto label_545248;
        }
    }
    ctx->pc = 0x545034u;
label_545034:
    // 0x545034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x545034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_545038:
    // 0x545038: 0xc04f278  jal         func_13C9E0
label_54503c:
    if (ctx->pc == 0x54503Cu) {
        ctx->pc = 0x54503Cu;
            // 0x54503c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x545040u;
        goto label_545040;
    }
    ctx->pc = 0x545038u;
    SET_GPR_U32(ctx, 31, 0x545040u);
    ctx->pc = 0x54503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545038u;
            // 0x54503c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545040u; }
        if (ctx->pc != 0x545040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545040u; }
        if (ctx->pc != 0x545040u) { return; }
    }
    ctx->pc = 0x545040u;
label_545040:
    // 0x545040: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x545040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_545044:
    // 0x545044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x545044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_545048:
    // 0x545048: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x545048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_54504c:
    // 0x54504c: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x54504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_545050:
    // 0x545050: 0xc04ce50  jal         func_133940
label_545054:
    if (ctx->pc == 0x545054u) {
        ctx->pc = 0x545054u;
            // 0x545054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545058u;
        goto label_545058;
    }
    ctx->pc = 0x545050u;
    SET_GPR_U32(ctx, 31, 0x545058u);
    ctx->pc = 0x545054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545050u;
            // 0x545054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545058u; }
        if (ctx->pc != 0x545058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545058u; }
        if (ctx->pc != 0x545058u) { return; }
    }
    ctx->pc = 0x545058u;
label_545058:
    // 0x545058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x545058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54505c:
    // 0x54505c: 0xc04ce80  jal         func_133A00
label_545060:
    if (ctx->pc == 0x545060u) {
        ctx->pc = 0x545060u;
            // 0x545060: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x545064u;
        goto label_545064;
    }
    ctx->pc = 0x54505Cu;
    SET_GPR_U32(ctx, 31, 0x545064u);
    ctx->pc = 0x545060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54505Cu;
            // 0x545060: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545064u; }
        if (ctx->pc != 0x545064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545064u; }
        if (ctx->pc != 0x545064u) { return; }
    }
    ctx->pc = 0x545064u;
label_545064:
    // 0x545064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x545064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_545068:
    // 0x545068: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x545068u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_54506c:
    // 0x54506c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x54506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_545070:
    // 0x545070: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x545070u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_545074:
    // 0x545074: 0xc07698c  jal         func_1DA630
label_545078:
    if (ctx->pc == 0x545078u) {
        ctx->pc = 0x545078u;
            // 0x545078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54507Cu;
        goto label_54507c;
    }
    ctx->pc = 0x545074u;
    SET_GPR_U32(ctx, 31, 0x54507Cu);
    ctx->pc = 0x545078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545074u;
            // 0x545078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54507Cu; }
        if (ctx->pc != 0x54507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54507Cu; }
        if (ctx->pc != 0x54507Cu) { return; }
    }
    ctx->pc = 0x54507Cu;
label_54507c:
    // 0x54507c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x54507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_545080:
    // 0x545080: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_545084:
    if (ctx->pc == 0x545084u) {
        ctx->pc = 0x545088u;
        goto label_545088;
    }
    ctx->pc = 0x545080u;
    {
        const bool branch_taken_0x545080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x545080) {
            ctx->pc = 0x545090u;
            goto label_545090;
        }
    }
    ctx->pc = 0x545088u;
label_545088:
    // 0x545088: 0x10000033  b           . + 4 + (0x33 << 2)
label_54508c:
    if (ctx->pc == 0x54508Cu) {
        ctx->pc = 0x54508Cu;
            // 0x54508c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x545090u;
        goto label_545090;
    }
    ctx->pc = 0x545088u;
    {
        const bool branch_taken_0x545088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545088u;
            // 0x54508c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545088) {
            ctx->pc = 0x545158u;
            goto label_545158;
        }
    }
    ctx->pc = 0x545090u;
label_545090:
    // 0x545090: 0xc0576f4  jal         func_15DBD0
label_545094:
    if (ctx->pc == 0x545094u) {
        ctx->pc = 0x545098u;
        goto label_545098;
    }
    ctx->pc = 0x545090u;
    SET_GPR_U32(ctx, 31, 0x545098u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545098u; }
        if (ctx->pc != 0x545098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545098u; }
        if (ctx->pc != 0x545098u) { return; }
    }
    ctx->pc = 0x545098u;
label_545098:
    // 0x545098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x545098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54509c:
    // 0x54509c: 0xc076984  jal         func_1DA610
label_5450a0:
    if (ctx->pc == 0x5450A0u) {
        ctx->pc = 0x5450A0u;
            // 0x5450a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5450A4u;
        goto label_5450a4;
    }
    ctx->pc = 0x54509Cu;
    SET_GPR_U32(ctx, 31, 0x5450A4u);
    ctx->pc = 0x5450A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54509Cu;
            // 0x5450a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450A4u; }
        if (ctx->pc != 0x5450A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450A4u; }
        if (ctx->pc != 0x5450A4u) { return; }
    }
    ctx->pc = 0x5450A4u;
label_5450a4:
    // 0x5450a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5450a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5450a8:
    // 0x5450a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5450a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5450ac:
    // 0x5450ac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5450acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5450b0:
    // 0x5450b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5450b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5450b4:
    // 0x5450b4: 0xc442d930  lwc1        $f2, -0x26D0($v0)
    ctx->pc = 0x5450b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5450b8:
    // 0x5450b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5450b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5450bc:
    // 0x5450bc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5450c0:
    // 0x5450c0: 0xc441d938  lwc1        $f1, -0x26C8($v0)
    ctx->pc = 0x5450c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5450c4:
    // 0x5450c4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x5450c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_5450c8:
    // 0x5450c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5450c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5450cc:
    // 0x5450cc: 0xc440d93c  lwc1        $f0, -0x26C4($v0)
    ctx->pc = 0x5450ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5450d0:
    // 0x5450d0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x5450d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_5450d4:
    // 0x5450d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5450d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5450d8:
    // 0x5450d8: 0x8c42d934  lw          $v0, -0x26CC($v0)
    ctx->pc = 0x5450d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_5450dc:
    // 0x5450dc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x5450dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_5450e0:
    // 0x5450e0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x5450e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_5450e4:
    // 0x5450e4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x5450e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5450e8:
    // 0x5450e8: 0xc04cca0  jal         func_133280
label_5450ec:
    if (ctx->pc == 0x5450ECu) {
        ctx->pc = 0x5450ECu;
            // 0x5450ec: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x5450F0u;
        goto label_5450f0;
    }
    ctx->pc = 0x5450E8u;
    SET_GPR_U32(ctx, 31, 0x5450F0u);
    ctx->pc = 0x5450ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5450E8u;
            // 0x5450ec: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450F0u; }
        if (ctx->pc != 0x5450F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450F0u; }
        if (ctx->pc != 0x5450F0u) { return; }
    }
    ctx->pc = 0x5450F0u;
label_5450f0:
    // 0x5450f0: 0xc076980  jal         func_1DA600
label_5450f4:
    if (ctx->pc == 0x5450F4u) {
        ctx->pc = 0x5450F4u;
            // 0x5450f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5450F8u;
        goto label_5450f8;
    }
    ctx->pc = 0x5450F0u;
    SET_GPR_U32(ctx, 31, 0x5450F8u);
    ctx->pc = 0x5450F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5450F0u;
            // 0x5450f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450F8u; }
        if (ctx->pc != 0x5450F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5450F8u; }
        if (ctx->pc != 0x5450F8u) { return; }
    }
    ctx->pc = 0x5450F8u;
label_5450f8:
    // 0x5450f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5450f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5450fc:
    // 0x5450fc: 0xc04cc34  jal         func_1330D0
label_545100:
    if (ctx->pc == 0x545100u) {
        ctx->pc = 0x545100u;
            // 0x545100: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x545104u;
        goto label_545104;
    }
    ctx->pc = 0x5450FCu;
    SET_GPR_U32(ctx, 31, 0x545104u);
    ctx->pc = 0x545100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5450FCu;
            // 0x545100: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545104u; }
        if (ctx->pc != 0x545104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545104u; }
        if (ctx->pc != 0x545104u) { return; }
    }
    ctx->pc = 0x545104u;
label_545104:
    // 0x545104: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x545104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_545108:
    // 0x545108: 0xc441dc88  lwc1        $f1, -0x2378($v0)
    ctx->pc = 0x545108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54510c:
    // 0x54510c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x54510cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_545110:
    // 0x545110: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_545114:
    if (ctx->pc == 0x545114u) {
        ctx->pc = 0x545114u;
            // 0x545114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545118u;
        goto label_545118;
    }
    ctx->pc = 0x545110u;
    {
        const bool branch_taken_0x545110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x545110) {
            ctx->pc = 0x545114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545110u;
            // 0x545114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545120u;
            goto label_545120;
        }
    }
    ctx->pc = 0x545118u;
label_545118:
    // 0x545118: 0x1000000f  b           . + 4 + (0xF << 2)
label_54511c:
    if (ctx->pc == 0x54511Cu) {
        ctx->pc = 0x54511Cu;
            // 0x54511c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x545120u;
        goto label_545120;
    }
    ctx->pc = 0x545118u;
    {
        const bool branch_taken_0x545118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545118u;
            // 0x54511c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545118) {
            ctx->pc = 0x545158u;
            goto label_545158;
        }
    }
    ctx->pc = 0x545120u;
label_545120:
    // 0x545120: 0xc07697c  jal         func_1DA5F0
label_545124:
    if (ctx->pc == 0x545124u) {
        ctx->pc = 0x545128u;
        goto label_545128;
    }
    ctx->pc = 0x545120u;
    SET_GPR_U32(ctx, 31, 0x545128u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545128u; }
        if (ctx->pc != 0x545128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545128u; }
        if (ctx->pc != 0x545128u) { return; }
    }
    ctx->pc = 0x545128u;
label_545128:
    // 0x545128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x545128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54512c:
    // 0x54512c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x54512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_545130:
    // 0x545130: 0xc04cd60  jal         func_133580
label_545134:
    if (ctx->pc == 0x545134u) {
        ctx->pc = 0x545134u;
            // 0x545134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545138u;
        goto label_545138;
    }
    ctx->pc = 0x545130u;
    SET_GPR_U32(ctx, 31, 0x545138u);
    ctx->pc = 0x545134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545130u;
            // 0x545134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545138u; }
        if (ctx->pc != 0x545138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545138u; }
        if (ctx->pc != 0x545138u) { return; }
    }
    ctx->pc = 0x545138u;
label_545138:
    // 0x545138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x545138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54513c:
    // 0x54513c: 0xc04c650  jal         func_131940
label_545140:
    if (ctx->pc == 0x545140u) {
        ctx->pc = 0x545140u;
            // 0x545140: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x545144u;
        goto label_545144;
    }
    ctx->pc = 0x54513Cu;
    SET_GPR_U32(ctx, 31, 0x545144u);
    ctx->pc = 0x545140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54513Cu;
            // 0x545140: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545144u; }
        if (ctx->pc != 0x545144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545144u; }
        if (ctx->pc != 0x545144u) { return; }
    }
    ctx->pc = 0x545144u;
label_545144:
    // 0x545144: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x545144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_545148:
    // 0x545148: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x545148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54514c:
    // 0x54514c: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x54514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_545150:
    // 0x545150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x545150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_545154:
    // 0x545154: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x545154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_545158:
    // 0x545158: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x545158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_54515c:
    // 0x54515c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_545160:
    if (ctx->pc == 0x545160u) {
        ctx->pc = 0x545160u;
            // 0x545160: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x545164u;
        goto label_545164;
    }
    ctx->pc = 0x54515Cu;
    {
        const bool branch_taken_0x54515c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x545160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54515Cu;
            // 0x545160: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54515c) {
            ctx->pc = 0x54516Cu;
            goto label_54516c;
        }
    }
    ctx->pc = 0x545164u;
label_545164:
    // 0x545164: 0x10000038  b           . + 4 + (0x38 << 2)
label_545168:
    if (ctx->pc == 0x545168u) {
        ctx->pc = 0x545168u;
            // 0x545168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54516Cu;
        goto label_54516c;
    }
    ctx->pc = 0x545164u;
    {
        const bool branch_taken_0x545164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x545168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545164u;
            // 0x545168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545164) {
            ctx->pc = 0x545248u;
            goto label_545248;
        }
    }
    ctx->pc = 0x54516Cu;
label_54516c:
    // 0x54516c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_545170:
    // 0x545170: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x545170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_545174:
    // 0x545174: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x545174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_545178:
    // 0x545178: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x545178u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_54517c:
    // 0x54517c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x54517cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_545180:
    // 0x545180: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x545180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_545184:
    // 0x545184: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x545184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_545188:
    // 0x545188: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x545188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_54518c:
    // 0x54518c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_545190:
    // 0x545190: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x545190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_545194:
    // 0x545194: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x545194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_545198:
    // 0x545198: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x545198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_54519c:
    // 0x54519c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54519cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5451a0:
    // 0x5451a0: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x5451a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_5451a4:
    // 0x5451a4: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x5451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5451a8:
    // 0x5451a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5451a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_5451ac:
    // 0x5451ac: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x5451acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_5451b0:
    // 0x5451b0: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x5451b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_5451b4:
    // 0x5451b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5451b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5451b8:
    // 0x5451b8: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x5451b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_5451bc:
    // 0x5451bc: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x5451bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_5451c0:
    // 0x5451c0: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x5451c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_5451c4:
    // 0x5451c4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x5451c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5451c8:
    // 0x5451c8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5451c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5451cc:
    // 0x5451cc: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x5451ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_5451d0:
    // 0x5451d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5451d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5451d4:
    // 0x5451d4: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x5451d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_5451d8:
    // 0x5451d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5451d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5451dc:
    // 0x5451dc: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x5451dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_5451e0:
    // 0x5451e0: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x5451e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5451e4:
    // 0x5451e4: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x5451e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_5451e8:
    // 0x5451e8: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x5451e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_5451ec:
    // 0x5451ec: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x5451ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_5451f0:
    // 0x5451f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5451f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5451f4:
    // 0x5451f4: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x5451f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_5451f8:
    // 0x5451f8: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x5451f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_5451fc:
    // 0x5451fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x5451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_545200:
    // 0x545200: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x545200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_545204:
    // 0x545204: 0xc04e4a4  jal         func_139290
label_545208:
    if (ctx->pc == 0x545208u) {
        ctx->pc = 0x545208u;
            // 0x545208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54520Cu;
        goto label_54520c;
    }
    ctx->pc = 0x545204u;
    SET_GPR_U32(ctx, 31, 0x54520Cu);
    ctx->pc = 0x545208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545204u;
            // 0x545208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54520Cu; }
        if (ctx->pc != 0x54520Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54520Cu; }
        if (ctx->pc != 0x54520Cu) { return; }
    }
    ctx->pc = 0x54520Cu;
label_54520c:
    // 0x54520c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x54520cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545210:
    // 0x545210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x545210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_545214:
    // 0x545214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x545214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_545218:
    // 0x545218: 0xc04cd60  jal         func_133580
label_54521c:
    if (ctx->pc == 0x54521Cu) {
        ctx->pc = 0x54521Cu;
            // 0x54521c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x545220u;
        goto label_545220;
    }
    ctx->pc = 0x545218u;
    SET_GPR_U32(ctx, 31, 0x545220u);
    ctx->pc = 0x54521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545218u;
            // 0x54521c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545220u; }
        if (ctx->pc != 0x545220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545220u; }
        if (ctx->pc != 0x545220u) { return; }
    }
    ctx->pc = 0x545220u;
label_545220:
    // 0x545220: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x545220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_545224:
    // 0x545224: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x545224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_545228:
    // 0x545228: 0x320f809  jalr        $t9
label_54522c:
    if (ctx->pc == 0x54522Cu) {
        ctx->pc = 0x54522Cu;
            // 0x54522c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545230u;
        goto label_545230;
    }
    ctx->pc = 0x545228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545230u);
        ctx->pc = 0x54522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545228u;
            // 0x54522c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545230u; }
            if (ctx->pc != 0x545230u) { return; }
        }
        }
    }
    ctx->pc = 0x545230u;
label_545230:
    // 0x545230: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x545230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_545234:
    // 0x545234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x545234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_545238:
    // 0x545238: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x545238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54523c:
    // 0x54523c: 0xc054fd4  jal         func_153F50
label_545240:
    if (ctx->pc == 0x545240u) {
        ctx->pc = 0x545240u;
            // 0x545240: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545244u;
        goto label_545244;
    }
    ctx->pc = 0x54523Cu;
    SET_GPR_U32(ctx, 31, 0x545244u);
    ctx->pc = 0x545240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54523Cu;
            // 0x545240: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545244u; }
        if (ctx->pc != 0x545244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545244u; }
        if (ctx->pc != 0x545244u) { return; }
    }
    ctx->pc = 0x545244u;
label_545244:
    // 0x545244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x545244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_545248:
    // 0x545248: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x545248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_54524c:
    // 0x54524c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x54524cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_545250:
    // 0x545250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x545250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_545254:
    // 0x545254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x545254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_545258:
    // 0x545258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x545258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54525c:
    // 0x54525c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54525cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545260:
    // 0x545260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545264:
    // 0x545264: 0x3e00008  jr          $ra
label_545268:
    if (ctx->pc == 0x545268u) {
        ctx->pc = 0x545268u;
            // 0x545268: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x54526Cu;
        goto label_54526c;
    }
    ctx->pc = 0x545264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545264u;
            // 0x545268: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54526Cu;
label_54526c:
    // 0x54526c: 0x0  nop
    ctx->pc = 0x54526cu;
    // NOP
label_545270:
    // 0x545270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x545270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_545274:
    // 0x545274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_545278:
    // 0x545278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54527c:
    // 0x54527c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545280:
    // 0x545280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x545280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545284:
    // 0x545284: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_545288:
    if (ctx->pc == 0x545288u) {
        ctx->pc = 0x545288u;
            // 0x545288: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54528Cu;
        goto label_54528c;
    }
    ctx->pc = 0x545284u;
    {
        const bool branch_taken_0x545284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x545288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545284u;
            // 0x545288: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545284) {
            ctx->pc = 0x5452E0u;
            goto label_5452e0;
        }
    }
    ctx->pc = 0x54528Cu;
label_54528c:
    // 0x54528c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545290:
    // 0x545290: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_545294:
    // 0x545294: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x545294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
label_545298:
    // 0x545298: 0x244276f8  addiu       $v0, $v0, 0x76F8
    ctx->pc = 0x545298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30456));
label_54529c:
    // 0x54529c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x54529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5452a0:
    // 0x5452a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_5452a4:
    if (ctx->pc == 0x5452A4u) {
        ctx->pc = 0x5452A4u;
            // 0x5452a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5452A8u;
        goto label_5452a8;
    }
    ctx->pc = 0x5452A0u;
    {
        const bool branch_taken_0x5452a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5452A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5452A0u;
            // 0x5452a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5452a0) {
            ctx->pc = 0x5452C8u;
            goto label_5452c8;
        }
    }
    ctx->pc = 0x5452A8u;
label_5452a8:
    // 0x5452a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5452a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5452ac:
    // 0x5452ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5452acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5452b0:
    // 0x5452b0: 0x24637820  addiu       $v1, $v1, 0x7820
    ctx->pc = 0x5452b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30752));
label_5452b4:
    // 0x5452b4: 0x24427858  addiu       $v0, $v0, 0x7858
    ctx->pc = 0x5452b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30808));
label_5452b8:
    // 0x5452b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5452b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5452bc:
    // 0x5452bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5452bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5452c0:
    // 0x5452c0: 0xc1514c0  jal         func_545300
label_5452c4:
    if (ctx->pc == 0x5452C4u) {
        ctx->pc = 0x5452C4u;
            // 0x5452c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5452C8u;
        goto label_5452c8;
    }
    ctx->pc = 0x5452C0u;
    SET_GPR_U32(ctx, 31, 0x5452C8u);
    ctx->pc = 0x5452C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5452C0u;
            // 0x5452c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x545300u;
    if (runtime->hasFunction(0x545300u)) {
        auto targetFn = runtime->lookupFunction(0x545300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5452C8u; }
        if (ctx->pc != 0x5452C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00545300_0x545300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5452C8u; }
        if (ctx->pc != 0x5452C8u) { return; }
    }
    ctx->pc = 0x5452C8u;
label_5452c8:
    // 0x5452c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5452c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5452cc:
    // 0x5452cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5452ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5452d0:
    // 0x5452d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5452d4:
    if (ctx->pc == 0x5452D4u) {
        ctx->pc = 0x5452D4u;
            // 0x5452d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5452D8u;
        goto label_5452d8;
    }
    ctx->pc = 0x5452D0u;
    {
        const bool branch_taken_0x5452d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5452d0) {
            ctx->pc = 0x5452D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5452D0u;
            // 0x5452d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5452E4u;
            goto label_5452e4;
        }
    }
    ctx->pc = 0x5452D8u;
label_5452d8:
    // 0x5452d8: 0xc0400a8  jal         func_1002A0
label_5452dc:
    if (ctx->pc == 0x5452DCu) {
        ctx->pc = 0x5452DCu;
            // 0x5452dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5452E0u;
        goto label_5452e0;
    }
    ctx->pc = 0x5452D8u;
    SET_GPR_U32(ctx, 31, 0x5452E0u);
    ctx->pc = 0x5452DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5452D8u;
            // 0x5452dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5452E0u; }
        if (ctx->pc != 0x5452E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5452E0u; }
        if (ctx->pc != 0x5452E0u) { return; }
    }
    ctx->pc = 0x5452E0u;
label_5452e0:
    // 0x5452e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5452e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5452e4:
    // 0x5452e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5452e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5452e8:
    // 0x5452e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5452e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5452ec:
    // 0x5452ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5452ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5452f0:
    // 0x5452f0: 0x3e00008  jr          $ra
label_5452f4:
    if (ctx->pc == 0x5452F4u) {
        ctx->pc = 0x5452F4u;
            // 0x5452f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5452F8u;
        goto label_5452f8;
    }
    ctx->pc = 0x5452F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5452F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5452F0u;
            // 0x5452f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5452F8u;
label_5452f8:
    // 0x5452f8: 0x0  nop
    ctx->pc = 0x5452f8u;
    // NOP
label_5452fc:
    // 0x5452fc: 0x0  nop
    ctx->pc = 0x5452fcu;
    // NOP
}
