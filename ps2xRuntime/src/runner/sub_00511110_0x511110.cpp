#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00511110
// Address: 0x511110 - 0x5112d0
void sub_00511110_0x511110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511110_0x511110");
#endif

    switch (ctx->pc) {
        case 0x511110u: goto label_511110;
        case 0x511114u: goto label_511114;
        case 0x511118u: goto label_511118;
        case 0x51111cu: goto label_51111c;
        case 0x511120u: goto label_511120;
        case 0x511124u: goto label_511124;
        case 0x511128u: goto label_511128;
        case 0x51112cu: goto label_51112c;
        case 0x511130u: goto label_511130;
        case 0x511134u: goto label_511134;
        case 0x511138u: goto label_511138;
        case 0x51113cu: goto label_51113c;
        case 0x511140u: goto label_511140;
        case 0x511144u: goto label_511144;
        case 0x511148u: goto label_511148;
        case 0x51114cu: goto label_51114c;
        case 0x511150u: goto label_511150;
        case 0x511154u: goto label_511154;
        case 0x511158u: goto label_511158;
        case 0x51115cu: goto label_51115c;
        case 0x511160u: goto label_511160;
        case 0x511164u: goto label_511164;
        case 0x511168u: goto label_511168;
        case 0x51116cu: goto label_51116c;
        case 0x511170u: goto label_511170;
        case 0x511174u: goto label_511174;
        case 0x511178u: goto label_511178;
        case 0x51117cu: goto label_51117c;
        case 0x511180u: goto label_511180;
        case 0x511184u: goto label_511184;
        case 0x511188u: goto label_511188;
        case 0x51118cu: goto label_51118c;
        case 0x511190u: goto label_511190;
        case 0x511194u: goto label_511194;
        case 0x511198u: goto label_511198;
        case 0x51119cu: goto label_51119c;
        case 0x5111a0u: goto label_5111a0;
        case 0x5111a4u: goto label_5111a4;
        case 0x5111a8u: goto label_5111a8;
        case 0x5111acu: goto label_5111ac;
        case 0x5111b0u: goto label_5111b0;
        case 0x5111b4u: goto label_5111b4;
        case 0x5111b8u: goto label_5111b8;
        case 0x5111bcu: goto label_5111bc;
        case 0x5111c0u: goto label_5111c0;
        case 0x5111c4u: goto label_5111c4;
        case 0x5111c8u: goto label_5111c8;
        case 0x5111ccu: goto label_5111cc;
        case 0x5111d0u: goto label_5111d0;
        case 0x5111d4u: goto label_5111d4;
        case 0x5111d8u: goto label_5111d8;
        case 0x5111dcu: goto label_5111dc;
        case 0x5111e0u: goto label_5111e0;
        case 0x5111e4u: goto label_5111e4;
        case 0x5111e8u: goto label_5111e8;
        case 0x5111ecu: goto label_5111ec;
        case 0x5111f0u: goto label_5111f0;
        case 0x5111f4u: goto label_5111f4;
        case 0x5111f8u: goto label_5111f8;
        case 0x5111fcu: goto label_5111fc;
        case 0x511200u: goto label_511200;
        case 0x511204u: goto label_511204;
        case 0x511208u: goto label_511208;
        case 0x51120cu: goto label_51120c;
        case 0x511210u: goto label_511210;
        case 0x511214u: goto label_511214;
        case 0x511218u: goto label_511218;
        case 0x51121cu: goto label_51121c;
        case 0x511220u: goto label_511220;
        case 0x511224u: goto label_511224;
        case 0x511228u: goto label_511228;
        case 0x51122cu: goto label_51122c;
        case 0x511230u: goto label_511230;
        case 0x511234u: goto label_511234;
        case 0x511238u: goto label_511238;
        case 0x51123cu: goto label_51123c;
        case 0x511240u: goto label_511240;
        case 0x511244u: goto label_511244;
        case 0x511248u: goto label_511248;
        case 0x51124cu: goto label_51124c;
        case 0x511250u: goto label_511250;
        case 0x511254u: goto label_511254;
        case 0x511258u: goto label_511258;
        case 0x51125cu: goto label_51125c;
        case 0x511260u: goto label_511260;
        case 0x511264u: goto label_511264;
        case 0x511268u: goto label_511268;
        case 0x51126cu: goto label_51126c;
        case 0x511270u: goto label_511270;
        case 0x511274u: goto label_511274;
        case 0x511278u: goto label_511278;
        case 0x51127cu: goto label_51127c;
        case 0x511280u: goto label_511280;
        case 0x511284u: goto label_511284;
        case 0x511288u: goto label_511288;
        case 0x51128cu: goto label_51128c;
        case 0x511290u: goto label_511290;
        case 0x511294u: goto label_511294;
        case 0x511298u: goto label_511298;
        case 0x51129cu: goto label_51129c;
        case 0x5112a0u: goto label_5112a0;
        case 0x5112a4u: goto label_5112a4;
        case 0x5112a8u: goto label_5112a8;
        case 0x5112acu: goto label_5112ac;
        case 0x5112b0u: goto label_5112b0;
        case 0x5112b4u: goto label_5112b4;
        case 0x5112b8u: goto label_5112b8;
        case 0x5112bcu: goto label_5112bc;
        case 0x5112c0u: goto label_5112c0;
        case 0x5112c4u: goto label_5112c4;
        case 0x5112c8u: goto label_5112c8;
        case 0x5112ccu: goto label_5112cc;
        default: break;
    }

    ctx->pc = 0x511110u;

label_511110:
    // 0x511110: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x511110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_511114:
    // 0x511114: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x511114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_511118:
    // 0x511118: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x511118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51111c:
    // 0x51111c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x51111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_511120:
    // 0x511120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x511120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_511124:
    // 0x511124: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x511124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_511128:
    // 0x511128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x511128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51112c:
    // 0x51112c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x51112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_511130:
    // 0x511130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x511130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_511134:
    // 0x511134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x511134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_511138:
    // 0x511138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x511138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51113c:
    // 0x51113c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x51113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_511140:
    // 0x511140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x511140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_511144:
    // 0x511144: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x511144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_511148:
    // 0x511148: 0x8c6300e0  lw          $v1, 0xE0($v1)
    ctx->pc = 0x511148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_51114c:
    // 0x51114c: 0x18600058  blez        $v1, . + 4 + (0x58 << 2)
label_511150:
    if (ctx->pc == 0x511150u) {
        ctx->pc = 0x511154u;
        goto label_511154;
    }
    ctx->pc = 0x51114Cu;
    {
        const bool branch_taken_0x51114c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x51114c) {
            ctx->pc = 0x5112B0u;
            goto label_5112b0;
        }
    }
    ctx->pc = 0x511154u;
label_511154:
    // 0x511154: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x511154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511158:
    // 0x511158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x511158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51115c:
    // 0x51115c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x51115cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511160:
    // 0x511160: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x511160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511164:
    // 0x511164: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x511164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_511168:
    // 0x511168: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_51116c:
    if (ctx->pc == 0x51116Cu) {
        ctx->pc = 0x511170u;
        goto label_511170;
    }
    ctx->pc = 0x511168u;
    {
        const bool branch_taken_0x511168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511168) {
            ctx->pc = 0x5111F8u;
            goto label_5111f8;
        }
    }
    ctx->pc = 0x511170u;
label_511170:
    // 0x511170: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x511170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_511174:
    // 0x511174: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x511174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_511178:
    // 0x511178: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x511178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_51117c:
    // 0x51117c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_511180:
    if (ctx->pc == 0x511180u) {
        ctx->pc = 0x511184u;
        goto label_511184;
    }
    ctx->pc = 0x51117Cu;
    {
        const bool branch_taken_0x51117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51117c) {
            ctx->pc = 0x5111F8u;
            goto label_5111f8;
        }
    }
    ctx->pc = 0x511184u;
label_511184:
    // 0x511184: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x511184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_511188:
    // 0x511188: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_51118c:
    if (ctx->pc == 0x51118Cu) {
        ctx->pc = 0x511190u;
        goto label_511190;
    }
    ctx->pc = 0x511188u;
    {
        const bool branch_taken_0x511188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x511188) {
            ctx->pc = 0x5111D0u;
            goto label_5111d0;
        }
    }
    ctx->pc = 0x511190u;
label_511190:
    // 0x511190: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x511190u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_511194:
    // 0x511194: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x511194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_511198:
    // 0x511198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x511198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_51119c:
    // 0x51119c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x51119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_5111a0:
    // 0x5111a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x5111a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_5111a4:
    // 0x5111a4: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x5111a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_5111a8:
    // 0x5111a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5111a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5111ac:
    // 0x5111ac: 0xc143a64  jal         func_50E990
label_5111b0:
    if (ctx->pc == 0x5111B0u) {
        ctx->pc = 0x5111B0u;
            // 0x5111b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5111B4u;
        goto label_5111b4;
    }
    ctx->pc = 0x5111ACu;
    SET_GPR_U32(ctx, 31, 0x5111B4u);
    ctx->pc = 0x5111B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5111ACu;
            // 0x5111b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x50E990u;
    if (runtime->hasFunction(0x50E990u)) {
        auto targetFn = runtime->lookupFunction(0x50E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5111B4u; }
        if (ctx->pc != 0x5111B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050E990_0x50e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5111B4u; }
        if (ctx->pc != 0x5111B4u) { return; }
    }
    ctx->pc = 0x5111B4u;
label_5111b4:
    // 0x5111b4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x5111b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_5111b8:
    // 0x5111b8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x5111b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5111bc:
    // 0x5111bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x5111bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_5111c0:
    // 0x5111c0: 0x9810  mfhi        $s3
    ctx->pc = 0x5111c0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_5111c4:
    // 0x5111c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_5111c8:
    if (ctx->pc == 0x5111C8u) {
        ctx->pc = 0x5111CCu;
        goto label_5111cc;
    }
    ctx->pc = 0x5111C4u;
    {
        const bool branch_taken_0x5111c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5111c4) {
            ctx->pc = 0x5111F0u;
            goto label_5111f0;
        }
    }
    ctx->pc = 0x5111CCu;
label_5111cc:
    // 0x5111cc: 0x0  nop
    ctx->pc = 0x5111ccu;
    // NOP
label_5111d0:
    // 0x5111d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5111d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_5111d4:
    // 0x5111d4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5111d4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5111d8:
    // 0x5111d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5111d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5111dc:
    // 0x5111dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5111dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5111e0:
    // 0x5111e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5111e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5111e4:
    // 0x5111e4: 0xc143a64  jal         func_50E990
label_5111e8:
    if (ctx->pc == 0x5111E8u) {
        ctx->pc = 0x5111E8u;
            // 0x5111e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5111ECu;
        goto label_5111ec;
    }
    ctx->pc = 0x5111E4u;
    SET_GPR_U32(ctx, 31, 0x5111ECu);
    ctx->pc = 0x5111E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5111E4u;
            // 0x5111e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x50E990u;
    if (runtime->hasFunction(0x50E990u)) {
        auto targetFn = runtime->lookupFunction(0x50E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5111ECu; }
        if (ctx->pc != 0x5111ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050E990_0x50e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5111ECu; }
        if (ctx->pc != 0x5111ECu) { return; }
    }
    ctx->pc = 0x5111ECu;
label_5111ec:
    // 0x5111ec: 0x0  nop
    ctx->pc = 0x5111ecu;
    // NOP
label_5111f0:
    // 0x5111f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x5111f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_5111f4:
    // 0x5111f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5111f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5111f8:
    // 0x5111f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5111f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5111fc:
    // 0x5111fc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x5111fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_511200:
    // 0x511200: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_511204:
    if (ctx->pc == 0x511204u) {
        ctx->pc = 0x511204u;
            // 0x511204: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x511208u;
        goto label_511208;
    }
    ctx->pc = 0x511200u;
    {
        const bool branch_taken_0x511200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511200u;
            // 0x511204: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511200) {
            ctx->pc = 0x511164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511164;
        }
    }
    ctx->pc = 0x511208u;
label_511208:
    // 0x511208: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x511208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_51120c:
    // 0x51120c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51120cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511210:
    // 0x511210: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x511210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_511214:
    // 0x511214: 0xc04a576  jal         func_1295D8
label_511218:
    if (ctx->pc == 0x511218u) {
        ctx->pc = 0x511218u;
            // 0x511218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51121Cu;
        goto label_51121c;
    }
    ctx->pc = 0x511214u;
    SET_GPR_U32(ctx, 31, 0x51121Cu);
    ctx->pc = 0x511218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511214u;
            // 0x511218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51121Cu; }
        if (ctx->pc != 0x51121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51121Cu; }
        if (ctx->pc != 0x51121Cu) { return; }
    }
    ctx->pc = 0x51121Cu;
label_51121c:
    // 0x51121c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x51121cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_511220:
    // 0x511220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x511220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_511224:
    // 0x511224: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x511224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_511228:
    // 0x511228: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_51122c:
    if (ctx->pc == 0x51122Cu) {
        ctx->pc = 0x511230u;
        goto label_511230;
    }
    ctx->pc = 0x511228u;
    {
        const bool branch_taken_0x511228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511228) {
            ctx->pc = 0x511248u;
            goto label_511248;
        }
    }
    ctx->pc = 0x511230u;
label_511230:
    // 0x511230: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x511230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_511234:
    // 0x511234: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x511234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_511238:
    // 0x511238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x511238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_51123c:
    // 0x51123c: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x51123cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_511240:
    // 0x511240: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x511240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_511244:
    // 0x511244: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x511244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
label_511248:
    // 0x511248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x511248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_51124c:
    // 0x51124c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x51124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_511250:
    // 0x511250: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_511254:
    if (ctx->pc == 0x511254u) {
        ctx->pc = 0x511254u;
            // 0x511254: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x511258u;
        goto label_511258;
    }
    ctx->pc = 0x511250u;
    {
        const bool branch_taken_0x511250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511250u;
            // 0x511254: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511250) {
            ctx->pc = 0x511224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511224;
        }
    }
    ctx->pc = 0x511258u;
label_511258:
    // 0x511258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x511258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51125c:
    // 0x51125c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x51125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_511260:
    // 0x511260: 0xc04a508  jal         func_129420
label_511264:
    if (ctx->pc == 0x511264u) {
        ctx->pc = 0x511264u;
            // 0x511264: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x511268u;
        goto label_511268;
    }
    ctx->pc = 0x511260u;
    SET_GPR_U32(ctx, 31, 0x511268u);
    ctx->pc = 0x511264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x511260u;
            // 0x511264: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511268u; }
        if (ctx->pc != 0x511268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x511268u; }
        if (ctx->pc != 0x511268u) { return; }
    }
    ctx->pc = 0x511268u;
label_511268:
    // 0x511268: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x511268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_51126c:
    // 0x51126c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x51126cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_511270:
    // 0x511270: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x511270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_511274:
    // 0x511274: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_511278:
    if (ctx->pc == 0x511278u) {
        ctx->pc = 0x51127Cu;
        goto label_51127c;
    }
    ctx->pc = 0x511274u;
    {
        const bool branch_taken_0x511274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x511274) {
            ctx->pc = 0x511290u;
            goto label_511290;
        }
    }
    ctx->pc = 0x51127Cu;
label_51127c:
    // 0x51127c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51127cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_511280:
    // 0x511280: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x511280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_511284:
    // 0x511284: 0x320f809  jalr        $t9
label_511288:
    if (ctx->pc == 0x511288u) {
        ctx->pc = 0x511288u;
            // 0x511288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51128Cu;
        goto label_51128c;
    }
    ctx->pc = 0x511284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51128Cu);
        ctx->pc = 0x511288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x511284u;
            // 0x511288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51128Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51128Cu; }
            if (ctx->pc != 0x51128Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51128Cu;
label_51128c:
    // 0x51128c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x51128cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_511290:
    // 0x511290: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x511290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_511294:
    // 0x511294: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x511294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_511298:
    // 0x511298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x511298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_51129c:
    // 0x51129c: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x51129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_5112a0:
    // 0x5112a0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x5112a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5112a4:
    // 0x5112a4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_5112a8:
    if (ctx->pc == 0x5112A8u) {
        ctx->pc = 0x5112A8u;
            // 0x5112a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x5112ACu;
        goto label_5112ac;
    }
    ctx->pc = 0x5112A4u;
    {
        const bool branch_taken_0x5112a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5112A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5112A4u;
            // 0x5112a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5112a4) {
            ctx->pc = 0x511270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_511270;
        }
    }
    ctx->pc = 0x5112ACu;
label_5112ac:
    // 0x5112ac: 0x0  nop
    ctx->pc = 0x5112acu;
    // NOP
label_5112b0:
    // 0x5112b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5112b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5112b4:
    // 0x5112b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5112b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5112b8:
    // 0x5112b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5112b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5112bc:
    // 0x5112bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5112bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5112c0:
    // 0x5112c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5112c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5112c4:
    // 0x5112c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5112c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5112c8:
    // 0x5112c8: 0x3e00008  jr          $ra
label_5112cc:
    if (ctx->pc == 0x5112CCu) {
        ctx->pc = 0x5112CCu;
            // 0x5112cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5112D0u;
        goto label_fallthrough_0x5112c8;
    }
    ctx->pc = 0x5112C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5112CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5112C8u;
            // 0x5112cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5112c8:
    ctx->pc = 0x5112D0u;
}
