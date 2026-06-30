#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B1FA0
// Address: 0x4b1fa0 - 0x4b2280
void sub_004B1FA0_0x4b1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1FA0_0x4b1fa0");
#endif

    switch (ctx->pc) {
        case 0x4b1fe4u: goto label_4b1fe4;
        case 0x4b1ff0u: goto label_4b1ff0;
        case 0x4b2010u: goto label_4b2010;
        case 0x4b201cu: goto label_4b201c;
        case 0x4b20b4u: goto label_4b20b4;
        case 0x4b20c8u: goto label_4b20c8;
        case 0x4b20d4u: goto label_4b20d4;
        case 0x4b20dcu: goto label_4b20dc;
        case 0x4b2108u: goto label_4b2108;
        case 0x4b2118u: goto label_4b2118;
        case 0x4b212cu: goto label_4b212c;
        case 0x4b2138u: goto label_4b2138;
        case 0x4b2140u: goto label_4b2140;
        case 0x4b21d4u: goto label_4b21d4;
        case 0x4b21e4u: goto label_4b21e4;
        case 0x4b21f0u: goto label_4b21f0;
        case 0x4b2208u: goto label_4b2208;
        case 0x4b2218u: goto label_4b2218;
        case 0x4b222cu: goto label_4b222c;
        case 0x4b2238u: goto label_4b2238;
        case 0x4b2240u: goto label_4b2240;
        case 0x4b2258u: goto label_4b2258;
        default: break;
    }

    ctx->pc = 0x4b1fa0u;

    // 0x4b1fa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4b1fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4b1fa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b1fa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b1fac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4b1fb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b1fb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b1fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b1fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b1fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b1fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b1fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b1fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b1fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b1fc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b1fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fcc: 0x8c430ea8  lw          $v1, 0xEA8($v0)
    ctx->pc = 0x4b1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
    // 0x4b1fd0: 0x2630012c  addiu       $s0, $s1, 0x12C
    ctx->pc = 0x4b1fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4b1fd4: 0x8c630790  lw          $v1, 0x790($v1)
    ctx->pc = 0x4b1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
    // 0x4b1fd8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4b1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4b1fdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b1fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1fe0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x4b1fe0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b1fe4:
    // 0x4b1fe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1fe8: 0xc04e894  jal         func_13A250
    ctx->pc = 0x4B1FE8u;
    SET_GPR_U32(ctx, 31, 0x4B1FF0u);
    ctx->pc = 0x4B1FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1FE8u;
            // 0x4b1fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1FF0u; }
        if (ctx->pc != 0x4B1FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1FF0u; }
        if (ctx->pc != 0x4B1FF0u) { return; }
    }
    ctx->pc = 0x4B1FF0u;
label_4b1ff0:
    // 0x4b1ff0: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x4b1ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4b1ff4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b1ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4b1ff8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B1FF8u;
    {
        const bool branch_taken_0x4b1ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1ff8) {
            ctx->pc = 0x4B1FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b1fe4;
        }
    }
    ctx->pc = 0x4B2000u;
    // 0x4b2000: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x4b2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4b2004: 0xc60e000c  lwc1        $f14, 0xC($s0)
    ctx->pc = 0x4b2004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4b2008: 0xc04e888  jal         func_13A220
    ctx->pc = 0x4B2008u;
    SET_GPR_U32(ctx, 31, 0x4B2010u);
    ctx->pc = 0x4B200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2008u;
            // 0x4b200c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A220u;
    if (runtime->hasFunction(0x13A220u)) {
        auto targetFn = runtime->lookupFunction(0x13A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2010u; }
        if (ctx->pc != 0x4B2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A220_0x13a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2010u; }
        if (ctx->pc != 0x4B2010u) { return; }
    }
    ctx->pc = 0x4B2010u;
label_4b2010:
    // 0x4b2010: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b2010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2014: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x4b2014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2018: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4b2018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b201c:
    // 0x4b201c: 0x92a202d4  lbu         $v0, 0x2D4($s5)
    ctx->pc = 0x4b201cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
    // 0x4b2020: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4B2020u;
    {
        const bool branch_taken_0x4b2020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2020u;
            // 0x4b2024: 0x26a302d4  addiu       $v1, $s5, 0x2D4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2020) {
            ctx->pc = 0x4B20E8u;
            goto label_4b20e8;
        }
    }
    ctx->pc = 0x4B2028u;
    // 0x4b2028: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4b2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b202c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4B202Cu;
    {
        const bool branch_taken_0x4b202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b202c) {
            ctx->pc = 0x4B2140u;
            goto label_4b2140;
        }
    }
    ctx->pc = 0x4B2034u;
    // 0x4b2034: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B2034u;
    {
        const bool branch_taken_0x4b2034 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2034) {
            ctx->pc = 0x4B20A0u;
            goto label_4b20a0;
        }
    }
    ctx->pc = 0x4B203Cu;
    // 0x4b203c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4b203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2040: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4b2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2044: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4b2044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x4b2048: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4b2048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4b204c: 0x0  nop
    ctx->pc = 0x4b204cu;
    // NOP
    // 0x4b2050: 0x460400c3  div.s       $f3, $f0, $f4
    ctx->pc = 0x4b2050u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[4];
    // 0x4b2054: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b2054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4b2058: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4b205c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b205cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2060: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4b2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2064: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b2064u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b2068: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4b2068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b206c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4b206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4b2070: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4b2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b2074: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4b2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2078: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4b2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b207c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b207cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2080: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2080u;
    {
        const bool branch_taken_0x4b2080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b2080) {
            ctx->pc = 0x4B20A0u;
            goto label_4b20a0;
        }
    }
    ctx->pc = 0x4B2088u;
    // 0x4b2088: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4b2088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b208c: 0x0  nop
    ctx->pc = 0x4b208cu;
    // NOP
    // 0x4b2090: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x4b2090u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x4b2094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4b2094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4b2098: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4b2098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4b209c: 0x0  nop
    ctx->pc = 0x4b209cu;
    // NOP
label_4b20a0:
    // 0x4b20a0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x4b20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b20a4: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x4b20a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b20a8: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x4b20a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b20ac: 0xc056230  jal         func_1588C0
    ctx->pc = 0x4B20ACu;
    SET_GPR_U32(ctx, 31, 0x4B20B4u);
    ctx->pc = 0x4B20B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B20ACu;
            // 0x4b20b0: 0x8e24055c  lw          $a0, 0x55C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1588C0u;
    if (runtime->hasFunction(0x1588C0u)) {
        auto targetFn = runtime->lookupFunction(0x1588C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20B4u; }
        if (ctx->pc != 0x4B20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001588C0_0x1588c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20B4u; }
        if (ctx->pc != 0x4B20B4u) { return; }
    }
    ctx->pc = 0x4B20B4u;
label_4b20b4:
    // 0x4b20b4: 0x8e22055c  lw          $v0, 0x55C($s1)
    ctx->pc = 0x4b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x4b20b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4b20b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4b20bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4b20bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b20c0: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x4B20C0u;
    SET_GPR_U32(ctx, 31, 0x4B20C8u);
    ctx->pc = 0x4B20C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B20C0u;
            // 0x4b20c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20C8u; }
        if (ctx->pc != 0x4B20C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20C8u; }
        if (ctx->pc != 0x4B20C8u) { return; }
    }
    ctx->pc = 0x4B20C8u;
label_4b20c8:
    // 0x4b20c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b20cc: 0xc04e894  jal         func_13A250
    ctx->pc = 0x4B20CCu;
    SET_GPR_U32(ctx, 31, 0x4B20D4u);
    ctx->pc = 0x4B20D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B20CCu;
            // 0x4b20d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20D4u; }
        if (ctx->pc != 0x4B20D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20D4u; }
        if (ctx->pc != 0x4B20D4u) { return; }
    }
    ctx->pc = 0x4B20D4u;
label_4b20d4:
    // 0x4b20d4: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x4B20D4u;
    SET_GPR_U32(ctx, 31, 0x4B20DCu);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20DCu; }
        if (ctx->pc != 0x4B20DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B20DCu; }
        if (ctx->pc != 0x4B20DCu) { return; }
    }
    ctx->pc = 0x4B20DCu;
label_4b20dc:
    // 0x4b20dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4B20DCu;
    {
        const bool branch_taken_0x4b20dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b20dc) {
            ctx->pc = 0x4B2140u;
            goto label_4b2140;
        }
    }
    ctx->pc = 0x4B20E4u;
    // 0x4b20e4: 0x0  nop
    ctx->pc = 0x4b20e4u;
    // NOP
label_4b20e8:
    // 0x4b20e8: 0x9282002c  lbu         $v0, 0x2C($s4)
    ctx->pc = 0x4b20e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x4b20ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B20ECu;
    {
        const bool branch_taken_0x4b20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b20ec) {
            ctx->pc = 0x4B2140u;
            goto label_4b2140;
        }
    }
    ctx->pc = 0x4B20F4u;
    // 0x4b20f4: 0xc68c0040  lwc1        $f12, 0x40($s4)
    ctx->pc = 0x4b20f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b20f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b20f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4b20fc: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x4b20fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x4b2100: 0xc04e928  jal         func_13A4A0
    ctx->pc = 0x4B2100u;
    SET_GPR_U32(ctx, 31, 0x4B2108u);
    ctx->pc = 0x4B2104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2100u;
            // 0x4b2104: 0x26860044  addiu       $a2, $s4, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A4A0u;
    if (runtime->hasFunction(0x13A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2108u; }
        if (ctx->pc != 0x4B2108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A4A0_0x13a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2108u; }
        if (ctx->pc != 0x4B2108u) { return; }
    }
    ctx->pc = 0x4B2108u;
label_4b2108:
    // 0x4b2108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b2108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b210c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4b210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4b2110: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x4B2110u;
    SET_GPR_U32(ctx, 31, 0x4B2118u);
    ctx->pc = 0x4B2114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2110u;
            // 0x4b2114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2118u; }
        if (ctx->pc != 0x4B2118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2118u; }
        if (ctx->pc != 0x4B2118u) { return; }
    }
    ctx->pc = 0x4B2118u;
label_4b2118:
    // 0x4b2118: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b2118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b211c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2120: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4b2120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4b2124: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x4B2124u;
    SET_GPR_U32(ctx, 31, 0x4B212Cu);
    ctx->pc = 0x4B2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2124u;
            // 0x4b2128: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A2E0u;
    if (runtime->hasFunction(0x13A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x13A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B212Cu; }
        if (ctx->pc != 0x4B212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A2E0_0x13a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B212Cu; }
        if (ctx->pc != 0x4B212Cu) { return; }
    }
    ctx->pc = 0x4B212Cu;
label_4b212c:
    // 0x4b212c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2130: 0xc04e894  jal         func_13A250
    ctx->pc = 0x4B2130u;
    SET_GPR_U32(ctx, 31, 0x4B2138u);
    ctx->pc = 0x4B2134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2130u;
            // 0x4b2134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2138u; }
        if (ctx->pc != 0x4B2138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2138u; }
        if (ctx->pc != 0x4B2138u) { return; }
    }
    ctx->pc = 0x4B2138u;
label_4b2138:
    // 0x4b2138: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x4B2138u;
    SET_GPR_U32(ctx, 31, 0x4B2140u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2140u; }
        if (ctx->pc != 0x4B2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2140u; }
        if (ctx->pc != 0x4B2140u) { return; }
    }
    ctx->pc = 0x4B2140u;
label_4b2140:
    // 0x4b2140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b2140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4b2144: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x4b2144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x4b2148: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x4b2148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4b214c: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x4B214Cu;
    {
        const bool branch_taken_0x4b214c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B214Cu;
            // 0x4b2150: 0x26940024  addiu       $s4, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b214c) {
            ctx->pc = 0x4B201Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b201c;
        }
    }
    ctx->pc = 0x4B2154u;
    // 0x4b2154: 0x92220344  lbu         $v0, 0x344($s1)
    ctx->pc = 0x4b2154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 836)));
    // 0x4b2158: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B2158u;
    {
        const bool branch_taken_0x4b2158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2158u;
            // 0x4b215c: 0x26230344  addiu       $v1, $s1, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2158) {
            ctx->pc = 0x4B21F8u;
            goto label_4b21f8;
        }
    }
    ctx->pc = 0x4B2160u;
    // 0x4b2160: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b2164: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4B2164u;
    {
        const bool branch_taken_0x4b2164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2164) {
            ctx->pc = 0x4B2238u;
            goto label_4b2238;
        }
    }
    ctx->pc = 0x4B216Cu;
    // 0x4b216c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x4b216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2170: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4b2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2174: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4b2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x4b2178: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b2178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4b217c: 0x0  nop
    ctx->pc = 0x4b217cu;
    // NOP
    // 0x4b2180: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x4b2180u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[2];
    // 0x4b2184: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4b2188: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b2188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4b218c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x4b218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b2190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2194: 0x0  nop
    ctx->pc = 0x4b2194u;
    // NOP
    // 0x4b2198: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b2198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4b219c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4b219cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4b21a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4b21a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4b21a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4b21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b21a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4b21a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b21ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4b21acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b21b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b21b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b21b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4B21B4u;
    {
        const bool branch_taken_0x4b21b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b21b4) {
            ctx->pc = 0x4B21B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B21B4u;
            // 0x4b21b8: 0x8e24055c  lw          $a0, 0x55C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B21C4u;
            goto label_4b21c4;
        }
    }
    ctx->pc = 0x4B21BCu;
    // 0x4b21bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4b21bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4b21c0: 0x8e24055c  lw          $a0, 0x55C($s1)
    ctx->pc = 0x4b21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
label_4b21c4:
    // 0x4b21c4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x4b21c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b21c8: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x4b21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4b21cc: 0xc056230  jal         func_1588C0
    ctx->pc = 0x4B21CCu;
    SET_GPR_U32(ctx, 31, 0x4B21D4u);
    ctx->pc = 0x4B21D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B21CCu;
            // 0x4b21d0: 0xc46c0004  lwc1        $f12, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1588C0u;
    if (runtime->hasFunction(0x1588C0u)) {
        auto targetFn = runtime->lookupFunction(0x1588C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21D4u; }
        if (ctx->pc != 0x4B21D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001588C0_0x1588c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21D4u; }
        if (ctx->pc != 0x4B21D4u) { return; }
    }
    ctx->pc = 0x4B21D4u;
label_4b21d4:
    // 0x4b21d4: 0x8e26055c  lw          $a2, 0x55C($s1)
    ctx->pc = 0x4b21d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x4b21d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b21dc: 0xc12c8a0  jal         func_4B2280
    ctx->pc = 0x4B21DCu;
    SET_GPR_U32(ctx, 31, 0x4B21E4u);
    ctx->pc = 0x4B21E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B21DCu;
            // 0x4b21e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2280u;
    if (runtime->hasFunction(0x4B2280u)) {
        auto targetFn = runtime->lookupFunction(0x4B2280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21E4u; }
        if (ctx->pc != 0x4B21E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2280_0x4b2280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21E4u; }
        if (ctx->pc != 0x4B21E4u) { return; }
    }
    ctx->pc = 0x4B21E4u;
label_4b21e4:
    // 0x4b21e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4b21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b21e8: 0xc04e894  jal         func_13A250
    ctx->pc = 0x4B21E8u;
    SET_GPR_U32(ctx, 31, 0x4B21F0u);
    ctx->pc = 0x4B21ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B21E8u;
            // 0x4b21ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21F0u; }
        if (ctx->pc != 0x4B21F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B21F0u; }
        if (ctx->pc != 0x4B21F0u) { return; }
    }
    ctx->pc = 0x4B21F0u;
label_4b21f0:
    // 0x4b21f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B21F0u;
    {
        const bool branch_taken_0x4b21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b21f0) {
            ctx->pc = 0x4B2238u;
            goto label_4b2238;
        }
    }
    ctx->pc = 0x4B21F8u;
label_4b21f8:
    // 0x4b21f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4b21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b21fc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4b21fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4b2200: 0xc04e94c  jal         func_13A530
    ctx->pc = 0x4B2200u;
    SET_GPR_U32(ctx, 31, 0x4B2208u);
    ctx->pc = 0x4B2204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2200u;
            // 0x4b2204: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (runtime->hasFunction(0x13A530u)) {
        auto targetFn = runtime->lookupFunction(0x13A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2208u; }
        if (ctx->pc != 0x4B2208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A530_0x13a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2208u; }
        if (ctx->pc != 0x4B2208u) { return; }
    }
    ctx->pc = 0x4B2208u;
label_4b2208:
    // 0x4b2208: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4b2208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b220c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4b220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b2210: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x4B2210u;
    SET_GPR_U32(ctx, 31, 0x4B2218u);
    ctx->pc = 0x4B2214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2210u;
            // 0x4b2214: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2218u; }
        if (ctx->pc != 0x4B2218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2218u; }
        if (ctx->pc != 0x4B2218u) { return; }
    }
    ctx->pc = 0x4B2218u;
label_4b2218:
    // 0x4b2218: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4b2218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b221c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4b221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b2220: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4b2220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b2224: 0xc04ecc0  jal         func_13B300
    ctx->pc = 0x4B2224u;
    SET_GPR_U32(ctx, 31, 0x4B222Cu);
    ctx->pc = 0x4B2228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2224u;
            // 0x4b2228: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B300u;
    if (runtime->hasFunction(0x13B300u)) {
        auto targetFn = runtime->lookupFunction(0x13B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B222Cu; }
        if (ctx->pc != 0x4B222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B300_0x13b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B222Cu; }
        if (ctx->pc != 0x4B222Cu) { return; }
    }
    ctx->pc = 0x4B222Cu;
label_4b222c:
    // 0x4b222c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4b222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b2230: 0xc04e894  jal         func_13A250
    ctx->pc = 0x4B2230u;
    SET_GPR_U32(ctx, 31, 0x4B2238u);
    ctx->pc = 0x4B2234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2230u;
            // 0x4b2234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2238u; }
        if (ctx->pc != 0x4B2238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2238u; }
        if (ctx->pc != 0x4B2238u) { return; }
    }
    ctx->pc = 0x4B2238u;
label_4b2238:
    // 0x4b2238: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x4B2238u;
    SET_GPR_U32(ctx, 31, 0x4B2240u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2240u; }
        if (ctx->pc != 0x4B2240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2240u; }
        if (ctx->pc != 0x4B2240u) { return; }
    }
    ctx->pc = 0x4B2240u;
label_4b2240:
    // 0x4b2240: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4b2244: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4b2244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4b2248: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4b2248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4b224c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b2250: 0xc04f018  jal         func_13C060
    ctx->pc = 0x4B2250u;
    SET_GPR_U32(ctx, 31, 0x4B2258u);
    ctx->pc = 0x4B2254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2250u;
            // 0x4b2254: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C060u;
    if (runtime->hasFunction(0x13C060u)) {
        auto targetFn = runtime->lookupFunction(0x13C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2258u; }
        if (ctx->pc != 0x4B2258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C060_0x13c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2258u; }
        if (ctx->pc != 0x4B2258u) { return; }
    }
    ctx->pc = 0x4B2258u;
label_4b2258:
    // 0x4b2258: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b2258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b225c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b225cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b2260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b2264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b226c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b226cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2274: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2274u;
            // 0x4b2278: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B227Cu;
    // 0x4b227c: 0x0  nop
    ctx->pc = 0x4b227cu;
    // NOP
}
