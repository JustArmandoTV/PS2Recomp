#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B190
// Address: 0x16b190 - 0x16b330
void sub_0016B190_0x16b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B190_0x16b190");
#endif

    switch (ctx->pc) {
        case 0x16b1dcu: goto label_16b1dc;
        case 0x16b23cu: goto label_16b23c;
        case 0x16b250u: goto label_16b250;
        case 0x16b260u: goto label_16b260;
        case 0x16b278u: goto label_16b278;
        case 0x16b298u: goto label_16b298;
        case 0x16b2e0u: goto label_16b2e0;
        default: break;
    }

    ctx->pc = 0x16b190u;

    // 0x16b190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b194: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16b198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b19c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16b1a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x16b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16b1a8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1ac: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x16b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x16b1b0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x16b1b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x16b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x16b1b8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x16b1b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16b1c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b1c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16b1c8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16b1cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x16b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x16b1d0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x16b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x16b1d4: 0xc05abf8  jal         func_16AFE0
    ctx->pc = 0x16B1D4u;
    SET_GPR_U32(ctx, 31, 0x16B1DCu);
    ctx->pc = 0x16B1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1D4u;
            // 0x16b1d8: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFE0u;
    if (runtime->hasFunction(0x16AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1DCu; }
        if (ctx->pc != 0x16B1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFE0_0x16afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1DCu; }
        if (ctx->pc != 0x16B1DCu) { return; }
    }
    ctx->pc = 0x16B1DCu;
label_16b1dc:
    // 0x16b1dc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B1DCu;
    {
        const bool branch_taken_0x16b1dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1DCu;
            // 0x16b1e0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1dc) {
            ctx->pc = 0x16B210u;
            goto label_16b210;
        }
    }
    ctx->pc = 0x16B1E4u;
    // 0x16b1e4: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B1E4u;
    {
        const bool branch_taken_0x16b1e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b1e4) {
            ctx->pc = 0x16B1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1E4u;
            // 0x16b1e8: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B1ECu;
            goto label_16b1ec;
        }
    }
    ctx->pc = 0x16B1ECu;
label_16b1ec:
    // 0x16b1ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b1f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16b1f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16b1fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x16b200: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x16b200u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x16b204: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16B204u;
    {
        const bool branch_taken_0x16b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B204u;
            // 0x16b208: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b204) {
            ctx->pc = 0x16B300u;
            goto label_16b300;
        }
    }
    ctx->pc = 0x16B20Cu;
    // 0x16b20c: 0x0  nop
    ctx->pc = 0x16b20cu;
    // NOP
label_16b210:
    // 0x16b210: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16b214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b218: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x16b21c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16b220: 0x8e7376b0  lw          $s3, 0x76B0($s3)
    ctx->pc = 0x16b220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30384)));
    // 0x16b224: 0x8263000f  lb          $v1, 0xF($s3)
    ctx->pc = 0x16b224u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x16b228: 0x54640017  bnel        $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16B228u;
    {
        const bool branch_taken_0x16b228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16b228) {
            ctx->pc = 0x16B22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B228u;
            // 0x16b22c: 0x96720118  lhu         $s2, 0x118($s3) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B288u;
            goto label_16b288;
        }
    }
    ctx->pc = 0x16B230u;
    // 0x16b230: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x16b234: 0xc05adba  jal         func_16B6E8
    ctx->pc = 0x16B234u;
    SET_GPR_U32(ctx, 31, 0x16B23Cu);
    ctx->pc = 0x16B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B234u;
            // 0x16b238: 0x2675011c  addiu       $s5, $s3, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B6E8u;
    if (runtime->hasFunction(0x16B6E8u)) {
        auto targetFn = runtime->lookupFunction(0x16B6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B23Cu; }
        if (ctx->pc != 0x16B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B6E8_0x16b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B23Cu; }
        if (ctx->pc != 0x16B23Cu) { return; }
    }
    ctx->pc = 0x16B23Cu;
label_16b23c:
    // 0x16b23c: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x16B23Cu;
    {
        const bool branch_taken_0x16b23c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x16B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B23Cu;
            // 0x16b240: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b23c) {
            ctx->pc = 0x16B268u;
            goto label_16b268;
        }
    }
    ctx->pc = 0x16B244u;
    // 0x16b244: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x16b244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b248: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x16b248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b24c: 0x0  nop
    ctx->pc = 0x16b24cu;
    // NOP
label_16b250:
    // 0x16b250: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16b250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b254: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16b254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16b258: 0xc05adba  jal         func_16B6E8
    ctx->pc = 0x16B258u;
    SET_GPR_U32(ctx, 31, 0x16B260u);
    ctx->pc = 0x16B25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B258u;
            // 0x16b25c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B6E8u;
    if (runtime->hasFunction(0x16B6E8u)) {
        auto targetFn = runtime->lookupFunction(0x16B6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B260u; }
        if (ctx->pc != 0x16B260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B6E8_0x16b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B260u; }
        if (ctx->pc != 0x16B260u) { return; }
    }
    ctx->pc = 0x16B260u;
label_16b260:
    // 0x16b260: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16B260u;
    {
        const bool branch_taken_0x16b260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B260u;
            // 0x16b264: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b260) {
            ctx->pc = 0x16B250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B268u;
label_16b268:
    // 0x16b268: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x16b268u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x16b26c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x16b26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x16b270: 0xc05adba  jal         func_16B6E8
    ctx->pc = 0x16B270u;
    SET_GPR_U32(ctx, 31, 0x16B278u);
    ctx->pc = 0x16B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B270u;
            // 0x16b274: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B6E8u;
    if (runtime->hasFunction(0x16B6E8u)) {
        auto targetFn = runtime->lookupFunction(0x16B6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B278u; }
        if (ctx->pc != 0x16B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B6E8_0x16b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B278u; }
        if (ctx->pc != 0x16B278u) { return; }
    }
    ctx->pc = 0x16B278u;
label_16b278:
    // 0x16b278: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x16b278u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x16b27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b280: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16B280u;
    {
        const bool branch_taken_0x16b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B280u;
            // 0x16b284: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b280) {
            ctx->pc = 0x16B2CCu;
            goto label_16b2cc;
        }
    }
    ctx->pc = 0x16B288u;
label_16b288:
    // 0x16b288: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x16B288u;
    {
        const bool branch_taken_0x16b288 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x16B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B288u;
            // 0x16b28c: 0x2665011a  addiu       $a1, $s3, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b288) {
            ctx->pc = 0x16B2B4u;
            goto label_16b2b4;
        }
    }
    ctx->pc = 0x16B290u;
    // 0x16b290: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x16b290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b294: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x16b294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b298:
    // 0x16b298: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x16b298u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b29c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x16b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x16b2a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16b2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16b2a4: 0x0  nop
    ctx->pc = 0x16b2a4u;
    // NOP
    // 0x16b2a8: 0x0  nop
    ctx->pc = 0x16b2a8u;
    // NOP
    // 0x16b2ac: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B2ACu;
    {
        const bool branch_taken_0x16b2ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2ACu;
            // 0x16b2b0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2ac) {
            ctx->pc = 0x16B298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b298;
        }
    }
    ctx->pc = 0x16B2B4u;
label_16b2b4:
    // 0x16b2b4: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x16b2b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b2bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x16b2bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b2c0: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x16b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16b2c4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x16b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x16b2c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x16b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_16b2cc:
    // 0x16b2cc: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B2CCu;
    {
        const bool branch_taken_0x16b2cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2CCu;
            // 0x16b2d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2cc) {
            ctx->pc = 0x16B2E0u;
            goto label_16b2e0;
        }
    }
    ctx->pc = 0x16B2D4u;
    // 0x16b2d4: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x16b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16b2d8: 0xc04b156  jal         func_12C558
    ctx->pc = 0x16B2D8u;
    SET_GPR_U32(ctx, 31, 0x16B2E0u);
    ctx->pc = 0x16B2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2D8u;
            // 0x16b2dc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E0u; }
        if (ctx->pc != 0x16B2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E0u; }
        if (ctx->pc != 0x16B2E0u) { return; }
    }
    ctx->pc = 0x16B2E0u;
label_16b2e0:
    // 0x16b2e0: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x16b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x16b2e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b2e8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b2ec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x16b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x16b2f0: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x16b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x16b2f4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x16b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16b2f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16b2fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_16b300:
    // 0x16b300: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16b300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b304: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16b304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b308: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16b308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b30c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16b30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b310: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16b310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b314: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16b314u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b318: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x16b318u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b31c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x16b31cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16b320: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x16b320u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b324: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16b324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16b328: 0x3e00008  jr          $ra
    ctx->pc = 0x16B328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B328u;
            // 0x16b32c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B330u;
}
