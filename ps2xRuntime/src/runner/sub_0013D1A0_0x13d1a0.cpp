#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D1A0
// Address: 0x13d1a0 - 0x13d360
void sub_0013D1A0_0x13d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D1A0_0x13d1a0");
#endif

    switch (ctx->pc) {
        case 0x13d1fcu: goto label_13d1fc;
        case 0x13d208u: goto label_13d208;
        case 0x13d210u: goto label_13d210;
        case 0x13d228u: goto label_13d228;
        case 0x13d234u: goto label_13d234;
        case 0x13d240u: goto label_13d240;
        case 0x13d248u: goto label_13d248;
        case 0x13d264u: goto label_13d264;
        case 0x13d270u: goto label_13d270;
        case 0x13d278u: goto label_13d278;
        case 0x13d28cu: goto label_13d28c;
        case 0x13d298u: goto label_13d298;
        case 0x13d2a4u: goto label_13d2a4;
        case 0x13d2acu: goto label_13d2ac;
        case 0x13d2d0u: goto label_13d2d0;
        case 0x13d2dcu: goto label_13d2dc;
        case 0x13d2e4u: goto label_13d2e4;
        case 0x13d2f0u: goto label_13d2f0;
        case 0x13d2fcu: goto label_13d2fc;
        case 0x13d308u: goto label_13d308;
        case 0x13d310u: goto label_13d310;
        default: break;
    }

    ctx->pc = 0x13d1a0u;

    // 0x13d1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d1a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13d1ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13d1b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d1b4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x13d1b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d1b8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x13d1b8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13d1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1c0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x13d1c0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13d1c4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x13d1c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13d1c8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x13d1c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13d1cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13d1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13d1d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13d1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13d1d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13d1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13d1d8: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x13d1d8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x13d1dc: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x13d1dcu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x13d1e0: 0x461acd01  sub.s       $f20, $f25, $f26
    ctx->pc = 0x13d1e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x13d1e4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x13d1e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x13d1e8: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x13d1e8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x13d1ec: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x13d1ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x13d1f0: 0x46008d46  mov.s       $f21, $f17
    ctx->pc = 0x13d1f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[17]);
    // 0x13d1f4: 0xc049514  jal         func_125450
    ctx->pc = 0x13D1F4u;
    SET_GPR_U32(ctx, 31, 0x13D1FCu);
    ctx->pc = 0x13D1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D1F4u;
            // 0x13d1f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1FCu; }
        if (ctx->pc != 0x13D1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D1FCu; }
        if (ctx->pc != 0x13D1FCu) { return; }
    }
    ctx->pc = 0x13D1FCu;
label_13d1fc:
    // 0x13d1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d200: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D200u;
    SET_GPR_U32(ctx, 31, 0x13D208u);
    ctx->pc = 0x13D204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D200u;
            // 0x13d204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D208u; }
        if (ctx->pc != 0x13D208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D208u; }
        if (ctx->pc != 0x13D208u) { return; }
    }
    ctx->pc = 0x13D208u;
label_13d208:
    // 0x13d208: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D208u;
    SET_GPR_U32(ctx, 31, 0x13D210u);
    ctx->pc = 0x13D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D208u;
            // 0x13d20c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D210u; }
        if (ctx->pc != 0x13D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D210u; }
        if (ctx->pc != 0x13D210u) { return; }
    }
    ctx->pc = 0x13D210u;
label_13d210:
    // 0x13d210: 0x461ac840  add.s       $f1, $f25, $f26
    ctx->pc = 0x13d210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x13d214: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x13d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x13d218: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x13d218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x13d21c: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x13d21cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x13d220: 0xc049514  jal         func_125450
    ctx->pc = 0x13D220u;
    SET_GPR_U32(ctx, 31, 0x13D228u);
    ctx->pc = 0x13D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D220u;
            // 0x13d224: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D228u; }
        if (ctx->pc != 0x13D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D228u; }
        if (ctx->pc != 0x13D228u) { return; }
    }
    ctx->pc = 0x13D228u;
label_13d228:
    // 0x13d228: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d22c: 0xc049514  jal         func_125450
    ctx->pc = 0x13D22Cu;
    SET_GPR_U32(ctx, 31, 0x13D234u);
    ctx->pc = 0x13D230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D22Cu;
            // 0x13d230: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D234u; }
        if (ctx->pc != 0x13D234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D234u; }
        if (ctx->pc != 0x13D234u) { return; }
    }
    ctx->pc = 0x13D234u;
label_13d234:
    // 0x13d234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d238: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D238u;
    SET_GPR_U32(ctx, 31, 0x13D240u);
    ctx->pc = 0x13D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D238u;
            // 0x13d23c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D240u; }
        if (ctx->pc != 0x13D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D240u; }
        if (ctx->pc != 0x13D240u) { return; }
    }
    ctx->pc = 0x13D240u;
label_13d240:
    // 0x13d240: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D240u;
    SET_GPR_U32(ctx, 31, 0x13D248u);
    ctx->pc = 0x13D244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D240u;
            // 0x13d244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D248u; }
        if (ctx->pc != 0x13D248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D248u; }
        if (ctx->pc != 0x13D248u) { return; }
    }
    ctx->pc = 0x13D248u;
label_13d248:
    // 0x13d248: 0x4618bd01  sub.s       $f20, $f23, $f24
    ctx->pc = 0x13d248u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x13d24c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13d250: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x13d250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d254: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x13d254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x13d258: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d25c: 0xc049514  jal         func_125450
    ctx->pc = 0x13D25Cu;
    SET_GPR_U32(ctx, 31, 0x13D264u);
    ctx->pc = 0x13D260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D25Cu;
            // 0x13d260: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D264u; }
        if (ctx->pc != 0x13D264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D264u; }
        if (ctx->pc != 0x13D264u) { return; }
    }
    ctx->pc = 0x13D264u;
label_13d264:
    // 0x13d264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d268: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D268u;
    SET_GPR_U32(ctx, 31, 0x13D270u);
    ctx->pc = 0x13D26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D268u;
            // 0x13d26c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D270u; }
        if (ctx->pc != 0x13D270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D270u; }
        if (ctx->pc != 0x13D270u) { return; }
    }
    ctx->pc = 0x13D270u;
label_13d270:
    // 0x13d270: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D270u;
    SET_GPR_U32(ctx, 31, 0x13D278u);
    ctx->pc = 0x13D274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D270u;
            // 0x13d274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D278u; }
        if (ctx->pc != 0x13D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D278u; }
        if (ctx->pc != 0x13D278u) { return; }
    }
    ctx->pc = 0x13D278u;
label_13d278:
    // 0x13d278: 0x4618b840  add.s       $f1, $f23, $f24
    ctx->pc = 0x13d278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x13d27c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x13d27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x13d280: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x13d280u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x13d284: 0xc049514  jal         func_125450
    ctx->pc = 0x13D284u;
    SET_GPR_U32(ctx, 31, 0x13D28Cu);
    ctx->pc = 0x13D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D284u;
            // 0x13d288: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D28Cu; }
        if (ctx->pc != 0x13D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D28Cu; }
        if (ctx->pc != 0x13D28Cu) { return; }
    }
    ctx->pc = 0x13D28Cu;
label_13d28c:
    // 0x13d28c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d28cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d290: 0xc049514  jal         func_125450
    ctx->pc = 0x13D290u;
    SET_GPR_U32(ctx, 31, 0x13D298u);
    ctx->pc = 0x13D294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D290u;
            // 0x13d294: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D298u; }
        if (ctx->pc != 0x13D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D298u; }
        if (ctx->pc != 0x13D298u) { return; }
    }
    ctx->pc = 0x13D298u;
label_13d298:
    // 0x13d298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d29c: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D29Cu;
    SET_GPR_U32(ctx, 31, 0x13D2A4u);
    ctx->pc = 0x13D2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D29Cu;
            // 0x13d2a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2A4u; }
        if (ctx->pc != 0x13D2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2A4u; }
        if (ctx->pc != 0x13D2A4u) { return; }
    }
    ctx->pc = 0x13D2A4u;
label_13d2a4:
    // 0x13d2a4: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D2A4u;
    SET_GPR_U32(ctx, 31, 0x13D2ACu);
    ctx->pc = 0x13D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2A4u;
            // 0x13d2a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2ACu; }
        if (ctx->pc != 0x13D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2ACu; }
        if (ctx->pc != 0x13D2ACu) { return; }
    }
    ctx->pc = 0x13D2ACu;
label_13d2ac:
    // 0x13d2ac: 0x4616ad01  sub.s       $f20, $f21, $f22
    ctx->pc = 0x13d2acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x13d2b0: 0x3c02bff0  lui         $v0, 0xBFF0
    ctx->pc = 0x13d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49136 << 16));
    // 0x13d2b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13d2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d2b8: 0x70028b89  pcpyld      $s1, $zero, $v0
    ctx->pc = 0x13d2b8u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13d2bc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x13d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x13d2c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13d2c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d2c8: 0xc049514  jal         func_125450
    ctx->pc = 0x13D2C8u;
    SET_GPR_U32(ctx, 31, 0x13D2D0u);
    ctx->pc = 0x13D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2C8u;
            // 0x13d2cc: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2D0u; }
        if (ctx->pc != 0x13D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2D0u; }
        if (ctx->pc != 0x13D2D0u) { return; }
    }
    ctx->pc = 0x13D2D0u;
label_13d2d0:
    // 0x13d2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2d4: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D2D4u;
    SET_GPR_U32(ctx, 31, 0x13D2DCu);
    ctx->pc = 0x13D2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2D4u;
            // 0x13d2d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2DCu; }
        if (ctx->pc != 0x13D2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2DCu; }
        if (ctx->pc != 0x13D2DCu) { return; }
    }
    ctx->pc = 0x13D2DCu;
label_13d2dc:
    // 0x13d2dc: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D2DCu;
    SET_GPR_U32(ctx, 31, 0x13D2E4u);
    ctx->pc = 0x13D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2DCu;
            // 0x13d2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2E4u; }
        if (ctx->pc != 0x13D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2E4u; }
        if (ctx->pc != 0x13D2E4u) { return; }
    }
    ctx->pc = 0x13D2E4u;
label_13d2e4:
    // 0x13d2e4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x13d2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x13d2e8: 0xc049514  jal         func_125450
    ctx->pc = 0x13D2E8u;
    SET_GPR_U32(ctx, 31, 0x13D2F0u);
    ctx->pc = 0x13D2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2E8u;
            // 0x13d2ec: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2F0u; }
        if (ctx->pc != 0x13D2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2F0u; }
        if (ctx->pc != 0x13D2F0u) { return; }
    }
    ctx->pc = 0x13D2F0u;
label_13d2f0:
    // 0x13d2f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d2f4: 0xc049514  jal         func_125450
    ctx->pc = 0x13D2F4u;
    SET_GPR_U32(ctx, 31, 0x13D2FCu);
    ctx->pc = 0x13D2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D2F4u;
            // 0x13d2f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2FCu; }
        if (ctx->pc != 0x13D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D2FCu; }
        if (ctx->pc != 0x13D2FCu) { return; }
    }
    ctx->pc = 0x13D2FCu;
label_13d2fc:
    // 0x13d2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d300: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D300u;
    SET_GPR_U32(ctx, 31, 0x13D308u);
    ctx->pc = 0x13D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D300u;
            // 0x13d304: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D308u; }
        if (ctx->pc != 0x13D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D308u; }
        if (ctx->pc != 0x13D308u) { return; }
    }
    ctx->pc = 0x13D308u;
label_13d308:
    // 0x13d308: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D308u;
    SET_GPR_U32(ctx, 31, 0x13D310u);
    ctx->pc = 0x13D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D308u;
            // 0x13d30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D310u; }
        if (ctx->pc != 0x13D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D310u; }
        if (ctx->pc != 0x13D310u) { return; }
    }
    ctx->pc = 0x13D310u;
label_13d310:
    // 0x13d310: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x13d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x13d314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13d314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13d318: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13d318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x13d31c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x13d320: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x13d320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x13d324: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13d324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13d328: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d32c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x13d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x13d330: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13d330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d334: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x13d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x13d338: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d33c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x13d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x13d340: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x13d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13d344: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13d348: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13d348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d34c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d350: 0x3e00008  jr          $ra
    ctx->pc = 0x13D350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D350u;
            // 0x13d354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D358u;
    // 0x13d358: 0x0  nop
    ctx->pc = 0x13d358u;
    // NOP
    // 0x13d35c: 0x0  nop
    ctx->pc = 0x13d35cu;
    // NOP
}
