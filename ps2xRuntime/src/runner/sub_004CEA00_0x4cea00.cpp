#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CEA00
// Address: 0x4cea00 - 0x4ced10
void sub_004CEA00_0x4cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CEA00_0x4cea00");
#endif

    switch (ctx->pc) {
        case 0x4cea00u: goto label_4cea00;
        case 0x4cea04u: goto label_4cea04;
        case 0x4cea08u: goto label_4cea08;
        case 0x4cea0cu: goto label_4cea0c;
        case 0x4cea10u: goto label_4cea10;
        case 0x4cea14u: goto label_4cea14;
        case 0x4cea18u: goto label_4cea18;
        case 0x4cea1cu: goto label_4cea1c;
        case 0x4cea20u: goto label_4cea20;
        case 0x4cea24u: goto label_4cea24;
        case 0x4cea28u: goto label_4cea28;
        case 0x4cea2cu: goto label_4cea2c;
        case 0x4cea30u: goto label_4cea30;
        case 0x4cea34u: goto label_4cea34;
        case 0x4cea38u: goto label_4cea38;
        case 0x4cea3cu: goto label_4cea3c;
        case 0x4cea40u: goto label_4cea40;
        case 0x4cea44u: goto label_4cea44;
        case 0x4cea48u: goto label_4cea48;
        case 0x4cea4cu: goto label_4cea4c;
        case 0x4cea50u: goto label_4cea50;
        case 0x4cea54u: goto label_4cea54;
        case 0x4cea58u: goto label_4cea58;
        case 0x4cea5cu: goto label_4cea5c;
        case 0x4cea60u: goto label_4cea60;
        case 0x4cea64u: goto label_4cea64;
        case 0x4cea68u: goto label_4cea68;
        case 0x4cea6cu: goto label_4cea6c;
        case 0x4cea70u: goto label_4cea70;
        case 0x4cea74u: goto label_4cea74;
        case 0x4cea78u: goto label_4cea78;
        case 0x4cea7cu: goto label_4cea7c;
        case 0x4cea80u: goto label_4cea80;
        case 0x4cea84u: goto label_4cea84;
        case 0x4cea88u: goto label_4cea88;
        case 0x4cea8cu: goto label_4cea8c;
        case 0x4cea90u: goto label_4cea90;
        case 0x4cea94u: goto label_4cea94;
        case 0x4cea98u: goto label_4cea98;
        case 0x4cea9cu: goto label_4cea9c;
        case 0x4ceaa0u: goto label_4ceaa0;
        case 0x4ceaa4u: goto label_4ceaa4;
        case 0x4ceaa8u: goto label_4ceaa8;
        case 0x4ceaacu: goto label_4ceaac;
        case 0x4ceab0u: goto label_4ceab0;
        case 0x4ceab4u: goto label_4ceab4;
        case 0x4ceab8u: goto label_4ceab8;
        case 0x4ceabcu: goto label_4ceabc;
        case 0x4ceac0u: goto label_4ceac0;
        case 0x4ceac4u: goto label_4ceac4;
        case 0x4ceac8u: goto label_4ceac8;
        case 0x4ceaccu: goto label_4ceacc;
        case 0x4cead0u: goto label_4cead0;
        case 0x4cead4u: goto label_4cead4;
        case 0x4cead8u: goto label_4cead8;
        case 0x4ceadcu: goto label_4ceadc;
        case 0x4ceae0u: goto label_4ceae0;
        case 0x4ceae4u: goto label_4ceae4;
        case 0x4ceae8u: goto label_4ceae8;
        case 0x4ceaecu: goto label_4ceaec;
        case 0x4ceaf0u: goto label_4ceaf0;
        case 0x4ceaf4u: goto label_4ceaf4;
        case 0x4ceaf8u: goto label_4ceaf8;
        case 0x4ceafcu: goto label_4ceafc;
        case 0x4ceb00u: goto label_4ceb00;
        case 0x4ceb04u: goto label_4ceb04;
        case 0x4ceb08u: goto label_4ceb08;
        case 0x4ceb0cu: goto label_4ceb0c;
        case 0x4ceb10u: goto label_4ceb10;
        case 0x4ceb14u: goto label_4ceb14;
        case 0x4ceb18u: goto label_4ceb18;
        case 0x4ceb1cu: goto label_4ceb1c;
        case 0x4ceb20u: goto label_4ceb20;
        case 0x4ceb24u: goto label_4ceb24;
        case 0x4ceb28u: goto label_4ceb28;
        case 0x4ceb2cu: goto label_4ceb2c;
        case 0x4ceb30u: goto label_4ceb30;
        case 0x4ceb34u: goto label_4ceb34;
        case 0x4ceb38u: goto label_4ceb38;
        case 0x4ceb3cu: goto label_4ceb3c;
        case 0x4ceb40u: goto label_4ceb40;
        case 0x4ceb44u: goto label_4ceb44;
        case 0x4ceb48u: goto label_4ceb48;
        case 0x4ceb4cu: goto label_4ceb4c;
        case 0x4ceb50u: goto label_4ceb50;
        case 0x4ceb54u: goto label_4ceb54;
        case 0x4ceb58u: goto label_4ceb58;
        case 0x4ceb5cu: goto label_4ceb5c;
        case 0x4ceb60u: goto label_4ceb60;
        case 0x4ceb64u: goto label_4ceb64;
        case 0x4ceb68u: goto label_4ceb68;
        case 0x4ceb6cu: goto label_4ceb6c;
        case 0x4ceb70u: goto label_4ceb70;
        case 0x4ceb74u: goto label_4ceb74;
        case 0x4ceb78u: goto label_4ceb78;
        case 0x4ceb7cu: goto label_4ceb7c;
        case 0x4ceb80u: goto label_4ceb80;
        case 0x4ceb84u: goto label_4ceb84;
        case 0x4ceb88u: goto label_4ceb88;
        case 0x4ceb8cu: goto label_4ceb8c;
        case 0x4ceb90u: goto label_4ceb90;
        case 0x4ceb94u: goto label_4ceb94;
        case 0x4ceb98u: goto label_4ceb98;
        case 0x4ceb9cu: goto label_4ceb9c;
        case 0x4ceba0u: goto label_4ceba0;
        case 0x4ceba4u: goto label_4ceba4;
        case 0x4ceba8u: goto label_4ceba8;
        case 0x4cebacu: goto label_4cebac;
        case 0x4cebb0u: goto label_4cebb0;
        case 0x4cebb4u: goto label_4cebb4;
        case 0x4cebb8u: goto label_4cebb8;
        case 0x4cebbcu: goto label_4cebbc;
        case 0x4cebc0u: goto label_4cebc0;
        case 0x4cebc4u: goto label_4cebc4;
        case 0x4cebc8u: goto label_4cebc8;
        case 0x4cebccu: goto label_4cebcc;
        case 0x4cebd0u: goto label_4cebd0;
        case 0x4cebd4u: goto label_4cebd4;
        case 0x4cebd8u: goto label_4cebd8;
        case 0x4cebdcu: goto label_4cebdc;
        case 0x4cebe0u: goto label_4cebe0;
        case 0x4cebe4u: goto label_4cebe4;
        case 0x4cebe8u: goto label_4cebe8;
        case 0x4cebecu: goto label_4cebec;
        case 0x4cebf0u: goto label_4cebf0;
        case 0x4cebf4u: goto label_4cebf4;
        case 0x4cebf8u: goto label_4cebf8;
        case 0x4cebfcu: goto label_4cebfc;
        case 0x4cec00u: goto label_4cec00;
        case 0x4cec04u: goto label_4cec04;
        case 0x4cec08u: goto label_4cec08;
        case 0x4cec0cu: goto label_4cec0c;
        case 0x4cec10u: goto label_4cec10;
        case 0x4cec14u: goto label_4cec14;
        case 0x4cec18u: goto label_4cec18;
        case 0x4cec1cu: goto label_4cec1c;
        case 0x4cec20u: goto label_4cec20;
        case 0x4cec24u: goto label_4cec24;
        case 0x4cec28u: goto label_4cec28;
        case 0x4cec2cu: goto label_4cec2c;
        case 0x4cec30u: goto label_4cec30;
        case 0x4cec34u: goto label_4cec34;
        case 0x4cec38u: goto label_4cec38;
        case 0x4cec3cu: goto label_4cec3c;
        case 0x4cec40u: goto label_4cec40;
        case 0x4cec44u: goto label_4cec44;
        case 0x4cec48u: goto label_4cec48;
        case 0x4cec4cu: goto label_4cec4c;
        case 0x4cec50u: goto label_4cec50;
        case 0x4cec54u: goto label_4cec54;
        case 0x4cec58u: goto label_4cec58;
        case 0x4cec5cu: goto label_4cec5c;
        case 0x4cec60u: goto label_4cec60;
        case 0x4cec64u: goto label_4cec64;
        case 0x4cec68u: goto label_4cec68;
        case 0x4cec6cu: goto label_4cec6c;
        case 0x4cec70u: goto label_4cec70;
        case 0x4cec74u: goto label_4cec74;
        case 0x4cec78u: goto label_4cec78;
        case 0x4cec7cu: goto label_4cec7c;
        case 0x4cec80u: goto label_4cec80;
        case 0x4cec84u: goto label_4cec84;
        case 0x4cec88u: goto label_4cec88;
        case 0x4cec8cu: goto label_4cec8c;
        case 0x4cec90u: goto label_4cec90;
        case 0x4cec94u: goto label_4cec94;
        case 0x4cec98u: goto label_4cec98;
        case 0x4cec9cu: goto label_4cec9c;
        case 0x4ceca0u: goto label_4ceca0;
        case 0x4ceca4u: goto label_4ceca4;
        case 0x4ceca8u: goto label_4ceca8;
        case 0x4cecacu: goto label_4cecac;
        case 0x4cecb0u: goto label_4cecb0;
        case 0x4cecb4u: goto label_4cecb4;
        case 0x4cecb8u: goto label_4cecb8;
        case 0x4cecbcu: goto label_4cecbc;
        case 0x4cecc0u: goto label_4cecc0;
        case 0x4cecc4u: goto label_4cecc4;
        case 0x4cecc8u: goto label_4cecc8;
        case 0x4cecccu: goto label_4ceccc;
        case 0x4cecd0u: goto label_4cecd0;
        case 0x4cecd4u: goto label_4cecd4;
        case 0x4cecd8u: goto label_4cecd8;
        case 0x4cecdcu: goto label_4cecdc;
        case 0x4cece0u: goto label_4cece0;
        case 0x4cece4u: goto label_4cece4;
        case 0x4cece8u: goto label_4cece8;
        case 0x4cececu: goto label_4cecec;
        case 0x4cecf0u: goto label_4cecf0;
        case 0x4cecf4u: goto label_4cecf4;
        case 0x4cecf8u: goto label_4cecf8;
        case 0x4cecfcu: goto label_4cecfc;
        case 0x4ced00u: goto label_4ced00;
        case 0x4ced04u: goto label_4ced04;
        case 0x4ced08u: goto label_4ced08;
        case 0x4ced0cu: goto label_4ced0c;
        default: break;
    }

    ctx->pc = 0x4cea00u;

label_4cea00:
    // 0x4cea00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4cea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4cea04:
    // 0x4cea04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cea08:
    // 0x4cea08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4cea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4cea0c:
    // 0x4cea0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4cea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4cea10:
    // 0x4cea10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4cea14:
    // 0x4cea14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cea18:
    // 0x4cea18: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4cea18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cea1c:
    // 0x4cea1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cea20:
    // 0x4cea20: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4cea20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4cea24:
    // 0x4cea24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cea28:
    // 0x4cea28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cea28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cea2c:
    // 0x4cea2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cea30:
    // 0x4cea30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cea34:
    // 0x4cea34: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x4cea34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4cea38:
    // 0x4cea38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4cea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4cea3c:
    // 0x4cea3c: 0x8c5189d8  lw          $s1, -0x7628($v0)
    ctx->pc = 0x4cea3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
label_4cea40:
    // 0x4cea40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4cea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4cea44:
    // 0x4cea44: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x4cea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4cea48:
    // 0x4cea48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cea48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cea4c:
    // 0x4cea4c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4cea4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4cea50:
    // 0x4cea50: 0x320f809  jalr        $t9
label_4cea54:
    if (ctx->pc == 0x4CEA54u) {
        ctx->pc = 0x4CEA54u;
            // 0x4cea54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEA58u;
        goto label_4cea58;
    }
    ctx->pc = 0x4CEA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CEA58u);
        ctx->pc = 0x4CEA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEA50u;
            // 0x4cea54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CEA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CEA58u; }
            if (ctx->pc != 0x4CEA58u) { return; }
        }
        }
    }
    ctx->pc = 0x4CEA58u;
label_4cea58:
    // 0x4cea58: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x4cea58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cea5c:
    // 0x4cea5c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x4cea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_4cea60:
    // 0x4cea60: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4cea60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4cea64:
    // 0x4cea64: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4cea64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4cea68:
    // 0x4cea68: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4cea68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4cea6c:
    // 0x4cea6c: 0x24c67ad0  addiu       $a2, $a2, 0x7AD0
    ctx->pc = 0x4cea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31440));
label_4cea70:
    // 0x4cea70: 0x8c470d58  lw          $a3, 0xD58($v0)
    ctx->pc = 0x4cea70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3416)));
label_4cea74:
    // 0x4cea74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cea78:
    // 0x4cea78: 0x826b005d  lb          $t3, 0x5D($s3)
    ctx->pc = 0x4cea78u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 93)));
label_4cea7c:
    // 0x4cea7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4cea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4cea80:
    // 0x4cea80: 0x9263005c  lbu         $v1, 0x5C($s3)
    ctx->pc = 0x4cea80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
label_4cea84:
    // 0x4cea84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4cea84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cea88:
    // 0x4cea88: 0xe04026  xor         $t0, $a3, $zero
    ctx->pc = 0x4cea88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 0));
label_4cea8c:
    // 0x4cea8c: 0x8e560010  lw          $s6, 0x10($s2)
    ctx->pc = 0x4cea8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4cea90:
    // 0x4cea90: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4cea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cea94:
    // 0x4cea94: 0x2d080001  sltiu       $t0, $t0, 0x1
    ctx->pc = 0x4cea94u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4cea98:
    // 0x4cea98: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4cea98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4cea9c:
    // 0x4cea9c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4cea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4ceaa0:
    // 0x4ceaa0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x4ceaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_4ceaa4:
    // 0x4ceaa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ceaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ceaa8:
    // 0x4ceaa8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ceaa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ceaac:
    // 0x4ceaac: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4ceaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ceab0:
    // 0x4ceab0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4ceab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4ceab4:
    // 0x4ceab4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4ceab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ceab8:
    // 0x4ceab8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ceab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ceabc:
    // 0x4ceabc: 0x261079b0  addiu       $s0, $s0, 0x79B0
    ctx->pc = 0x4ceabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31152));
label_4ceac0:
    // 0x4ceac0: 0x1661021  addu        $v0, $t3, $a2
    ctx->pc = 0x4ceac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_4ceac4:
    // 0x4ceac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ceac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ceac8:
    // 0x4ceac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ceac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ceacc:
    // 0x4ceacc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x4ceaccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4cead0:
    // 0x4cead0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4cead0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4cead4:
    // 0x4cead4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x4cead4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_4cead8:
    // 0x4cead8: 0xc0ee398  jal         func_3B8E60
label_4ceadc:
    if (ctx->pc == 0x4CEADCu) {
        ctx->pc = 0x4CEADCu;
            // 0x4ceadc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEAE0u;
        goto label_4ceae0;
    }
    ctx->pc = 0x4CEAD8u;
    SET_GPR_U32(ctx, 31, 0x4CEAE0u);
    ctx->pc = 0x4CEADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEAD8u;
            // 0x4ceadc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEAE0u; }
        if (ctx->pc != 0x4CEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEAE0u; }
        if (ctx->pc != 0x4CEAE0u) { return; }
    }
    ctx->pc = 0x4CEAE0u;
label_4ceae0:
    // 0x4ceae0: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x4ceae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4ceae4:
    // 0x4ceae4: 0xae560010  sw          $s6, 0x10($s2)
    ctx->pc = 0x4ceae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 22));
label_4ceae8:
    // 0x4ceae8: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x4ceae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4ceaec:
    // 0x4ceaec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4ceaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4ceaf0:
    // 0x4ceaf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ceaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ceaf4:
    // 0x4ceaf4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x4ceaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4ceaf8:
    // 0x4ceaf8: 0x46052900  add.s       $f4, $f5, $f5
    ctx->pc = 0x4ceaf8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4ceafc:
    // 0x4ceafc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x4ceafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_4ceb00:
    // 0x4ceb00: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x4ceb00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_4ceb04:
    // 0x4ceb04: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x4ceb04u;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_4ceb08:
    // 0x4ceb08: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x4ceb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ceb0c:
    // 0x4ceb0c: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ceb0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ceb10:
    // 0x4ceb10: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4ceb10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ceb14:
    // 0x4ceb14: 0x46031840  add.s       $f1, $f3, $f3
    ctx->pc = 0x4ceb14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4ceb18:
    // 0x4ceb18: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4ceb18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_4ceb1c:
    // 0x4ceb1c: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x4ceb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ceb20:
    // 0x4ceb20: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x4ceb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ceb24:
    // 0x4ceb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ceb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ceb28:
    // 0x4ceb28: 0x0  nop
    ctx->pc = 0x4ceb28u;
    // NOP
label_4ceb2c:
    // 0x4ceb2c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4ceb2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ceb30:
    // 0x4ceb30: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
label_4ceb34:
    if (ctx->pc == 0x4CEB34u) {
        ctx->pc = 0x4CEB34u;
            // 0x4ceb34: 0x46000bc1  sub.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4CEB38u;
        goto label_4ceb38;
    }
    ctx->pc = 0x4CEB30u;
    {
        const bool branch_taken_0x4ceb30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEB30u;
            // 0x4ceb34: 0x46000bc1  sub.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceb30) {
            ctx->pc = 0x4CEBF4u;
            goto label_4cebf4;
        }
    }
    ctx->pc = 0x4CEB38u;
label_4ceb38:
    // 0x4ceb38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ceb38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ceb3c:
    // 0x4ceb3c: 0x0  nop
    ctx->pc = 0x4ceb3cu;
    // NOP
label_4ceb40:
    // 0x4ceb40: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x4ceb40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ceb44:
    // 0x4ceb44: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
label_4ceb48:
    if (ctx->pc == 0x4CEB48u) {
        ctx->pc = 0x4CEB48u;
            // 0x4ceb48: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4CEB4Cu;
        goto label_4ceb4c;
    }
    ctx->pc = 0x4CEB44u;
    {
        const bool branch_taken_0x4ceb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ceb44) {
            ctx->pc = 0x4CEB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEB44u;
            // 0x4ceb48: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEBF8u;
            goto label_4cebf8;
        }
    }
    ctx->pc = 0x4CEB4Cu;
label_4ceb4c:
    // 0x4ceb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ceb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ceb50:
    // 0x4ceb50: 0x12840017  beq         $s4, $a0, . + 4 + (0x17 << 2)
label_4ceb54:
    if (ctx->pc == 0x4CEB54u) {
        ctx->pc = 0x4CEB58u;
        goto label_4ceb58;
    }
    ctx->pc = 0x4CEB50u;
    {
        const bool branch_taken_0x4ceb50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x4ceb50) {
            ctx->pc = 0x4CEBB0u;
            goto label_4cebb0;
        }
    }
    ctx->pc = 0x4CEB58u;
label_4ceb58:
    // 0x4ceb58: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_4ceb5c:
    if (ctx->pc == 0x4CEB5Cu) {
        ctx->pc = 0x4CEB60u;
        goto label_4ceb60;
    }
    ctx->pc = 0x4CEB58u;
    {
        const bool branch_taken_0x4ceb58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb58) {
            ctx->pc = 0x4CEB68u;
            goto label_4ceb68;
        }
    }
    ctx->pc = 0x4CEB60u;
label_4ceb60:
    // 0x4ceb60: 0x10000024  b           . + 4 + (0x24 << 2)
label_4ceb64:
    if (ctx->pc == 0x4CEB64u) {
        ctx->pc = 0x4CEB68u;
        goto label_4ceb68;
    }
    ctx->pc = 0x4CEB60u;
    {
        const bool branch_taken_0x4ceb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb60) {
            ctx->pc = 0x4CEBF4u;
            goto label_4cebf4;
        }
    }
    ctx->pc = 0x4CEB68u;
label_4ceb68:
    // 0x4ceb68: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4ceb68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ceb6c:
    // 0x4ceb6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ceb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4ceb70:
    // 0x4ceb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ceb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ceb74:
    // 0x4ceb74: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ceb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4ceb78:
    // 0x4ceb78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4ceb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ceb7c:
    // 0x4ceb7c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x4ceb7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ceb80:
    // 0x4ceb80: 0x0  nop
    ctx->pc = 0x4ceb80u;
    // NOP
label_4ceb84:
    // 0x4ceb84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4ceb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ceb88:
    // 0x4ceb88: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4ceb88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_4ceb8c:
    // 0x4ceb8c: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x4ceb8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4ceb90:
    // 0x4ceb90: 0x0  nop
    ctx->pc = 0x4ceb90u;
    // NOP
label_4ceb94:
    // 0x4ceb94: 0x46008300  add.s       $f12, $f16, $f0
    ctx->pc = 0x4ceb94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
label_4ceb98:
    // 0x4ceb98: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4ceb98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4ceb9c:
    // 0x4ceb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ceb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ceba0:
    // 0x4ceba0: 0xc129cb4  jal         func_4A72D0
label_4ceba4:
    if (ctx->pc == 0x4CEBA4u) {
        ctx->pc = 0x4CEBA4u;
            // 0x4ceba4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4CEBA8u;
        goto label_4ceba8;
    }
    ctx->pc = 0x4CEBA0u;
    SET_GPR_U32(ctx, 31, 0x4CEBA8u);
    ctx->pc = 0x4CEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEBA0u;
            // 0x4ceba4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A72D0u;
    if (runtime->hasFunction(0x4A72D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEBA8u; }
        if (ctx->pc != 0x4CEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A72D0_0x4a72d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEBA8u; }
        if (ctx->pc != 0x4CEBA8u) { return; }
    }
    ctx->pc = 0x4CEBA8u;
label_4ceba8:
    // 0x4ceba8: 0x10000012  b           . + 4 + (0x12 << 2)
label_4cebac:
    if (ctx->pc == 0x4CEBACu) {
        ctx->pc = 0x4CEBB0u;
        goto label_4cebb0;
    }
    ctx->pc = 0x4CEBA8u;
    {
        const bool branch_taken_0x4ceba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceba8) {
            ctx->pc = 0x4CEBF4u;
            goto label_4cebf4;
        }
    }
    ctx->pc = 0x4CEBB0u;
label_4cebb0:
    // 0x4cebb0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4cebb0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cebb4:
    // 0x4cebb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4cebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4cebb8:
    // 0x4cebb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cebb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cebbc:
    // 0x4cebbc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4cebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4cebc0:
    // 0x4cebc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cebc4:
    // 0x4cebc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4cebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cebc8:
    // 0x4cebc8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x4cebc8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cebcc:
    // 0x4cebcc: 0x0  nop
    ctx->pc = 0x4cebccu;
    // NOP
label_4cebd0:
    // 0x4cebd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4cebd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4cebd4:
    // 0x4cebd4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4cebd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_4cebd8:
    // 0x4cebd8: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x4cebd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4cebdc:
    // 0x4cebdc: 0x0  nop
    ctx->pc = 0x4cebdcu;
    // NOP
label_4cebe0:
    // 0x4cebe0: 0x46008300  add.s       $f12, $f16, $f0
    ctx->pc = 0x4cebe0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
label_4cebe4:
    // 0x4cebe4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4cebe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4cebe8:
    // 0x4cebe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4cebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cebec:
    // 0x4cebec: 0xc129cb4  jal         func_4A72D0
label_4cebf0:
    if (ctx->pc == 0x4CEBF0u) {
        ctx->pc = 0x4CEBF0u;
            // 0x4cebf0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4CEBF4u;
        goto label_4cebf4;
    }
    ctx->pc = 0x4CEBECu;
    SET_GPR_U32(ctx, 31, 0x4CEBF4u);
    ctx->pc = 0x4CEBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEBECu;
            // 0x4cebf0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A72D0u;
    if (runtime->hasFunction(0x4A72D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEBF4u; }
        if (ctx->pc != 0x4CEBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A72D0_0x4a72d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEBF4u; }
        if (ctx->pc != 0x4CEBF4u) { return; }
    }
    ctx->pc = 0x4CEBF4u;
label_4cebf4:
    // 0x4cebf4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x4cebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4cebf8:
    // 0x4cebf8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4cebfc:
    if (ctx->pc == 0x4CEBFCu) {
        ctx->pc = 0x4CEBFCu;
            // 0x4cebfc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4CEC00u;
        goto label_4cec00;
    }
    ctx->pc = 0x4CEBF8u;
    {
        const bool branch_taken_0x4cebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEBF8u;
            // 0x4cebfc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cebf8) {
            ctx->pc = 0x4CEC1Cu;
            goto label_4cec1c;
        }
    }
    ctx->pc = 0x4CEC00u;
label_4cec00:
    // 0x4cec00: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4cec00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4cec04:
    // 0x4cec04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4cec08:
    // 0x4cec08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4cec08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4cec0c:
    // 0x4cec0c: 0x0  nop
    ctx->pc = 0x4cec0cu;
    // NOP
label_4cec10:
    // 0x4cec10: 0x0  nop
    ctx->pc = 0x4cec10u;
    // NOP
label_4cec14:
    // 0x4cec14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4cec18:
    if (ctx->pc == 0x4CEC18u) {
        ctx->pc = 0x4CEC1Cu;
        goto label_4cec1c;
    }
    ctx->pc = 0x4CEC14u;
    {
        const bool branch_taken_0x4cec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cec14) {
            ctx->pc = 0x4CEC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cec00;
        }
    }
    ctx->pc = 0x4CEC1Cu;
label_4cec1c:
    // 0x4cec1c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4cec1cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cec20:
    // 0x4cec20: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4cec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4cec24:
    // 0x4cec24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cec24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cec28:
    // 0x4cec28: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4cec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_4cec2c:
    // 0x4cec2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4cec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4cec30:
    // 0x4cec30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cec30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4cec34:
    // 0x4cec34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cec38:
    // 0x4cec38: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x4cec38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4cec3c:
    // 0x4cec3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4cec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cec40:
    // 0x4cec40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4cec40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cec44:
    // 0x4cec44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4cec44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cec48:
    // 0x4cec48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4cec48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cec4c:
    // 0x4cec4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4cec4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cec50:
    // 0x4cec50: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4cec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4cec54:
    // 0x4cec54: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4cec54u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cec58:
    // 0x4cec58: 0x0  nop
    ctx->pc = 0x4cec58u;
    // NOP
label_4cec5c:
    // 0x4cec5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4cec5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4cec60:
    // 0x4cec60: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x4cec60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4cec64:
    // 0x4cec64: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x4cec64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4cec68:
    // 0x4cec68: 0xc0ee334  jal         func_3B8CD0
label_4cec6c:
    if (ctx->pc == 0x4CEC6Cu) {
        ctx->pc = 0x4CEC6Cu;
            // 0x4cec6c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x4CEC70u;
        goto label_4cec70;
    }
    ctx->pc = 0x4CEC68u;
    SET_GPR_U32(ctx, 31, 0x4CEC70u);
    ctx->pc = 0x4CEC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEC68u;
            // 0x4cec6c: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEC70u; }
        if (ctx->pc != 0x4CEC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEC70u; }
        if (ctx->pc != 0x4CEC70u) { return; }
    }
    ctx->pc = 0x4CEC70u;
label_4cec70:
    // 0x4cec70: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x4cec70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_4cec74:
    // 0x4cec74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4cec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4cec78:
    // 0x4cec78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4cec78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4cec7c:
    // 0x4cec7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cec7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4cec80:
    // 0x4cec80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cec80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cec84:
    // 0x4cec84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cec84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cec88:
    // 0x4cec88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cec88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cec8c:
    // 0x4cec8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cec8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cec90:
    // 0x4cec90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cec90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cec94:
    // 0x4cec94: 0x3e00008  jr          $ra
label_4cec98:
    if (ctx->pc == 0x4CEC98u) {
        ctx->pc = 0x4CEC98u;
            // 0x4cec98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4CEC9Cu;
        goto label_4cec9c;
    }
    ctx->pc = 0x4CEC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEC94u;
            // 0x4cec98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CEC9Cu;
label_4cec9c:
    // 0x4cec9c: 0x0  nop
    ctx->pc = 0x4cec9cu;
    // NOP
label_4ceca0:
    // 0x4ceca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ceca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ceca4:
    // 0x4ceca4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ceca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ceca8:
    // 0x4ceca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ceca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cecac:
    // 0x4cecac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cecb0:
    // 0x4cecb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cecb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cecb4:
    // 0x4cecb4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4cecb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cecb8:
    // 0x4cecb8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4cecbc:
    if (ctx->pc == 0x4CECBCu) {
        ctx->pc = 0x4CECBCu;
            // 0x4cecbc: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x4CECC0u;
        goto label_4cecc0;
    }
    ctx->pc = 0x4CECB8u;
    {
        const bool branch_taken_0x4cecb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cecb8) {
            ctx->pc = 0x4CECBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CECB8u;
            // 0x4cecbc: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CECC8u;
            goto label_4cecc8;
        }
    }
    ctx->pc = 0x4CECC0u;
label_4cecc0:
    // 0x4cecc0: 0x10000010  b           . + 4 + (0x10 << 2)
label_4cecc4:
    if (ctx->pc == 0x4CECC4u) {
        ctx->pc = 0x4CECC4u;
            // 0x4cecc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4CECC8u;
        goto label_4cecc8;
    }
    ctx->pc = 0x4CECC0u;
    {
        const bool branch_taken_0x4cecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CECC0u;
            // 0x4cecc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cecc0) {
            ctx->pc = 0x4CED04u;
            goto label_4ced04;
        }
    }
    ctx->pc = 0x4CECC8u;
label_4cecc8:
    // 0x4cecc8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_4ceccc:
    if (ctx->pc == 0x4CECCCu) {
        ctx->pc = 0x4CECD0u;
        goto label_4cecd0;
    }
    ctx->pc = 0x4CECC8u;
    {
        const bool branch_taken_0x4cecc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cecc8) {
            ctx->pc = 0x4CED00u;
            goto label_4ced00;
        }
    }
    ctx->pc = 0x4CECD0u;
label_4cecd0:
    // 0x4cecd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cecd4:
    // 0x4cecd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cecd8:
    // 0x4cecd8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x4cecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_4cecdc:
    // 0x4cecdc: 0xc0ab89c  jal         func_2AE270
label_4cece0:
    if (ctx->pc == 0x4CECE0u) {
        ctx->pc = 0x4CECE0u;
            // 0x4cece0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CECE4u;
        goto label_4cece4;
    }
    ctx->pc = 0x4CECDCu;
    SET_GPR_U32(ctx, 31, 0x4CECE4u);
    ctx->pc = 0x4CECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CECDCu;
            // 0x4cece0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CECE4u; }
        if (ctx->pc != 0x4CECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CECE4u; }
        if (ctx->pc != 0x4CECE4u) { return; }
    }
    ctx->pc = 0x4CECE4u;
label_4cece4:
    // 0x4cece4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cece8:
    // 0x4cece8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cecec:
    // 0x4cecec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4cececu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4cecf0:
    // 0x4cecf0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4cecf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cecf4:
    // 0x4cecf4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cecf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cecf8:
    // 0x4cecf8: 0x320f809  jalr        $t9
label_4cecfc:
    if (ctx->pc == 0x4CECFCu) {
        ctx->pc = 0x4CECFCu;
            // 0x4cecfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CED00u;
        goto label_4ced00;
    }
    ctx->pc = 0x4CECF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CED00u);
        ctx->pc = 0x4CECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CECF8u;
            // 0x4cecfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CED00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CED00u; }
            if (ctx->pc != 0x4CED00u) { return; }
        }
        }
    }
    ctx->pc = 0x4CED00u;
label_4ced00:
    // 0x4ced00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ced00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ced04:
    // 0x4ced04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ced04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ced08:
    // 0x4ced08: 0x3e00008  jr          $ra
label_4ced0c:
    if (ctx->pc == 0x4CED0Cu) {
        ctx->pc = 0x4CED0Cu;
            // 0x4ced0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CED10u;
        goto label_fallthrough_0x4ced08;
    }
    ctx->pc = 0x4CED08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CED08u;
            // 0x4ced0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ced08:
    ctx->pc = 0x4CED10u;
}
