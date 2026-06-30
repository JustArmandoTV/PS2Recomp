#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288140
// Address: 0x288140 - 0x2883f0
void sub_00288140_0x288140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288140_0x288140");
#endif

    switch (ctx->pc) {
        case 0x2881d8u: goto label_2881d8;
        case 0x288208u: goto label_288208;
        case 0x288220u: goto label_288220;
        case 0x28824cu: goto label_28824c;
        case 0x2882a8u: goto label_2882a8;
        case 0x2882d8u: goto label_2882d8;
        case 0x288304u: goto label_288304;
        case 0x288360u: goto label_288360;
        case 0x288394u: goto label_288394;
        default: break;
    }

    ctx->pc = 0x288140u;

    // 0x288140: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x288140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x288144: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x288144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x288148: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x288148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28814c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x288150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x288150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x288154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x288154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x288158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x288158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28815c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x288160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x288168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28816c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288170: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x288170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x288174: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x288174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288178: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x288178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x28817c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288180: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x288180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x288184: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x288184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28818c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x28818cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x288190: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x288190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x288194: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x288194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x288198: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x288198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x28819c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x28819cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2881a0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2881a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2881a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2881a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2881ac: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2881acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2881b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2881b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881b4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2881b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2881b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2881b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2881bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2881bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2881c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2881c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2881c4: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2881c8: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x2881c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2881cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2881ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881d0: 0xc0a1f90  jal         func_287E40
    ctx->pc = 0x2881D0u;
    SET_GPR_U32(ctx, 31, 0x2881D8u);
    ctx->pc = 0x2881D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2881D0u;
            // 0x2881d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E40u;
    if (runtime->hasFunction(0x287E40u)) {
        auto targetFn = runtime->lookupFunction(0x287E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881D8u; }
        if (ctx->pc != 0x2881D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E40_0x287e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881D8u; }
        if (ctx->pc != 0x2881D8u) { return; }
    }
    ctx->pc = 0x2881D8u;
label_2881d8:
    // 0x2881d8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2881d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2881dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2881dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2881e0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2881e4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2881e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2881e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2881e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2881ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2881ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2881f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2881f4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2881f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2881f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2881f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2881fc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2881fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x288200: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x288200u;
    {
        const bool branch_taken_0x288200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x288200) {
            ctx->pc = 0x2883B8u;
            goto label_2883b8;
        }
    }
    ctx->pc = 0x288208u;
label_288208:
    // 0x288208: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28820c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x28820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x288210: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x288210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x288214: 0x6a0002a  bltz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x288214u;
    {
        const bool branch_taken_0x288214 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x288218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288214u;
            // 0x288218: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288214) {
            ctx->pc = 0x2882C0u;
            goto label_2882c0;
        }
    }
    ctx->pc = 0x28821Cu;
    // 0x28821c: 0x1590c0  sll         $s2, $s5, 3
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_288220:
    // 0x288220: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x288220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x288224: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x288224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288228: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28822c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288230: 0x52f021  addu        $fp, $v0, $s2
    ctx->pc = 0x288230u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x288234: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x288234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288238: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x288238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28823c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288240: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x288240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288244: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x288244u;
    SET_GPR_U32(ctx, 31, 0x28824Cu);
    ctx->pc = 0x288248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288244u;
            // 0x288248: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28824Cu; }
        if (ctx->pc != 0x28824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28824Cu; }
        if (ctx->pc != 0x28824Cu) { return; }
    }
    ctx->pc = 0x28824Cu;
label_28824c:
    // 0x28824c: 0x3c0333d6  lui         $v1, 0x33D6
    ctx->pc = 0x28824cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13270 << 16));
    // 0x288250: 0x3464bf95  ori         $a0, $v1, 0xBF95
    ctx->pc = 0x288250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49045);
    // 0x288254: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x288254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x288258: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x288258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28825c: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x28825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x288260: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x288260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288264: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x288264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288268: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x288268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28826c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28826cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288270: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x288270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x288274: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x288274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288278: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x288278u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x28827c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x28827cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x288280: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x288280u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x288284: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x288284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x288288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28828c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28828Cu;
    {
        const bool branch_taken_0x28828c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x288290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28828Cu;
            // 0x288290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28828c) {
            ctx->pc = 0x2882B0u;
            goto label_2882b0;
        }
    }
    ctx->pc = 0x288294u;
    // 0x288294: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28829c: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x28829cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
    // 0x2882a0: 0xc0a1f90  jal         func_287E40
    ctx->pc = 0x2882A0u;
    SET_GPR_U32(ctx, 31, 0x2882A8u);
    ctx->pc = 0x2882A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882A0u;
            // 0x2882a4: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E40u;
    if (runtime->hasFunction(0x287E40u)) {
        auto targetFn = runtime->lookupFunction(0x287E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A8u; }
        if (ctx->pc != 0x2882A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E40_0x287e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A8u; }
        if (ctx->pc != 0x2882A8u) { return; }
    }
    ctx->pc = 0x2882A8u;
label_2882a8:
    // 0x2882a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2882a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2882ac: 0x0  nop
    ctx->pc = 0x2882acu;
    // NOP
label_2882b0:
    // 0x2882b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2882b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2882b4: 0x6a1ffda  bgez        $s5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2882B4u;
    {
        const bool branch_taken_0x2882b4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x2882B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882B4u;
            // 0x2882b8: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882b4) {
            ctx->pc = 0x288220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288220;
        }
    }
    ctx->pc = 0x2882BCu;
    // 0x2882bc: 0x0  nop
    ctx->pc = 0x2882bcu;
    // NOP
label_2882c0:
    // 0x2882c0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2882c4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2882c8: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2882cc: 0x6a0002a  bltz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x2882CCu;
    {
        const bool branch_taken_0x2882cc = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2882D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882CCu;
            // 0x2882d0: 0x1590c0  sll         $s2, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882cc) {
            ctx->pc = 0x288378u;
            goto label_288378;
        }
    }
    ctx->pc = 0x2882D4u;
    // 0x2882d4: 0x0  nop
    ctx->pc = 0x2882d4u;
    // NOP
label_2882d8:
    // 0x2882d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2882d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2882dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2882dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882e0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2882e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2882e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2882e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2882e8: 0x52f021  addu        $fp, $v0, $s2
    ctx->pc = 0x2882e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2882ec: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x2882ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2882f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2882f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2882f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2882f8: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2882f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2882fc: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x2882FCu;
    SET_GPR_U32(ctx, 31, 0x288304u);
    ctx->pc = 0x288300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882FCu;
            // 0x288300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288304u; }
        if (ctx->pc != 0x288304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288304u; }
        if (ctx->pc != 0x288304u) { return; }
    }
    ctx->pc = 0x288304u;
label_288304:
    // 0x288304: 0x3c0333d6  lui         $v1, 0x33D6
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13270 << 16));
    // 0x288308: 0x3464bf95  ori         $a0, $v1, 0xBF95
    ctx->pc = 0x288308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49045);
    // 0x28830c: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x28830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x288310: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x288310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x288314: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x288314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x288318: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x288318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28831c: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x28831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288320: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x288320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x288324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288328: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x288328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x28832c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x28832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288330: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x288330u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x288334: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x288334u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x288338: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x288338u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x28833c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x28833cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x288340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288344: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x288344u;
    {
        const bool branch_taken_0x288344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x288348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288344u;
            // 0x288348: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288344) {
            ctx->pc = 0x288368u;
            goto label_288368;
        }
    }
    ctx->pc = 0x28834Cu;
    // 0x28834c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288350: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288354: 0xae3e0004  sw          $fp, 0x4($s1)
    ctx->pc = 0x288354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 30));
    // 0x288358: 0xc0a1f90  jal         func_287E40
    ctx->pc = 0x288358u;
    SET_GPR_U32(ctx, 31, 0x288360u);
    ctx->pc = 0x28835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288358u;
            // 0x28835c: 0x280b82d  daddu       $s7, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E40u;
    if (runtime->hasFunction(0x287E40u)) {
        auto targetFn = runtime->lookupFunction(0x287E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288360u; }
        if (ctx->pc != 0x288360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E40_0x287e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288360u; }
        if (ctx->pc != 0x288360u) { return; }
    }
    ctx->pc = 0x288360u;
label_288360:
    // 0x288360: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288364: 0x0  nop
    ctx->pc = 0x288364u;
    // NOP
label_288368:
    // 0x288368: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x28836c: 0x6a1ffda  bgez        $s5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x28836Cu;
    {
        const bool branch_taken_0x28836c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x288370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28836Cu;
            // 0x288370: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28836c) {
            ctx->pc = 0x2882D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2882d8;
        }
    }
    ctx->pc = 0x288374u;
    // 0x288374: 0x0  nop
    ctx->pc = 0x288374u;
    // NOP
label_288378:
    // 0x288378: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x288378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x28837c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28837cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x288380: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x288380u;
    {
        const bool branch_taken_0x288380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288380u;
            // 0x288384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288380) {
            ctx->pc = 0x2883B8u;
            goto label_2883b8;
        }
    }
    ctx->pc = 0x288388u;
    // 0x288388: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28838c: 0xc0a1f90  jal         func_287E40
    ctx->pc = 0x28838Cu;
    SET_GPR_U32(ctx, 31, 0x288394u);
    ctx->pc = 0x288390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28838Cu;
            // 0x288390: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E40u;
    if (runtime->hasFunction(0x287E40u)) {
        auto targetFn = runtime->lookupFunction(0x287E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288394u; }
        if (ctx->pc != 0x288394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E40_0x287e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288394u; }
        if (ctx->pc != 0x288394u) { return; }
    }
    ctx->pc = 0x288394u;
label_288394:
    // 0x288394: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28839c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x28839cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x2883a0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2883a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2883a4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2883a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2883a8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2883ac: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2883ACu;
    {
        const bool branch_taken_0x2883ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2883ac) {
            ctx->pc = 0x288208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288208;
        }
    }
    ctx->pc = 0x2883B4u;
    // 0x2883b4: 0x0  nop
    ctx->pc = 0x2883b4u;
    // NOP
label_2883b8:
    // 0x2883b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2883b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2883bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2883bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2883c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2883c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2883c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2883c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2883c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2883c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2883cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2883ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2883d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2883d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2883d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2883d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2883d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2883d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2883dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2883dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2883e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2883E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2883E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883E0u;
            // 0x2883e4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2883E8u;
    // 0x2883e8: 0x0  nop
    ctx->pc = 0x2883e8u;
    // NOP
    // 0x2883ec: 0x0  nop
    ctx->pc = 0x2883ecu;
    // NOP
}
