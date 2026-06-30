#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162198
// Address: 0x162198 - 0x1622f8
void sub_00162198_0x162198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162198_0x162198");
#endif

    switch (ctx->pc) {
        case 0x1621ccu: goto label_1621cc;
        case 0x1621d4u: goto label_1621d4;
        case 0x1621e0u: goto label_1621e0;
        case 0x1621ecu: goto label_1621ec;
        case 0x1621f4u: goto label_1621f4;
        case 0x162204u: goto label_162204;
        case 0x162214u: goto label_162214;
        case 0x162220u: goto label_162220;
        case 0x162270u: goto label_162270;
        case 0x16227cu: goto label_16227c;
        default: break;
    }

    ctx->pc = 0x162198u;

    // 0x162198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16219c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1621a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1621a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1621a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1621a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1621a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1621ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1621acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1621b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1621b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1621b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1621b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1621bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1621bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1621c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1621c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1621c4: 0xc05cc84  jal         func_173210
    ctx->pc = 0x1621C4u;
    SET_GPR_U32(ctx, 31, 0x1621CCu);
    ctx->pc = 0x1621C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621C4u;
            // 0x1621c8: 0x26140018  addiu       $s4, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621CCu; }
        if (ctx->pc != 0x1621CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621CCu; }
        if (ctx->pc != 0x1621CCu) { return; }
    }
    ctx->pc = 0x1621CCu;
label_1621cc:
    // 0x1621cc: 0xc0588be  jal         func_1622F8
    ctx->pc = 0x1621CCu;
    SET_GPR_U32(ctx, 31, 0x1621D4u);
    ctx->pc = 0x1621D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621CCu;
            // 0x1621d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1622F8u;
    if (runtime->hasFunction(0x1622F8u)) {
        auto targetFn = runtime->lookupFunction(0x1622F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621D4u; }
        if (ctx->pc != 0x1621D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001622F8_0x1622f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621D4u; }
        if (ctx->pc != 0x1621D4u) { return; }
    }
    ctx->pc = 0x1621D4u;
label_1621d4:
    // 0x1621d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621d8: 0xc05ba10  jal         func_16E840
    ctx->pc = 0x1621D8u;
    SET_GPR_U32(ctx, 31, 0x1621E0u);
    ctx->pc = 0x1621DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621D8u;
            // 0x1621dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E840u;
    if (runtime->hasFunction(0x16E840u)) {
        auto targetFn = runtime->lookupFunction(0x16E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621E0u; }
        if (ctx->pc != 0x1621E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E840_0x16e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621E0u; }
        if (ctx->pc != 0x1621E0u) { return; }
    }
    ctx->pc = 0x1621E0u;
label_1621e0:
    // 0x1621e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1621e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621e4: 0xc05ba16  jal         func_16E858
    ctx->pc = 0x1621E4u;
    SET_GPR_U32(ctx, 31, 0x1621ECu);
    ctx->pc = 0x1621E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621E4u;
            // 0x1621e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E858u;
    if (runtime->hasFunction(0x16E858u)) {
        auto targetFn = runtime->lookupFunction(0x16E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621ECu; }
        if (ctx->pc != 0x1621ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E858_0x16e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621ECu; }
        if (ctx->pc != 0x1621ECu) { return; }
    }
    ctx->pc = 0x1621ECu;
label_1621ec:
    // 0x1621ec: 0xc058578  jal         func_1615E0
    ctx->pc = 0x1621ECu;
    SET_GPR_U32(ctx, 31, 0x1621F4u);
    ctx->pc = 0x1615E0u;
    if (runtime->hasFunction(0x1615E0u)) {
        auto targetFn = runtime->lookupFunction(0x1615E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621F4u; }
        if (ctx->pc != 0x1621F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615E0_0x1615e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1621F4u; }
        if (ctx->pc != 0x1621F4u) { return; }
    }
    ctx->pc = 0x1621F4u;
label_1621f4:
    // 0x1621f4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1621f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x1621f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1621f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1621fc: 0xc05855a  jal         func_161568
    ctx->pc = 0x1621FCu;
    SET_GPR_U32(ctx, 31, 0x162204u);
    ctx->pc = 0x162200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1621FCu;
            // 0x162200: 0x24842548  addiu       $a0, $a0, 0x2548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161568u;
    if (runtime->hasFunction(0x161568u)) {
        auto targetFn = runtime->lookupFunction(0x161568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162204u; }
        if (ctx->pc != 0x162204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161568_0x161568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162204u; }
        if (ctx->pc != 0x162204u) { return; }
    }
    ctx->pc = 0x162204u;
label_162204:
    // 0x162204: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162208: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16220c: 0xc05b714  jal         func_16DC50
    ctx->pc = 0x16220Cu;
    SET_GPR_U32(ctx, 31, 0x162214u);
    ctx->pc = 0x162210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16220Cu;
            // 0x162210: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC50u;
    if (runtime->hasFunction(0x16DC50u)) {
        auto targetFn = runtime->lookupFunction(0x16DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162214u; }
        if (ctx->pc != 0x162214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC50_0x16dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162214u; }
        if (ctx->pc != 0x162214u) { return; }
    }
    ctx->pc = 0x162214u;
label_162214:
    // 0x162214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162218: 0xc0585a0  jal         func_161680
    ctx->pc = 0x162218u;
    SET_GPR_U32(ctx, 31, 0x162220u);
    ctx->pc = 0x16221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162218u;
            // 0x16221c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161680u;
    if (runtime->hasFunction(0x161680u)) {
        auto targetFn = runtime->lookupFunction(0x161680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162220u; }
        if (ctx->pc != 0x162220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161680_0x161680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162220u; }
        if (ctx->pc != 0x162220u) { return; }
    }
    ctx->pc = 0x162220u;
label_162220:
    // 0x162220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162228: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x162228u;
    {
        const bool branch_taken_0x162228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162228u;
            // 0x16222c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162228) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162230u;
    // 0x162230: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x162230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x162234: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x162238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16223c: 0x248429a8  addiu       $a0, $a0, 0x29A8
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10664));
    // 0x162240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162244: 0x24a529d0  addiu       $a1, $a1, 0x29D0
    ctx->pc = 0x162244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    // 0x162248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16224c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16224cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162250: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x162250u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162254: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x162254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16225c: 0x8059f6c  j           func_167DB0
    ctx->pc = 0x16225Cu;
    ctx->pc = 0x162260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16225Cu;
            // 0x162260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167DB0_0x167db0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x162264u;
    // 0x162264: 0x0  nop
    ctx->pc = 0x162264u;
    // NOP
label_162268:
    // 0x162268: 0xc058830  jal         func_1620C0
    ctx->pc = 0x162268u;
    SET_GPR_U32(ctx, 31, 0x162270u);
    ctx->pc = 0x16226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162268u;
            // 0x16226c: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1620C0u;
    if (runtime->hasFunction(0x1620C0u)) {
        auto targetFn = runtime->lookupFunction(0x1620C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162270u; }
        if (ctx->pc != 0x162270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001620C0_0x1620c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162270u; }
        if (ctx->pc != 0x162270u) { return; }
    }
    ctx->pc = 0x162270u;
label_162270:
    // 0x162270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162274: 0xc058840  jal         func_162100
    ctx->pc = 0x162274u;
    SET_GPR_U32(ctx, 31, 0x16227Cu);
    ctx->pc = 0x162278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162274u;
            // 0x162278: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162100u;
    if (runtime->hasFunction(0x162100u)) {
        auto targetFn = runtime->lookupFunction(0x162100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16227Cu; }
        if (ctx->pc != 0x16227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162100_0x162100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16227Cu; }
        if (ctx->pc != 0x16227Cu) { return; }
    }
    ctx->pc = 0x16227Cu;
label_16227c:
    // 0x16227c: 0xaeb000c0  sw          $s0, 0xC0($s5)
    ctx->pc = 0x16227cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 16));
    // 0x162280: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x162284: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x162288: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x16228c: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x16228cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x162290: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16229c: 0x24422320  addiu       $v0, $v0, 0x2320
    ctx->pc = 0x16229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8992));
    // 0x1622a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1622a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1622a4: 0x246323f0  addiu       $v1, $v1, 0x23F0
    ctx->pc = 0x1622a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9200));
    // 0x1622a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1622a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1622ac: 0x248423b8  addiu       $a0, $a0, 0x23B8
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9144));
    // 0x1622b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1622b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1622b4: 0x24a524e8  addiu       $a1, $a1, 0x24E8
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9448));
    // 0x1622b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1622b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1622bc: 0x24c62530  addiu       $a2, $a2, 0x2530
    ctx->pc = 0x1622bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9520));
    // 0x1622c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1622c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1622c4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x1622c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x1622c8: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x1622c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x1622cc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x1622ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x1622d0: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x1622d4: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
    // 0x1622d8: 0xace23f30  sw          $v0, 0x3F30($a3)
    ctx->pc = 0x1622d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16176), GPR_U32(ctx, 2));
    // 0x1622dc: 0xad035fc0  sw          $v1, 0x5FC0($t0)
    ctx->pc = 0x1622dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24512), GPR_U32(ctx, 3));
    // 0x1622e0: 0xad243f34  sw          $a0, 0x3F34($t1)
    ctx->pc = 0x1622e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16180), GPR_U32(ctx, 4));
    // 0x1622e4: 0xad455fb8  sw          $a1, 0x5FB8($t2)
    ctx->pc = 0x1622e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24504), GPR_U32(ctx, 5));
    // 0x1622e8: 0xad665fbc  sw          $a2, 0x5FBC($t3)
    ctx->pc = 0x1622e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24508), GPR_U32(ctx, 6));
    // 0x1622ec: 0x805b71a  j           func_16DC68
    ctx->pc = 0x1622ECu;
    ctx->pc = 0x1622F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1622ECu;
            // 0x1622f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016DC68_0x16dc68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1622F4u;
    // 0x1622f4: 0x0  nop
    ctx->pc = 0x1622f4u;
    // NOP
}
