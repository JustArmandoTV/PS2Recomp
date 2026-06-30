#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FBE60
// Address: 0x4fbe60 - 0x4fc5a0
void sub_004FBE60_0x4fbe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FBE60_0x4fbe60");
#endif

    switch (ctx->pc) {
        case 0x4fbe9cu: goto label_4fbe9c;
        case 0x4fbeb4u: goto label_4fbeb4;
        case 0x4fbec4u: goto label_4fbec4;
        case 0x4fbf5cu: goto label_4fbf5c;
        case 0x4fbf90u: goto label_4fbf90;
        case 0x4fc04cu: goto label_4fc04c;
        case 0x4fc05cu: goto label_4fc05c;
        case 0x4fc06cu: goto label_4fc06c;
        case 0x4fc07cu: goto label_4fc07c;
        case 0x4fc08cu: goto label_4fc08c;
        case 0x4fc138u: goto label_4fc138;
        case 0x4fc168u: goto label_4fc168;
        case 0x4fc1ecu: goto label_4fc1ec;
        case 0x4fc20cu: goto label_4fc20c;
        default: break;
    }

    ctx->pc = 0x4fbe60u;

    // 0x4fbe60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4fbe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4fbe64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4fbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4fbe68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4fbe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4fbe6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fbe6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4fbe70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4fbe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4fbe74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4fbe74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4fbe78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fbe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4fbe7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4fbe7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4fbe80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4fbe84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fbe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4fbe88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fbe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4fbe8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fbe8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbe90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fbe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4fbe94: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4FBE94u;
    SET_GPR_U32(ctx, 31, 0x4FBE9Cu);
    ctx->pc = 0x4FBE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBE94u;
            // 0x4fbe98: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBE9Cu; }
        if (ctx->pc != 0x4FBE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBE9Cu; }
        if (ctx->pc != 0x4FBE9Cu) { return; }
    }
    ctx->pc = 0x4FBE9Cu;
label_4fbe9c:
    // 0x4fbe9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4fbe9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4fbea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4fbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4fbea4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4fbea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4fbea8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x4fbea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x4fbeac: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4FBEACu;
    SET_GPR_U32(ctx, 31, 0x4FBEB4u);
    ctx->pc = 0x4FBEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBEACu;
            // 0x4fbeb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBEB4u; }
        if (ctx->pc != 0x4FBEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBEB4u; }
        if (ctx->pc != 0x4FBEB4u) { return; }
    }
    ctx->pc = 0x4FBEB4u;
label_4fbeb4:
    // 0x4fbeb4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4fbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4fbeb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fbeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbebc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FBEBCu;
    SET_GPR_U32(ctx, 31, 0x4FBEC4u);
    ctx->pc = 0x4FBEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBEBCu;
            // 0x4fbec0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBEC4u; }
        if (ctx->pc != 0x4FBEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBEC4u; }
        if (ctx->pc != 0x4FBEC4u) { return; }
    }
    ctx->pc = 0x4FBEC4u;
label_4fbec4:
    // 0x4fbec4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4fbec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fbec8: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4fbec8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
    // 0x4fbecc: 0xa6240034  sh          $a0, 0x34($s1)
    ctx->pc = 0x4fbeccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fbed0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4fbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fbed4: 0xa6240032  sh          $a0, 0x32($s1)
    ctx->pc = 0x4fbed4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fbed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4fbed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fbedc: 0xa6240058  sh          $a0, 0x58($s1)
    ctx->pc = 0x4fbedcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fbee0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4fbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4fbee4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x4fbee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x4fbee8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4fbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fbeec: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4fbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x4fbef0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4fbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fbef4: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x4fbef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
    // 0x4fbef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4fbefc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x4fbefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x4fbf00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4fbf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbf04: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4fbf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x4fbf08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4fbf08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbf0c: 0xa6200054  sh          $zero, 0x54($s1)
    ctx->pc = 0x4fbf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x4fbf10: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4fbf10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
    // 0x4fbf14: 0xa6200056  sh          $zero, 0x56($s1)
    ctx->pc = 0x4fbf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x4fbf18: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4fbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x4fbf1c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4fbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x4fbf20: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x4fbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x4fbf24: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x4fbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
    // 0x4fbf28: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x4fbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x4fbf2c: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x4fbf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x4fbf30: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x4fbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x4fbf34: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x4fbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x4fbf38: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x4fbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x4fbf3c: 0xae260084  sw          $a2, 0x84($s1)
    ctx->pc = 0x4fbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 6));
    // 0x4fbf40: 0xae260088  sw          $a2, 0x88($s1)
    ctx->pc = 0x4fbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 6));
    // 0x4fbf44: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x4fbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x4fbf48: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x4fbf48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x4fbf4c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x4fbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x4fbf50: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x4fbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x4fbf54: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x4fbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x4fbf58: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x4fbf58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fbf5c:
    // 0x4fbf5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4fbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4fbf60: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4fbf60u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x4fbf64: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x4fbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x4fbf68: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FBF68u;
    {
        const bool branch_taken_0x4fbf68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4FBF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBF68u;
            // 0x4fbf6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbf68) {
            ctx->pc = 0x4FBF80u;
            goto label_4fbf80;
        }
    }
    ctx->pc = 0x4FBF70u;
    // 0x4fbf70: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4fbf70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4fbf74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FBF74u;
    {
        const bool branch_taken_0x4fbf74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fbf74) {
            ctx->pc = 0x4FBF80u;
            goto label_4fbf80;
        }
    }
    ctx->pc = 0x4FBF7Cu;
    // 0x4fbf7c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4fbf7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4fbf80:
    // 0x4fbf80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FBF80u;
    {
        const bool branch_taken_0x4fbf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbf80) {
            ctx->pc = 0x4FBFA0u;
            goto label_4fbfa0;
        }
    }
    ctx->pc = 0x4FBF88u;
    // 0x4fbf88: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x4FBF88u;
    SET_GPR_U32(ctx, 31, 0x4FBF90u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBF90u; }
        if (ctx->pc != 0x4FBF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBF90u; }
        if (ctx->pc != 0x4FBF90u) { return; }
    }
    ctx->pc = 0x4FBF90u;
label_4fbf90:
    // 0x4fbf90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FBF90u;
    {
        const bool branch_taken_0x4fbf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbf90) {
            ctx->pc = 0x4FBFA0u;
            goto label_4fbfa0;
        }
    }
    ctx->pc = 0x4FBF98u;
    // 0x4fbf98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4fbf98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbf9c: 0x0  nop
    ctx->pc = 0x4fbf9cu;
    // NOP
label_4fbfa0:
    // 0x4fbfa0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FBFA0u;
    {
        const bool branch_taken_0x4fbfa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbfa0) {
            ctx->pc = 0x4FBFC0u;
            goto label_4fbfc0;
        }
    }
    ctx->pc = 0x4FBFA8u;
    // 0x4fbfa8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4fbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4fbfac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4fbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fbfb0: 0x8c630e34  lw          $v1, 0xE34($v1)
    ctx->pc = 0x4fbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3636)));
    // 0x4fbfb4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FBFB4u;
    {
        const bool branch_taken_0x4fbfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fbfb4) {
            ctx->pc = 0x4FBFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBFB4u;
            // 0x4fbfb8: 0x8e62077c  lw          $v0, 0x77C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBFC8u;
            goto label_4fbfc8;
        }
    }
    ctx->pc = 0x4FBFBCu;
    // 0x4fbfbc: 0x0  nop
    ctx->pc = 0x4fbfbcu;
    // NOP
label_4fbfc0:
    // 0x4fbfc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4FBFC0u;
    {
        const bool branch_taken_0x4fbfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBFC0u;
            // 0x4fbfc4: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbfc0) {
            ctx->pc = 0x4FBFD8u;
            goto label_4fbfd8;
        }
    }
    ctx->pc = 0x4FBFC8u;
label_4fbfc8:
    // 0x4fbfc8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4fbfc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4fbfcc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x4fbfccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4fbfd0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4FBFD0u;
    {
        const bool branch_taken_0x4fbfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBFD0u;
            // 0x4fbfd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbfd0) {
            ctx->pc = 0x4FBF5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fbf5c;
        }
    }
    ctx->pc = 0x4FBFD8u;
label_4fbfd8:
    // 0x4fbfd8: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x4fbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
    // 0x4fbfdc: 0x344325ed  ori         $v1, $v0, 0x25ED
    ctx->pc = 0x4fbfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
    // 0x4fbfe0: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4fbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x4fbfe4: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x4fbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x4fbfe8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4fbfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x4fbfec: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x4fbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x4fbff0: 0x922200d0  lbu         $v0, 0xD0($s1)
    ctx->pc = 0x4fbff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x4fbff4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FBFF4u;
    {
        const bool branch_taken_0x4fbff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbff4) {
            ctx->pc = 0x4FBFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBFF4u;
            // 0x4fbff8: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC004u;
            goto label_4fc004;
        }
    }
    ctx->pc = 0x4FBFFCu;
    // 0x4fbffc: 0x9222005a  lbu         $v0, 0x5A($s1)
    ctx->pc = 0x4fbffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4fc000: 0xa22200d0  sb          $v0, 0xD0($s1)
    ctx->pc = 0x4fc000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 208), (uint8_t)GPR_U32(ctx, 2));
label_4fc004:
    // 0x4fc004: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x4fc004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x4fc008: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4fc008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fc00c: 0xa22000e5  sb          $zero, 0xE5($s1)
    ctx->pc = 0x4fc00cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 229), (uint8_t)GPR_U32(ctx, 0));
    // 0x4fc010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fc010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc014: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x4fc014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x4fc018: 0x26240104  addiu       $a0, $s1, 0x104
    ctx->pc = 0x4fc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x4fc01c: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x4fc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x4fc020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fc020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc024: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x4fc024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x4fc028: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4fc028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fc02c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x4fc02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x4fc030: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x4fc030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x4fc034: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x4fc034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x4fc038: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x4fc038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x4fc03c: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x4fc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x4fc040: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x4fc040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x4fc044: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FC044u;
    SET_GPR_U32(ctx, 31, 0x4FC04Cu);
    ctx->pc = 0x4FC048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC044u;
            // 0x4fc048: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC04Cu; }
        if (ctx->pc != 0x4FC04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC04Cu; }
        if (ctx->pc != 0x4FC04Cu) { return; }
    }
    ctx->pc = 0x4FC04Cu;
label_4fc04c:
    // 0x4fc04c: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x4fc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x4fc050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fc050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc054: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FC054u;
    SET_GPR_U32(ctx, 31, 0x4FC05Cu);
    ctx->pc = 0x4FC058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC054u;
            // 0x4fc058: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC05Cu; }
        if (ctx->pc != 0x4FC05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC05Cu; }
        if (ctx->pc != 0x4FC05Cu) { return; }
    }
    ctx->pc = 0x4FC05Cu;
label_4fc05c:
    // 0x4fc05c: 0x2624010c  addiu       $a0, $s1, 0x10C
    ctx->pc = 0x4fc05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    // 0x4fc060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fc060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc064: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FC064u;
    SET_GPR_U32(ctx, 31, 0x4FC06Cu);
    ctx->pc = 0x4FC068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC064u;
            // 0x4fc068: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC06Cu; }
        if (ctx->pc != 0x4FC06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC06Cu; }
        if (ctx->pc != 0x4FC06Cu) { return; }
    }
    ctx->pc = 0x4FC06Cu;
label_4fc06c:
    // 0x4fc06c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x4fc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x4fc070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fc070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc074: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FC074u;
    SET_GPR_U32(ctx, 31, 0x4FC07Cu);
    ctx->pc = 0x4FC078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC074u;
            // 0x4fc078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC07Cu; }
        if (ctx->pc != 0x4FC07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC07Cu; }
        if (ctx->pc != 0x4FC07Cu) { return; }
    }
    ctx->pc = 0x4FC07Cu;
label_4fc07c:
    // 0x4fc07c: 0x26240114  addiu       $a0, $s1, 0x114
    ctx->pc = 0x4fc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x4fc080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fc080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc084: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4FC084u;
    SET_GPR_U32(ctx, 31, 0x4FC08Cu);
    ctx->pc = 0x4FC088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC084u;
            // 0x4fc088: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC08Cu; }
        if (ctx->pc != 0x4FC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC08Cu; }
        if (ctx->pc != 0x4FC08Cu) { return; }
    }
    ctx->pc = 0x4FC08Cu;
label_4fc08c:
    // 0x4fc08c: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x4fc08cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4fc090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fc090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc094: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FC094u;
    {
        const bool branch_taken_0x4fc094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fc094) {
            ctx->pc = 0x4FC098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC094u;
            // 0x4fc098: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC0A0u;
            goto label_4fc0a0;
        }
    }
    ctx->pc = 0x4FC09Cu;
    // 0x4fc09c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x4fc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_4fc0a0:
    // 0x4fc0a0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x4fc0a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fc0a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4fc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4fc0ac: 0xac6411dc  sw          $a0, 0x11DC($v1)
    ctx->pc = 0x4fc0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4572), GPR_U32(ctx, 4));
    // 0x4fc0b0: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x4fc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc0b4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FC0B4u;
    {
        const bool branch_taken_0x4fc0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fc0b4) {
            ctx->pc = 0x4FC0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC0B4u;
            // 0x4fc0b8: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC0DCu;
            goto label_4fc0dc;
        }
    }
    ctx->pc = 0x4FC0BCu;
    // 0x4fc0bc: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x4fc0bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4fc0c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4fc0c4: 0x2442eacc  addiu       $v0, $v0, -0x1534
    ctx->pc = 0x4fc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961868));
    // 0x4fc0c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc0cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fc0d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4FC0D4u;
    {
        const bool branch_taken_0x4fc0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC0D4u;
            // 0x4fc0d8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc0d4) {
            ctx->pc = 0x4FC188u;
            goto label_4fc188;
        }
    }
    ctx->pc = 0x4FC0DCu;
label_4fc0dc:
    // 0x4fc0dc: 0x38830005  xori        $v1, $a0, 0x5
    ctx->pc = 0x4fc0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
    // 0x4fc0e0: 0x38820006  xori        $v0, $a0, 0x6
    ctx->pc = 0x4fc0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x4fc0e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fc0e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fc0e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fc0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fc0ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4fc0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4fc0f0: 0x38820009  xori        $v0, $a0, 0x9
    ctx->pc = 0x4fc0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)9);
    // 0x4fc0f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fc0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fc0f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4fc0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4fc0fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FC0FCu;
    {
        const bool branch_taken_0x4fc0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc0fc) {
            ctx->pc = 0x4FC100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC0FCu;
            // 0x4fc100: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC124u;
            goto label_4fc124;
        }
    }
    ctx->pc = 0x4FC104u;
    // 0x4fc104: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x4fc104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4fc108: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fc108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4fc10c: 0x2442ea3c  addiu       $v0, $v0, -0x15C4
    ctx->pc = 0x4fc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961724));
    // 0x4fc110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fc118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fc11c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4FC11Cu;
    {
        const bool branch_taken_0x4fc11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC11Cu;
            // 0x4fc120: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc11c) {
            ctx->pc = 0x4FC188u;
            goto label_4fc188;
        }
    }
    ctx->pc = 0x4FC124u;
label_4fc124:
    // 0x4fc124: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4FC124u;
    {
        const bool branch_taken_0x4fc124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fc124) {
            ctx->pc = 0x4FC15Cu;
            goto label_4fc15c;
        }
    }
    ctx->pc = 0x4FC12Cu;
    // 0x4fc12c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4fc130: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4FC130u;
    SET_GPR_U32(ctx, 31, 0x4FC138u);
    ctx->pc = 0x4FC134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC130u;
            // 0x4fc134: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC138u; }
        if (ctx->pc != 0x4FC138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC138u; }
        if (ctx->pc != 0x4FC138u) { return; }
    }
    ctx->pc = 0x4FC138u;
label_4fc138:
    // 0x4fc138: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4fc138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4fc13c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4fc140: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x4fc140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x4fc144: 0x2442ebd0  addiu       $v0, $v0, -0x1430
    ctx->pc = 0x4fc144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x4fc148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fc150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fc154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4FC154u;
    {
        const bool branch_taken_0x4fc154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC154u;
            // 0x4fc158: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc154) {
            ctx->pc = 0x4FC188u;
            goto label_4fc188;
        }
    }
    ctx->pc = 0x4FC15Cu;
label_4fc15c:
    // 0x4fc15c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4fc160: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4FC160u;
    SET_GPR_U32(ctx, 31, 0x4FC168u);
    ctx->pc = 0x4FC164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC160u;
            // 0x4fc164: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC168u; }
        if (ctx->pc != 0x4FC168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC168u; }
        if (ctx->pc != 0x4FC168u) { return; }
    }
    ctx->pc = 0x4FC168u;
label_4fc168:
    // 0x4fc168: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4fc168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4fc16c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4fc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4fc170: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x4fc170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x4fc174: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4fc174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4fc178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc17c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4fc180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fc184: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fc184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fc188:
    // 0x4fc188: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fc188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4fc18c: 0x8e63095c  lw          $v1, 0x95C($s3)
    ctx->pc = 0x4fc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2396)));
    // 0x4fc190: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x4fc190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x4fc194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4fc194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc198: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4FC198u;
    {
        const bool branch_taken_0x4fc198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fc198) {
            ctx->pc = 0x4FC1E0u;
            goto label_4fc1e0;
        }
    }
    ctx->pc = 0x4FC1A0u;
    // 0x4fc1a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4fc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fc1a4: 0x8e620968  lw          $v0, 0x968($s3)
    ctx->pc = 0x4fc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc1a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4fc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4fc1ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fc1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fc1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc1b8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x4fc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x4fc1bc: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x4fc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x4fc1c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4fc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4fc1c4: 0x8e620968  lw          $v0, 0x968($s3)
    ctx->pc = 0x4fc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc1c8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4fc1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4fc1cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fc1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fc1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fc1d8: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x4fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x4fc1dc: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x4fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_4fc1e0:
    // 0x4fc1e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4fc1e4: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4FC1E4u;
    SET_GPR_U32(ctx, 31, 0x4FC1ECu);
    ctx->pc = 0x4FC1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC1E4u;
            // 0x4fc1e8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC1ECu; }
        if (ctx->pc != 0x4FC1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC1ECu; }
        if (ctx->pc != 0x4FC1ECu) { return; }
    }
    ctx->pc = 0x4FC1ECu;
label_4fc1ec:
    // 0x4fc1ec: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x4fc1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x4fc1f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4fc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4fc1f4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x4fc1f4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4fc1f8: 0x8c64a2e0  lw          $a0, -0x5D20($v1)
    ctx->pc = 0x4fc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
    // 0x4fc1fc: 0x0  nop
    ctx->pc = 0x4fc1fcu;
    // NOP
    // 0x4fc200: 0x1010  mfhi        $v0
    ctx->pc = 0x4fc200u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4fc204: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4FC204u;
    SET_GPR_U32(ctx, 31, 0x4FC20Cu);
    ctx->pc = 0x4FC208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC204u;
            // 0x4fc208: 0x2452ffcf  addiu       $s2, $v0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC20Cu; }
        if (ctx->pc != 0x4FC20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC20Cu; }
        if (ctx->pc != 0x4FC20Cu) { return; }
    }
    ctx->pc = 0x4FC20Cu;
label_4fc20c:
    // 0x4fc20c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4fc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4fc210: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x4fc210u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4fc214: 0x1810  mfhi        $v1
    ctx->pc = 0x4fc214u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4fc218: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x4fc218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x4fc21c: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x4fc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x4fc220: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x4fc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x4fc224: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x4FC224u;
    {
        const bool branch_taken_0x4fc224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc224) {
            ctx->pc = 0x4FC228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC224u;
            // 0x4fc228: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC3A8u;
            goto label_4fc3a8;
        }
    }
    ctx->pc = 0x4FC22Cu;
    // 0x4fc22c: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x4fc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc230: 0x1064005c  beq         $v1, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x4FC230u;
    {
        const bool branch_taken_0x4fc230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fc230) {
            ctx->pc = 0x4FC3A4u;
            goto label_4fc3a4;
        }
    }
    ctx->pc = 0x4FC238u;
    // 0x4fc238: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x4FC238u;
    {
        const bool branch_taken_0x4fc238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc238) {
            ctx->pc = 0x4FC3A4u;
            goto label_4fc3a4;
        }
    }
    ctx->pc = 0x4FC240u;
    // 0x4fc240: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x4fc240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4fc244: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc248: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fc248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4fc24c: 0x2463e920  addiu       $v1, $v1, -0x16E0
    ctx->pc = 0x4fc24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
    // 0x4fc250: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fc254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc258: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4fc258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4fc25c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC25Cu;
    {
        const bool branch_taken_0x4fc25c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc25c) {
            ctx->pc = 0x4FC26Cu;
            goto label_4fc26c;
        }
    }
    ctx->pc = 0x4FC264u;
    // 0x4fc264: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4FC264u;
    {
        const bool branch_taken_0x4fc264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC264u;
            // 0x4fc268: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc264) {
            ctx->pc = 0x4FC28Cu;
            goto label_4fc28c;
        }
    }
    ctx->pc = 0x4FC26Cu;
label_4fc26c:
    // 0x4fc26c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4fc270: 0x2463e924  addiu       $v1, $v1, -0x16DC
    ctx->pc = 0x4fc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961444));
    // 0x4fc274: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc278: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fc278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc27c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4fc27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fc280: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC280u;
    {
        const bool branch_taken_0x4fc280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc280) {
            ctx->pc = 0x4FC284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC280u;
            // 0x4fc284: 0x9226005a  lbu         $a2, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC290u;
            goto label_4fc290;
        }
    }
    ctx->pc = 0x4FC288u;
    // 0x4fc288: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x4fc288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
label_4fc28c:
    // 0x4fc28c: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4fc28cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4fc290:
    // 0x4fc290: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fc290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fc294: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc298: 0x24a5e8d0  addiu       $a1, $a1, -0x1730
    ctx->pc = 0x4fc298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
    // 0x4fc29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc2a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4fc2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4fc2a4: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x4fc2a8: 0x8e660968  lw          $a2, 0x968($s3)
    ctx->pc = 0x4fc2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc2ac: 0x8e64095c  lw          $a0, 0x95C($s3)
    ctx->pc = 0x4fc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2396)));
    // 0x4fc2b0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fc2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fc2b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc2b8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FC2B8u;
    {
        const bool branch_taken_0x4fc2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FC2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC2B8u;
            // 0x4fc2bc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc2b8) {
            ctx->pc = 0x4FC2D4u;
            goto label_4fc2d4;
        }
    }
    ctx->pc = 0x4FC2C0u;
    // 0x4fc2c0: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x4fc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x4fc2c4: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x4fc2c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4fc2c8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC2C8u;
    {
        const bool branch_taken_0x4fc2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc2c8) {
            ctx->pc = 0x4FC2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC2C8u;
            // 0x4fc2cc: 0x8e2900d8  lw          $t1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC2D8u;
            goto label_4fc2d8;
        }
    }
    ctx->pc = 0x4FC2D0u;
    // 0x4fc2d0: 0xae2500d8  sw          $a1, 0xD8($s1)
    ctx->pc = 0x4fc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 5));
label_4fc2d4:
    // 0x4fc2d4: 0x8e2900d8  lw          $t1, 0xD8($s1)
    ctx->pc = 0x4fc2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_4fc2d8:
    // 0x4fc2d8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4fc2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x4fc2dc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x4fc2e0: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x4fc2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x4fc2e4: 0x34878889  ori         $a3, $a0, 0x8889
    ctx->pc = 0x4fc2e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x4fc2e8: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4fc2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x4fc2ec: 0x125001b  divu        $zero, $t1, $a1
    ctx->pc = 0x4fc2ecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x4fc2f0: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x4fc2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc2f4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4fc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4fc2f8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x4fc2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4fc2fc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4fc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x4fc300: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4fc300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4fc304: 0x5010  mfhi        $t2
    ctx->pc = 0x4fc304u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x4fc308: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x4fc308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fc30c: 0x690019  multu       $v1, $t1
    ctx->pc = 0x4fc30cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc310: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4fc310u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc314: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4fc314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4fc318: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x4fc318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x4fc31c: 0x3010  mfhi        $a2
    ctx->pc = 0x4fc31cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4fc320: 0x64982  srl         $t1, $a2, 6
    ctx->pc = 0x4fc320u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x4fc324: 0xe90019  multu       $a3, $t1
    ctx->pc = 0x4fc324u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc328: 0x3010  mfhi        $a2
    ctx->pc = 0x4fc328u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4fc32c: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x4fc32cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x4fc330: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x4fc330u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x4fc334: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x4fc334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4fc338: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x4fc338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4fc33c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4fc33cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fc340: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fc340u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fc344: 0x3810  mfhi        $a3
    ctx->pc = 0x4fc344u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x4fc348: 0x6a0019  multu       $v1, $t2
    ctx->pc = 0x4fc348u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc34c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4fc34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4fc350: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4fc350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4fc354: 0x1810  mfhi        $v1
    ctx->pc = 0x4fc354u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4fc358: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x4fc358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x4fc35c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4fc35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4fc360: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x4fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fc364: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4fc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4fc368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc36c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc370: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x4fc370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x4fc374: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x4fc374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc378: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x4fc378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x4fc37c: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x4fc37cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x4fc380: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4fc380u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc384: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4fc384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4fc388: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fc388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc38c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4fc38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4fc390: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4fc390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4fc394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fc398: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x4fc398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x4fc39c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x4FC39Cu;
    {
        const bool branch_taken_0x4fc39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC39Cu;
            // 0x4fc3a0: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc39c) {
            ctx->pc = 0x4FC570u;
            goto label_4fc570;
        }
    }
    ctx->pc = 0x4FC3A4u;
label_4fc3a4:
    // 0x4fc3a4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x4fc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4fc3a8:
    // 0x4fc3a8: 0x50600062  beql        $v1, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x4FC3A8u;
    {
        const bool branch_taken_0x4fc3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc3a8) {
            ctx->pc = 0x4FC3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC3A8u;
            // 0x4fc3ac: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC534u;
            goto label_4fc534;
        }
    }
    ctx->pc = 0x4FC3B0u;
    // 0x4fc3b0: 0x8e640968  lw          $a0, 0x968($s3)
    ctx->pc = 0x4fc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc3b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4fc3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4fc3b8: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x4FC3B8u;
    {
        const bool branch_taken_0x4fc3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fc3b8) {
            ctx->pc = 0x4FC530u;
            goto label_4fc530;
        }
    }
    ctx->pc = 0x4FC3C0u;
    // 0x4fc3c0: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x4FC3C0u;
    {
        const bool branch_taken_0x4fc3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc3c0) {
            ctx->pc = 0x4FC530u;
            goto label_4fc530;
        }
    }
    ctx->pc = 0x4FC3C8u;
    // 0x4fc3c8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4fc3cc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x4fc3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4fc3d0: 0x2463e920  addiu       $v1, $v1, -0x16E0
    ctx->pc = 0x4fc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
    // 0x4fc3d4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc3d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc3dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc3e0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4fc3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4fc3e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC3E4u;
    {
        const bool branch_taken_0x4fc3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc3e4) {
            ctx->pc = 0x4FC3F4u;
            goto label_4fc3f4;
        }
    }
    ctx->pc = 0x4FC3ECu;
    // 0x4fc3ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4FC3ECu;
    {
        const bool branch_taken_0x4fc3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC3ECu;
            // 0x4fc3f0: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc3ec) {
            ctx->pc = 0x4FC414u;
            goto label_4fc414;
        }
    }
    ctx->pc = 0x4FC3F4u;
label_4fc3f4:
    // 0x4fc3f4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fc3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4fc3f8: 0x2463e924  addiu       $v1, $v1, -0x16DC
    ctx->pc = 0x4fc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961444));
    // 0x4fc3fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fc404: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4fc404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4fc408: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC408u;
    {
        const bool branch_taken_0x4fc408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc408) {
            ctx->pc = 0x4FC40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC408u;
            // 0x4fc40c: 0x9226005a  lbu         $a2, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC418u;
            goto label_4fc418;
        }
    }
    ctx->pc = 0x4FC410u;
    // 0x4fc410: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x4fc410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
label_4fc414:
    // 0x4fc414: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4fc414u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4fc418:
    // 0x4fc418: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fc418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fc41c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc420: 0x24a5e8d0  addiu       $a1, $a1, -0x1730
    ctx->pc = 0x4fc420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
    // 0x4fc424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fc424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc428: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4fc428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4fc42c: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x4fc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x4fc430: 0x8e660968  lw          $a2, 0x968($s3)
    ctx->pc = 0x4fc430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc434: 0x8e64095c  lw          $a0, 0x95C($s3)
    ctx->pc = 0x4fc434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2396)));
    // 0x4fc438: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fc438u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fc43c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fc43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc440: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FC440u;
    {
        const bool branch_taken_0x4fc440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC440u;
            // 0x4fc444: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc440) {
            ctx->pc = 0x4FC45Cu;
            goto label_4fc45c;
        }
    }
    ctx->pc = 0x4FC448u;
    // 0x4fc448: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x4fc448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x4fc44c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x4fc44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4fc450: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC450u;
    {
        const bool branch_taken_0x4fc450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc450) {
            ctx->pc = 0x4FC454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC450u;
            // 0x4fc454: 0x8e2a00d4  lw          $t2, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC460u;
            goto label_4fc460;
        }
    }
    ctx->pc = 0x4FC458u;
    // 0x4fc458: 0xae2500d4  sw          $a1, 0xD4($s1)
    ctx->pc = 0x4fc458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 5));
label_4fc45c:
    // 0x4fc45c: 0x8e2a00d4  lw          $t2, 0xD4($s1)
    ctx->pc = 0x4fc45cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4fc460:
    // 0x4fc460: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4fc460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x4fc464: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fc464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x4fc468: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x4fc468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc46c: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x4fc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x4fc470: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4fc470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x4fc474: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x4fc474u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x4fc478: 0x34888889  ori         $t0, $a0, 0x8889
    ctx->pc = 0x4fc478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x4fc47c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x4fc47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4fc480: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4fc480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4fc484: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4fc484u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fc488: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x4fc488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4fc48c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fc48cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fc490: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x4fc490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x4fc494: 0x5810  mfhi        $t3
    ctx->pc = 0x4fc494u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x4fc498: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x4fc498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x4fc49c: 0x6a0019  multu       $v1, $t2
    ctx->pc = 0x4fc49cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc4a0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4fc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4fc4a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4fc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fc4a8: 0x3810  mfhi        $a3
    ctx->pc = 0x4fc4a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x4fc4ac: 0x75182  srl         $t2, $a3, 6
    ctx->pc = 0x4fc4acu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x4fc4b0: 0x10a0019  multu       $t0, $t2
    ctx->pc = 0x4fc4b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc4b4: 0x3810  mfhi        $a3
    ctx->pc = 0x4fc4b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x4fc4b8: 0x149001b  divu        $zero, $t2, $t1
    ctx->pc = 0x4fc4b8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x4fc4bc: 0x73942  srl         $a3, $a3, 5
    ctx->pc = 0x4fc4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x4fc4c0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x4fc4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4fc4c4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x4fc4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x4fc4c8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4fc4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4fc4cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4fc4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4fc4d0: 0x4010  mfhi        $t0
    ctx->pc = 0x4fc4d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x4fc4d4: 0x6b0019  multu       $v1, $t3
    ctx->pc = 0x4fc4d4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4fc4d8: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x4fc4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4fc4dc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x4fc4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fc4e0: 0x1810  mfhi        $v1
    ctx->pc = 0x4fc4e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4fc4e4: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x4fc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x4fc4e8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x4fc4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fc4ec: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x4fc4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4fc4f0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4fc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fc4f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fc4f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4fc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4fc4fc: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x4fc4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x4fc500: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x4fc500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x4fc504: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x4fc504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x4fc508: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x4fc508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x4fc50c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4fc50cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fc510: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4fc510u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4fc514: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4fc514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fc518: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4fc518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4fc51c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4fc51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4fc520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fc520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fc524: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x4fc524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x4fc528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4FC528u;
    {
        const bool branch_taken_0x4fc528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC528u;
            // 0x4fc52c: 0xae2400a0  sw          $a0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc528) {
            ctx->pc = 0x4FC570u;
            goto label_4fc570;
        }
    }
    ctx->pc = 0x4FC530u;
label_4fc530:
    // 0x4fc530: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4fc530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4fc534:
    // 0x4fc534: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fc534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4fc538: 0x8e670968  lw          $a3, 0x968($s3)
    ctx->pc = 0x4fc538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
    // 0x4fc53c: 0x24a5da5c  addiu       $a1, $a1, -0x25A4
    ctx->pc = 0x4fc53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957660));
    // 0x4fc540: 0x9224005a  lbu         $a0, 0x5A($s1)
    ctx->pc = 0x4fc540u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4fc544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fc544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fc548: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4fc548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4fc54c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4fc54cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fc550: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4fc550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4fc554: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4fc554u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4fc558: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fc558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4fc55c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4fc560: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4fc560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fc564: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x4fc564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
    // 0x4fc568: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x4fc568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x4fc56c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x4fc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_4fc570:
    // 0x4fc570: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4fc570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fc574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4fc574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fc578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fc578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fc57c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fc57cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fc580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fc580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fc584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fc584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fc588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fc588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fc58c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC58Cu;
            // 0x4fc590: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FC594u;
    // 0x4fc594: 0x0  nop
    ctx->pc = 0x4fc594u;
    // NOP
    // 0x4fc598: 0x0  nop
    ctx->pc = 0x4fc598u;
    // NOP
    // 0x4fc59c: 0x0  nop
    ctx->pc = 0x4fc59cu;
    // NOP
}
