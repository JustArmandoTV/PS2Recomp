#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4FD0
// Address: 0x3c4fd0 - 0x3c52f0
void sub_003C4FD0_0x3c4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4FD0_0x3c4fd0");
#endif

    switch (ctx->pc) {
        case 0x3c4fd0u: goto label_3c4fd0;
        case 0x3c4fd4u: goto label_3c4fd4;
        case 0x3c4fd8u: goto label_3c4fd8;
        case 0x3c4fdcu: goto label_3c4fdc;
        case 0x3c4fe0u: goto label_3c4fe0;
        case 0x3c4fe4u: goto label_3c4fe4;
        case 0x3c4fe8u: goto label_3c4fe8;
        case 0x3c4fecu: goto label_3c4fec;
        case 0x3c4ff0u: goto label_3c4ff0;
        case 0x3c4ff4u: goto label_3c4ff4;
        case 0x3c4ff8u: goto label_3c4ff8;
        case 0x3c4ffcu: goto label_3c4ffc;
        case 0x3c5000u: goto label_3c5000;
        case 0x3c5004u: goto label_3c5004;
        case 0x3c5008u: goto label_3c5008;
        case 0x3c500cu: goto label_3c500c;
        case 0x3c5010u: goto label_3c5010;
        case 0x3c5014u: goto label_3c5014;
        case 0x3c5018u: goto label_3c5018;
        case 0x3c501cu: goto label_3c501c;
        case 0x3c5020u: goto label_3c5020;
        case 0x3c5024u: goto label_3c5024;
        case 0x3c5028u: goto label_3c5028;
        case 0x3c502cu: goto label_3c502c;
        case 0x3c5030u: goto label_3c5030;
        case 0x3c5034u: goto label_3c5034;
        case 0x3c5038u: goto label_3c5038;
        case 0x3c503cu: goto label_3c503c;
        case 0x3c5040u: goto label_3c5040;
        case 0x3c5044u: goto label_3c5044;
        case 0x3c5048u: goto label_3c5048;
        case 0x3c504cu: goto label_3c504c;
        case 0x3c5050u: goto label_3c5050;
        case 0x3c5054u: goto label_3c5054;
        case 0x3c5058u: goto label_3c5058;
        case 0x3c505cu: goto label_3c505c;
        case 0x3c5060u: goto label_3c5060;
        case 0x3c5064u: goto label_3c5064;
        case 0x3c5068u: goto label_3c5068;
        case 0x3c506cu: goto label_3c506c;
        case 0x3c5070u: goto label_3c5070;
        case 0x3c5074u: goto label_3c5074;
        case 0x3c5078u: goto label_3c5078;
        case 0x3c507cu: goto label_3c507c;
        case 0x3c5080u: goto label_3c5080;
        case 0x3c5084u: goto label_3c5084;
        case 0x3c5088u: goto label_3c5088;
        case 0x3c508cu: goto label_3c508c;
        case 0x3c5090u: goto label_3c5090;
        case 0x3c5094u: goto label_3c5094;
        case 0x3c5098u: goto label_3c5098;
        case 0x3c509cu: goto label_3c509c;
        case 0x3c50a0u: goto label_3c50a0;
        case 0x3c50a4u: goto label_3c50a4;
        case 0x3c50a8u: goto label_3c50a8;
        case 0x3c50acu: goto label_3c50ac;
        case 0x3c50b0u: goto label_3c50b0;
        case 0x3c50b4u: goto label_3c50b4;
        case 0x3c50b8u: goto label_3c50b8;
        case 0x3c50bcu: goto label_3c50bc;
        case 0x3c50c0u: goto label_3c50c0;
        case 0x3c50c4u: goto label_3c50c4;
        case 0x3c50c8u: goto label_3c50c8;
        case 0x3c50ccu: goto label_3c50cc;
        case 0x3c50d0u: goto label_3c50d0;
        case 0x3c50d4u: goto label_3c50d4;
        case 0x3c50d8u: goto label_3c50d8;
        case 0x3c50dcu: goto label_3c50dc;
        case 0x3c50e0u: goto label_3c50e0;
        case 0x3c50e4u: goto label_3c50e4;
        case 0x3c50e8u: goto label_3c50e8;
        case 0x3c50ecu: goto label_3c50ec;
        case 0x3c50f0u: goto label_3c50f0;
        case 0x3c50f4u: goto label_3c50f4;
        case 0x3c50f8u: goto label_3c50f8;
        case 0x3c50fcu: goto label_3c50fc;
        case 0x3c5100u: goto label_3c5100;
        case 0x3c5104u: goto label_3c5104;
        case 0x3c5108u: goto label_3c5108;
        case 0x3c510cu: goto label_3c510c;
        case 0x3c5110u: goto label_3c5110;
        case 0x3c5114u: goto label_3c5114;
        case 0x3c5118u: goto label_3c5118;
        case 0x3c511cu: goto label_3c511c;
        case 0x3c5120u: goto label_3c5120;
        case 0x3c5124u: goto label_3c5124;
        case 0x3c5128u: goto label_3c5128;
        case 0x3c512cu: goto label_3c512c;
        case 0x3c5130u: goto label_3c5130;
        case 0x3c5134u: goto label_3c5134;
        case 0x3c5138u: goto label_3c5138;
        case 0x3c513cu: goto label_3c513c;
        case 0x3c5140u: goto label_3c5140;
        case 0x3c5144u: goto label_3c5144;
        case 0x3c5148u: goto label_3c5148;
        case 0x3c514cu: goto label_3c514c;
        case 0x3c5150u: goto label_3c5150;
        case 0x3c5154u: goto label_3c5154;
        case 0x3c5158u: goto label_3c5158;
        case 0x3c515cu: goto label_3c515c;
        case 0x3c5160u: goto label_3c5160;
        case 0x3c5164u: goto label_3c5164;
        case 0x3c5168u: goto label_3c5168;
        case 0x3c516cu: goto label_3c516c;
        case 0x3c5170u: goto label_3c5170;
        case 0x3c5174u: goto label_3c5174;
        case 0x3c5178u: goto label_3c5178;
        case 0x3c517cu: goto label_3c517c;
        case 0x3c5180u: goto label_3c5180;
        case 0x3c5184u: goto label_3c5184;
        case 0x3c5188u: goto label_3c5188;
        case 0x3c518cu: goto label_3c518c;
        case 0x3c5190u: goto label_3c5190;
        case 0x3c5194u: goto label_3c5194;
        case 0x3c5198u: goto label_3c5198;
        case 0x3c519cu: goto label_3c519c;
        case 0x3c51a0u: goto label_3c51a0;
        case 0x3c51a4u: goto label_3c51a4;
        case 0x3c51a8u: goto label_3c51a8;
        case 0x3c51acu: goto label_3c51ac;
        case 0x3c51b0u: goto label_3c51b0;
        case 0x3c51b4u: goto label_3c51b4;
        case 0x3c51b8u: goto label_3c51b8;
        case 0x3c51bcu: goto label_3c51bc;
        case 0x3c51c0u: goto label_3c51c0;
        case 0x3c51c4u: goto label_3c51c4;
        case 0x3c51c8u: goto label_3c51c8;
        case 0x3c51ccu: goto label_3c51cc;
        case 0x3c51d0u: goto label_3c51d0;
        case 0x3c51d4u: goto label_3c51d4;
        case 0x3c51d8u: goto label_3c51d8;
        case 0x3c51dcu: goto label_3c51dc;
        case 0x3c51e0u: goto label_3c51e0;
        case 0x3c51e4u: goto label_3c51e4;
        case 0x3c51e8u: goto label_3c51e8;
        case 0x3c51ecu: goto label_3c51ec;
        case 0x3c51f0u: goto label_3c51f0;
        case 0x3c51f4u: goto label_3c51f4;
        case 0x3c51f8u: goto label_3c51f8;
        case 0x3c51fcu: goto label_3c51fc;
        case 0x3c5200u: goto label_3c5200;
        case 0x3c5204u: goto label_3c5204;
        case 0x3c5208u: goto label_3c5208;
        case 0x3c520cu: goto label_3c520c;
        case 0x3c5210u: goto label_3c5210;
        case 0x3c5214u: goto label_3c5214;
        case 0x3c5218u: goto label_3c5218;
        case 0x3c521cu: goto label_3c521c;
        case 0x3c5220u: goto label_3c5220;
        case 0x3c5224u: goto label_3c5224;
        case 0x3c5228u: goto label_3c5228;
        case 0x3c522cu: goto label_3c522c;
        case 0x3c5230u: goto label_3c5230;
        case 0x3c5234u: goto label_3c5234;
        case 0x3c5238u: goto label_3c5238;
        case 0x3c523cu: goto label_3c523c;
        case 0x3c5240u: goto label_3c5240;
        case 0x3c5244u: goto label_3c5244;
        case 0x3c5248u: goto label_3c5248;
        case 0x3c524cu: goto label_3c524c;
        case 0x3c5250u: goto label_3c5250;
        case 0x3c5254u: goto label_3c5254;
        case 0x3c5258u: goto label_3c5258;
        case 0x3c525cu: goto label_3c525c;
        case 0x3c5260u: goto label_3c5260;
        case 0x3c5264u: goto label_3c5264;
        case 0x3c5268u: goto label_3c5268;
        case 0x3c526cu: goto label_3c526c;
        case 0x3c5270u: goto label_3c5270;
        case 0x3c5274u: goto label_3c5274;
        case 0x3c5278u: goto label_3c5278;
        case 0x3c527cu: goto label_3c527c;
        case 0x3c5280u: goto label_3c5280;
        case 0x3c5284u: goto label_3c5284;
        case 0x3c5288u: goto label_3c5288;
        case 0x3c528cu: goto label_3c528c;
        case 0x3c5290u: goto label_3c5290;
        case 0x3c5294u: goto label_3c5294;
        case 0x3c5298u: goto label_3c5298;
        case 0x3c529cu: goto label_3c529c;
        case 0x3c52a0u: goto label_3c52a0;
        case 0x3c52a4u: goto label_3c52a4;
        case 0x3c52a8u: goto label_3c52a8;
        case 0x3c52acu: goto label_3c52ac;
        case 0x3c52b0u: goto label_3c52b0;
        case 0x3c52b4u: goto label_3c52b4;
        case 0x3c52b8u: goto label_3c52b8;
        case 0x3c52bcu: goto label_3c52bc;
        case 0x3c52c0u: goto label_3c52c0;
        case 0x3c52c4u: goto label_3c52c4;
        case 0x3c52c8u: goto label_3c52c8;
        case 0x3c52ccu: goto label_3c52cc;
        case 0x3c52d0u: goto label_3c52d0;
        case 0x3c52d4u: goto label_3c52d4;
        case 0x3c52d8u: goto label_3c52d8;
        case 0x3c52dcu: goto label_3c52dc;
        case 0x3c52e0u: goto label_3c52e0;
        case 0x3c52e4u: goto label_3c52e4;
        case 0x3c52e8u: goto label_3c52e8;
        case 0x3c52ecu: goto label_3c52ec;
        default: break;
    }

    ctx->pc = 0x3c4fd0u;

label_3c4fd0:
    // 0x3c4fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c4fd4:
    // 0x3c4fd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3c4fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4fd8:
    // 0x3c4fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c4fdc:
    // 0x3c4fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c4fe0:
    // 0x3c4fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c4fe4:
    // 0x3c4fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c4fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4fe8:
    // 0x3c4fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c4fec:
    // 0x3c4fec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c4fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ff0:
    // 0x3c4ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c4ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ff4:
    // 0x3c4ff4: 0x240532c8  addiu       $a1, $zero, 0x32C8
    ctx->pc = 0x3c4ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13000));
label_3c4ff8:
    // 0x3c4ff8: 0xc10ca68  jal         func_4329A0
label_3c4ffc:
    if (ctx->pc == 0x3C4FFCu) {
        ctx->pc = 0x3C4FFCu;
            // 0x3c4ffc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C5000u;
        goto label_3c5000;
    }
    ctx->pc = 0x3C4FF8u;
    SET_GPR_U32(ctx, 31, 0x3C5000u);
    ctx->pc = 0x3C4FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4FF8u;
            // 0x3c4ffc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5000u; }
        if (ctx->pc != 0x3C5000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5000u; }
        if (ctx->pc != 0x3C5000u) { return; }
    }
    ctx->pc = 0x3C5000u;
label_3c5000:
    // 0x3c5000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c5000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c5004:
    // 0x3c5004: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c5004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c5008:
    // 0x3c5008: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c500c:
    // 0x3c500c: 0x24638cd0  addiu       $v1, $v1, -0x7330
    ctx->pc = 0x3c500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937808));
label_3c5010:
    // 0x3c5010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c5010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c5014:
    // 0x3c5014: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c5014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3c5018:
    // 0x3c5018: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c5018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c501c:
    // 0x3c501c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x3c501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_3c5020:
    // 0x3c5020: 0xa2120055  sb          $s2, 0x55($s0)
    ctx->pc = 0x3c5020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 18));
label_3c5024:
    // 0x3c5024: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x3c5024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_3c5028:
    // 0x3c5028: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x3c5028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_3c502c:
    // 0x3c502c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3c502cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3c5030:
    // 0x3c5030: 0xae110064  sw          $s1, 0x64($s0)
    ctx->pc = 0x3c5030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 17));
label_3c5034:
    // 0x3c5034: 0x8c517378  lw          $s1, 0x7378($v0)
    ctx->pc = 0x3c5034u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3c5038:
    // 0x3c5038: 0xc04e710  jal         func_139C40
label_3c503c:
    if (ctx->pc == 0x3C503Cu) {
        ctx->pc = 0x3C503Cu;
            // 0x3c503c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C5040u;
        goto label_3c5040;
    }
    ctx->pc = 0x3C5038u;
    SET_GPR_U32(ctx, 31, 0x3C5040u);
    ctx->pc = 0x3C503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5038u;
            // 0x3c503c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (runtime->hasFunction(0x139C40u)) {
        auto targetFn = runtime->lookupFunction(0x139C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5040u; }
        if (ctx->pc != 0x3C5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C40_0x139c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5040u; }
        if (ctx->pc != 0x3C5040u) { return; }
    }
    ctx->pc = 0x3C5040u;
label_3c5040:
    // 0x3c5040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c5044:
    // 0x3c5044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c5044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c5048:
    // 0x3c5048: 0xc0fe54c  jal         func_3F9530
label_3c504c:
    if (ctx->pc == 0x3C504Cu) {
        ctx->pc = 0x3C504Cu;
            // 0x3c504c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3C5050u;
        goto label_3c5050;
    }
    ctx->pc = 0x3C5048u;
    SET_GPR_U32(ctx, 31, 0x3C5050u);
    ctx->pc = 0x3C504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5048u;
            // 0x3c504c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5050u; }
        if (ctx->pc != 0x3C5050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5050u; }
        if (ctx->pc != 0x3C5050u) { return; }
    }
    ctx->pc = 0x3C5050u;
label_3c5050:
    // 0x3c5050: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x3c5050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_3c5054:
    // 0x3c5054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c5054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c5058:
    // 0x3c5058: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3c5058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3c505c:
    // 0x3c505c: 0xc04e718  jal         func_139C60
label_3c5060:
    if (ctx->pc == 0x3C5060u) {
        ctx->pc = 0x3C5060u;
            // 0x3c5060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C5064u;
        goto label_3c5064;
    }
    ctx->pc = 0x3C505Cu;
    SET_GPR_U32(ctx, 31, 0x3C5064u);
    ctx->pc = 0x3C5060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C505Cu;
            // 0x3c5060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (runtime->hasFunction(0x139C60u)) {
        auto targetFn = runtime->lookupFunction(0x139C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5064u; }
        if (ctx->pc != 0x3C5064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C60_0x139c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5064u; }
        if (ctx->pc != 0x3C5064u) { return; }
    }
    ctx->pc = 0x3C5064u;
label_3c5064:
    // 0x3c5064: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c5064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c5068:
    // 0x3c5068: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3c506c:
    // 0x3c506c: 0x8c4689f0  lw          $a2, -0x7610($v0)
    ctx->pc = 0x3c506cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c5070:
    // 0x3c5070: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3c5070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5074:
    // 0x3c5074: 0x240a6008  addiu       $t2, $zero, 0x6008
    ctx->pc = 0x3c5074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24584));
label_3c5078:
    // 0x3c5078: 0x2405017c  addiu       $a1, $zero, 0x17C
    ctx->pc = 0x3c5078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_3c507c:
    // 0x3c507c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3c507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3c5080:
    // 0x3c5080: 0x240300be  addiu       $v1, $zero, 0xBE
    ctx->pc = 0x3c5080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_3c5084:
    // 0x3c5084: 0x8ccb0030  lw          $t3, 0x30($a2)
    ctx->pc = 0x3c5084u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_3c5088:
    // 0x3c5088: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x3c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_3c508c:
    // 0x3c508c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c508cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5090:
    // 0x3c5090: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3c5090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c5094:
    // 0x3c5094: 0xae0b0060  sw          $t3, 0x60($s0)
    ctx->pc = 0x3c5094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 11));
label_3c5098:
    // 0x3c5098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c509c:
    // 0x3c509c: 0xa48a0008  sh          $t2, 0x8($a0)
    ctx->pc = 0x3c509cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 10));
label_3c50a0:
    // 0x3c50a0: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x3c50a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
label_3c50a4:
    // 0x3c50a4: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x3c50a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_3c50a8:
    // 0x3c50a8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x3c50a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
label_3c50ac:
    // 0x3c50ac: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x3c50acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3c50b0:
    // 0x3c50b0: 0x34630201  ori         $v1, $v1, 0x201
    ctx->pc = 0x3c50b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)513);
label_3c50b4:
    // 0x3c50b4: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x3c50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_3c50b8:
    // 0x3c50b8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3c50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3c50bc:
    // 0x3c50bc: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x3c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_3c50c0:
    // 0x3c50c0: 0xc0564a4  jal         func_159290
label_3c50c4:
    if (ctx->pc == 0x3C50C4u) {
        ctx->pc = 0x3C50C4u;
            // 0x3c50c4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3C50C8u;
        goto label_3c50c8;
    }
    ctx->pc = 0x3C50C0u;
    SET_GPR_U32(ctx, 31, 0x3C50C8u);
    ctx->pc = 0x3C50C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C50C0u;
            // 0x3c50c4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C50C8u; }
        if (ctx->pc != 0x3C50C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159290_0x159290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C50C8u; }
        if (ctx->pc != 0x3C50C8u) { return; }
    }
    ctx->pc = 0x3C50C8u;
label_3c50c8:
    // 0x3c50c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c50c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c50cc:
    // 0x3c50cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c50ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c50d0:
    // 0x3c50d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c50d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c50d4:
    // 0x3c50d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c50d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c50d8:
    // 0x3c50d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c50d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c50dc:
    // 0x3c50dc: 0x3e00008  jr          $ra
label_3c50e0:
    if (ctx->pc == 0x3C50E0u) {
        ctx->pc = 0x3C50E0u;
            // 0x3c50e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C50E4u;
        goto label_3c50e4;
    }
    ctx->pc = 0x3C50DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C50E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C50DCu;
            // 0x3c50e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C50E4u;
label_3c50e4:
    // 0x3c50e4: 0x0  nop
    ctx->pc = 0x3c50e4u;
    // NOP
label_3c50e8:
    // 0x3c50e8: 0x0  nop
    ctx->pc = 0x3c50e8u;
    // NOP
label_3c50ec:
    // 0x3c50ec: 0x0  nop
    ctx->pc = 0x3c50ecu;
    // NOP
label_3c50f0:
    // 0x3c50f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c50f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c50f4:
    // 0x3c50f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c50f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c50f8:
    // 0x3c50f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c50fc:
    // 0x3c50fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c5100:
    // 0x3c5100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5104:
    // 0x3c5104: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_3c5108:
    if (ctx->pc == 0x3C5108u) {
        ctx->pc = 0x3C5108u;
            // 0x3c5108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C510Cu;
        goto label_3c510c;
    }
    ctx->pc = 0x3C5104u;
    {
        const bool branch_taken_0x3c5104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5104u;
            // 0x3c5108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5104) {
            ctx->pc = 0x3C518Cu;
            goto label_3c518c;
        }
    }
    ctx->pc = 0x3C510Cu;
label_3c510c:
    // 0x3c510c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c5110:
    // 0x3c5110: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c5110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c5114:
    // 0x3c5114: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x3c5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_3c5118:
    // 0x3c5118: 0x24638d30  addiu       $v1, $v1, -0x72D0
    ctx->pc = 0x3c5118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937904));
label_3c511c:
    // 0x3c511c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c511cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c5120:
    // 0x3c5120: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x3c5120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3c5124:
    // 0x3c5124: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c5128:
    if (ctx->pc == 0x3C5128u) {
        ctx->pc = 0x3C5128u;
            // 0x3c5128: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3C512Cu;
        goto label_3c512c;
    }
    ctx->pc = 0x3C5124u;
    {
        const bool branch_taken_0x3c5124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5124u;
            // 0x3c5128: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5124) {
            ctx->pc = 0x3C5154u;
            goto label_3c5154;
        }
    }
    ctx->pc = 0x3C512Cu;
label_3c512c:
    // 0x3c512c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c5130:
    // 0x3c5130: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x3c5130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
label_3c5134:
    // 0x3c5134: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c5134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c5138:
    // 0x3c5138: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3c5138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c513c:
    // 0x3c513c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3c5140:
    if (ctx->pc == 0x3C5140u) {
        ctx->pc = 0x3C5144u;
        goto label_3c5144;
    }
    ctx->pc = 0x3C513Cu;
    {
        const bool branch_taken_0x3c513c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c513c) {
            ctx->pc = 0x3C5154u;
            goto label_3c5154;
        }
    }
    ctx->pc = 0x3C5144u;
label_3c5144:
    // 0x3c5144: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c5148:
    // 0x3c5148: 0xc0fe48c  jal         func_3F9230
label_3c514c:
    if (ctx->pc == 0x3C514Cu) {
        ctx->pc = 0x3C514Cu;
            // 0x3c514c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3C5150u;
        goto label_3c5150;
    }
    ctx->pc = 0x3C5148u;
    SET_GPR_U32(ctx, 31, 0x3C5150u);
    ctx->pc = 0x3C514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5148u;
            // 0x3c514c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5150u; }
        if (ctx->pc != 0x3C5150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5150u; }
        if (ctx->pc != 0x3C5150u) { return; }
    }
    ctx->pc = 0x3C5150u;
label_3c5150:
    // 0x3c5150: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x3c5150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_3c5154:
    // 0x3c5154: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3c5158:
    if (ctx->pc == 0x3C5158u) {
        ctx->pc = 0x3C5158u;
            // 0x3c5158: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3C515Cu;
        goto label_3c515c;
    }
    ctx->pc = 0x3C5154u;
    {
        const bool branch_taken_0x3c5154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5154) {
            ctx->pc = 0x3C5158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5154u;
            // 0x3c5158: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5178u;
            goto label_3c5178;
        }
    }
    ctx->pc = 0x3C515Cu;
label_3c515c:
    // 0x3c515c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c5160:
    // 0x3c5160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c5164:
    // 0x3c5164: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c5168:
    // 0x3c5168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c516c:
    // 0x3c516c: 0xc057a68  jal         func_15E9A0
label_3c5170:
    if (ctx->pc == 0x3C5170u) {
        ctx->pc = 0x3C5170u;
            // 0x3c5170: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C5174u;
        goto label_3c5174;
    }
    ctx->pc = 0x3C516Cu;
    SET_GPR_U32(ctx, 31, 0x3C5174u);
    ctx->pc = 0x3C5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C516Cu;
            // 0x3c5170: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5174u; }
        if (ctx->pc != 0x3C5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5174u; }
        if (ctx->pc != 0x3C5174u) { return; }
    }
    ctx->pc = 0x3C5174u;
label_3c5174:
    // 0x3c5174: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c5174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c5178:
    // 0x3c5178: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c5178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c517c:
    // 0x3c517c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c5180:
    if (ctx->pc == 0x3C5180u) {
        ctx->pc = 0x3C5180u;
            // 0x3c5180: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5184u;
        goto label_3c5184;
    }
    ctx->pc = 0x3C517Cu;
    {
        const bool branch_taken_0x3c517c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c517c) {
            ctx->pc = 0x3C5180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C517Cu;
            // 0x3c5180: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5190u;
            goto label_3c5190;
        }
    }
    ctx->pc = 0x3C5184u;
label_3c5184:
    // 0x3c5184: 0xc0400a8  jal         func_1002A0
label_3c5188:
    if (ctx->pc == 0x3C5188u) {
        ctx->pc = 0x3C5188u;
            // 0x3c5188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C518Cu;
        goto label_3c518c;
    }
    ctx->pc = 0x3C5184u;
    SET_GPR_U32(ctx, 31, 0x3C518Cu);
    ctx->pc = 0x3C5188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5184u;
            // 0x3c5188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C518Cu; }
        if (ctx->pc != 0x3C518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C518Cu; }
        if (ctx->pc != 0x3C518Cu) { return; }
    }
    ctx->pc = 0x3C518Cu;
label_3c518c:
    // 0x3c518c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c5190:
    // 0x3c5190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c5190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5194:
    // 0x3c5194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5198:
    // 0x3c5198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c519c:
    // 0x3c519c: 0x3e00008  jr          $ra
label_3c51a0:
    if (ctx->pc == 0x3C51A0u) {
        ctx->pc = 0x3C51A0u;
            // 0x3c51a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C51A4u;
        goto label_3c51a4;
    }
    ctx->pc = 0x3C519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C519Cu;
            // 0x3c51a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C51A4u;
label_3c51a4:
    // 0x3c51a4: 0x0  nop
    ctx->pc = 0x3c51a4u;
    // NOP
label_3c51a8:
    // 0x3c51a8: 0x0  nop
    ctx->pc = 0x3c51a8u;
    // NOP
label_3c51ac:
    // 0x3c51ac: 0x0  nop
    ctx->pc = 0x3c51acu;
    // NOP
label_3c51b0:
    // 0x3c51b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c51b4:
    // 0x3c51b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3c51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3c51b8:
    // 0x3c51b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c51bc:
    // 0x3c51bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c51c0:
    // 0x3c51c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c51c4:
    // 0x3c51c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c51c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c51c8:
    // 0x3c51c8: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x3c51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3c51cc:
    // 0x3c51cc: 0x8c840790  lw          $a0, 0x790($a0)
    ctx->pc = 0x3c51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1936)));
label_3c51d0:
    // 0x3c51d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c51d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3c51d4:
    // 0x3c51d4: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
label_3c51d8:
    if (ctx->pc == 0x3C51D8u) {
        ctx->pc = 0x3C51D8u;
            // 0x3c51d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3C51DCu;
        goto label_3c51dc;
    }
    ctx->pc = 0x3C51D4u;
    {
        const bool branch_taken_0x3c51d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c51d4) {
            ctx->pc = 0x3C51D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C51D4u;
            // 0x3c51d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C5294u;
            goto label_3c5294;
        }
    }
    ctx->pc = 0x3C51DCu;
label_3c51dc:
    // 0x3c51dc: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3c51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3c51e0:
    // 0x3c51e0: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x3c51e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3c51e4:
    // 0x3c51e4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_3c51e8:
    if (ctx->pc == 0x3C51E8u) {
        ctx->pc = 0x3C51ECu;
        goto label_3c51ec;
    }
    ctx->pc = 0x3C51E4u;
    {
        const bool branch_taken_0x3c51e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c51e4) {
            ctx->pc = 0x3C5290u;
            goto label_3c5290;
        }
    }
    ctx->pc = 0x3C51ECu;
label_3c51ec:
    // 0x3c51ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c51f0:
    // 0x3c51f0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3c51f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3c51f4:
    // 0x3c51f4: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x3c51f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3c51f8:
    // 0x3c51f8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3c51f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3c51fc:
    // 0x3c51fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3c51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3c5200:
    // 0x3c5200: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x3c5200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c5204:
    // 0x3c5204: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x3c5204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_3c5208:
    // 0x3c5208: 0x24c6ec60  addiu       $a2, $a2, -0x13A0
    ctx->pc = 0x3c5208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962272));
label_3c520c:
    // 0x3c520c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c5210:
    // 0x3c5210: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x3c5210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_3c5214:
    // 0x3c5214: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x3c5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c5218:
    // 0x3c5218: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3c5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c521c:
    // 0x3c521c: 0x90a80029  lbu         $t0, 0x29($a1)
    ctx->pc = 0x3c521cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_3c5220:
    // 0x3c5220: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c5220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c5224:
    // 0x3c5224: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3c5224u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3c5228:
    // 0x3c5228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c522c:
    // 0x3c522c: 0x1484821  addu        $t1, $t2, $t0
    ctx->pc = 0x3c522cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_3c5230:
    // 0x3c5230: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3c5230u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3c5234:
    // 0x3c5234: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3c5234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3c5238:
    // 0x3c5238: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3c5238u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_3c523c:
    // 0x3c523c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3c523cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3c5240:
    // 0x3c5240: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x3c5240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
label_3c5244:
    // 0x3c5244: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x3c5244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_3c5248:
    // 0x3c5248: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c524c:
    // 0x3c524c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3c524cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3c5250:
    // 0x3c5250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c5250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c5254:
    // 0x3c5254: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x3c5254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3c5258:
    // 0x3c5258: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3c525c:
    // 0x3c525c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3c525cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3c5260:
    // 0x3c5260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3c5260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3c5264:
    // 0x3c5264: 0xc0575cc  jal         func_15D730
label_3c5268:
    if (ctx->pc == 0x3C5268u) {
        ctx->pc = 0x3C5268u;
            // 0x3c5268: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C526Cu;
        goto label_3c526c;
    }
    ctx->pc = 0x3C5264u;
    SET_GPR_U32(ctx, 31, 0x3C526Cu);
    ctx->pc = 0x3C5268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5264u;
            // 0x3c5268: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C526Cu; }
        if (ctx->pc != 0x3C526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C526Cu; }
        if (ctx->pc != 0x3C526Cu) { return; }
    }
    ctx->pc = 0x3C526Cu;
label_3c526c:
    // 0x3c526c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c5270:
    // 0x3c5270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5274:
    // 0x3c5274: 0xa202007a  sb          $v0, 0x7A($s0)
    ctx->pc = 0x3c5274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 2));
label_3c5278:
    // 0x3c5278: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3c5278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c527c:
    // 0x3c527c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c527cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c5280:
    // 0x3c5280: 0x320f809  jalr        $t9
label_3c5284:
    if (ctx->pc == 0x3C5284u) {
        ctx->pc = 0x3C5284u;
            // 0x3c5284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5288u;
        goto label_3c5288;
    }
    ctx->pc = 0x3C5280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C5288u);
        ctx->pc = 0x3C5284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5280u;
            // 0x3c5284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C5288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C5288u; }
            if (ctx->pc != 0x3C5288u) { return; }
        }
        }
    }
    ctx->pc = 0x3C5288u;
label_3c5288:
    // 0x3c5288: 0xc0d3380  jal         func_34CE00
label_3c528c:
    if (ctx->pc == 0x3C528Cu) {
        ctx->pc = 0x3C528Cu;
            // 0x3c528c: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x3C5290u;
        goto label_3c5290;
    }
    ctx->pc = 0x3C5288u;
    SET_GPR_U32(ctx, 31, 0x3C5290u);
    ctx->pc = 0x3C528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5288u;
            // 0x3c528c: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE00u;
    if (runtime->hasFunction(0x34CE00u)) {
        auto targetFn = runtime->lookupFunction(0x34CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5290u; }
        if (ctx->pc != 0x3C5290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE00_0x34ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5290u; }
        if (ctx->pc != 0x3C5290u) { return; }
    }
    ctx->pc = 0x3C5290u;
label_3c5290:
    // 0x3c5290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c5290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5294:
    // 0x3c5294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5298:
    // 0x3c5298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c529c:
    // 0x3c529c: 0x3e00008  jr          $ra
label_3c52a0:
    if (ctx->pc == 0x3C52A0u) {
        ctx->pc = 0x3C52A0u;
            // 0x3c52a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C52A4u;
        goto label_3c52a4;
    }
    ctx->pc = 0x3C529Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C52A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C529Cu;
            // 0x3c52a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C52A4u;
label_3c52a4:
    // 0x3c52a4: 0x0  nop
    ctx->pc = 0x3c52a4u;
    // NOP
label_3c52a8:
    // 0x3c52a8: 0x0  nop
    ctx->pc = 0x3c52a8u;
    // NOP
label_3c52ac:
    // 0x3c52ac: 0x0  nop
    ctx->pc = 0x3c52acu;
    // NOP
label_3c52b0:
    // 0x3c52b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c52b4:
    // 0x3c52b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3c52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3c52b8:
    // 0x3c52b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c52bc:
    // 0x3c52bc: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x3c52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3c52c0:
    // 0x3c52c0: 0x8ca50790  lw          $a1, 0x790($a1)
    ctx->pc = 0x3c52c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_3c52c4:
    // 0x3c52c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3c52c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3c52c8:
    // 0x3c52c8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3c52cc:
    if (ctx->pc == 0x3C52CCu) {
        ctx->pc = 0x3C52CCu;
            // 0x3c52cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3C52D0u;
        goto label_3c52d0;
    }
    ctx->pc = 0x3C52C8u;
    {
        const bool branch_taken_0x3c52c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c52c8) {
            ctx->pc = 0x3C52CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C52C8u;
            // 0x3c52cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C52DCu;
            goto label_3c52dc;
        }
    }
    ctx->pc = 0x3C52D0u;
label_3c52d0:
    // 0x3c52d0: 0xc0d33a4  jal         func_34CE90
label_3c52d4:
    if (ctx->pc == 0x3C52D4u) {
        ctx->pc = 0x3C52D4u;
            // 0x3c52d4: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->pc = 0x3C52D8u;
        goto label_3c52d8;
    }
    ctx->pc = 0x3C52D0u;
    SET_GPR_U32(ctx, 31, 0x3C52D8u);
    ctx->pc = 0x3C52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C52D0u;
            // 0x3c52d4: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE90u;
    if (runtime->hasFunction(0x34CE90u)) {
        auto targetFn = runtime->lookupFunction(0x34CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C52D8u; }
        if (ctx->pc != 0x3C52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE90_0x34ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C52D8u; }
        if (ctx->pc != 0x3C52D8u) { return; }
    }
    ctx->pc = 0x3C52D8u;
label_3c52d8:
    // 0x3c52d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c52d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c52dc:
    // 0x3c52dc: 0x3e00008  jr          $ra
label_3c52e0:
    if (ctx->pc == 0x3C52E0u) {
        ctx->pc = 0x3C52E0u;
            // 0x3c52e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3C52E4u;
        goto label_3c52e4;
    }
    ctx->pc = 0x3C52DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C52E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C52DCu;
            // 0x3c52e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C52E4u;
label_3c52e4:
    // 0x3c52e4: 0x0  nop
    ctx->pc = 0x3c52e4u;
    // NOP
label_3c52e8:
    // 0x3c52e8: 0x0  nop
    ctx->pc = 0x3c52e8u;
    // NOP
label_3c52ec:
    // 0x3c52ec: 0x0  nop
    ctx->pc = 0x3c52ecu;
    // NOP
}
