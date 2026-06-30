#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005490C0
// Address: 0x5490c0 - 0x5496e0
void sub_005490C0_0x5490c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005490C0_0x5490c0");
#endif

    switch (ctx->pc) {
        case 0x549210u: goto label_549210;
        case 0x5492f0u: goto label_5492f0;
        case 0x5493c8u: goto label_5493c8;
        case 0x549478u: goto label_549478;
        case 0x549520u: goto label_549520;
        case 0x5495f8u: goto label_5495f8;
        case 0x5496a8u: goto label_5496a8;
        default: break;
    }

    ctx->pc = 0x5490c0u;

    // 0x5490c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5490c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x5490c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5490c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x5490c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5490c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x5490cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5490ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5490d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5490d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x5490d4: 0x2463e790  addiu       $v1, $v1, -0x1870
    ctx->pc = 0x5490d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961040));
    // 0x5490d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5490d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x5490dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5490dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x5490e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5490e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5490e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5490e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x5490e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5490e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5490ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5490ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x5490f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5490f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x5490f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5490f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x5490f8: 0x9452d9f8  lhu         $s2, -0x2608($v0)
    ctx->pc = 0x5490f8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x5490fc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x5490fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x549100: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x549100u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x549104: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x549104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x549108: 0x9451d9fa  lhu         $s1, -0x2606($v0)
    ctx->pc = 0x549108u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957562)));
    // 0x54910c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x54910cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x549110: 0x34478889  ori         $a3, $v0, 0x8889
    ctx->pc = 0x549110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x549114: 0xe50019  multu       $a3, $a1
    ctx->pc = 0x549114u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549118: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x549118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x54911c: 0x2442e920  addiu       $v0, $v0, -0x16E0
    ctx->pc = 0x54911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    // 0x549120: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x549120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x549124: 0x2810  mfhi        $a1
    ctx->pc = 0x549124u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x549128: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x549128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x54912c: 0x53142  srl         $a2, $a1, 5
    ctx->pc = 0x54912cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x549130: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x549130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x549134: 0xe60019  multu       $a3, $a2
    ctx->pc = 0x549134u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549138: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x549138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x54913c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x54913cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x549140: 0x9442d9f8  lhu         $v0, -0x2608($v0)
    ctx->pc = 0x549140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x549144: 0x2810  mfhi        $a1
    ctx->pc = 0x549144u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x549148: 0x54142  srl         $t0, $a1, 5
    ctx->pc = 0x549148u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x54914c: 0x880019  multu       $a0, $t0
    ctx->pc = 0x54914cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549150: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x549150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x549154: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x549154u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x549158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x549158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x54915c: 0xc48023  subu        $s0, $a2, $a0
    ctx->pc = 0x54915cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x549160: 0x2010  mfhi        $a0
    ctx->pc = 0x549160u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x549164: 0x43982  srl         $a3, $a0, 6
    ctx->pc = 0x549164u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x549168: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x549168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x54916c: 0x24e40019  addiu       $a0, $a3, 0x19
    ctx->pc = 0x54916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25));
    // 0x549170: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x549170u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x549174: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x549174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x549178: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x549178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x54917c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x54917cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x549180: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x549180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x549184: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x549184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x549188: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x549188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x54918c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x549190: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x549190u;
    {
        const bool branch_taken_0x549190 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x549194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549190u;
            // 0x549194: 0x103a023  subu        $s4, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549190) {
            ctx->pc = 0x5491A4u;
            goto label_5491a4;
        }
    }
    ctx->pc = 0x549198u;
    // 0x549198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x549198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54919c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x54919Cu;
    {
        const bool branch_taken_0x54919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5491A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54919Cu;
            // 0x5491a0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54919c) {
            ctx->pc = 0x5491C0u;
            goto label_5491c0;
        }
    }
    ctx->pc = 0x5491A4u;
label_5491a4:
    // 0x5491a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5491a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x5491a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5491a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x5491ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5491acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5491b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5491b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5491b4: 0x0  nop
    ctx->pc = 0x5491b4u;
    // NOP
    // 0x5491b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5491b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x5491bc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5491bcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5491c0:
    // 0x5491c0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5491C0u;
    {
        const bool branch_taken_0x5491c0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5491c0) {
            ctx->pc = 0x5491C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5491C0u;
            // 0x5491c4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5491D4u;
            goto label_5491d4;
        }
    }
    ctx->pc = 0x5491C8u;
    // 0x5491c8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5491c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5491cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5491CCu;
    {
        const bool branch_taken_0x5491cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5491D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5491CCu;
            // 0x5491d0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5491cc) {
            ctx->pc = 0x5491ECu;
            goto label_5491ec;
        }
    }
    ctx->pc = 0x5491D4u;
label_5491d4:
    // 0x5491d4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5491d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5491d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5491d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5491dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5491dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5491e0: 0x0  nop
    ctx->pc = 0x5491e0u;
    // NOP
    // 0x5491e4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5491e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5491e8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5491e8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5491ec:
    // 0x5491ec: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5491ecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x5491f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5491f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5491f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5491f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5491f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5491f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5491fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5491fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549200: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x549200u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x549204: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x549204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x549208: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x549208u;
    SET_GPR_U32(ctx, 31, 0x549210u);
    ctx->pc = 0x54920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549208u;
            // 0x54920c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549210u; }
        if (ctx->pc != 0x549210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549210u; }
        if (ctx->pc != 0x549210u) { return; }
    }
    ctx->pc = 0x549210u;
label_549210:
    // 0x549210: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x549210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x549214: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x549214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x549218: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x549218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x54921c: 0x540019  multu       $v0, $s4
    ctx->pc = 0x54921cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x549220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x549224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549228: 0x0  nop
    ctx->pc = 0x549228u;
    // NOP
    // 0x54922c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54922cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549230: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x549230u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549234: 0x1810  mfhi        $v1
    ctx->pc = 0x549234u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x549238: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x549238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x54923c: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x54923cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x549240: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x549240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x549244: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x549244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x549248: 0x24a30019  addiu       $v1, $a1, 0x19
    ctx->pc = 0x549248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
    // 0x54924c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x54924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x549250: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x549250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x549254: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x549258: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x549258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x54925c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x54925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x549260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x549260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x549264: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x549264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x549268: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x549268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x54926c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x54926Cu;
    {
        const bool branch_taken_0x54926c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54926Cu;
            // 0x549270: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54926c) {
            ctx->pc = 0x549280u;
            goto label_549280;
        }
    }
    ctx->pc = 0x549274u;
    // 0x549274: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549274u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549278u;
    {
        const bool branch_taken_0x549278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549278u;
            // 0x54927c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549278) {
            ctx->pc = 0x54929Cu;
            goto label_54929c;
        }
    }
    ctx->pc = 0x549280u;
label_549280:
    // 0x549280: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x549284: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54928c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54928cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549290: 0x0  nop
    ctx->pc = 0x549290u;
    // NOP
    // 0x549294: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x549298: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549298u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54929c:
    // 0x54929c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x54929Cu;
    {
        const bool branch_taken_0x54929c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54929c) {
            ctx->pc = 0x5492A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54929Cu;
            // 0x5492a0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5492B0u;
            goto label_5492b0;
        }
    }
    ctx->pc = 0x5492A4u;
    // 0x5492a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5492a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5492a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5492A8u;
    {
        const bool branch_taken_0x5492a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5492ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5492A8u;
            // 0x5492ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5492a8) {
            ctx->pc = 0x5492C8u;
            goto label_5492c8;
        }
    }
    ctx->pc = 0x5492B0u;
label_5492b0:
    // 0x5492b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5492b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5492b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5492b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5492b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5492b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5492bc: 0x0  nop
    ctx->pc = 0x5492bcu;
    // NOP
    // 0x5492c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5492c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5492c4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5492c4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5492c8:
    // 0x5492c8: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5492c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x5492cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5492ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5492d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5492d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5492d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5492d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5492d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5492dc: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x5492dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x5492e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5492e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x5492e4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5492e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5492e8: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5492E8u;
    SET_GPR_U32(ctx, 31, 0x5492F0u);
    ctx->pc = 0x5492ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5492E8u;
            // 0x5492ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5492F0u; }
        if (ctx->pc != 0x5492F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5492F0u; }
        if (ctx->pc != 0x5492F0u) { return; }
    }
    ctx->pc = 0x5492F0u;
label_5492f0:
    // 0x5492f0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x5492f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x5492f4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x5492f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x5492f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x5492f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x5492fc: 0x540019  multu       $v0, $s4
    ctx->pc = 0x5492fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549300: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x549300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x549304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549308: 0x0  nop
    ctx->pc = 0x549308u;
    // NOP
    // 0x54930c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54930cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549310: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x549310u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549314: 0x1810  mfhi        $v1
    ctx->pc = 0x549314u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x549318: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x549318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x54931c: 0x328c2  srl         $a1, $v1, 3
    ctx->pc = 0x54931cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x549320: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x549320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x549324: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x549324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x549328: 0x24a30019  addiu       $v1, $a1, 0x19
    ctx->pc = 0x549328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
    // 0x54932c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x54932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x549330: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x549330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x549334: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x549338: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x549338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x54933c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x54933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x549340: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x549340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x549344: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x549344u;
    {
        const bool branch_taken_0x549344 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549344u;
            // 0x549348: 0x282a023  subu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x549344) {
            ctx->pc = 0x549358u;
            goto label_549358;
        }
    }
    ctx->pc = 0x54934Cu;
    // 0x54934c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54934cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549350u;
    {
        const bool branch_taken_0x549350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549350u;
            // 0x549354: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549350) {
            ctx->pc = 0x549374u;
            goto label_549374;
        }
    }
    ctx->pc = 0x549358u;
label_549358:
    // 0x549358: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x54935c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549368: 0x0  nop
    ctx->pc = 0x549368u;
    // NOP
    // 0x54936c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54936cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x549370: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549370u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549374:
    // 0x549374: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x549374u;
    {
        const bool branch_taken_0x549374 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549374) {
            ctx->pc = 0x549378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549374u;
            // 0x549378: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549388u;
            goto label_549388;
        }
    }
    ctx->pc = 0x54937Cu;
    // 0x54937c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54937cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549380: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x549380u;
    {
        const bool branch_taken_0x549380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549380u;
            // 0x549384: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549380) {
            ctx->pc = 0x5493A0u;
            goto label_5493a0;
        }
    }
    ctx->pc = 0x549388u;
label_549388:
    // 0x549388: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x54938c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549394: 0x0  nop
    ctx->pc = 0x549394u;
    // NOP
    // 0x549398: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x54939c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54939cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5493a0:
    // 0x5493a0: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5493a0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x5493a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5493a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5493a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5493a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5493ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5493acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5493b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5493b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5493b4: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x5493b4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x5493b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5493b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x5493bc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5493bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5493c0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5493C0u;
    SET_GPR_U32(ctx, 31, 0x5493C8u);
    ctx->pc = 0x5493C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5493C0u;
            // 0x5493c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5493C8u; }
        if (ctx->pc != 0x5493C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5493C8u; }
        if (ctx->pc != 0x5493C8u) { return; }
    }
    ctx->pc = 0x5493C8u;
label_5493c8:
    // 0x5493c8: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x5493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x5493cc: 0x26820019  addiu       $v0, $s4, 0x19
    ctx->pc = 0x5493ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 25));
    // 0x5493d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5493d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5493d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x5493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5493d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5493d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5493dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5493dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x5493e0: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x5493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x5493e4: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x5493e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x5493e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x5493e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5493ec: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x5493ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x5493f0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5493f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5493f4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x5493F4u;
    {
        const bool branch_taken_0x5493f4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5493F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5493F4u;
            // 0x5493f8: 0xc4b60008  lwc1        $f22, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5493f4) {
            ctx->pc = 0x549408u;
            goto label_549408;
        }
    }
    ctx->pc = 0x5493FCu;
    // 0x5493fc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5493fcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549400u;
    {
        const bool branch_taken_0x549400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549400u;
            // 0x549404: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549400) {
            ctx->pc = 0x549424u;
            goto label_549424;
        }
    }
    ctx->pc = 0x549408u;
label_549408:
    // 0x549408: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549408u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x54940c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549418: 0x0  nop
    ctx->pc = 0x549418u;
    // NOP
    // 0x54941c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54941cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x549420: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549420u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_549424:
    // 0x549424: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x549424u;
    {
        const bool branch_taken_0x549424 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x549424) {
            ctx->pc = 0x549428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x549424u;
            // 0x549428: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549438u;
            goto label_549438;
        }
    }
    ctx->pc = 0x54942Cu;
    // 0x54942c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54942cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x549430u;
    {
        const bool branch_taken_0x549430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549430u;
            // 0x549434: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549430) {
            ctx->pc = 0x549450u;
            goto label_549450;
        }
    }
    ctx->pc = 0x549438u;
label_549438:
    // 0x549438: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x54943c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549444: 0x0  nop
    ctx->pc = 0x549444u;
    // NOP
    // 0x549448: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x54944c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54944cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549450:
    // 0x549450: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x549450u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x549454: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x549458: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x54945c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54945cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x549460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549464: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x549464u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x549468: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x549468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x54946c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x549470: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x549470u;
    SET_GPR_U32(ctx, 31, 0x549478u);
    ctx->pc = 0x549474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549470u;
            // 0x549474: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549478u; }
        if (ctx->pc != 0x549478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549478u; }
        if (ctx->pc != 0x549478u) { return; }
    }
    ctx->pc = 0x549478u;
label_549478:
    // 0x549478: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x549478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x54947c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54947cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x549480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549484: 0x24a5e9d0  addiu       $a1, $a1, -0x1630
    ctx->pc = 0x549484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    // 0x549488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x549488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x54948c: 0x0  nop
    ctx->pc = 0x54948cu;
    // NOP
    // 0x549490: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x549490u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549494: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x549494u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549498: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x549498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x54949c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x54949Cu;
    {
        const bool branch_taken_0x54949c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5494A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54949Cu;
            // 0x5494a0: 0xc4b60008  lwc1        $f22, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54949c) {
            ctx->pc = 0x5494B0u;
            goto label_5494b0;
        }
    }
    ctx->pc = 0x5494A4u;
    // 0x5494a4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5494a4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5494a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5494A8u;
    {
        const bool branch_taken_0x5494a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5494ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5494A8u;
            // 0x5494ac: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5494a8) {
            ctx->pc = 0x5494CCu;
            goto label_5494cc;
        }
    }
    ctx->pc = 0x5494B0u;
label_5494b0:
    // 0x5494b0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x5494b4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5494b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x5494b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5494b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5494bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5494bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5494c0: 0x0  nop
    ctx->pc = 0x5494c0u;
    // NOP
    // 0x5494c4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5494c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x5494c8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5494c8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5494cc:
    // 0x5494cc: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5494CCu;
    {
        const bool branch_taken_0x5494cc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5494cc) {
            ctx->pc = 0x5494D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5494CCu;
            // 0x5494d0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5494E0u;
            goto label_5494e0;
        }
    }
    ctx->pc = 0x5494D4u;
    // 0x5494d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5494d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5494d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5494D8u;
    {
        const bool branch_taken_0x5494d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5494DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5494D8u;
            // 0x5494dc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5494d8) {
            ctx->pc = 0x5494F8u;
            goto label_5494f8;
        }
    }
    ctx->pc = 0x5494E0u;
label_5494e0:
    // 0x5494e0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5494e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5494e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5494e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5494e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5494e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5494ec: 0x0  nop
    ctx->pc = 0x5494ecu;
    // NOP
    // 0x5494f0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5494f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5494f4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5494f4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5494f8:
    // 0x5494f8: 0x4601a3c0  add.s       $f15, $f20, $f1
    ctx->pc = 0x5494f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x5494fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5494fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x549500: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x549504: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x549504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x549508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54950c: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x54950cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x549510: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x549510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x549514: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x549514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x549518: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x549518u;
    SET_GPR_U32(ctx, 31, 0x549520u);
    ctx->pc = 0x54951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x549518u;
            // 0x54951c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549520u; }
        if (ctx->pc != 0x549520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x549520u; }
        if (ctx->pc != 0x549520u) { return; }
    }
    ctx->pc = 0x549520u;
label_549520:
    // 0x549520: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x549520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x549524: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x549524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x549528: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x549528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x54952c: 0x500019  multu       $v0, $s0
    ctx->pc = 0x54952cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x549530: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x549530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x549534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549538: 0x0  nop
    ctx->pc = 0x549538u;
    // NOP
    // 0x54953c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54953cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549540: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x549540u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549544: 0x1810  mfhi        $v1
    ctx->pc = 0x549544u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x549548: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x549548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x54954c: 0x328c2  srl         $a1, $v1, 3
    ctx->pc = 0x54954cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x549550: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x549550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x549554: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x549554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x549558: 0x24a30019  addiu       $v1, $a1, 0x19
    ctx->pc = 0x549558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
    // 0x54955c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x54955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x549560: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x549560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x549564: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x549568: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x549568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x54956c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x54956cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x549570: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x549570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x549574: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x549574u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x549578: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x549578u;
    {
        const bool branch_taken_0x549578 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549578u;
            // 0x54957c: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x549578) {
            ctx->pc = 0x54958Cu;
            goto label_54958c;
        }
    }
    ctx->pc = 0x549580u;
    // 0x549580: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549580u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549584u;
    {
        const bool branch_taken_0x549584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x549588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549584u;
            // 0x549588: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549584) {
            ctx->pc = 0x5495A8u;
            goto label_5495a8;
        }
    }
    ctx->pc = 0x54958Cu;
label_54958c:
    // 0x54958c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54958cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x549590: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54959c: 0x0  nop
    ctx->pc = 0x54959cu;
    // NOP
    // 0x5495a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5495a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x5495a4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5495a4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5495a8:
    // 0x5495a8: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5495A8u;
    {
        const bool branch_taken_0x5495a8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5495a8) {
            ctx->pc = 0x5495ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5495A8u;
            // 0x5495ac: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5495BCu;
            goto label_5495bc;
        }
    }
    ctx->pc = 0x5495B0u;
    // 0x5495b0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5495b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5495b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5495B4u;
    {
        const bool branch_taken_0x5495b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5495B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5495B4u;
            // 0x5495b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5495b4) {
            ctx->pc = 0x5495D4u;
            goto label_5495d4;
        }
    }
    ctx->pc = 0x5495BCu;
label_5495bc:
    // 0x5495bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5495bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x5495c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5495c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5495c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5495c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5495c8: 0x0  nop
    ctx->pc = 0x5495c8u;
    // NOP
    // 0x5495cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5495ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x5495d0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5495d0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5495d4:
    // 0x5495d4: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x5495d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x5495d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5495d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x5495dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5495dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5495e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5495e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5495e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5495e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5495e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x5495e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x5495ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5495ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5495f0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5495F0u;
    SET_GPR_U32(ctx, 31, 0x5495F8u);
    ctx->pc = 0x5495F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5495F0u;
            // 0x5495f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5495F8u; }
        if (ctx->pc != 0x5495F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5495F8u; }
        if (ctx->pc != 0x5495F8u) { return; }
    }
    ctx->pc = 0x5495F8u;
label_5495f8:
    // 0x5495f8: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x5495f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x5495fc: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x5495fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x549600: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x549600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x549604: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x549604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x549608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x549608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54960c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x549610: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x549610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
    // 0x549614: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x549614u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x549618: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x549618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x54961c: 0x4601b55c  madd.s      $f21, $f22, $f1
    ctx->pc = 0x54961cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x549620: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x549620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x549624: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x549624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x549628: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x549628u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x54962c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x54962Cu;
    {
        const bool branch_taken_0x54962c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x549630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54962Cu;
            // 0x549630: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54962c) {
            ctx->pc = 0x549640u;
            goto label_549640;
        }
    }
    ctx->pc = 0x549634u;
    // 0x549634: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x549634u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549638: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x549638u;
    {
        const bool branch_taken_0x549638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549638u;
            // 0x54963c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549638) {
            ctx->pc = 0x54965Cu;
            goto label_54965c;
        }
    }
    ctx->pc = 0x549640u;
label_549640:
    // 0x549640: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x549640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x549644: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x549644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x549648: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54964c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54964cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549650: 0x0  nop
    ctx->pc = 0x549650u;
    // NOP
    // 0x549654: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x549654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x549658: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x549658u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54965c:
    // 0x54965c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x54965Cu;
    {
        const bool branch_taken_0x54965c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54965c) {
            ctx->pc = 0x549660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54965Cu;
            // 0x549660: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x549670u;
            goto label_549670;
        }
    }
    ctx->pc = 0x549664u;
    // 0x549664: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x549664u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x549668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x549668u;
    {
        const bool branch_taken_0x549668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x549668u;
            // 0x54966c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x549668) {
            ctx->pc = 0x549688u;
            goto label_549688;
        }
    }
    ctx->pc = 0x549670u;
label_549670:
    // 0x549670: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x549670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x549674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x549674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x549678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x549678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54967c: 0x0  nop
    ctx->pc = 0x54967cu;
    // NOP
    // 0x549680: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x549680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x549684: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x549684u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_549688:
    // 0x549688: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x549688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x54968c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54968cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x549690: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x549690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x549694: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x549694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x549698: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x549698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x54969c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x5496a0: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x5496A0u;
    SET_GPR_U32(ctx, 31, 0x5496A8u);
    ctx->pc = 0x5496A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5496A0u;
            // 0x5496a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5496A8u; }
        if (ctx->pc != 0x5496A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5496A8u; }
        if (ctx->pc != 0x5496A8u) { return; }
    }
    ctx->pc = 0x5496A8u;
label_5496a8:
    // 0x5496a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5496a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5496ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5496acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5496b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5496b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5496b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5496b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5496b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5496b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5496bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5496bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5496c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5496c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5496c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5496c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5496c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5496c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5496cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5496CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5496D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5496CCu;
            // 0x5496d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5496D4u;
    // 0x5496d4: 0x0  nop
    ctx->pc = 0x5496d4u;
    // NOP
    // 0x5496d8: 0x0  nop
    ctx->pc = 0x5496d8u;
    // NOP
    // 0x5496dc: 0x0  nop
    ctx->pc = 0x5496dcu;
    // NOP
}
