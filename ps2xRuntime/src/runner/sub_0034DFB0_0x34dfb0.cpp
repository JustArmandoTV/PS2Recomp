#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034DFB0
// Address: 0x34dfb0 - 0x34e160
void sub_0034DFB0_0x34dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DFB0_0x34dfb0");
#endif

    switch (ctx->pc) {
        case 0x34dff0u: goto label_34dff0;
        case 0x34e02cu: goto label_34e02c;
        case 0x34e040u: goto label_34e040;
        case 0x34e068u: goto label_34e068;
        case 0x34e098u: goto label_34e098;
        case 0x34e0a0u: goto label_34e0a0;
        case 0x34e0d0u: goto label_34e0d0;
        case 0x34e128u: goto label_34e128;
        case 0x34e140u: goto label_34e140;
        default: break;
    }

    ctx->pc = 0x34dfb0u;

    // 0x34dfb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x34dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x34dfb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34dfb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34dfbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34dfc0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34dfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dfc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34dfc8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x34dfc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34dfcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34dfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dfd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x34dfd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34dfd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34dfd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34dfd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34dfdc: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x34dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34dfe0: 0xc4b50004  lwc1        $f21, 0x4($a1)
    ctx->pc = 0x34dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34dfe4: 0xc4b60000  lwc1        $f22, 0x0($a1)
    ctx->pc = 0x34dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34dfe8: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x34DFE8u;
    SET_GPR_U32(ctx, 31, 0x34DFF0u);
    ctx->pc = 0x34DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFE8u;
            // 0x34dfec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFF0u; }
        if (ctx->pc != 0x34DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFF0u; }
        if (ctx->pc != 0x34DFF0u) { return; }
    }
    ctx->pc = 0x34DFF0u;
label_34dff0:
    // 0x34dff0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x34dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dff4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34dff8: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x34dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34dffc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x34dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34e000: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x34e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e004: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x34e004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x34e008: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x34e008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34e00c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x34e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e010: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x34e010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34e014: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x34e014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x34e018: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x34e018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x34e01c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x34e01cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34e020: 0xe7b50084  swc1        $f21, 0x84($sp)
    ctx->pc = 0x34e020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x34e024: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x34E024u;
    SET_GPR_U32(ctx, 31, 0x34E02Cu);
    ctx->pc = 0x34E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E024u;
            // 0x34e028: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E02Cu; }
        if (ctx->pc != 0x34E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E02Cu; }
        if (ctx->pc != 0x34E02Cu) { return; }
    }
    ctx->pc = 0x34E02Cu;
label_34e02c:
    // 0x34e02c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34e030: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x34e030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x34e034: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34e034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x34e038: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x34E038u;
    SET_GPR_U32(ctx, 31, 0x34E040u);
    ctx->pc = 0x34E03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E038u;
            // 0x34e03c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E040u; }
        if (ctx->pc != 0x34E040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E040u; }
        if (ctx->pc != 0x34E040u) { return; }
    }
    ctx->pc = 0x34E040u;
label_34e040:
    // 0x34e040: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x34e044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e048: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x34E048u;
    {
        const bool branch_taken_0x34e048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E048u;
            // 0x34e04c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e048) {
            ctx->pc = 0x34E07Cu;
            goto label_34e07c;
        }
    }
    ctx->pc = 0x34E050u;
    // 0x34e050: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x34e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x34e054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34e054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e05c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34e05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e060: 0xc08afe0  jal         func_22BF80
    ctx->pc = 0x34E060u;
    SET_GPR_U32(ctx, 31, 0x34E068u);
    ctx->pc = 0x34E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E060u;
            // 0x34e064: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E068u; }
        if (ctx->pc != 0x34E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E068u; }
        if (ctx->pc != 0x34E068u) { return; }
    }
    ctx->pc = 0x34E068u;
label_34e068:
    // 0x34e068: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e06c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x34e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
    // 0x34e070: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34e070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34e074: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x34e074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x34e078: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x34e078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_34e07c:
    // 0x34e07c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x34e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x34e080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34e084: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x34e084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x34e088: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x34e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x34e08c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34e090: 0xc08c798  jal         func_231E60
    ctx->pc = 0x34E090u;
    SET_GPR_U32(ctx, 31, 0x34E098u);
    ctx->pc = 0x34E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E090u;
            // 0x34e094: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E098u; }
        if (ctx->pc != 0x34E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E098u; }
        if (ctx->pc != 0x34E098u) { return; }
    }
    ctx->pc = 0x34E098u;
label_34e098:
    // 0x34e098: 0xc08d414  jal         func_235050
    ctx->pc = 0x34E098u;
    SET_GPR_U32(ctx, 31, 0x34E0A0u);
    ctx->pc = 0x34E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E098u;
            // 0x34e09c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0A0u; }
        if (ctx->pc != 0x34E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0A0u; }
        if (ctx->pc != 0x34E0A0u) { return; }
    }
    ctx->pc = 0x34E0A0u;
label_34e0a0:
    // 0x34e0a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34e0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e0a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x34e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34e0a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34e0a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e0ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34e0b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34e0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e0b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34e0b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34e0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34E0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0BCu;
            // 0x34e0c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E0C4u;
    // 0x34e0c4: 0x0  nop
    ctx->pc = 0x34e0c4u;
    // NOP
    // 0x34e0c8: 0x0  nop
    ctx->pc = 0x34e0c8u;
    // NOP
    // 0x34e0cc: 0x0  nop
    ctx->pc = 0x34e0ccu;
    // NOP
label_34e0d0:
    // 0x34e0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34e0d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34e0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e0e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34E0E4u;
    {
        const bool branch_taken_0x34e0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0E4u;
            // 0x34e0e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0e4) {
            ctx->pc = 0x34E140u;
            goto label_34e140;
        }
    }
    ctx->pc = 0x34E0ECu;
    // 0x34e0ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e0f4: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x34e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x34e0f8: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x34e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x34e0fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34e100: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E100u;
    {
        const bool branch_taken_0x34e100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E100u;
            // 0x34e104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e100) {
            ctx->pc = 0x34E128u;
            goto label_34e128;
        }
    }
    ctx->pc = 0x34E108u;
    // 0x34e108: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e10c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e110: 0x24635bd0  addiu       $v1, $v1, 0x5BD0
    ctx->pc = 0x34e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23504));
    // 0x34e114: 0x24425c08  addiu       $v0, $v0, 0x5C08
    ctx->pc = 0x34e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23560));
    // 0x34e118: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34e11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e120: 0xc0d3858  jal         func_34E160
    ctx->pc = 0x34E120u;
    SET_GPR_U32(ctx, 31, 0x34E128u);
    ctx->pc = 0x34E124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E120u;
            // 0x34e124: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E160u;
    if (runtime->hasFunction(0x34E160u)) {
        auto targetFn = runtime->lookupFunction(0x34E160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E128u; }
        if (ctx->pc != 0x34E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034E160_0x34e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E128u; }
        if (ctx->pc != 0x34E128u) { return; }
    }
    ctx->pc = 0x34E128u;
label_34e128:
    // 0x34e128: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x34e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x34e12c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34e12cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34e130: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E130u;
    {
        const bool branch_taken_0x34e130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34e130) {
            ctx->pc = 0x34E134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E130u;
            // 0x34e134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E144u;
            goto label_34e144;
        }
    }
    ctx->pc = 0x34E138u;
    // 0x34e138: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34E138u;
    SET_GPR_U32(ctx, 31, 0x34E140u);
    ctx->pc = 0x34E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E138u;
            // 0x34e13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E140u; }
        if (ctx->pc != 0x34E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E140u; }
        if (ctx->pc != 0x34E140u) { return; }
    }
    ctx->pc = 0x34E140u;
label_34e140:
    // 0x34e140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34e140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34e144:
    // 0x34e144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34e144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e150: 0x3e00008  jr          $ra
    ctx->pc = 0x34E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E150u;
            // 0x34e154: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E158u;
    // 0x34e158: 0x0  nop
    ctx->pc = 0x34e158u;
    // NOP
    // 0x34e15c: 0x0  nop
    ctx->pc = 0x34e15cu;
    // NOP
}
