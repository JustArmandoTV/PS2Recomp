#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030F1A0
// Address: 0x30f1a0 - 0x30f2e0
void sub_0030F1A0_0x30f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F1A0_0x30f1a0");
#endif

    switch (ctx->pc) {
        case 0x30f20cu: goto label_30f20c;
        case 0x30f21cu: goto label_30f21c;
        case 0x30f22cu: goto label_30f22c;
        case 0x30f25cu: goto label_30f25c;
        case 0x30f28cu: goto label_30f28c;
        case 0x30f2a8u: goto label_30f2a8;
        case 0x30f2b8u: goto label_30f2b8;
        default: break;
    }

    ctx->pc = 0x30f1a0u;

    // 0x30f1a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30f1a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f1a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30f1ac: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x30f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30f1b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30f1b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30f1b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x30f1b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30f1c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x30f1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30f1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30f1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1d4: 0x7846f470  lq          $a2, -0xB90($v0)
    ctx->pc = 0x30f1d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 4294964336)));
    // 0x30f1d8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x30f1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30f1e0: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x30f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x30f1e4: 0x7842f460  lq          $v0, -0xBA0($v0)
    ctx->pc = 0x30f1e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 4294964320)));
    // 0x30f1e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x30f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x30f1ec: 0x84820066  lh          $v0, 0x66($a0)
    ctx->pc = 0x30f1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30f1f0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x30f1f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f1f4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F1F4u;
    {
        const bool branch_taken_0x30f1f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1F4u;
            // 0x30f1f8: 0x263300d8  addiu       $s3, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1f4) {
            ctx->pc = 0x30F20Cu;
            goto label_30f20c;
        }
    }
    ctx->pc = 0x30F1FCu;
    // 0x30f1fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f200: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30f200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f204: 0xc04cc90  jal         func_133240
    ctx->pc = 0x30F204u;
    SET_GPR_U32(ctx, 31, 0x30F20Cu);
    ctx->pc = 0x30F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F204u;
            // 0x30f208: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F20Cu; }
        if (ctx->pc != 0x30F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F20Cu; }
        if (ctx->pc != 0x30F20Cu) { return; }
    }
    ctx->pc = 0x30F20Cu;
label_30f20c:
    // 0x30f20c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30f20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f210: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30f214: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x30F214u;
    SET_GPR_U32(ctx, 31, 0x30F21Cu);
    ctx->pc = 0x30F218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F214u;
            // 0x30f218: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F21Cu; }
        if (ctx->pc != 0x30F21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F21Cu; }
        if (ctx->pc != 0x30F21Cu) { return; }
    }
    ctx->pc = 0x30F21Cu;
label_30f21c:
    // 0x30f21c: 0x86320066  lh          $s2, 0x66($s1)
    ctx->pc = 0x30f21cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
    // 0x30f220: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x30F220u;
    {
        const bool branch_taken_0x30f220 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x30f220) {
            ctx->pc = 0x30F298u;
            goto label_30f298;
        }
    }
    ctx->pc = 0x30F228u;
    // 0x30f228: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30f22c:
    // 0x30f22c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30f230: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x30f230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x30f234: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30f238: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x30f238u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30f23c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f240: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30f244: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f248: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30f24c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x30f250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f254: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F254u;
    SET_GPR_U32(ctx, 31, 0x30F25Cu);
    ctx->pc = 0x30F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F254u;
            // 0x30f258: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F25Cu; }
        if (ctx->pc != 0x30F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F25Cu; }
        if (ctx->pc != 0x30F25Cu) { return; }
    }
    ctx->pc = 0x30F25Cu;
label_30f25c:
    // 0x30f25c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f260: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x30f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f264: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30f264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30f268: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f26c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f270: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30f274: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f27c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x30f280: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x30f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30f284: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F284u;
    SET_GPR_U32(ctx, 31, 0x30F28Cu);
    ctx->pc = 0x30F288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F284u;
            // 0x30f288: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F28Cu; }
        if (ctx->pc != 0x30F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F28Cu; }
        if (ctx->pc != 0x30F28Cu) { return; }
    }
    ctx->pc = 0x30F28Cu;
label_30f28c:
    // 0x30f28c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x30f28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x30f290: 0x1e40ffe6  bgtz        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x30F290u;
    {
        const bool branch_taken_0x30f290 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x30F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F290u;
            // 0x30f294: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f290) {
            ctx->pc = 0x30F22Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f22c;
        }
    }
    ctx->pc = 0x30F298u;
label_30f298:
    // 0x30f298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f29c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30f29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2a0: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x30F2A0u;
    SET_GPR_U32(ctx, 31, 0x30F2A8u);
    ctx->pc = 0x30F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2A0u;
            // 0x30f2a4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2A8u; }
        if (ctx->pc != 0x30F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2A8u; }
        if (ctx->pc != 0x30F2A8u) { return; }
    }
    ctx->pc = 0x30F2A8u;
label_30f2a8:
    // 0x30f2a8: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x30f2ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2b0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x30F2B0u;
    SET_GPR_U32(ctx, 31, 0x30F2B8u);
    ctx->pc = 0x30F2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2B0u;
            // 0x30f2b4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2B8u; }
        if (ctx->pc != 0x30F2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2B8u; }
        if (ctx->pc != 0x30F2B8u) { return; }
    }
    ctx->pc = 0x30F2B8u;
label_30f2b8:
    // 0x30f2b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f2bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30f2bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f2c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30f2c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f2c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f2c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f2c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30F2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2D4u;
            // 0x30f2d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F2DCu;
    // 0x30f2dc: 0x0  nop
    ctx->pc = 0x30f2dcu;
    // NOP
}
