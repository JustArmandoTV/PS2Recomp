#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164F50
// Address: 0x164f50 - 0x1650c8
void sub_00164F50_0x164f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164F50_0x164f50");
#endif

    switch (ctx->pc) {
        case 0x164f60u: goto label_164f60;
        case 0x164f68u: goto label_164f68;
        case 0x164f88u: goto label_164f88;
        case 0x164fa8u: goto label_164fa8;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fe8u: goto label_164fe8;
        case 0x165008u: goto label_165008;
        case 0x165020u: goto label_165020;
        case 0x165050u: goto label_165050;
        case 0x165064u: goto label_165064;
        case 0x165098u: goto label_165098;
        case 0x1650b8u: goto label_1650b8;
        default: break;
    }

    ctx->pc = 0x164f50u;

    // 0x164f50: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x164f54: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x164f58: 0x3e00008  jr          $ra
    ctx->pc = 0x164F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F58u;
            // 0x164f5c: 0x84a200e2  lh          $v0, 0xE2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F60u;
label_164f60:
    // 0x164f60: 0x3e00008  jr          $ra
    ctx->pc = 0x164F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F60u;
            // 0x164f64: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F68u;
label_164f68:
    // 0x164f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x164f78: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x164f7c: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x164f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x164f80: 0xc05df48  jal         func_177D20
    ctx->pc = 0x164F80u;
    SET_GPR_U32(ctx, 31, 0x164F88u);
    ctx->pc = 0x164F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F80u;
            // 0x164f84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177D20u;
    if (runtime->hasFunction(0x177D20u)) {
        auto targetFn = runtime->lookupFunction(0x177D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F88u; }
        if (ctx->pc != 0x164F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177D20_0x177d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F88u; }
        if (ctx->pc != 0x164F88u) { return; }
    }
    ctx->pc = 0x164F88u;
label_164f88:
    // 0x164f88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x164f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x164f8c: 0x260700aa  addiu       $a3, $s0, 0xAA
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
    // 0x164f90: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x164f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x164f94: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x164f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x164f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164fa0: 0x805df56  j           func_177D58
    ctx->pc = 0x164FA0u;
    ctx->pc = 0x164FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FA0u;
            // 0x164fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177D58u;
    {
        auto targetFn = runtime->lookupFunction(0x177D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164FA8u;
label_164fa8:
    // 0x164fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x164fb8: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x164fbc: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x164fc0: 0xc05df3e  jal         func_177CF8
    ctx->pc = 0x164FC0u;
    SET_GPR_U32(ctx, 31, 0x164FC8u);
    ctx->pc = 0x164FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FC0u;
            // 0x164fc4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CF8u;
    if (runtime->hasFunction(0x177CF8u)) {
        auto targetFn = runtime->lookupFunction(0x177CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FC8u; }
        if (ctx->pc != 0x164FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177CF8_0x177cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164FC8u; }
        if (ctx->pc != 0x164FC8u) { return; }
    }
    ctx->pc = 0x164FC8u;
label_164fc8:
    // 0x164fc8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x164fcc: 0x860700aa  lh          $a3, 0xAA($s0)
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x164fd0: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x164fd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x164fd4: 0x860600a8  lh          $a2, 0xA8($s0)
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x164fd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164fe0: 0x805df52  j           func_177D48
    ctx->pc = 0x164FE0u;
    ctx->pc = 0x164FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164FE0u;
            // 0x164fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177D48u;
    if (runtime->hasFunction(0x177D48u)) {
        auto targetFn = runtime->lookupFunction(0x177D48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00177D48_0x177d48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x164FE8u;
label_164fe8:
    // 0x164fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x164fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x164ff0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ff4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x164ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x164ff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ffc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165000: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x165000u;
    SET_GPR_U32(ctx, 31, 0x165008u);
    ctx->pc = 0x165004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165000u;
            // 0x165004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165008u; }
        if (ctx->pc != 0x165008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165008u; }
        if (ctx->pc != 0x165008u) { return; }
    }
    ctx->pc = 0x165008u;
label_165008:
    // 0x165008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16500c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16500cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165010: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x165010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165014: 0x27a70002  addiu       $a3, $sp, 0x2
    ctx->pc = 0x165014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x165018: 0xc059104  jal         func_164410
    ctx->pc = 0x165018u;
    SET_GPR_U32(ctx, 31, 0x165020u);
    ctx->pc = 0x16501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165018u;
            // 0x16501c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164410u;
    if (runtime->hasFunction(0x164410u)) {
        auto targetFn = runtime->lookupFunction(0x164410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165020u; }
        if (ctx->pc != 0x165020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164410_0x164410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165020u; }
        if (ctx->pc != 0x165020u) { return; }
    }
    ctx->pc = 0x165020u;
label_165020:
    // 0x165020: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x165020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165024: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x165024u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x165028: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x165028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16502c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16502cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165030: 0xa62300a0  sh          $v1, 0xA0($s1)
    ctx->pc = 0x165030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x165034: 0xa62200a4  sh          $v0, 0xA4($s1)
    ctx->pc = 0x165034u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x165038: 0xa62400a2  sh          $a0, 0xA2($s1)
    ctx->pc = 0x165038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 4));
    // 0x16503c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16503cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165040: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x165040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165044: 0x3e00008  jr          $ra
    ctx->pc = 0x165044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165044u;
            // 0x165048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16504Cu;
    // 0x16504c: 0x0  nop
    ctx->pc = 0x16504cu;
    // NOP
label_165050:
    // 0x165050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x165058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16505c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x16505Cu;
    SET_GPR_U32(ctx, 31, 0x165064u);
    ctx->pc = 0x165060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16505Cu;
            // 0x165060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165064u; }
        if (ctx->pc != 0x165064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165064u; }
        if (ctx->pc != 0x165064u) { return; }
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16506c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x16506cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x165070: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x165070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x165074: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x165078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16507c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16507cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165080: 0x24c661f4  addiu       $a2, $a2, 0x61F4
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25076));
    // 0x165084: 0x24e761f6  addiu       $a3, $a3, 0x61F6
    ctx->pc = 0x165084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25078));
    // 0x165088: 0x250861f8  addiu       $t0, $t0, 0x61F8
    ctx->pc = 0x165088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25080));
    // 0x16508c: 0x8059104  j           func_164410
    ctx->pc = 0x16508Cu;
    ctx->pc = 0x165090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16508Cu;
            // 0x165090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164410u;
    if (runtime->hasFunction(0x164410u)) {
        auto targetFn = runtime->lookupFunction(0x164410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00164410_0x164410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x165094u;
    // 0x165094: 0x0  nop
    ctx->pc = 0x165094u;
    // NOP
label_165098:
    // 0x165098: 0x948200a0  lhu         $v0, 0xA0($a0)
    ctx->pc = 0x165098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x16509c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x16509cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1650a0: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x1650a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1650a4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1650a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1650a8: 0x948200a4  lhu         $v0, 0xA4($a0)
    ctx->pc = 0x1650a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1650ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1650ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1650B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650ACu;
            // 0x1650b0: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1650B4u;
    // 0x1650b4: 0x0  nop
    ctx->pc = 0x1650b4u;
    // NOP
label_1650b8:
    // 0x1650b8: 0xa48700a4  sh          $a3, 0xA4($a0)
    ctx->pc = 0x1650b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 7));
    // 0x1650bc: 0xa48500a0  sh          $a1, 0xA0($a0)
    ctx->pc = 0x1650bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x1650c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1650C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1650C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650C0u;
            // 0x1650c4: 0xa48600a2  sh          $a2, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1650C8u;
}
