#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D8A0
// Address: 0x19d8a0 - 0x19dc80
void sub_0019D8A0_0x19d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D8A0_0x19d8a0");
#endif

    switch (ctx->pc) {
        case 0x19d8d0u: goto label_19d8d0;
        case 0x19d8f0u: goto label_19d8f0;
        case 0x19d900u: goto label_19d900;
        case 0x19d93cu: goto label_19d93c;
        case 0x19d954u: goto label_19d954;
        case 0x19d97cu: goto label_19d97c;
        case 0x19d9b0u: goto label_19d9b0;
        case 0x19d9c8u: goto label_19d9c8;
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19da08u: goto label_19da08;
        case 0x19da2cu: goto label_19da2c;
        case 0x19da40u: goto label_19da40;
        case 0x19da78u: goto label_19da78;
        case 0x19daa0u: goto label_19daa0;
        case 0x19dad4u: goto label_19dad4;
        case 0x19dae8u: goto label_19dae8;
        case 0x19db08u: goto label_19db08;
        case 0x19db94u: goto label_19db94;
        case 0x19dbacu: goto label_19dbac;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbe4u: goto label_19dbe4;
        case 0x19dc0cu: goto label_19dc0c;
        case 0x19dc28u: goto label_19dc28;
        case 0x19dc38u: goto label_19dc38;
        case 0x19dc64u: goto label_19dc64;
        default: break;
    }

    ctx->pc = 0x19d8a0u;

    // 0x19d8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d8a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19d8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19d8b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d8b8: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x19d8bc: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D8BCu;
    {
        const bool branch_taken_0x19d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19D8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8BCu;
            // 0x19d8c0: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8bc) {
            ctx->pc = 0x19D904u;
            goto label_19d904;
        }
    }
    ctx->pc = 0x19D8C4u;
    // 0x19d8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8c8: 0xc06dee0  jal         func_1B7B80
    ctx->pc = 0x19D8C8u;
    SET_GPR_U32(ctx, 31, 0x19D8D0u);
    ctx->pc = 0x19D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8C8u;
            // 0x19d8cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B80u;
    if (runtime->hasFunction(0x1B7B80u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8D0u; }
        if (ctx->pc != 0x19D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B80_0x1b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8D0u; }
        if (ctx->pc != 0x19D8D0u) { return; }
    }
    ctx->pc = 0x19D8D0u;
label_19d8d0:
    // 0x19d8d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d8d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d8d8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19d8dc: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x19d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x19d8e0: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D8E0u;
    {
        const bool branch_taken_0x19d8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8E0u;
            // 0x19d8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8e0) {
            ctx->pc = 0x19D904u;
            goto label_19d904;
        }
    }
    ctx->pc = 0x19D8E8u;
    // 0x19d8e8: 0xc06e0e2  jal         func_1B8388
    ctx->pc = 0x19D8E8u;
    SET_GPR_U32(ctx, 31, 0x19D8F0u);
    ctx->pc = 0x1B8388u;
    if (runtime->hasFunction(0x1B8388u)) {
        auto targetFn = runtime->lookupFunction(0x1B8388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8F0u; }
        if (ctx->pc != 0x19D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8388_0x1b8388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8F0u; }
        if (ctx->pc != 0x19D8F0u) { return; }
    }
    ctx->pc = 0x19D8F0u;
label_19d8f0:
    // 0x19d8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8f4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x19d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19d8f8: 0xc06e07e  jal         func_1B81F8
    ctx->pc = 0x19D8F8u;
    SET_GPR_U32(ctx, 31, 0x19D900u);
    ctx->pc = 0x19D8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8F8u;
            // 0x19d8fc: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F8u;
    if (runtime->hasFunction(0x1B81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D900u; }
        if (ctx->pc != 0x19D900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B81F8_0x1b81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D900u; }
        if (ctx->pc != 0x19D900u) { return; }
    }
    ctx->pc = 0x19D900u;
label_19d900:
    // 0x19d900: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x19d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
label_19d904:
    // 0x19d904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d908: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19d908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d910: 0x3e00008  jr          $ra
    ctx->pc = 0x19D910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D910u;
            // 0x19d914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D918u;
    // 0x19d918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d91c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19d920: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d924: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19d928: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d92c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x19d930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19d934: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D934u;
    SET_GPR_U32(ctx, 31, 0x19D93Cu);
    ctx->pc = 0x19D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D934u;
            // 0x19d938: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D93Cu; }
        if (ctx->pc != 0x19D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D93Cu; }
        if (ctx->pc != 0x19D93Cu) { return; }
    }
    ctx->pc = 0x19D93Cu;
label_19d93c:
    // 0x19d93c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19d93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d944: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D944u;
    {
        const bool branch_taken_0x19d944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D944u;
            // 0x19d948: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d944) {
            ctx->pc = 0x19D960u;
            goto label_19d960;
        }
    }
    ctx->pc = 0x19D94Cu;
    // 0x19d94c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D94Cu;
    SET_GPR_U32(ctx, 31, 0x19D954u);
    ctx->pc = 0x19D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D94Cu;
            // 0x19d950: 0x24849a38  addiu       $a0, $a0, -0x65C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D954u; }
        if (ctx->pc != 0x19D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D954u; }
        if (ctx->pc != 0x19D954u) { return; }
    }
    ctx->pc = 0x19D954u;
label_19d954:
    // 0x19d954: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x19D954u;
    {
        const bool branch_taken_0x19d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D954u;
            // 0x19d958: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d954) {
            ctx->pc = 0x19DAA4u;
            goto label_19daa4;
        }
    }
    ctx->pc = 0x19D95Cu;
    // 0x19d95c: 0x0  nop
    ctx->pc = 0x19d95cu;
    // NOP
label_19d960:
    // 0x19d960: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x19d960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19d964: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D964u;
    {
        const bool branch_taken_0x19d964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D964u;
            // 0x19d968: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d964) {
            ctx->pc = 0x19D988u;
            goto label_19d988;
        }
    }
    ctx->pc = 0x19D96Cu;
    // 0x19d96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d970: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d974: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19D974u;
    SET_GPR_U32(ctx, 31, 0x19D97Cu);
    ctx->pc = 0x19D978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D974u;
            // 0x19d978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D97Cu; }
        if (ctx->pc != 0x19D97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D97Cu; }
        if (ctx->pc != 0x19D97Cu) { return; }
    }
    ctx->pc = 0x19D97Cu;
label_19d97c:
    // 0x19d97c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19D97Cu;
    {
        const bool branch_taken_0x19d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d97c) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19D984u;
    // 0x19d984: 0x0  nop
    ctx->pc = 0x19d984u;
    // NOP
label_19d988:
    // 0x19d988: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19D988u;
    {
        const bool branch_taken_0x19d988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D988u;
            // 0x19d98c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d988) {
            ctx->pc = 0x19D9B8u;
            goto label_19d9b8;
        }
    }
    ctx->pc = 0x19D990u;
    // 0x19d990: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19D990u;
    {
        const bool branch_taken_0x19d990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D990u;
            // 0x19d994: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d990) {
            ctx->pc = 0x19D9D0u;
            goto label_19d9d0;
        }
    }
    ctx->pc = 0x19D998u;
    // 0x19d998: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19d99c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D99Cu;
    {
        const bool branch_taken_0x19d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D99Cu;
            // 0x19d9a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d99c) {
            ctx->pc = 0x19D9BCu;
            goto label_19d9bc;
        }
    }
    ctx->pc = 0x19D9A4u;
    // 0x19d9a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d9a8: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19D9A8u;
    SET_GPR_U32(ctx, 31, 0x19D9B0u);
    ctx->pc = 0x19D9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9A8u;
            // 0x19d9ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9B0u; }
        if (ctx->pc != 0x19D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9B0u; }
        if (ctx->pc != 0x19D9B0u) { return; }
    }
    ctx->pc = 0x19D9B0u;
label_19d9b0:
    // 0x19d9b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19D9B0u;
    {
        const bool branch_taken_0x19d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9b0) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19D9B8u;
label_19d9b8:
    // 0x19d9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d9bc:
    // 0x19d9bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d9c0: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19D9C0u;
    SET_GPR_U32(ctx, 31, 0x19D9C8u);
    ctx->pc = 0x19D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9C0u;
            // 0x19d9c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9C8u; }
        if (ctx->pc != 0x19D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9C8u; }
        if (ctx->pc != 0x19D9C8u) { return; }
    }
    ctx->pc = 0x19D9C8u;
label_19d9c8:
    // 0x19d9c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19D9C8u;
    {
        const bool branch_taken_0x19d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9c8) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19D9D0u;
label_19d9d0:
    // 0x19d9d0: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D9D0u;
    {
        const bool branch_taken_0x19d9d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d9d0) {
            ctx->pc = 0x19D9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9D0u;
            // 0x19d9d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D9F0u;
            goto label_19d9f0;
        }
    }
    ctx->pc = 0x19D9D8u;
    // 0x19d9d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9dc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19d9e0: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19D9E0u;
    SET_GPR_U32(ctx, 31, 0x19D9E8u);
    ctx->pc = 0x19D9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9E0u;
            // 0x19d9e4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9E8u; }
        if (ctx->pc != 0x19D9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D9E8u; }
        if (ctx->pc != 0x19D9E8u) { return; }
    }
    ctx->pc = 0x19D9E8u;
label_19d9e8:
    // 0x19d9e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19D9E8u;
    {
        const bool branch_taken_0x19d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9e8) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19D9F0u;
label_19d9f0:
    // 0x19d9f0: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D9F0u;
    {
        const bool branch_taken_0x19d9f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d9f0) {
            ctx->pc = 0x19D9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D9F0u;
            // 0x19d9f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19DA10u;
            goto label_19da10;
        }
    }
    ctx->pc = 0x19D9F8u;
    // 0x19d9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19d9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19da00: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19DA00u;
    SET_GPR_U32(ctx, 31, 0x19DA08u);
    ctx->pc = 0x19DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA00u;
            // 0x19da04: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA08u; }
        if (ctx->pc != 0x19DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA08u; }
        if (ctx->pc != 0x19DA08u) { return; }
    }
    ctx->pc = 0x19DA08u;
label_19da08:
    // 0x19da08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19DA08u;
    {
        const bool branch_taken_0x19da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da08) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19DA10u;
label_19da10:
    // 0x19da10: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DA10u;
    {
        const bool branch_taken_0x19da10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA10u;
            // 0x19da14: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da10) {
            ctx->pc = 0x19DA38u;
            goto label_19da38;
        }
    }
    ctx->pc = 0x19DA18u;
    // 0x19da18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19da20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19da20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da24: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19DA24u;
    SET_GPR_U32(ctx, 31, 0x19DA2Cu);
    ctx->pc = 0x19DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA24u;
            // 0x19da28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA2Cu; }
        if (ctx->pc != 0x19DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA2Cu; }
        if (ctx->pc != 0x19DA2Cu) { return; }
    }
    ctx->pc = 0x19DA2Cu;
label_19da2c:
    // 0x19da2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19DA2Cu;
    {
        const bool branch_taken_0x19da2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da2c) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19DA34u;
    // 0x19da34: 0x0  nop
    ctx->pc = 0x19da34u;
    // NOP
label_19da38:
    // 0x19da38: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DA38u;
    SET_GPR_U32(ctx, 31, 0x19DA40u);
    ctx->pc = 0x19DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA38u;
            // 0x19da3c: 0x24849a68  addiu       $a0, $a0, -0x6598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA40u; }
        if (ctx->pc != 0x19DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA40u; }
        if (ctx->pc != 0x19DA40u) { return; }
    }
    ctx->pc = 0x19DA40u;
label_19da40:
    // 0x19da40: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x19DA40u;
    {
        const bool branch_taken_0x19da40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA40u;
            // 0x19da44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da40) {
            ctx->pc = 0x19DA80u;
            goto label_19da80;
        }
    }
    ctx->pc = 0x19DA48u;
    // 0x19da48: 0x8e23058c  lw          $v1, 0x58C($s1)
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1420)));
    // 0x19da4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DA4Cu;
    {
        const bool branch_taken_0x19da4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA4Cu;
            // 0x19da50: 0xae300580  sw          $s0, 0x580($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da4c) {
            ctx->pc = 0x19DA68u;
            goto label_19da68;
        }
    }
    ctx->pc = 0x19DA54u;
    // 0x19da54: 0x8e220588  lw          $v0, 0x588($s1)
    ctx->pc = 0x19da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
    // 0x19da58: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19da58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19da5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19da60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19DA60u;
    {
        const bool branch_taken_0x19da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA60u;
            // 0x19da64: 0xae200584  sw          $zero, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da60) {
            ctx->pc = 0x19DA90u;
            goto label_19da90;
        }
    }
    ctx->pc = 0x19DA68u;
label_19da68:
    // 0x19da68: 0x24047530  addiu       $a0, $zero, 0x7530
    ctx->pc = 0x19da68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x19da6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19da6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da70: 0xc06e0e2  jal         func_1B8388
    ctx->pc = 0x19DA70u;
    SET_GPR_U32(ctx, 31, 0x19DA78u);
    ctx->pc = 0x19DA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA70u;
            // 0x19da74: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8388u;
    if (runtime->hasFunction(0x1B8388u)) {
        auto targetFn = runtime->lookupFunction(0x1B8388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA78u; }
        if (ctx->pc != 0x19DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8388_0x1b8388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA78u; }
        if (ctx->pc != 0x19DA78u) { return; }
    }
    ctx->pc = 0x19DA78u;
label_19da78:
    // 0x19da78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19DA78u;
    {
        const bool branch_taken_0x19da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA78u;
            // 0x19da7c: 0xae300584  sw          $s0, 0x584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da78) {
            ctx->pc = 0x19DA90u;
            goto label_19da90;
        }
    }
    ctx->pc = 0x19DA80u;
label_19da80:
    // 0x19da80: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x19da80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
    // 0x19da84: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x19da84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
    // 0x19da88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19da88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19da8c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19da90:
    // 0x19da90: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19da90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da98: 0xc06e07e  jal         func_1B81F8
    ctx->pc = 0x19DA98u;
    SET_GPR_U32(ctx, 31, 0x19DAA0u);
    ctx->pc = 0x19DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DA98u;
            // 0x19da9c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F8u;
    if (runtime->hasFunction(0x1B81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAA0u; }
        if (ctx->pc != 0x19DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B81F8_0x1b81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAA0u; }
        if (ctx->pc != 0x19DAA0u) { return; }
    }
    ctx->pc = 0x19DAA0u;
label_19daa0:
    // 0x19daa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19daa4:
    // 0x19daa4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19daa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19daa8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19daa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19daac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19daacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19dab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19dab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAB4u;
            // 0x19dab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DABCu;
    // 0x19dabc: 0x0  nop
    ctx->pc = 0x19dabcu;
    // NOP
    // 0x19dac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dac4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19dac8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19dacc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DACCu;
    SET_GPR_U32(ctx, 31, 0x19DAD4u);
    ctx->pc = 0x19DAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DACCu;
            // 0x19dad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAD4u; }
        if (ctx->pc != 0x19DAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAD4u; }
        if (ctx->pc != 0x19DAD4u) { return; }
    }
    ctx->pc = 0x19DAD4u;
label_19dad4:
    // 0x19dad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dad8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19DAD8u;
    {
        const bool branch_taken_0x19dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAD8u;
            // 0x19dadc: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dad8) {
            ctx->pc = 0x19DAF0u;
            goto label_19daf0;
        }
    }
    ctx->pc = 0x19DAE0u;
    // 0x19dae0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DAE0u;
    SET_GPR_U32(ctx, 31, 0x19DAE8u);
    ctx->pc = 0x19DAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAE0u;
            // 0x19dae4: 0x24849a88  addiu       $a0, $a0, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAE8u; }
        if (ctx->pc != 0x19DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAE8u; }
        if (ctx->pc != 0x19DAE8u) { return; }
    }
    ctx->pc = 0x19DAE8u;
label_19dae8:
    // 0x19dae8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19DAE8u;
    {
        const bool branch_taken_0x19dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAE8u;
            // 0x19daec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dae8) {
            ctx->pc = 0x19DB70u;
            goto label_19db70;
        }
    }
    ctx->pc = 0x19DAF0u;
label_19daf0:
    // 0x19daf0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19daf4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19DAF4u;
    {
        const bool branch_taken_0x19daf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DAF4u;
            // 0x19daf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19daf4) {
            ctx->pc = 0x19DB70u;
            goto label_19db70;
        }
    }
    ctx->pc = 0x19DAFCu;
    // 0x19dafc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19db00: 0xc06d7f4  jal         func_1B5FD0
    ctx->pc = 0x19DB00u;
    SET_GPR_U32(ctx, 31, 0x19DB08u);
    ctx->pc = 0x19DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB00u;
            // 0x19db04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FD0u;
    if (runtime->hasFunction(0x1B5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5FD0_0x1b5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB08u; }
        if (ctx->pc != 0x19DB08u) { return; }
    }
    ctx->pc = 0x19DB08u;
label_19db08:
    // 0x19db08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db0c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x19db0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x19db10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19DB10u;
    {
        const bool branch_taken_0x19db10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB10u;
            // 0x19db14: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db10) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB18u;
    // 0x19db18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19db1c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x19db20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19db24: 0x8c639ac0  lw          $v1, -0x6540($v1)
    ctx->pc = 0x19db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941376)));
    // 0x19db28: 0x600008  jr          $v1
    ctx->pc = 0x19DB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DB30u: goto label_19db30;
            case 0x19DB48u: goto label_19db48;
            case 0x19DB50u: goto label_19db50;
            case 0x19DB58u: goto label_19db58;
            case 0x19DB60u: goto label_19db60;
            case 0x19DB68u: goto label_19db68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DB30u;
label_19db30:
    // 0x19db30: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x19db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x19db34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19db38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19db3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19DB3Cu;
    {
        const bool branch_taken_0x19db3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB3Cu;
            // 0x19db40: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db3c) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB44u;
    // 0x19db44: 0x0  nop
    ctx->pc = 0x19db44u;
    // NOP
label_19db48:
    // 0x19db48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19DB48u;
    {
        const bool branch_taken_0x19db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB48u;
            // 0x19db4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db48) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB50u;
label_19db50:
    // 0x19db50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19DB50u;
    {
        const bool branch_taken_0x19db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB50u;
            // 0x19db54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db50) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB58u;
label_19db58:
    // 0x19db58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19DB58u;
    {
        const bool branch_taken_0x19db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB58u;
            // 0x19db5c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db58) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB60u;
label_19db60:
    // 0x19db60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19DB60u;
    {
        const bool branch_taken_0x19db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB60u;
            // 0x19db64: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db60) {
            ctx->pc = 0x19DB6Cu;
            goto label_19db6c;
        }
    }
    ctx->pc = 0x19DB68u;
label_19db68:
    // 0x19db68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19db68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19db6c:
    // 0x19db6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19db6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19db70:
    // 0x19db70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19db70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19db74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19db78: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB78u;
            // 0x19db7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DB80u;
    // 0x19db80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19db84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19db88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19db88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19db8c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DB8Cu;
    SET_GPR_U32(ctx, 31, 0x19DB94u);
    ctx->pc = 0x19DB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB8Cu;
            // 0x19db90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB94u; }
        if (ctx->pc != 0x19DB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DB94u; }
        if (ctx->pc != 0x19DB94u) { return; }
    }
    ctx->pc = 0x19DB94u;
label_19db94:
    // 0x19db94: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19db98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19db9c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DB9Cu;
    {
        const bool branch_taken_0x19db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DB9Cu;
            // 0x19dba0: 0x24849ad8  addiu       $a0, $a0, -0x6528 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db9c) {
            ctx->pc = 0x19DBB8u;
            goto label_19dbb8;
        }
    }
    ctx->pc = 0x19DBA4u;
    // 0x19dba4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DBA4u;
    SET_GPR_U32(ctx, 31, 0x19DBACu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBACu; }
        if (ctx->pc != 0x19DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBACu; }
        if (ctx->pc != 0x19DBACu) { return; }
    }
    ctx->pc = 0x19DBACu;
label_19dbac:
    // 0x19dbac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19DBACu;
    {
        const bool branch_taken_0x19dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBACu;
            // 0x19dbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbac) {
            ctx->pc = 0x19DBE8u;
            goto label_19dbe8;
        }
    }
    ctx->pc = 0x19DBB4u;
    // 0x19dbb4: 0x0  nop
    ctx->pc = 0x19dbb4u;
    // NOP
label_19dbb8:
    // 0x19dbb8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19dbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dbc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DBC0u;
    {
        const bool branch_taken_0x19dbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBC0u;
            // 0x19dbc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbc0) {
            ctx->pc = 0x19DBE8u;
            goto label_19dbe8;
        }
    }
    ctx->pc = 0x19DBC8u;
    // 0x19dbc8: 0xc06abe2  jal         func_1AAF88
    ctx->pc = 0x19DBC8u;
    SET_GPR_U32(ctx, 31, 0x19DBD0u);
    ctx->pc = 0x19DBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBC8u;
            // 0x19dbcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF88u;
    if (runtime->hasFunction(0x1AAF88u)) {
        auto targetFn = runtime->lookupFunction(0x1AAF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBD0u; }
        if (ctx->pc != 0x19DBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAF88_0x1aaf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBD0u; }
        if (ctx->pc != 0x19DBD0u) { return; }
    }
    ctx->pc = 0x19DBD0u;
label_19dbd0:
    // 0x19dbd0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19dbd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DBD4u;
    {
        const bool branch_taken_0x19dbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBD4u;
            // 0x19dbd8: 0x24849b08  addiu       $a0, $a0, -0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbd4) {
            ctx->pc = 0x19DBE4u;
            goto label_19dbe4;
        }
    }
    ctx->pc = 0x19DBDCu;
    // 0x19dbdc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DBDCu;
    SET_GPR_U32(ctx, 31, 0x19DBE4u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBE4u; }
        if (ctx->pc != 0x19DBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DBE4u; }
        if (ctx->pc != 0x19DBE4u) { return; }
    }
    ctx->pc = 0x19DBE4u;
label_19dbe4:
    // 0x19dbe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19dbe8:
    // 0x19dbe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19dbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dbec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19dbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DBF0u;
            // 0x19dbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DBF8u;
    // 0x19dbf8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19dbfc: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x19dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x19dc00: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x19dc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x19dc04: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19DC04u;
    SET_GPR_U32(ctx, 31, 0x19DC0Cu);
    ctx->pc = 0x19DC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC04u;
            // 0x19dc08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC0Cu; }
        if (ctx->pc != 0x19DC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC0Cu; }
        if (ctx->pc != 0x19DC0Cu) { return; }
    }
    ctx->pc = 0x19DC0Cu;
label_19dc0c:
    // 0x19dc0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dc10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc14: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DC14u;
    {
        const bool branch_taken_0x19dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC14u;
            // 0x19dc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc14) {
            ctx->pc = 0x19DC30u;
            goto label_19dc30;
        }
    }
    ctx->pc = 0x19DC1Cu;
    // 0x19dc1c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19dc20: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19DC20u;
    SET_GPR_U32(ctx, 31, 0x19DC28u);
    ctx->pc = 0x19DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC20u;
            // 0x19dc24: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC28u; }
        if (ctx->pc != 0x19DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC28u; }
        if (ctx->pc != 0x19DC28u) { return; }
    }
    ctx->pc = 0x19DC28u;
label_19dc28:
    // 0x19dc28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19DC28u;
    {
        const bool branch_taken_0x19dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC28u;
            // 0x19dc2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc28) {
            ctx->pc = 0x19DC3Cu;
            goto label_19dc3c;
        }
    }
    ctx->pc = 0x19DC30u;
label_19dc30:
    // 0x19dc30: 0xc067508  jal         func_19D420
    ctx->pc = 0x19DC30u;
    SET_GPR_U32(ctx, 31, 0x19DC38u);
    ctx->pc = 0x19D420u;
    if (runtime->hasFunction(0x19D420u)) {
        auto targetFn = runtime->lookupFunction(0x19D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC38u; }
        if (ctx->pc != 0x19DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D420_0x19d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC38u; }
        if (ctx->pc != 0x19DC38u) { return; }
    }
    ctx->pc = 0x19DC38u;
label_19dc38:
    // 0x19dc38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19dc3c:
    // 0x19dc3c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19dc40: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x19dc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC44u;
            // 0x19dc48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DC4Cu;
    // 0x19dc4c: 0x0  nop
    ctx->pc = 0x19dc4cu;
    // NOP
    // 0x19dc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19dc58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19dc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc5c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x19DC5Cu;
    SET_GPR_U32(ctx, 31, 0x19DC64u);
    ctx->pc = 0x19DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC5Cu;
            // 0x19dc60: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (runtime->hasFunction(0x1B44D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC64u; }
        if (ctx->pc != 0x19DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B44D0_0x1b44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC64u; }
        if (ctx->pc != 0x19DC64u) { return; }
    }
    ctx->pc = 0x19DC64u;
label_19dc64:
    // 0x19dc64: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19dc68: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x19dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19dc6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19dc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dc70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19dc74: 0x3e00008  jr          $ra
    ctx->pc = 0x19DC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC74u;
            // 0x19dc78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DC7Cu;
    // 0x19dc7c: 0x0  nop
    ctx->pc = 0x19dc7cu;
    // NOP
}
