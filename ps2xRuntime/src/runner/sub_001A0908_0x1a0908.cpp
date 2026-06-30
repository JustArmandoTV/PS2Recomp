#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0908
// Address: 0x1a0908 - 0x1a0a20
void sub_001A0908_0x1a0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0908_0x1a0908");
#endif

    switch (ctx->pc) {
        case 0x1a0924u: goto label_1a0924;
        case 0x1a0984u: goto label_1a0984;
        case 0x1a0994u: goto label_1a0994;
        case 0x1a09a0u: goto label_1a09a0;
        case 0x1a09acu: goto label_1a09ac;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a0a04u: goto label_1a0a04;
        default: break;
    }

    ctx->pc = 0x1a0908u;

    // 0x1a0908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a090c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a091c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A091Cu;
    SET_GPR_U32(ctx, 31, 0x1A0924u);
    ctx->pc = 0x1A0920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A091Cu;
            // 0x1a0920: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0924u; }
        if (ctx->pc != 0x1A0924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0924u; }
        if (ctx->pc != 0x1A0924u) { return; }
    }
    ctx->pc = 0x1A0924u;
label_1a0924:
    // 0x1a0924: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a0924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a092c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A092Cu;
    {
        const bool branch_taken_0x1a092c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A092Cu;
            // 0x1a0930: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a092c) {
            ctx->pc = 0x1A0950u;
            goto label_1a0950;
        }
    }
    ctx->pc = 0x1A0934u;
    // 0x1a0934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a093c: 0x2484a6f8  addiu       $a0, $a0, -0x5908
    ctx->pc = 0x1a093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944504));
    // 0x1a0940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0944: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0944u;
    ctx->pc = 0x1A0948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0944u;
            // 0x1a0948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A094Cu;
    // 0x1a094c: 0x0  nop
    ctx->pc = 0x1a094cu;
    // NOP
label_1a0950:
    // 0x1a0950: 0x82020080  lb          $v0, 0x80($s0)
    ctx->pc = 0x1a0950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1a0954: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0954u;
    {
        const bool branch_taken_0x1a0954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0954u;
            // 0x1a0958: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0954) {
            ctx->pc = 0x1A0968u;
            goto label_1a0968;
        }
    }
    ctx->pc = 0x1A095Cu;
    // 0x1a095c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A095Cu;
    {
        const bool branch_taken_0x1a095c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a095c) {
            ctx->pc = 0x1A0960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A095Cu;
            // 0x1a0960: 0xa2020081  sb          $v0, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0964u;
            goto label_1a0964;
        }
    }
    ctx->pc = 0x1A0964u;
label_1a0964:
    // 0x1a0964: 0x82020080  lb          $v0, 0x80($s0)
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_1a0968:
    // 0x1a0968: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0968u;
    {
        const bool branch_taken_0x1a0968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0968) {
            ctx->pc = 0x1A096Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0968u;
            // 0x1a096c: 0xa2110080  sb          $s1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A09B0u;
            goto label_1a09b0;
        }
    }
    ctx->pc = 0x1A0970u;
    // 0x1a0970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0974: 0x5622000e  bnel        $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0974u;
    {
        const bool branch_taken_0x1a0974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0974) {
            ctx->pc = 0x1A0978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0974u;
            // 0x1a0978: 0xa2110080  sb          $s1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A09B0u;
            goto label_1a09b0;
        }
    }
    ctx->pc = 0x1A097Cu;
    // 0x1a097c: 0xc069a00  jal         func_1A6800
    ctx->pc = 0x1A097Cu;
    SET_GPR_U32(ctx, 31, 0x1A0984u);
    ctx->pc = 0x1A6800u;
    if (runtime->hasFunction(0x1A6800u)) {
        auto targetFn = runtime->lookupFunction(0x1A6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0984u; }
        if (ctx->pc != 0x1A0984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6800_0x1a6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0984u; }
        if (ctx->pc != 0x1A0984u) { return; }
    }
    ctx->pc = 0x1A0984u;
label_1a0984:
    // 0x1a0984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0984u;
    {
        const bool branch_taken_0x1a0984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0984u;
            // 0x1a0988: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0984) {
            ctx->pc = 0x1A0994u;
            goto label_1a0994;
        }
    }
    ctx->pc = 0x1A098Cu;
    // 0x1a098c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A098Cu;
    SET_GPR_U32(ctx, 31, 0x1A0994u);
    ctx->pc = 0x1A0990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A098Cu;
            // 0x1a0990: 0x2484a728  addiu       $a0, $a0, -0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    }
    ctx->pc = 0x1A0994u;
label_1a0994:
    // 0x1a0994: 0x260404f8  addiu       $a0, $s0, 0x4F8
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
    // 0x1a0998: 0xc068518  jal         func_1A1460
    ctx->pc = 0x1A0998u;
    SET_GPR_U32(ctx, 31, 0x1A09A0u);
    ctx->pc = 0x1A099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0998u;
            // 0x1a099c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1460u;
    if (runtime->hasFunction(0x1A1460u)) {
        auto targetFn = runtime->lookupFunction(0x1A1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09A0u; }
        if (ctx->pc != 0x1A09A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1460_0x1a1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09A0u; }
        if (ctx->pc != 0x1A09A0u) { return; }
    }
    ctx->pc = 0x1A09A0u;
label_1a09a0:
    // 0x1a09a0: 0x2604051c  addiu       $a0, $s0, 0x51C
    ctx->pc = 0x1a09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    // 0x1a09a4: 0xc068518  jal         func_1A1460
    ctx->pc = 0x1A09A4u;
    SET_GPR_U32(ctx, 31, 0x1A09ACu);
    ctx->pc = 0x1A09A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09A4u;
            // 0x1a09a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1460u;
    if (runtime->hasFunction(0x1A1460u)) {
        auto targetFn = runtime->lookupFunction(0x1A1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09ACu; }
        if (ctx->pc != 0x1A09ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1460_0x1a1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09ACu; }
        if (ctx->pc != 0x1A09ACu) { return; }
    }
    ctx->pc = 0x1A09ACu;
label_1a09ac:
    // 0x1a09ac: 0xa2110080  sb          $s1, 0x80($s0)
    ctx->pc = 0x1a09acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 17));
label_1a09b0:
    // 0x1a09b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a09b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a09b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a09b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a09b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a09bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A09BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A09C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09BCu;
            // 0x1a09c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A09C4u;
    // 0x1a09c4: 0x0  nop
    ctx->pc = 0x1a09c4u;
    // NOP
    // 0x1a09c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a09cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a09ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09d0: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x1a09d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1a09d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a09d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09d8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1a09dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a09dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a09e0: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1a09e4: 0x24a5a758  addiu       $a1, $a1, -0x58A8
    ctx->pc = 0x1a09e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
    // 0x1a09e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a09e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a09ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a09f0: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x1A09F0u;
    SET_GPR_U32(ctx, 31, 0x1A09F8u);
    ctx->pc = 0x1A09F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09F0u;
            // 0x1a09f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09F8u; }
        if (ctx->pc != 0x1A09F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09F8u; }
        if (ctx->pc != 0x1A09F8u) { return; }
    }
    ctx->pc = 0x1A09F8u;
label_1a09f8:
    // 0x1a09f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a09f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09fc: 0xc0680a2  jal         func_1A0288
    ctx->pc = 0x1A09FCu;
    SET_GPR_U32(ctx, 31, 0x1A0A04u);
    ctx->pc = 0x1A0A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09FCu;
            // 0x1a0a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0288u;
    if (runtime->hasFunction(0x1A0288u)) {
        auto targetFn = runtime->lookupFunction(0x1A0288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A04u; }
        if (ctx->pc != 0x1A0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0288_0x1a0288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A04u; }
        if (ctx->pc != 0x1A0A04u) { return; }
    }
    ctx->pc = 0x1A0A04u;
label_1a0a04:
    // 0x1a0a04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0a08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a0a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A0Cu;
            // 0x1a0a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0A14u;
    // 0x1a0a14: 0x0  nop
    ctx->pc = 0x1a0a14u;
    // NOP
    // 0x1a0a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A18u;
            // 0x1a0a1c: 0xac850554  sw          $a1, 0x554($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1364), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0A20u;
}
