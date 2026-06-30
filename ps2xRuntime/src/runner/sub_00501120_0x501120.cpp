#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00501120
// Address: 0x501120 - 0x5019e0
void sub_00501120_0x501120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501120_0x501120");
#endif

    switch (ctx->pc) {
        case 0x501154u: goto label_501154;
        case 0x5011acu: goto label_5011ac;
        case 0x501294u: goto label_501294;
        case 0x5012b4u: goto label_5012b4;
        case 0x5012c0u: goto label_5012c0;
        case 0x5012c8u: goto label_5012c8;
        case 0x5012d0u: goto label_5012d0;
        case 0x5012dcu: goto label_5012dc;
        case 0x5012e4u: goto label_5012e4;
        case 0x501304u: goto label_501304;
        case 0x501310u: goto label_501310;
        case 0x501318u: goto label_501318;
        case 0x50133cu: goto label_50133c;
        case 0x501348u: goto label_501348;
        case 0x501350u: goto label_501350;
        case 0x501358u: goto label_501358;
        case 0x501364u: goto label_501364;
        case 0x50136cu: goto label_50136c;
        case 0x50138cu: goto label_50138c;
        case 0x501398u: goto label_501398;
        case 0x5013a0u: goto label_5013a0;
        case 0x5013e0u: goto label_5013e0;
        case 0x5013ecu: goto label_5013ec;
        case 0x5013f4u: goto label_5013f4;
        case 0x5013fcu: goto label_5013fc;
        case 0x501408u: goto label_501408;
        case 0x501410u: goto label_501410;
        case 0x501430u: goto label_501430;
        case 0x50143cu: goto label_50143c;
        case 0x501488u: goto label_501488;
        case 0x501498u: goto label_501498;
        case 0x5014b8u: goto label_5014b8;
        case 0x5014c4u: goto label_5014c4;
        case 0x5014ccu: goto label_5014cc;
        case 0x5014d4u: goto label_5014d4;
        case 0x5014e0u: goto label_5014e0;
        case 0x5014e8u: goto label_5014e8;
        case 0x501508u: goto label_501508;
        case 0x501514u: goto label_501514;
        case 0x501520u: goto label_501520;
        case 0x501544u: goto label_501544;
        case 0x501550u: goto label_501550;
        case 0x501558u: goto label_501558;
        case 0x501560u: goto label_501560;
        case 0x50156cu: goto label_50156c;
        case 0x501574u: goto label_501574;
        case 0x501594u: goto label_501594;
        case 0x5015a0u: goto label_5015a0;
        case 0x501638u: goto label_501638;
        case 0x501644u: goto label_501644;
        case 0x50164cu: goto label_50164c;
        case 0x501654u: goto label_501654;
        case 0x501660u: goto label_501660;
        case 0x501668u: goto label_501668;
        case 0x501688u: goto label_501688;
        case 0x501694u: goto label_501694;
        case 0x5016a8u: goto label_5016a8;
        case 0x5016e8u: goto label_5016e8;
        case 0x5016f4u: goto label_5016f4;
        case 0x5016fcu: goto label_5016fc;
        case 0x501704u: goto label_501704;
        case 0x501710u: goto label_501710;
        case 0x501718u: goto label_501718;
        case 0x501738u: goto label_501738;
        case 0x501744u: goto label_501744;
        case 0x5017a8u: goto label_5017a8;
        case 0x5017b8u: goto label_5017b8;
        case 0x5017d8u: goto label_5017d8;
        case 0x5017e4u: goto label_5017e4;
        case 0x5017ecu: goto label_5017ec;
        case 0x5017f4u: goto label_5017f4;
        case 0x501800u: goto label_501800;
        case 0x501808u: goto label_501808;
        case 0x501828u: goto label_501828;
        case 0x501834u: goto label_501834;
        case 0x501848u: goto label_501848;
        case 0x50186cu: goto label_50186c;
        case 0x501878u: goto label_501878;
        case 0x501880u: goto label_501880;
        case 0x501888u: goto label_501888;
        case 0x501894u: goto label_501894;
        case 0x50189cu: goto label_50189c;
        case 0x5018bcu: goto label_5018bc;
        case 0x5018c8u: goto label_5018c8;
        case 0x501978u: goto label_501978;
        case 0x5019a4u: goto label_5019a4;
        default: break;
    }

    ctx->pc = 0x501120u;

label_501120:
    // 0x501120: 0x27bde630  addiu       $sp, $sp, -0x19D0
    ctx->pc = 0x501120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294960688));
    // 0x501124: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x501124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x501128: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x501128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x50112c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x50112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x501130: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x501130u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501134: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x501134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x501138: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x501138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x50113c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x50113cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501140: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x501140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x501144: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x501144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x501148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x50114c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x501150: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x501150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_501154:
    // 0x501154: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x501154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501158: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x501158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x50115c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x50115cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501160: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501160u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501164: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x501164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x501168: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501168u;
    {
        const bool branch_taken_0x501168 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501168u;
            // 0x50116c: 0x34083  sra         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501168) {
            ctx->pc = 0x501178u;
            goto label_501178;
        }
    }
    ctx->pc = 0x501170u;
    // 0x501170: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x501170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x501174: 0x34083  sra         $t0, $v1, 2
    ctx->pc = 0x501174u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
label_501178:
    // 0x501178: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x501178u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x50117c: 0x1420020c  bnez        $at, . + 4 + (0x20C << 2)
    ctx->pc = 0x50117Cu;
    {
        const bool branch_taken_0x50117c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x50117c) {
            ctx->pc = 0x5019B0u;
            goto label_5019b0;
        }
    }
    ctx->pc = 0x501184u;
    // 0x501184: 0x29010015  slti        $at, $t0, 0x15
    ctx->pc = 0x501184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x501188: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x501188u;
    {
        const bool branch_taken_0x501188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501188) {
            ctx->pc = 0x50118Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x501188u;
            // 0x50118c: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5011B4u;
            goto label_5011b4;
        }
    }
    ctx->pc = 0x501190u;
    // 0x501190: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x501190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501194: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x501194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501198: 0x16363c  dsll32      $a2, $s6, 24
    ctx->pc = 0x501198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
    // 0x50119c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x50119cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5011a0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x5011a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x5011a4: 0xc1408d0  jal         func_502340
    ctx->pc = 0x5011A4u;
    SET_GPR_U32(ctx, 31, 0x5011ACu);
    ctx->pc = 0x5011A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5011A4u;
            // 0x5011a8: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502340u;
    if (runtime->hasFunction(0x502340u)) {
        auto targetFn = runtime->lookupFunction(0x502340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5011ACu; }
        if (ctx->pc != 0x5011ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502340_0x502340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5011ACu; }
        if (ctx->pc != 0x5011ACu) { return; }
    }
    ctx->pc = 0x5011ACu;
label_5011ac:
    // 0x5011ac: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x5011ACu;
    {
        const bool branch_taken_0x5011ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5011ac) {
            ctx->pc = 0x5019B0u;
            goto label_5019b0;
        }
    }
    ctx->pc = 0x5011B4u;
label_5011b4:
    // 0x5011b4: 0x83083  sra         $a2, $t0, 2
    ctx->pc = 0x5011b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 2));
    // 0x5011b8: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5011B8u;
    {
        const bool branch_taken_0x5011b8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x5011BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5011B8u;
            // 0x5011bc: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5011b8) {
            ctx->pc = 0x5011C8u;
            goto label_5011c8;
        }
    }
    ctx->pc = 0x5011C0u;
    // 0x5011c0: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x5011c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x5011c4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x5011c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_5011c8:
    // 0x5011c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x5011c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x5011cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5011ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5011d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5011d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x5011d4: 0x8c44cc88  lw          $a0, -0x3378($v0)
    ctx->pc = 0x5011d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954120)));
    // 0x5011d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x5011d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x5011dc: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x5011dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x5011e0: 0x2810  mfhi        $a1
    ctx->pc = 0x5011e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x5011e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x5011e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5011e8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x5011e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x5011ec: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x5011ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x5011f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x5011f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x5011f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x5011F4u;
    {
        const bool branch_taken_0x5011f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5011F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5011F4u;
            // 0x5011f8: 0x653821  addu        $a3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5011f4) {
            ctx->pc = 0x501200u;
            goto label_501200;
        }
    }
    ctx->pc = 0x5011FCu;
    // 0x5011fc: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x5011fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_501200:
    // 0x501200: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x501200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x501204: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x501204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501208: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x501208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x50120c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50120cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501210u;
    {
        const bool branch_taken_0x501210 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x501214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501210u;
            // 0x501214: 0x33083  sra         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501210) {
            ctx->pc = 0x501220u;
            goto label_501220;
        }
    }
    ctx->pc = 0x501218u;
    // 0x501218: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x501218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x50121c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x50121cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_501220:
    // 0x501220: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x501220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x501224: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x501224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x501228: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501228u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x50122c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x501230: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x501230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x501234: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x501234u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x501238: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501238u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x50123c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x501240: 0xac43cc88  sw          $v1, -0x3378($v0)
    ctx->pc = 0x501240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954120), GPR_U32(ctx, 3));
    // 0x501244: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x501244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x501248: 0x1810  mfhi        $v1
    ctx->pc = 0x501248u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x50124c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x50124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x501250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x501250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x501254: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x501254u;
    {
        const bool branch_taken_0x501254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x501258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501254u;
            // 0x501258: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501254) {
            ctx->pc = 0x501268u;
            goto label_501268;
        }
    }
    ctx->pc = 0x50125Cu;
    // 0x50125c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x50125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x501260: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x501260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x501264: 0xac44cc88  sw          $a0, -0x3378($v0)
    ctx->pc = 0x501264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954120), GPR_U32(ctx, 4));
label_501268:
    // 0x501268: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x501268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x50126c: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x50126cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x501270: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501274: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x501274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x501278: 0x2452fffc  addiu       $s2, $v0, -0x4
    ctx->pc = 0x501278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x50127c: 0x163e3c  dsll32      $a3, $s6, 24
    ctx->pc = 0x50127cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) << (32 + 24));
    // 0x501280: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501284: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501284u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501288: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x501288u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x50128c: 0xc1407b0  jal         func_501EC0
    ctx->pc = 0x50128Cu;
    SET_GPR_U32(ctx, 31, 0x501294u);
    ctx->pc = 0x501290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50128Cu;
            // 0x501290: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x501EC0u;
    if (runtime->hasFunction(0x501EC0u)) {
        auto targetFn = runtime->lookupFunction(0x501EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501294u; }
        if (ctx->pc != 0x501294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00501EC0_0x501ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501294u; }
        if (ctx->pc != 0x501294u) { return; }
    }
    ctx->pc = 0x501294u;
label_501294:
    // 0x501294: 0x13883c  dsll32      $s1, $s3, 0
    ctx->pc = 0x501294u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501298: 0x12803c  dsll32      $s0, $s2, 0
    ctx->pc = 0x501298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    // 0x50129c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x50129cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x5012a0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x5012a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x5012a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5012a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5012a8: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x5012a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5012ac: 0xc140150  jal         func_500540
    ctx->pc = 0x5012ACu;
    SET_GPR_U32(ctx, 31, 0x5012B4u);
    ctx->pc = 0x5012B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012ACu;
            // 0x5012b0: 0x27a41810  addiu       $a0, $sp, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012B4u; }
        if (ctx->pc != 0x5012B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012B4u; }
        if (ctx->pc != 0x5012B4u) { return; }
    }
    ctx->pc = 0x5012B4u;
label_5012b4:
    // 0x5012b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5012b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5012b8: 0xc140150  jal         func_500540
    ctx->pc = 0x5012B8u;
    SET_GPR_U32(ctx, 31, 0x5012C0u);
    ctx->pc = 0x5012BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012B8u;
            // 0x5012bc: 0x27a41680  addiu       $a0, $sp, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012C0u; }
        if (ctx->pc != 0x5012C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012C0u; }
        if (ctx->pc != 0x5012C0u) { return; }
    }
    ctx->pc = 0x5012C0u;
label_5012c0:
    // 0x5012c0: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5012C0u;
    SET_GPR_U32(ctx, 31, 0x5012C8u);
    ctx->pc = 0x5012C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012C0u;
            // 0x5012c4: 0x27a41810  addiu       $a0, $sp, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012C8u; }
        if (ctx->pc != 0x5012C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012C8u; }
        if (ctx->pc != 0x5012C8u) { return; }
    }
    ctx->pc = 0x5012C8u;
label_5012c8:
    // 0x5012c8: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5012C8u;
    SET_GPR_U32(ctx, 31, 0x5012D0u);
    ctx->pc = 0x5012CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012C8u;
            // 0x5012cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012D0u; }
        if (ctx->pc != 0x5012D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012D0u; }
        if (ctx->pc != 0x5012D0u) { return; }
    }
    ctx->pc = 0x5012D0u;
label_5012d0:
    // 0x5012d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5012d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x5012d4: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5012D4u;
    SET_GPR_U32(ctx, 31, 0x5012DCu);
    ctx->pc = 0x5012D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012D4u;
            // 0x5012d8: 0x27a41680  addiu       $a0, $sp, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012DCu; }
        if (ctx->pc != 0x5012DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012DCu; }
        if (ctx->pc != 0x5012DCu) { return; }
    }
    ctx->pc = 0x5012DCu;
label_5012dc:
    // 0x5012dc: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5012DCu;
    SET_GPR_U32(ctx, 31, 0x5012E4u);
    ctx->pc = 0x5012E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012DCu;
            // 0x5012e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012E4u; }
        if (ctx->pc != 0x5012E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5012E4u; }
        if (ctx->pc != 0x5012E4u) { return; }
    }
    ctx->pc = 0x5012E4u;
label_5012e4:
    // 0x5012e4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x5012e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5012e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x5012E8u;
    {
        const bool branch_taken_0x5012e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5012ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5012E8u;
            // 0x5012ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5012e8) {
            ctx->pc = 0x5012F4u;
            goto label_5012f4;
        }
    }
    ctx->pc = 0x5012F0u;
    // 0x5012f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5012f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5012f4:
    // 0x5012f4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x5012f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5012f8: 0x27a41680  addiu       $a0, $sp, 0x1680
    ctx->pc = 0x5012f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
    // 0x5012fc: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x5012FCu;
    SET_GPR_U32(ctx, 31, 0x501304u);
    ctx->pc = 0x501300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5012FCu;
            // 0x501300: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501304u; }
        if (ctx->pc != 0x501304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501304u; }
        if (ctx->pc != 0x501304u) { return; }
    }
    ctx->pc = 0x501304u;
label_501304:
    // 0x501304: 0x27a41810  addiu       $a0, $sp, 0x1810
    ctx->pc = 0x501304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
    // 0x501308: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501308u;
    SET_GPR_U32(ctx, 31, 0x501310u);
    ctx->pc = 0x50130Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501308u;
            // 0x50130c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501310u; }
        if (ctx->pc != 0x501310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501310u; }
        if (ctx->pc != 0x501310u) { return; }
    }
    ctx->pc = 0x501310u;
label_501310:
    // 0x501310: 0x12a00023  beqz        $s5, . + 4 + (0x23 << 2)
    ctx->pc = 0x501310u;
    {
        const bool branch_taken_0x501310 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x501310) {
            ctx->pc = 0x5013A0u;
            goto label_5013a0;
        }
    }
    ctx->pc = 0x501318u;
label_501318:
    // 0x501318: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x501318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x50131c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50131cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501320: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x501320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x501324: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x501324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x501328: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x501328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x50132c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50132cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501330: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x501330u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501334: 0xc140150  jal         func_500540
    ctx->pc = 0x501334u;
    SET_GPR_U32(ctx, 31, 0x50133Cu);
    ctx->pc = 0x501338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501334u;
            // 0x501338: 0x27a41810  addiu       $a0, $sp, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50133Cu; }
        if (ctx->pc != 0x50133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50133Cu; }
        if (ctx->pc != 0x50133Cu) { return; }
    }
    ctx->pc = 0x50133Cu;
label_50133c:
    // 0x50133c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x50133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501340: 0xc140150  jal         func_500540
    ctx->pc = 0x501340u;
    SET_GPR_U32(ctx, 31, 0x501348u);
    ctx->pc = 0x501344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501340u;
            // 0x501344: 0x27a41680  addiu       $a0, $sp, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501348u; }
        if (ctx->pc != 0x501348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501348u; }
        if (ctx->pc != 0x501348u) { return; }
    }
    ctx->pc = 0x501348u;
label_501348:
    // 0x501348: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501348u;
    SET_GPR_U32(ctx, 31, 0x501350u);
    ctx->pc = 0x50134Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501348u;
            // 0x50134c: 0x27a41810  addiu       $a0, $sp, 0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501350u; }
        if (ctx->pc != 0x501350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501350u; }
        if (ctx->pc != 0x501350u) { return; }
    }
    ctx->pc = 0x501350u;
label_501350:
    // 0x501350: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501350u;
    SET_GPR_U32(ctx, 31, 0x501358u);
    ctx->pc = 0x501354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501350u;
            // 0x501354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501358u; }
        if (ctx->pc != 0x501358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501358u; }
        if (ctx->pc != 0x501358u) { return; }
    }
    ctx->pc = 0x501358u;
label_501358:
    // 0x501358: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501358u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x50135c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x50135Cu;
    SET_GPR_U32(ctx, 31, 0x501364u);
    ctx->pc = 0x501360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50135Cu;
            // 0x501360: 0x27a41680  addiu       $a0, $sp, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501364u; }
        if (ctx->pc != 0x501364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501364u; }
        if (ctx->pc != 0x501364u) { return; }
    }
    ctx->pc = 0x501364u;
label_501364:
    // 0x501364: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501364u;
    SET_GPR_U32(ctx, 31, 0x50136Cu);
    ctx->pc = 0x501368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501364u;
            // 0x501368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50136Cu; }
        if (ctx->pc != 0x50136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50136Cu; }
        if (ctx->pc != 0x50136Cu) { return; }
    }
    ctx->pc = 0x50136Cu;
label_50136c:
    // 0x50136c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x50136cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x501370: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x501370u;
    {
        const bool branch_taken_0x501370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501370u;
            // 0x501374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501370) {
            ctx->pc = 0x50137Cu;
            goto label_50137c;
        }
    }
    ctx->pc = 0x501378u;
    // 0x501378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50137c:
    // 0x50137c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x50137cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x501380: 0x27a41680  addiu       $a0, $sp, 0x1680
    ctx->pc = 0x501380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5760));
    // 0x501384: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501384u;
    SET_GPR_U32(ctx, 31, 0x50138Cu);
    ctx->pc = 0x501388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501384u;
            // 0x501388: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50138Cu; }
        if (ctx->pc != 0x50138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50138Cu; }
        if (ctx->pc != 0x50138Cu) { return; }
    }
    ctx->pc = 0x50138Cu;
label_50138c:
    // 0x50138c: 0x27a41810  addiu       $a0, $sp, 0x1810
    ctx->pc = 0x50138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6160));
    // 0x501390: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501390u;
    SET_GPR_U32(ctx, 31, 0x501398u);
    ctx->pc = 0x501394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501390u;
            // 0x501394: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501398u; }
        if (ctx->pc != 0x501398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501398u; }
        if (ctx->pc != 0x501398u) { return; }
    }
    ctx->pc = 0x501398u;
label_501398:
    // 0x501398: 0x16a0ffdf  bnez        $s5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x501398u;
    {
        const bool branch_taken_0x501398 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x501398) {
            ctx->pc = 0x501318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501318;
        }
    }
    ctx->pc = 0x5013A0u;
label_5013a0:
    // 0x5013a0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x5013a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x5013a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5013a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5013a8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x5013a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x5013ac: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x5013acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5013b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5013b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5013b4: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x5013b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x5013b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x5013b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5013bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5013bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x5013c0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x5013C0u;
    {
        const bool branch_taken_0x5013c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5013c0) {
            ctx->pc = 0x501450u;
            goto label_501450;
        }
    }
    ctx->pc = 0x5013C8u;
    // 0x5013c8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x5013c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x5013cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5013ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5013d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5013d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5013d4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x5013d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5013d8: 0xc140150  jal         func_500540
    ctx->pc = 0x5013D8u;
    SET_GPR_U32(ctx, 31, 0x5013E0u);
    ctx->pc = 0x5013DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5013D8u;
            // 0x5013dc: 0x27a414f0  addiu       $a0, $sp, 0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013E0u; }
        if (ctx->pc != 0x5013E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013E0u; }
        if (ctx->pc != 0x5013E0u) { return; }
    }
    ctx->pc = 0x5013E0u;
label_5013e0:
    // 0x5013e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5013e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5013e4: 0xc140150  jal         func_500540
    ctx->pc = 0x5013E4u;
    SET_GPR_U32(ctx, 31, 0x5013ECu);
    ctx->pc = 0x5013E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5013E4u;
            // 0x5013e8: 0x27a41360  addiu       $a0, $sp, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013ECu; }
        if (ctx->pc != 0x5013ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013ECu; }
        if (ctx->pc != 0x5013ECu) { return; }
    }
    ctx->pc = 0x5013ECu;
label_5013ec:
    // 0x5013ec: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5013ECu;
    SET_GPR_U32(ctx, 31, 0x5013F4u);
    ctx->pc = 0x5013F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5013ECu;
            // 0x5013f0: 0x27a414f0  addiu       $a0, $sp, 0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013F4u; }
        if (ctx->pc != 0x5013F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013F4u; }
        if (ctx->pc != 0x5013F4u) { return; }
    }
    ctx->pc = 0x5013F4u;
label_5013f4:
    // 0x5013f4: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5013F4u;
    SET_GPR_U32(ctx, 31, 0x5013FCu);
    ctx->pc = 0x5013F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5013F4u;
            // 0x5013f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013FCu; }
        if (ctx->pc != 0x5013FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5013FCu; }
        if (ctx->pc != 0x5013FCu) { return; }
    }
    ctx->pc = 0x5013FCu;
label_5013fc:
    // 0x5013fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5013fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501400: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501400u;
    SET_GPR_U32(ctx, 31, 0x501408u);
    ctx->pc = 0x501404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501400u;
            // 0x501404: 0x27a41360  addiu       $a0, $sp, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501408u; }
        if (ctx->pc != 0x501408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501408u; }
        if (ctx->pc != 0x501408u) { return; }
    }
    ctx->pc = 0x501408u;
label_501408:
    // 0x501408: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501408u;
    SET_GPR_U32(ctx, 31, 0x501410u);
    ctx->pc = 0x50140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501408u;
            // 0x50140c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501410u; }
        if (ctx->pc != 0x501410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501410u; }
        if (ctx->pc != 0x501410u) { return; }
    }
    ctx->pc = 0x501410u;
label_501410:
    // 0x501410: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x501414: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x501414u;
    {
        const bool branch_taken_0x501414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501414u;
            // 0x501418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501414) {
            ctx->pc = 0x501420u;
            goto label_501420;
        }
    }
    ctx->pc = 0x50141Cu;
    // 0x50141c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x50141cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501420:
    // 0x501420: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x501420u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x501424: 0x27a41360  addiu       $a0, $sp, 0x1360
    ctx->pc = 0x501424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4960));
    // 0x501428: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501428u;
    SET_GPR_U32(ctx, 31, 0x501430u);
    ctx->pc = 0x50142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501428u;
            // 0x50142c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501430u; }
        if (ctx->pc != 0x501430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501430u; }
        if (ctx->pc != 0x501430u) { return; }
    }
    ctx->pc = 0x501430u;
label_501430:
    // 0x501430: 0x27a414f0  addiu       $a0, $sp, 0x14F0
    ctx->pc = 0x501430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5360));
    // 0x501434: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501434u;
    SET_GPR_U32(ctx, 31, 0x50143Cu);
    ctx->pc = 0x501438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501434u;
            // 0x501438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50143Cu; }
        if (ctx->pc != 0x50143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50143Cu; }
        if (ctx->pc != 0x50143Cu) { return; }
    }
    ctx->pc = 0x50143Cu;
label_50143c:
    // 0x50143c: 0x15102b  sltu        $v0, $zero, $s5
    ctx->pc = 0x50143cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x501440: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x501440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x501444: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x501444u;
    {
        const bool branch_taken_0x501444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x501444) {
            ctx->pc = 0x5013A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5013a0;
        }
    }
    ctx->pc = 0x50144Cu;
    // 0x50144c: 0x0  nop
    ctx->pc = 0x50144cu;
    // NOP
label_501450:
    // 0x501450: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x501450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501454: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x501454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501458: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501458u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x50145c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x50145cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x501460: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x501460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x501464: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x501464u;
    {
        const bool branch_taken_0x501464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501464) {
            ctx->pc = 0x5015E8u;
            goto label_5015e8;
        }
    }
    ctx->pc = 0x50146Cu;
    // 0x50146c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x501470: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x501470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x501474: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x501474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x501478: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x501478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x50147c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50147Cu;
    {
        const bool branch_taken_0x50147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50147Cu;
            // 0x501480: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50147c) {
            ctx->pc = 0x501498u;
            goto label_501498;
        }
    }
    ctx->pc = 0x501484u;
    // 0x501484: 0x0  nop
    ctx->pc = 0x501484u;
    // NOP
label_501488:
    // 0x501488: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x501488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x50148c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50148cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501490: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x501490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x501494: 0x0  nop
    ctx->pc = 0x501494u;
    // NOP
label_501498:
    // 0x501498: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x501498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x50149c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50149cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5014a0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x5014a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5014a4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x5014a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5014a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5014a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5014ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5014acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5014b0: 0xc140150  jal         func_500540
    ctx->pc = 0x5014B0u;
    SET_GPR_U32(ctx, 31, 0x5014B8u);
    ctx->pc = 0x5014B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014B0u;
            // 0x5014b4: 0x27a411d0  addiu       $a0, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014B8u; }
        if (ctx->pc != 0x5014B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014B8u; }
        if (ctx->pc != 0x5014B8u) { return; }
    }
    ctx->pc = 0x5014B8u;
label_5014b8:
    // 0x5014b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5014b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5014bc: 0xc140150  jal         func_500540
    ctx->pc = 0x5014BCu;
    SET_GPR_U32(ctx, 31, 0x5014C4u);
    ctx->pc = 0x5014C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014BCu;
            // 0x5014c0: 0x27a41040  addiu       $a0, $sp, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014C4u; }
        if (ctx->pc != 0x5014C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014C4u; }
        if (ctx->pc != 0x5014C4u) { return; }
    }
    ctx->pc = 0x5014C4u;
label_5014c4:
    // 0x5014c4: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5014C4u;
    SET_GPR_U32(ctx, 31, 0x5014CCu);
    ctx->pc = 0x5014C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014C4u;
            // 0x5014c8: 0x27a411d0  addiu       $a0, $sp, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014CCu; }
        if (ctx->pc != 0x5014CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014CCu; }
        if (ctx->pc != 0x5014CCu) { return; }
    }
    ctx->pc = 0x5014CCu;
label_5014cc:
    // 0x5014cc: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5014CCu;
    SET_GPR_U32(ctx, 31, 0x5014D4u);
    ctx->pc = 0x5014D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014CCu;
            // 0x5014d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014D4u; }
        if (ctx->pc != 0x5014D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014D4u; }
        if (ctx->pc != 0x5014D4u) { return; }
    }
    ctx->pc = 0x5014D4u;
label_5014d4:
    // 0x5014d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5014d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x5014d8: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5014D8u;
    SET_GPR_U32(ctx, 31, 0x5014E0u);
    ctx->pc = 0x5014DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014D8u;
            // 0x5014dc: 0x27a41040  addiu       $a0, $sp, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014E0u; }
        if (ctx->pc != 0x5014E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014E0u; }
        if (ctx->pc != 0x5014E0u) { return; }
    }
    ctx->pc = 0x5014E0u;
label_5014e0:
    // 0x5014e0: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5014E0u;
    SET_GPR_U32(ctx, 31, 0x5014E8u);
    ctx->pc = 0x5014E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5014E0u;
            // 0x5014e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014E8u; }
        if (ctx->pc != 0x5014E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5014E8u; }
        if (ctx->pc != 0x5014E8u) { return; }
    }
    ctx->pc = 0x5014E8u;
label_5014e8:
    // 0x5014e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x5014e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5014ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x5014ECu;
    {
        const bool branch_taken_0x5014ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5014F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5014ECu;
            // 0x5014f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5014ec) {
            ctx->pc = 0x5014F8u;
            goto label_5014f8;
        }
    }
    ctx->pc = 0x5014F4u;
    // 0x5014f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5014f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5014f8:
    // 0x5014f8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x5014f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5014fc: 0x27a41040  addiu       $a0, $sp, 0x1040
    ctx->pc = 0x5014fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
    // 0x501500: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501500u;
    SET_GPR_U32(ctx, 31, 0x501508u);
    ctx->pc = 0x501504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501500u;
            // 0x501504: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501508u; }
        if (ctx->pc != 0x501508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501508u; }
        if (ctx->pc != 0x501508u) { return; }
    }
    ctx->pc = 0x501508u;
label_501508:
    // 0x501508: 0x27a411d0  addiu       $a0, $sp, 0x11D0
    ctx->pc = 0x501508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4560));
    // 0x50150c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50150Cu;
    SET_GPR_U32(ctx, 31, 0x501514u);
    ctx->pc = 0x501510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50150Cu;
            // 0x501510: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501514u; }
        if (ctx->pc != 0x501514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501514u; }
        if (ctx->pc != 0x501514u) { return; }
    }
    ctx->pc = 0x501514u;
label_501514:
    // 0x501514: 0x16a0ffdc  bnez        $s5, . + 4 + (-0x24 << 2)
    ctx->pc = 0x501514u;
    {
        const bool branch_taken_0x501514 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x501514) {
            ctx->pc = 0x501488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501488;
        }
    }
    ctx->pc = 0x50151Cu;
    // 0x50151c: 0x0  nop
    ctx->pc = 0x50151cu;
    // NOP
label_501520:
    // 0x501520: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x501520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x501524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501528: 0x27a40eb0  addiu       $a0, $sp, 0xEB0
    ctx->pc = 0x501528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3760));
    // 0x50152c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x50152cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501530: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x501530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501534: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501538: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x501538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x50153c: 0xc140150  jal         func_500540
    ctx->pc = 0x50153Cu;
    SET_GPR_U32(ctx, 31, 0x501544u);
    ctx->pc = 0x501540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50153Cu;
            // 0x501540: 0x2450fffc  addiu       $s0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501544u; }
        if (ctx->pc != 0x501544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501544u; }
        if (ctx->pc != 0x501544u) { return; }
    }
    ctx->pc = 0x501544u;
label_501544:
    // 0x501544: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x501544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501548: 0xc140150  jal         func_500540
    ctx->pc = 0x501548u;
    SET_GPR_U32(ctx, 31, 0x501550u);
    ctx->pc = 0x50154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501548u;
            // 0x50154c: 0x27a40d20  addiu       $a0, $sp, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501550u; }
        if (ctx->pc != 0x501550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501550u; }
        if (ctx->pc != 0x501550u) { return; }
    }
    ctx->pc = 0x501550u;
label_501550:
    // 0x501550: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501550u;
    SET_GPR_U32(ctx, 31, 0x501558u);
    ctx->pc = 0x501554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501550u;
            // 0x501554: 0x27a40eb0  addiu       $a0, $sp, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501558u; }
        if (ctx->pc != 0x501558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501558u; }
        if (ctx->pc != 0x501558u) { return; }
    }
    ctx->pc = 0x501558u;
label_501558:
    // 0x501558: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501558u;
    SET_GPR_U32(ctx, 31, 0x501560u);
    ctx->pc = 0x50155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501558u;
            // 0x50155c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501560u; }
        if (ctx->pc != 0x501560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501560u; }
        if (ctx->pc != 0x501560u) { return; }
    }
    ctx->pc = 0x501560u;
label_501560:
    // 0x501560: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501560u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501564: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501564u;
    SET_GPR_U32(ctx, 31, 0x50156Cu);
    ctx->pc = 0x501568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501564u;
            // 0x501568: 0x27a40d20  addiu       $a0, $sp, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50156Cu; }
        if (ctx->pc != 0x50156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50156Cu; }
        if (ctx->pc != 0x50156Cu) { return; }
    }
    ctx->pc = 0x50156Cu;
label_50156c:
    // 0x50156c: 0xc110e94  jal         func_443A50
    ctx->pc = 0x50156Cu;
    SET_GPR_U32(ctx, 31, 0x501574u);
    ctx->pc = 0x501570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50156Cu;
            // 0x501570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501574u; }
        if (ctx->pc != 0x501574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501574u; }
        if (ctx->pc != 0x501574u) { return; }
    }
    ctx->pc = 0x501574u;
label_501574:
    // 0x501574: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x501578: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x501578u;
    {
        const bool branch_taken_0x501578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501578u;
            // 0x50157c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501578) {
            ctx->pc = 0x501584u;
            goto label_501584;
        }
    }
    ctx->pc = 0x501580u;
    // 0x501580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501584:
    // 0x501584: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x501584u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x501588: 0x27a40d20  addiu       $a0, $sp, 0xD20
    ctx->pc = 0x501588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3360));
    // 0x50158c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50158Cu;
    SET_GPR_U32(ctx, 31, 0x501594u);
    ctx->pc = 0x501590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50158Cu;
            // 0x501590: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501594u; }
        if (ctx->pc != 0x501594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501594u; }
        if (ctx->pc != 0x501594u) { return; }
    }
    ctx->pc = 0x501594u;
label_501594:
    // 0x501594: 0x27a40eb0  addiu       $a0, $sp, 0xEB0
    ctx->pc = 0x501594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3760));
    // 0x501598: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501598u;
    SET_GPR_U32(ctx, 31, 0x5015A0u);
    ctx->pc = 0x50159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501598u;
            // 0x50159c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5015A0u; }
        if (ctx->pc != 0x5015A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5015A0u; }
        if (ctx->pc != 0x5015A0u) { return; }
    }
    ctx->pc = 0x5015A0u;
label_5015a0:
    // 0x5015a0: 0x15102b  sltu        $v0, $zero, $s5
    ctx->pc = 0x5015a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x5015a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5015a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x5015a8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x5015A8u;
    {
        const bool branch_taken_0x5015a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5015a8) {
            ctx->pc = 0x501520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501520;
        }
    }
    ctx->pc = 0x5015B0u;
    // 0x5015b0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x5015b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5015b4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x5015b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x5015b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x5015b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x5015bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5015bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5015c0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x5015c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x5015c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5015c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x5015c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5015C8u;
    {
        const bool branch_taken_0x5015c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5015c8) {
            ctx->pc = 0x5015E8u;
            goto label_5015e8;
        }
    }
    ctx->pc = 0x5015D0u;
    // 0x5015d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5015d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5015d4: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x5015d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5015d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x5015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5015dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x5015dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x5015e0: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x5015E0u;
    {
        const bool branch_taken_0x5015e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5015E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5015E0u;
            // 0x5015e4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5015e0) {
            ctx->pc = 0x501498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501498;
        }
    }
    ctx->pc = 0x5015E8u;
label_5015e8:
    // 0x5015e8: 0x11403c  dsll32      $t0, $s1, 0
    ctx->pc = 0x5015e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5015ec: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x5015ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x5015f0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x5015f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x5015f4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x5015f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x5015f8: 0x150700c7  bne         $t0, $a3, . + 4 + (0xC7 << 2)
    ctx->pc = 0x5015F8u;
    {
        const bool branch_taken_0x5015f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x5015f8) {
            ctx->pc = 0x501918u;
            goto label_501918;
        }
    }
    ctx->pc = 0x501600u;
    // 0x501600: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x501600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x501604: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x501604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501608: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501608u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x50160c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50160cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501610: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x501610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x501614: 0x25110004  addiu       $s1, $t0, 0x4
    ctx->pc = 0x501614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x501618: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x501618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50161c: 0x27a40b90  addiu       $a0, $sp, 0xB90
    ctx->pc = 0x50161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2960));
    // 0x501620: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x501620u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x501624: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x501624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x501628: 0x8c52fffc  lw          $s2, -0x4($v0)
    ctx->pc = 0x501628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x50162c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x50162cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x501630: 0xc140150  jal         func_500540
    ctx->pc = 0x501630u;
    SET_GPR_U32(ctx, 31, 0x501638u);
    ctx->pc = 0x501634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501630u;
            // 0x501634: 0x2450fffc  addiu       $s0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501638u; }
        if (ctx->pc != 0x501638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501638u; }
        if (ctx->pc != 0x501638u) { return; }
    }
    ctx->pc = 0x501638u;
label_501638:
    // 0x501638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x501638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50163c: 0xc140150  jal         func_500540
    ctx->pc = 0x50163Cu;
    SET_GPR_U32(ctx, 31, 0x501644u);
    ctx->pc = 0x501640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50163Cu;
            // 0x501640: 0x27a40a00  addiu       $a0, $sp, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501644u; }
        if (ctx->pc != 0x501644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501644u; }
        if (ctx->pc != 0x501644u) { return; }
    }
    ctx->pc = 0x501644u;
label_501644:
    // 0x501644: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501644u;
    SET_GPR_U32(ctx, 31, 0x50164Cu);
    ctx->pc = 0x501648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501644u;
            // 0x501648: 0x27a40b90  addiu       $a0, $sp, 0xB90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50164Cu; }
        if (ctx->pc != 0x50164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50164Cu; }
        if (ctx->pc != 0x50164Cu) { return; }
    }
    ctx->pc = 0x50164Cu;
label_50164c:
    // 0x50164c: 0xc110e94  jal         func_443A50
    ctx->pc = 0x50164Cu;
    SET_GPR_U32(ctx, 31, 0x501654u);
    ctx->pc = 0x501650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50164Cu;
            // 0x501650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501654u; }
        if (ctx->pc != 0x501654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501654u; }
        if (ctx->pc != 0x501654u) { return; }
    }
    ctx->pc = 0x501654u;
label_501654:
    // 0x501654: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501654u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501658: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501658u;
    SET_GPR_U32(ctx, 31, 0x501660u);
    ctx->pc = 0x50165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501658u;
            // 0x50165c: 0x27a40a00  addiu       $a0, $sp, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501660u; }
        if (ctx->pc != 0x501660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501660u; }
        if (ctx->pc != 0x501660u) { return; }
    }
    ctx->pc = 0x501660u;
label_501660:
    // 0x501660: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501660u;
    SET_GPR_U32(ctx, 31, 0x501668u);
    ctx->pc = 0x501664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501660u;
            // 0x501664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501668u; }
        if (ctx->pc != 0x501668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501668u; }
        if (ctx->pc != 0x501668u) { return; }
    }
    ctx->pc = 0x501668u;
label_501668:
    // 0x501668: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50166c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x50166Cu;
    {
        const bool branch_taken_0x50166c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50166Cu;
            // 0x501670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50166c) {
            ctx->pc = 0x501678u;
            goto label_501678;
        }
    }
    ctx->pc = 0x501674u;
    // 0x501674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501678:
    // 0x501678: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x501678u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x50167c: 0x27a40a00  addiu       $a0, $sp, 0xA00
    ctx->pc = 0x50167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2560));
    // 0x501680: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501680u;
    SET_GPR_U32(ctx, 31, 0x501688u);
    ctx->pc = 0x501684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501680u;
            // 0x501684: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501688u; }
        if (ctx->pc != 0x501688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501688u; }
        if (ctx->pc != 0x501688u) { return; }
    }
    ctx->pc = 0x501688u;
label_501688:
    // 0x501688: 0x27a40b90  addiu       $a0, $sp, 0xB90
    ctx->pc = 0x501688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2960));
    // 0x50168c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50168Cu;
    SET_GPR_U32(ctx, 31, 0x501694u);
    ctx->pc = 0x501690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50168Cu;
            // 0x501690: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501694u; }
        if (ctx->pc != 0x501694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501694u; }
        if (ctx->pc != 0x501694u) { return; }
    }
    ctx->pc = 0x501694u;
label_501694:
    // 0x501694: 0x1640003a  bnez        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x501694u;
    {
        const bool branch_taken_0x501694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x501694) {
            ctx->pc = 0x501780u;
            goto label_501780;
        }
    }
    ctx->pc = 0x50169Cu;
    // 0x50169c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50169Cu;
    {
        const bool branch_taken_0x50169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50169c) {
            ctx->pc = 0x5016B8u;
            goto label_5016b8;
        }
    }
    ctx->pc = 0x5016A4u;
    // 0x5016a4: 0x0  nop
    ctx->pc = 0x5016a4u;
    // NOP
label_5016a8:
    // 0x5016a8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x5016a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5016ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5016acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x5016b0: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x5016b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x5016b4: 0x0  nop
    ctx->pc = 0x5016b4u;
    // NOP
label_5016b8:
    // 0x5016b8: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x5016b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5016bc: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x5016bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x5016c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5016c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5016c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x5016c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x5016c8: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x5016C8u;
    {
        const bool branch_taken_0x5016c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5016c8) {
            ctx->pc = 0x501750u;
            goto label_501750;
        }
    }
    ctx->pc = 0x5016D0u;
    // 0x5016d0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x5016d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x5016d4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x5016d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5016d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5016d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5016dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5016dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5016e0: 0xc140150  jal         func_500540
    ctx->pc = 0x5016E0u;
    SET_GPR_U32(ctx, 31, 0x5016E8u);
    ctx->pc = 0x5016E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5016E0u;
            // 0x5016e4: 0x27a40870  addiu       $a0, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016E8u; }
        if (ctx->pc != 0x5016E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016E8u; }
        if (ctx->pc != 0x5016E8u) { return; }
    }
    ctx->pc = 0x5016E8u;
label_5016e8:
    // 0x5016e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5016e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5016ec: 0xc140150  jal         func_500540
    ctx->pc = 0x5016ECu;
    SET_GPR_U32(ctx, 31, 0x5016F4u);
    ctx->pc = 0x5016F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5016ECu;
            // 0x5016f0: 0x27a406e0  addiu       $a0, $sp, 0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016F4u; }
        if (ctx->pc != 0x5016F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016F4u; }
        if (ctx->pc != 0x5016F4u) { return; }
    }
    ctx->pc = 0x5016F4u;
label_5016f4:
    // 0x5016f4: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5016F4u;
    SET_GPR_U32(ctx, 31, 0x5016FCu);
    ctx->pc = 0x5016F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5016F4u;
            // 0x5016f8: 0x27a40870  addiu       $a0, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016FCu; }
        if (ctx->pc != 0x5016FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5016FCu; }
        if (ctx->pc != 0x5016FCu) { return; }
    }
    ctx->pc = 0x5016FCu;
label_5016fc:
    // 0x5016fc: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5016FCu;
    SET_GPR_U32(ctx, 31, 0x501704u);
    ctx->pc = 0x501700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5016FCu;
            // 0x501700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501704u; }
        if (ctx->pc != 0x501704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501704u; }
        if (ctx->pc != 0x501704u) { return; }
    }
    ctx->pc = 0x501704u;
label_501704:
    // 0x501704: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x501708: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501708u;
    SET_GPR_U32(ctx, 31, 0x501710u);
    ctx->pc = 0x50170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501708u;
            // 0x50170c: 0x27a406e0  addiu       $a0, $sp, 0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501710u; }
        if (ctx->pc != 0x501710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501710u; }
        if (ctx->pc != 0x501710u) { return; }
    }
    ctx->pc = 0x501710u;
label_501710:
    // 0x501710: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501710u;
    SET_GPR_U32(ctx, 31, 0x501718u);
    ctx->pc = 0x501714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501710u;
            // 0x501714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501718u; }
        if (ctx->pc != 0x501718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501718u; }
        if (ctx->pc != 0x501718u) { return; }
    }
    ctx->pc = 0x501718u;
label_501718:
    // 0x501718: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50171c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x50171Cu;
    {
        const bool branch_taken_0x50171c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50171Cu;
            // 0x501720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50171c) {
            ctx->pc = 0x501728u;
            goto label_501728;
        }
    }
    ctx->pc = 0x501724u;
    // 0x501724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501728:
    // 0x501728: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x501728u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x50172c: 0x27a406e0  addiu       $a0, $sp, 0x6E0
    ctx->pc = 0x50172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
    // 0x501730: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501730u;
    SET_GPR_U32(ctx, 31, 0x501738u);
    ctx->pc = 0x501734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501730u;
            // 0x501734: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501738u; }
        if (ctx->pc != 0x501738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501738u; }
        if (ctx->pc != 0x501738u) { return; }
    }
    ctx->pc = 0x501738u;
label_501738:
    // 0x501738: 0x27a40870  addiu       $a0, $sp, 0x870
    ctx->pc = 0x501738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
    // 0x50173c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50173Cu;
    SET_GPR_U32(ctx, 31, 0x501744u);
    ctx->pc = 0x501740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50173Cu;
            // 0x501740: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501744u; }
        if (ctx->pc != 0x501744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501744u; }
        if (ctx->pc != 0x501744u) { return; }
    }
    ctx->pc = 0x501744u;
label_501744:
    // 0x501744: 0x1240ffd8  beqz        $s2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x501744u;
    {
        const bool branch_taken_0x501744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x501744) {
            ctx->pc = 0x5016A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5016a8;
        }
    }
    ctx->pc = 0x50174Cu;
    // 0x50174c: 0x0  nop
    ctx->pc = 0x50174cu;
    // NOP
label_501750:
    // 0x501750: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x501750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501754: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x501754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501758: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x501758u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x50175c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x50175cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501760: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x501760u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x501764: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x501764u;
    {
        const bool branch_taken_0x501764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501764) {
            ctx->pc = 0x501780u;
            goto label_501780;
        }
    }
    ctx->pc = 0x50176Cu;
    // 0x50176c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x50176cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x501770: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x501770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x501774: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x501774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x501778: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x501778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x50177c: 0x0  nop
    ctx->pc = 0x50177cu;
    // NOP
label_501780:
    // 0x501780: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x501780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501784: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x501784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x501788: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501788u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x50178c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x50178cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501790: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x501790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x501794: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x501794u;
    {
        const bool branch_taken_0x501794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501794) {
            ctx->pc = 0x501908u;
            goto label_501908;
        }
    }
    ctx->pc = 0x50179Cu;
    // 0x50179c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50179Cu;
    {
        const bool branch_taken_0x50179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50179c) {
            ctx->pc = 0x5017B8u;
            goto label_5017b8;
        }
    }
    ctx->pc = 0x5017A4u;
    // 0x5017a4: 0x0  nop
    ctx->pc = 0x5017a4u;
    // NOP
label_5017a8:
    // 0x5017a8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x5017a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5017ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5017acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5017b0: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x5017b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x5017b4: 0x0  nop
    ctx->pc = 0x5017b4u;
    // NOP
label_5017b8:
    // 0x5017b8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x5017b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5017bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5017bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5017c0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x5017c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5017c4: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x5017c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x5017c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x5017c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x5017cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x5017ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5017d0: 0xc140150  jal         func_500540
    ctx->pc = 0x5017D0u;
    SET_GPR_U32(ctx, 31, 0x5017D8u);
    ctx->pc = 0x5017D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5017D0u;
            // 0x5017d4: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017D8u; }
        if (ctx->pc != 0x5017D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017D8u; }
        if (ctx->pc != 0x5017D8u) { return; }
    }
    ctx->pc = 0x5017D8u;
label_5017d8:
    // 0x5017d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5017d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5017dc: 0xc140150  jal         func_500540
    ctx->pc = 0x5017DCu;
    SET_GPR_U32(ctx, 31, 0x5017E4u);
    ctx->pc = 0x5017E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5017DCu;
            // 0x5017e0: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017E4u; }
        if (ctx->pc != 0x5017E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017E4u; }
        if (ctx->pc != 0x5017E4u) { return; }
    }
    ctx->pc = 0x5017E4u;
label_5017e4:
    // 0x5017e4: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5017E4u;
    SET_GPR_U32(ctx, 31, 0x5017ECu);
    ctx->pc = 0x5017E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5017E4u;
            // 0x5017e8: 0x27a40550  addiu       $a0, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017ECu; }
        if (ctx->pc != 0x5017ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017ECu; }
        if (ctx->pc != 0x5017ECu) { return; }
    }
    ctx->pc = 0x5017ECu;
label_5017ec:
    // 0x5017ec: 0xc110e94  jal         func_443A50
    ctx->pc = 0x5017ECu;
    SET_GPR_U32(ctx, 31, 0x5017F4u);
    ctx->pc = 0x5017F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5017ECu;
            // 0x5017f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017F4u; }
        if (ctx->pc != 0x5017F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5017F4u; }
        if (ctx->pc != 0x5017F4u) { return; }
    }
    ctx->pc = 0x5017F4u;
label_5017f4:
    // 0x5017f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5017f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x5017f8: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x5017F8u;
    SET_GPR_U32(ctx, 31, 0x501800u);
    ctx->pc = 0x5017FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5017F8u;
            // 0x5017fc: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501800u; }
        if (ctx->pc != 0x501800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501800u; }
        if (ctx->pc != 0x501800u) { return; }
    }
    ctx->pc = 0x501800u;
label_501800:
    // 0x501800: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501800u;
    SET_GPR_U32(ctx, 31, 0x501808u);
    ctx->pc = 0x501804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501800u;
            // 0x501804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501808u; }
        if (ctx->pc != 0x501808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501808u; }
        if (ctx->pc != 0x501808u) { return; }
    }
    ctx->pc = 0x501808u;
label_501808:
    // 0x501808: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x501808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50180c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x50180Cu;
    {
        const bool branch_taken_0x50180c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x501810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50180Cu;
            // 0x501810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50180c) {
            ctx->pc = 0x501818u;
            goto label_501818;
        }
    }
    ctx->pc = 0x501814u;
    // 0x501814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x501814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_501818:
    // 0x501818: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x501818u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x50181c: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x50181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x501820: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x501820u;
    SET_GPR_U32(ctx, 31, 0x501828u);
    ctx->pc = 0x501824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501820u;
            // 0x501824: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501828u; }
        if (ctx->pc != 0x501828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501828u; }
        if (ctx->pc != 0x501828u) { return; }
    }
    ctx->pc = 0x501828u;
label_501828:
    // 0x501828: 0x27a40550  addiu       $a0, $sp, 0x550
    ctx->pc = 0x501828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
    // 0x50182c: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x50182Cu;
    SET_GPR_U32(ctx, 31, 0x501834u);
    ctx->pc = 0x501830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50182Cu;
            // 0x501830: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501834u; }
        if (ctx->pc != 0x501834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501834u; }
        if (ctx->pc != 0x501834u) { return; }
    }
    ctx->pc = 0x501834u;
label_501834:
    // 0x501834: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x501834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x501838: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x501838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x50183c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x50183Cu;
    {
        const bool branch_taken_0x50183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50183c) {
            ctx->pc = 0x5017A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5017a8;
        }
    }
    ctx->pc = 0x501844u;
    // 0x501844: 0x0  nop
    ctx->pc = 0x501844u;
    // NOP
label_501848:
    // 0x501848: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x501848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x50184c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50184cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501850: 0x8c52fffc  lw          $s2, -0x4($v0)
    ctx->pc = 0x501850u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x501854: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x501854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x501858: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x501858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x50185c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x50185cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x501860: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x501860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x501864: 0xc140150  jal         func_500540
    ctx->pc = 0x501864u;
    SET_GPR_U32(ctx, 31, 0x50186Cu);
    ctx->pc = 0x501868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501864u;
            // 0x501868: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50186Cu; }
        if (ctx->pc != 0x50186Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50186Cu; }
        if (ctx->pc != 0x50186Cu) { return; }
    }
    ctx->pc = 0x50186Cu;
label_50186c:
    // 0x50186c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501870: 0xc140150  jal         func_500540
    ctx->pc = 0x501870u;
    SET_GPR_U32(ctx, 31, 0x501878u);
    ctx->pc = 0x501874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501870u;
            // 0x501874: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501878u; }
        if (ctx->pc != 0x501878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501878u; }
        if (ctx->pc != 0x501878u) { return; }
    }
    ctx->pc = 0x501878u;
label_501878:
    // 0x501878: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x501878u;
    SET_GPR_U32(ctx, 31, 0x501880u);
    ctx->pc = 0x50187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501878u;
            // 0x50187c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501880u; }
        if (ctx->pc != 0x501880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501880u; }
        if (ctx->pc != 0x501880u) { return; }
    }
    ctx->pc = 0x501880u;
label_501880:
    // 0x501880: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501880u;
    SET_GPR_U32(ctx, 31, 0x501888u);
    ctx->pc = 0x501884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501880u;
            // 0x501884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501888u; }
        if (ctx->pc != 0x501888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501888u; }
        if (ctx->pc != 0x501888u) { return; }
    }
    ctx->pc = 0x501888u;
label_501888:
    // 0x501888: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x501888u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x50188c: 0xc0e5f68  jal         func_397DA0
    ctx->pc = 0x50188Cu;
    SET_GPR_U32(ctx, 31, 0x501894u);
    ctx->pc = 0x501890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50188Cu;
            // 0x501890: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501894u; }
        if (ctx->pc != 0x501894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501894u; }
        if (ctx->pc != 0x501894u) { return; }
    }
    ctx->pc = 0x501894u;
label_501894:
    // 0x501894: 0xc110e94  jal         func_443A50
    ctx->pc = 0x501894u;
    SET_GPR_U32(ctx, 31, 0x50189Cu);
    ctx->pc = 0x501898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501894u;
            // 0x501898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50189Cu; }
        if (ctx->pc != 0x50189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50189Cu; }
        if (ctx->pc != 0x50189Cu) { return; }
    }
    ctx->pc = 0x50189Cu;
label_50189c:
    // 0x50189c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x50189cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5018a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x5018A0u;
    {
        const bool branch_taken_0x5018a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5018A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5018A0u;
            // 0x5018a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5018a0) {
            ctx->pc = 0x5018ACu;
            goto label_5018ac;
        }
    }
    ctx->pc = 0x5018A8u;
    // 0x5018a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5018a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5018ac:
    // 0x5018ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x5018acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5018b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x5018b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x5018b4: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x5018B4u;
    SET_GPR_U32(ctx, 31, 0x5018BCu);
    ctx->pc = 0x5018B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5018B4u;
            // 0x5018b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5018BCu; }
        if (ctx->pc != 0x5018BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5018BCu; }
        if (ctx->pc != 0x5018BCu) { return; }
    }
    ctx->pc = 0x5018BCu;
label_5018bc:
    // 0x5018bc: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x5018bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x5018c0: 0xc0b62a0  jal         func_2D8A80
    ctx->pc = 0x5018C0u;
    SET_GPR_U32(ctx, 31, 0x5018C8u);
    ctx->pc = 0x5018C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5018C0u;
            // 0x5018c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A80u;
    if (runtime->hasFunction(0x2D8A80u)) {
        auto targetFn = runtime->lookupFunction(0x2D8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5018C8u; }
        if (ctx->pc != 0x5018C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A80_0x2d8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5018C8u; }
        if (ctx->pc != 0x5018C8u) { return; }
    }
    ctx->pc = 0x5018C8u;
label_5018c8:
    // 0x5018c8: 0x1640ffdf  bnez        $s2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x5018C8u;
    {
        const bool branch_taken_0x5018c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x5018c8) {
            ctx->pc = 0x501848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501848;
        }
    }
    ctx->pc = 0x5018D0u;
    // 0x5018d0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x5018d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5018d4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x5018d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x5018d8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x5018d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x5018dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x5018dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x5018e0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x5018e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x5018e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x5018e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x5018e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5018E8u;
    {
        const bool branch_taken_0x5018e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5018e8) {
            ctx->pc = 0x501908u;
            goto label_501908;
        }
    }
    ctx->pc = 0x5018F0u;
    // 0x5018f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5018f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5018f4: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x5018f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5018f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x5018f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5018fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x5018fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x501900: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x501900u;
    {
        const bool branch_taken_0x501900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501900u;
            // 0x501904: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501900) {
            ctx->pc = 0x5017B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5017b8;
        }
    }
    ctx->pc = 0x501908u;
label_501908:
    // 0x501908: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x501908u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x50190c: 0x1000fe11  b           . + 4 + (-0x1EF << 2)
    ctx->pc = 0x50190Cu;
    {
        const bool branch_taken_0x50190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50190Cu;
            // 0x501910: 0x13983f  dsra32      $s3, $s3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50190c) {
            ctx->pc = 0x501154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501154;
        }
    }
    ctx->pc = 0x501914u;
    // 0x501914: 0x0  nop
    ctx->pc = 0x501914u;
    // NOP
label_501918:
    // 0x501918: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x501918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x50191c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50191Cu;
    {
        const bool branch_taken_0x50191c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x501920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50191Cu;
            // 0x501920: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50191c) {
            ctx->pc = 0x50192Cu;
            goto label_50192c;
        }
    }
    ctx->pc = 0x501924u;
    // 0x501924: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x501924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x501928: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x501928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_50192c:
    // 0x50192c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x50192cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x501930: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x501930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501934: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x501934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x501938: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x501938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x50193c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x50193cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x501940: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x501940u;
    {
        const bool branch_taken_0x501940 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x501944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501940u;
            // 0x501944: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501940) {
            ctx->pc = 0x501950u;
            goto label_501950;
        }
    }
    ctx->pc = 0x501948u;
    // 0x501948: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x501948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x50194c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x50194cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_501950:
    // 0x501950: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x501950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x501954: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x501954u;
    {
        const bool branch_taken_0x501954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x501954) {
            ctx->pc = 0x501988u;
            goto label_501988;
        }
    }
    ctx->pc = 0x50195Cu;
    // 0x50195c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x50195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x501960: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x501960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501964: 0x16363c  dsll32      $a2, $s6, 24
    ctx->pc = 0x501964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
    // 0x501968: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501968u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x50196c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x50196cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501970: 0xc140448  jal         func_501120
    ctx->pc = 0x501970u;
    SET_GPR_U32(ctx, 31, 0x501978u);
    ctx->pc = 0x501974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501970u;
            // 0x501974: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x501120u;
    goto label_501120;
    ctx->pc = 0x501978u;
label_501978:
    // 0x501978: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x501978u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x50197c: 0x1000fdf5  b           . + 4 + (-0x20B << 2)
    ctx->pc = 0x50197Cu;
    {
        const bool branch_taken_0x50197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x501980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50197Cu;
            // 0x501980: 0x13983f  dsra32      $s3, $s3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50197c) {
            ctx->pc = 0x501154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501154;
        }
    }
    ctx->pc = 0x501984u;
    // 0x501984: 0x0  nop
    ctx->pc = 0x501984u;
    // NOP
label_501988:
    // 0x501988: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x501988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x50198c: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x50198cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x501990: 0x16363c  dsll32      $a2, $s6, 24
    ctx->pc = 0x501990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
    // 0x501994: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x501994u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x501998: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x501998u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x50199c: 0xc140448  jal         func_501120
    ctx->pc = 0x50199Cu;
    SET_GPR_U32(ctx, 31, 0x5019A4u);
    ctx->pc = 0x5019A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50199Cu;
            // 0x5019a0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x501120u;
    goto label_501120;
    ctx->pc = 0x5019A4u;
label_5019a4:
    // 0x5019a4: 0x11a03c  dsll32      $s4, $s1, 0
    ctx->pc = 0x5019a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 0));
    // 0x5019a8: 0x1000fdea  b           . + 4 + (-0x216 << 2)
    ctx->pc = 0x5019A8u;
    {
        const bool branch_taken_0x5019a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5019ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5019A8u;
            // 0x5019ac: 0x14a03f  dsra32      $s4, $s4, 0 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5019a8) {
            ctx->pc = 0x501154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_501154;
        }
    }
    ctx->pc = 0x5019B0u;
label_5019b0:
    // 0x5019b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x5019b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x5019b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5019b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5019b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5019b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5019bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5019bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5019c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5019c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5019c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5019c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5019c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5019c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5019cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5019ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5019d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5019d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5019d4: 0x3e00008  jr          $ra
    ctx->pc = 0x5019D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5019D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5019D4u;
            // 0x5019d8: 0x27bd19d0  addiu       $sp, $sp, 0x19D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5019DCu;
    // 0x5019dc: 0x0  nop
    ctx->pc = 0x5019dcu;
    // NOP
}
