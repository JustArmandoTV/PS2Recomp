#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F938
// Address: 0x19f938 - 0x1a00c8
void sub_0019F938_0x19f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F938_0x19f938");
#endif

    switch (ctx->pc) {
        case 0x19f968u: goto label_19f968;
        case 0x19f97cu: goto label_19f97c;
        case 0x19f990u: goto label_19f990;
        case 0x19f9d4u: goto label_19f9d4;
        case 0x19fa24u: goto label_19fa24;
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa94u: goto label_19fa94;
        case 0x19fae4u: goto label_19fae4;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb48u: goto label_19fb48;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fcfcu: goto label_19fcfc;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fdc4u: goto label_19fdc4;
        case 0x19fdfcu: goto label_19fdfc;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe64u: goto label_19fe64;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe98u: goto label_19fe98;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff64u: goto label_19ff64;
        case 0x19ff70u: goto label_19ff70;
        case 0x19ff80u: goto label_19ff80;
        case 0x1a0044u: goto label_1a0044;
        case 0x1a007cu: goto label_1a007c;
        default: break;
    }

    ctx->pc = 0x19f938u;

    // 0x19f938: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19f93c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x19f940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f944: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x19f948: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x19f94c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f950: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x19f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x19f954: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19f954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f958: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x19f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x19f95c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x19f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x19f960: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F960u;
    SET_GPR_U32(ctx, 31, 0x19F968u);
    ctx->pc = 0x19F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F960u;
            // 0x19f964: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F968u; }
        if (ctx->pc != 0x19F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F968u; }
        if (ctx->pc != 0x19F968u) { return; }
    }
    ctx->pc = 0x19F968u;
label_19f968:
    // 0x19f968: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19f968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f970: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19f970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f974: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19F974u;
    SET_GPR_U32(ctx, 31, 0x19F97Cu);
    ctx->pc = 0x19F978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F974u;
            // 0x19f978: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F97Cu; }
        if (ctx->pc != 0x19F97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F97Cu; }
        if (ctx->pc != 0x19F97Cu) { return; }
    }
    ctx->pc = 0x19F97Cu;
label_19f97c:
    // 0x19f97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f980: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19f980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f984: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19f984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f988: 0xc06fa66  jal         func_1BE998
    ctx->pc = 0x19F988u;
    SET_GPR_U32(ctx, 31, 0x19F990u);
    ctx->pc = 0x19F98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F988u;
            // 0x19f98c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE998u;
    if (runtime->hasFunction(0x1BE998u)) {
        auto targetFn = runtime->lookupFunction(0x1BE998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F990u; }
        if (ctx->pc != 0x19F990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE998_0x1be998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F990u; }
        if (ctx->pc != 0x19F990u) { return; }
    }
    ctx->pc = 0x19F990u;
label_19f990:
    // 0x19f990: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19f990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f994: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19f994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19f998: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19f998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19f99c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x19f99cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19f9a0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x19f9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19f9a4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x19f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x19f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9A8u;
            // 0x19f9ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F9B0u;
    // 0x19f9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f9b8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f9c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f9c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19f9cc: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x19F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9CCu;
            // 0x19f9d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9D4u; }
        if (ctx->pc != 0x19F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9D4u; }
        if (ctx->pc != 0x19F9D4u) { return; }
    }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x19f9d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f9dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f9e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19f9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f9ec: 0x2e070001  sltiu       $a3, $s0, 0x1
    ctx->pc = 0x19f9ecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19f9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9f8: 0x806fa6e  j           func_1BE9B8
    ctx->pc = 0x19F9F8u;
    ctx->pc = 0x19F9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9F8u;
            // 0x19f9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FA00u;
    // 0x19fa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19fa08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19fa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19fa10: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19fa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19fa18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19fa1c: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FA1Cu;
    SET_GPR_U32(ctx, 31, 0x19FA24u);
    ctx->pc = 0x19FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA1Cu;
            // 0x19fa20: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA24u; }
        if (ctx->pc != 0x19FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA24u; }
        if (ctx->pc != 0x19FA24u) { return; }
    }
    ctx->pc = 0x19FA24u;
label_19fa24:
    // 0x19fa24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa2c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x19fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19fa30: 0xc06fa74  jal         func_1BE9D0
    ctx->pc = 0x19FA30u;
    SET_GPR_U32(ctx, 31, 0x19FA38u);
    ctx->pc = 0x19FA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA30u;
            // 0x19fa34: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (runtime->hasFunction(0x1BE9D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA38u; }
        if (ctx->pc != 0x19FA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE9D0_0x1be9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA38u; }
        if (ctx->pc != 0x19FA38u) { return; }
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fa3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa40: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x19fa40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19fa44: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x19fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19fa48: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x19fa48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x19fa4c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x19fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x19fa50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19fa54: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x19fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x19fa58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19fa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19fa5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fa60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fa64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19fa68: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA68u;
            // 0x19fa6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA70u;
    // 0x19fa70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fa74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fa78: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19fa7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fa80: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19fa84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19fa88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19fa8c: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FA8Cu;
    SET_GPR_U32(ctx, 31, 0x19FA94u);
    ctx->pc = 0x19FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA8Cu;
            // 0x19fa90: 0x30f200ff  andi        $s2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA94u; }
        if (ctx->pc != 0x19FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA94u; }
        if (ctx->pc != 0x19FA94u) { return; }
    }
    ctx->pc = 0x19FA94u;
label_19fa94:
    // 0x19fa94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fa98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19fa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19faa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19faa4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19faa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19faa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19faac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19faacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fab4: 0x806fa7a  j           func_1BE9E8
    ctx->pc = 0x19FAB4u;
    ctx->pc = 0x19FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAB4u;
            // 0x19fab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE9E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FABCu;
    // 0x19fabc: 0x0  nop
    ctx->pc = 0x19fabcu;
    // NOP
    // 0x19fac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19fac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19facc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fad0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19fad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fad4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19fad8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19fadc: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FADCu;
    SET_GPR_U32(ctx, 31, 0x19FAE4u);
    ctx->pc = 0x19FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FADCu;
            // 0x19fae0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAE4u; }
        if (ctx->pc != 0x19FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAE4u; }
        if (ctx->pc != 0x19FAE4u) { return; }
    }
    ctx->pc = 0x19FAE4u;
label_19fae4:
    // 0x19fae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19fae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19faecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19faf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19faf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19faf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19faf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb04: 0x806fa8a  j           func_1BEA28
    ctx->pc = 0x19FB04u;
    ctx->pc = 0x19FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB04u;
            // 0x19fb08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA28u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FB0Cu;
    // 0x19fb0c: 0x0  nop
    ctx->pc = 0x19fb0cu;
    // NOP
    // 0x19fb10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19fb14: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x19fb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb1c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x19fb20: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19fb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x19fb24: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x19fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x19fb28: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FB28u;
    SET_GPR_U32(ctx, 31, 0x19FB30u);
    ctx->pc = 0x19FB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB28u;
            // 0x19fb2c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB30u; }
        if (ctx->pc != 0x19FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB30u; }
        if (ctx->pc != 0x19FB30u) { return; }
    }
    ctx->pc = 0x19FB30u;
label_19fb30:
    // 0x19fb30: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fb34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb38: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FB38u;
    {
        const bool branch_taken_0x19fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB38u;
            // 0x19fb3c: 0x2484a268  addiu       $a0, $a0, -0x5D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb38) {
            ctx->pc = 0x19FB50u;
            goto label_19fb50;
        }
    }
    ctx->pc = 0x19FB40u;
    // 0x19fb40: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FB40u;
    SET_GPR_U32(ctx, 31, 0x19FB48u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB48u; }
        if (ctx->pc != 0x19FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB48u; }
        if (ctx->pc != 0x19FB48u) { return; }
    }
    ctx->pc = 0x19FB48u;
label_19fb48:
    // 0x19fb48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19FB48u;
    {
        const bool branch_taken_0x19fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB48u;
            // 0x19fb4c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb48) {
            ctx->pc = 0x19FB9Cu;
            goto label_19fb9c;
        }
    }
    ctx->pc = 0x19FB50u;
label_19fb50:
    // 0x19fb50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19fb54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB54u;
    {
        const bool branch_taken_0x19fb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb54) {
            ctx->pc = 0x19FB70u;
            goto label_19fb70;
        }
    }
    ctx->pc = 0x19FB5Cu;
    // 0x19fb5c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fb60: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FB60u;
    SET_GPR_U32(ctx, 31, 0x19FB68u);
    ctx->pc = 0x19FB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB60u;
            // 0x19fb64: 0x2484a298  addiu       $a0, $a0, -0x5D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB68u; }
        if (ctx->pc != 0x19FB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB68u; }
        if (ctx->pc != 0x19FB68u) { return; }
    }
    ctx->pc = 0x19FB68u;
label_19fb68:
    // 0x19fb68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19FB68u;
    {
        const bool branch_taken_0x19fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB68u;
            // 0x19fb6c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb68) {
            ctx->pc = 0x19FB9Cu;
            goto label_19fb9c;
        }
    }
    ctx->pc = 0x19FB70u;
label_19fb70:
    // 0x19fb70: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FB70u;
    SET_GPR_U32(ctx, 31, 0x19FB78u);
    ctx->pc = 0x19FB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB70u;
            // 0x19fb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB78u; }
        if (ctx->pc != 0x19FB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB78u; }
        if (ctx->pc != 0x19FB78u) { return; }
    }
    ctx->pc = 0x19FB78u;
label_19fb78:
    // 0x19fb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19fb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb84: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19FB84u;
    SET_GPR_U32(ctx, 31, 0x19FB8Cu);
    ctx->pc = 0x19FB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB84u;
            // 0x19fb88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB8Cu; }
        if (ctx->pc != 0x19FB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB8Cu; }
        if (ctx->pc != 0x19FB8Cu) { return; }
    }
    ctx->pc = 0x19FB8Cu;
label_19fb8c:
    // 0x19fb8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb90: 0xc06f6cc  jal         func_1BDB30
    ctx->pc = 0x19FB90u;
    SET_GPR_U32(ctx, 31, 0x19FB98u);
    ctx->pc = 0x19FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB90u;
            // 0x19fb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB30u;
    if (runtime->hasFunction(0x1BDB30u)) {
        auto targetFn = runtime->lookupFunction(0x1BDB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB98u; }
        if (ctx->pc != 0x19FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDB30_0x1bdb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB98u; }
        if (ctx->pc != 0x19FB98u) { return; }
    }
    ctx->pc = 0x19FB98u;
label_19fb98:
    // 0x19fb98: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19fb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19fb9c:
    // 0x19fb9c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19fb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19fba0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19fba4: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x19fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19fba8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBA8u;
            // 0x19fbac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FBB0u;
    // 0x19fbb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19fbb4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x19fbb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbbc: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x19fbc0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x19fbc4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x19fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x19fbc8: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FBC8u;
    SET_GPR_U32(ctx, 31, 0x19FBD0u);
    ctx->pc = 0x19FBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBC8u;
            // 0x19fbcc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBD0u; }
        if (ctx->pc != 0x19FBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBD0u; }
        if (ctx->pc != 0x19FBD0u) { return; }
    }
    ctx->pc = 0x19FBD0u;
label_19fbd0:
    // 0x19fbd0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fbd8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FBD8u;
    {
        const bool branch_taken_0x19fbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBD8u;
            // 0x19fbdc: 0x2484a2c8  addiu       $a0, $a0, -0x5D38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbd8) {
            ctx->pc = 0x19FBF0u;
            goto label_19fbf0;
        }
    }
    ctx->pc = 0x19FBE0u;
    // 0x19fbe0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FBE0u;
    SET_GPR_U32(ctx, 31, 0x19FBE8u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE8u; }
        if (ctx->pc != 0x19FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE8u; }
        if (ctx->pc != 0x19FBE8u) { return; }
    }
    ctx->pc = 0x19FBE8u;
label_19fbe8:
    // 0x19fbe8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19FBE8u;
    {
        const bool branch_taken_0x19fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBE8u;
            // 0x19fbec: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbe8) {
            ctx->pc = 0x19FC3Cu;
            goto label_19fc3c;
        }
    }
    ctx->pc = 0x19FBF0u;
label_19fbf0:
    // 0x19fbf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19fbf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FBF4u;
    {
        const bool branch_taken_0x19fbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fbf4) {
            ctx->pc = 0x19FC10u;
            goto label_19fc10;
        }
    }
    ctx->pc = 0x19FBFCu;
    // 0x19fbfc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fc00: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FC00u;
    SET_GPR_U32(ctx, 31, 0x19FC08u);
    ctx->pc = 0x19FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC00u;
            // 0x19fc04: 0x2484a2f8  addiu       $a0, $a0, -0x5D08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC08u; }
        if (ctx->pc != 0x19FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC08u; }
        if (ctx->pc != 0x19FC08u) { return; }
    }
    ctx->pc = 0x19FC08u;
label_19fc08:
    // 0x19fc08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19FC08u;
    {
        const bool branch_taken_0x19fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC08u;
            // 0x19fc0c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc08) {
            ctx->pc = 0x19FC3Cu;
            goto label_19fc3c;
        }
    }
    ctx->pc = 0x19FC10u;
label_19fc10:
    // 0x19fc10: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FC10u;
    SET_GPR_U32(ctx, 31, 0x19FC18u);
    ctx->pc = 0x19FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC10u;
            // 0x19fc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC18u; }
        if (ctx->pc != 0x19FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC18u; }
        if (ctx->pc != 0x19FC18u) { return; }
    }
    ctx->pc = 0x19FC18u;
label_19fc18:
    // 0x19fc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19fc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19fc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc24: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19FC24u;
    SET_GPR_U32(ctx, 31, 0x19FC2Cu);
    ctx->pc = 0x19FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC24u;
            // 0x19fc28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC2Cu; }
        if (ctx->pc != 0x19FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC2Cu; }
        if (ctx->pc != 0x19FC2Cu) { return; }
    }
    ctx->pc = 0x19FC2Cu;
label_19fc2c:
    // 0x19fc2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc30: 0xc06f6ea  jal         func_1BDBA8
    ctx->pc = 0x19FC30u;
    SET_GPR_U32(ctx, 31, 0x19FC38u);
    ctx->pc = 0x19FC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC30u;
            // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBA8u;
    if (runtime->hasFunction(0x1BDBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC38u; }
        if (ctx->pc != 0x19FC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDBA8_0x1bdba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC38u; }
        if (ctx->pc != 0x19FC38u) { return; }
    }
    ctx->pc = 0x19FC38u;
label_19fc38:
    // 0x19fc38: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19fc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19fc3c:
    // 0x19fc3c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19fc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19fc40: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19fc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19fc44: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x19fc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC48u;
            // 0x19fc4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FC50u;
    // 0x19fc50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fc58: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19fc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc60: 0x806fa90  j           func_1BEA40
    ctx->pc = 0x19FC60u;
    ctx->pc = 0x19FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC60u;
            // 0x19fc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA40u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FC68u;
    // 0x19fc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fc70: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19fc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc78: 0x806fa92  j           func_1BEA48
    ctx->pc = 0x19FC78u;
    ctx->pc = 0x19FC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC78u;
            // 0x19fc7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA48u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FC80u;
    // 0x19fc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fc88: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19fc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc90: 0x806fa94  j           func_1BEA50
    ctx->pc = 0x19FC90u;
    ctx->pc = 0x19FC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC90u;
            // 0x19fc94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA50u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FC98u;
    // 0x19fc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fca0: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19fca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fca8: 0x806fa96  j           func_1BEA58
    ctx->pc = 0x19FCA8u;
    ctx->pc = 0x19FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCA8u;
            // 0x19fcac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA58u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FCB0u;
    // 0x19fcb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fcbc: 0x806f9dc  j           func_1BE770
    ctx->pc = 0x19FCBCu;
    ctx->pc = 0x19FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCBCu;
            // 0x19fcc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE770u;
    if (runtime->hasFunction(0x1BE770u)) {
        auto targetFn = runtime->lookupFunction(0x1BE770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE770_0x1be770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19FCC4u;
    // 0x19fcc4: 0x0  nop
    ctx->pc = 0x19fcc4u;
    // NOP
    // 0x19fcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fcd4: 0x806f9e0  j           func_1BE780
    ctx->pc = 0x19FCD4u;
    ctx->pc = 0x19FCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCD4u;
            // 0x19fcd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE780u;
    if (runtime->hasFunction(0x1BE780u)) {
        auto targetFn = runtime->lookupFunction(0x1BE780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE780_0x1be780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19FCDCu;
    // 0x19fcdc: 0x0  nop
    ctx->pc = 0x19fcdcu;
    // NOP
    // 0x19fce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fcf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19fcf4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FCF4u;
    SET_GPR_U32(ctx, 31, 0x19FCFCu);
    ctx->pc = 0x19FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCF4u;
            // 0x19fcf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCFCu; }
        if (ctx->pc != 0x19FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCFCu; }
        if (ctx->pc != 0x19FCFCu) { return; }
    }
    ctx->pc = 0x19FCFCu;
label_19fcfc:
    // 0x19fcfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd00: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FD00u;
    {
        const bool branch_taken_0x19fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD00u;
            // 0x19fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd00) {
            ctx->pc = 0x19FD28u;
            goto label_19fd28;
        }
    }
    ctx->pc = 0x19FD08u;
    // 0x19fd08: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19fd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fd14: 0x2484a328  addiu       $a0, $a0, -0x5CD8
    ctx->pc = 0x19fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943528));
    // 0x19fd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd1c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19FD1Cu;
    ctx->pc = 0x19FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD1Cu;
            // 0x19fd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19FD24u;
    // 0x19fd24: 0x0  nop
    ctx->pc = 0x19fd24u;
    // NOP
label_19fd28:
    // 0x19fd28: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FD28u;
    SET_GPR_U32(ctx, 31, 0x19FD30u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD30u; }
        if (ctx->pc != 0x19FD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD30u; }
        if (ctx->pc != 0x19FD30u) { return; }
    }
    ctx->pc = 0x19FD30u;
label_19fd30:
    // 0x19fd30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fd40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd44: 0x806fb16  j           func_1BEC58
    ctx->pc = 0x19FD44u;
    ctx->pc = 0x19FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD44u;
            // 0x19fd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC58u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FD4Cu;
    // 0x19fd4c: 0x0  nop
    ctx->pc = 0x19fd4cu;
    // NOP
    // 0x19fd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fd58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19fd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19fd5c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FD5Cu;
    SET_GPR_U32(ctx, 31, 0x19FD64u);
    ctx->pc = 0x19FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD5Cu;
            // 0x19fd60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD64u; }
        if (ctx->pc != 0x19FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD64u; }
        if (ctx->pc != 0x19FD64u) { return; }
    }
    ctx->pc = 0x19FD64u;
label_19fd64:
    // 0x19fd64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd68: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FD68u;
    {
        const bool branch_taken_0x19fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD68u;
            // 0x19fd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd68) {
            ctx->pc = 0x19FD90u;
            goto label_19fd90;
        }
    }
    ctx->pc = 0x19FD70u;
    // 0x19fd70: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fd74: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FD74u;
    SET_GPR_U32(ctx, 31, 0x19FD7Cu);
    ctx->pc = 0x19FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD74u;
            // 0x19fd78: 0x2484a358  addiu       $a0, $a0, -0x5CA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD7Cu; }
        if (ctx->pc != 0x19FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD7Cu; }
        if (ctx->pc != 0x19FD7Cu) { return; }
    }
    ctx->pc = 0x19FD7Cu;
label_19fd7c:
    // 0x19fd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19fd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fd88: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD88u;
            // 0x19fd8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FD90u;
label_19fd90:
    // 0x19fd90: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FD90u;
    SET_GPR_U32(ctx, 31, 0x19FD98u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD98u; }
        if (ctx->pc != 0x19FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FD98u; }
        if (ctx->pc != 0x19FD98u) { return; }
    }
    ctx->pc = 0x19FD98u;
label_19fd98:
    // 0x19fd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fda4: 0x806fb2c  j           func_1BECB0
    ctx->pc = 0x19FDA4u;
    ctx->pc = 0x19FDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDA4u;
            // 0x19fda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BECB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FDACu;
    // 0x19fdac: 0x0  nop
    ctx->pc = 0x19fdacu;
    // NOP
    // 0x19fdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fdb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fdb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19fdbc: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FDBCu;
    SET_GPR_U32(ctx, 31, 0x19FDC4u);
    ctx->pc = 0x19FDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDBCu;
            // 0x19fdc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDC4u; }
        if (ctx->pc != 0x19FDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDC4u; }
        if (ctx->pc != 0x19FDC4u) { return; }
    }
    ctx->pc = 0x19FDC4u;
label_19fdc4:
    // 0x19fdc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fdc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fdd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdd4: 0x806f9ec  j           func_1BE7B0
    ctx->pc = 0x19FDD4u;
    ctx->pc = 0x19FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDD4u;
            // 0x19fdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FDDCu;
    // 0x19fddc: 0x0  nop
    ctx->pc = 0x19fddcu;
    // NOP
    // 0x19fde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fde4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19fdf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19fdf4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FDF4u;
    SET_GPR_U32(ctx, 31, 0x19FDFCu);
    ctx->pc = 0x19FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDF4u;
            // 0x19fdf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDFCu; }
        if (ctx->pc != 0x19FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDFCu; }
        if (ctx->pc != 0x19FDFCu) { return; }
    }
    ctx->pc = 0x19FDFCu;
label_19fdfc:
    // 0x19fdfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fe00: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FE00u;
    {
        const bool branch_taken_0x19fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE00u;
            // 0x19fe04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe00) {
            ctx->pc = 0x19FE28u;
            goto label_19fe28;
        }
    }
    ctx->pc = 0x19FE08u;
    // 0x19fe08: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fe0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19fe10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fe14: 0x2484a388  addiu       $a0, $a0, -0x5C78
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943624));
    // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fe1c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19FE1Cu;
    ctx->pc = 0x19FE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE1Cu;
            // 0x19fe20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19FE24u;
    // 0x19fe24: 0x0  nop
    ctx->pc = 0x19fe24u;
    // NOP
label_19fe28:
    // 0x19fe28: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FE28u;
    SET_GPR_U32(ctx, 31, 0x19FE30u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE30u; }
        if (ctx->pc != 0x19FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE30u; }
        if (ctx->pc != 0x19FE30u) { return; }
    }
    ctx->pc = 0x19FE30u;
label_19fe30:
    // 0x19fe30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19fe3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fe40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fe44: 0x806fa98  j           func_1BEA60
    ctx->pc = 0x19FE44u;
    ctx->pc = 0x19FE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE44u;
            // 0x19fe48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA60u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FE4Cu;
    // 0x19fe4c: 0x0  nop
    ctx->pc = 0x19fe4cu;
    // NOP
    // 0x19fe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fe54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fe58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19fe5c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19FE5Cu;
    SET_GPR_U32(ctx, 31, 0x19FE64u);
    ctx->pc = 0x19FE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE5Cu;
            // 0x19fe60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE64u; }
        if (ctx->pc != 0x19FE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE64u; }
        if (ctx->pc != 0x19FE64u) { return; }
    }
    ctx->pc = 0x19FE64u;
label_19fe64:
    // 0x19fe64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fe68: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FE68u;
    {
        const bool branch_taken_0x19fe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE68u;
            // 0x19fe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe68) {
            ctx->pc = 0x19FE90u;
            goto label_19fe90;
        }
    }
    ctx->pc = 0x19FE70u;
    // 0x19fe70: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19fe74: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19FE74u;
    SET_GPR_U32(ctx, 31, 0x19FE7Cu);
    ctx->pc = 0x19FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE74u;
            // 0x19fe78: 0x2484a3b8  addiu       $a0, $a0, -0x5C48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE7Cu; }
        if (ctx->pc != 0x19FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE7Cu; }
        if (ctx->pc != 0x19FE7Cu) { return; }
    }
    ctx->pc = 0x19FE7Cu;
label_19fe7c:
    // 0x19fe7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19fe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x19FE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE88u;
            // 0x19fe8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FE90u;
label_19fe90:
    // 0x19fe90: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19FE90u;
    SET_GPR_U32(ctx, 31, 0x19FE98u);
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE98u; }
        if (ctx->pc != 0x19FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE98u; }
        if (ctx->pc != 0x19FE98u) { return; }
    }
    ctx->pc = 0x19FE98u;
label_19fe98:
    // 0x19fe98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fea4: 0x806fa9a  j           func_1BEA68
    ctx->pc = 0x19FEA4u;
    ctx->pc = 0x19FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEA4u;
            // 0x19fea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA68u;
    if (runtime->hasFunction(0x1BEA68u)) {
        auto targetFn = runtime->lookupFunction(0x1BEA68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BEA68_0x1bea68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19FEACu;
    // 0x19feac: 0x0  nop
    ctx->pc = 0x19feacu;
    // NOP
    // 0x19feb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19feb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19feb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19febc: 0x806fb32  j           func_1BECC8
    ctx->pc = 0x19FEBCu;
    ctx->pc = 0x19FEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEBCu;
            // 0x19fec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BECC8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BECC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FEC4u;
    // 0x19fec4: 0x0  nop
    ctx->pc = 0x19fec4u;
    // NOP
    // 0x19fec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fecc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19feccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19fed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fed8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19fed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fedc: 0x8c4b0010  lw          $t3, 0x10($v0)
    ctx->pc = 0x19fedcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19fee0: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19fee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fee8: 0x8067fbc  j           func_19FEF0
    ctx->pc = 0x19FEE8u;
    ctx->pc = 0x19FEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEE8u;
            // 0x19feec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FEF0u;
    goto label_19fef0;
    ctx->pc = 0x19FEF0u;
label_19fef0:
    // 0x19fef0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x19fef4: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x19fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x19fef8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19fef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fefc: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x19fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x19ff00: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff04: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x19ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x19ff08: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x19ff08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff0c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x19ff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x19ff10: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x19ff10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff14: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x19ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x19ff18: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19ff18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff1c: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x19ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x19ff20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ff20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff24: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x19ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x19ff28: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x19ff28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff2c: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x19ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x19ff30: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x19ff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x19ff34: 0xc067a16  jal         func_19E858
    ctx->pc = 0x19FF34u;
    SET_GPR_U32(ctx, 31, 0x19FF3Cu);
    ctx->pc = 0x19FF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF34u;
            // 0x19ff38: 0x8c9000b8  lw          $s0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E858u;
    if (runtime->hasFunction(0x19E858u)) {
        auto targetFn = runtime->lookupFunction(0x19E858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF3Cu; }
        if (ctx->pc != 0x19FF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E858_0x19e858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF3Cu; }
        if (ctx->pc != 0x19FF3Cu) { return; }
    }
    ctx->pc = 0x19FF3Cu;
label_19ff3c:
    // 0x19ff3c: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ff40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19ff40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff44: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff48: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x19ff48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff4c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x19ff4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff50: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x19ff50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff54: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x19ff54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff58: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19ff58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff5c: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x19FF5Cu;
    SET_GPR_U32(ctx, 31, 0x19FF64u);
    ctx->pc = 0x19FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF5Cu;
            // 0x19ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (runtime->hasFunction(0x1BE250u)) {
        auto targetFn = runtime->lookupFunction(0x1BE250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF64u; }
        if (ctx->pc != 0x19FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE250_0x1be250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF64u; }
        if (ctx->pc != 0x19FF64u) { return; }
    }
    ctx->pc = 0x19FF64u;
label_19ff64:
    // 0x19ff64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff68: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x19FF68u;
    SET_GPR_U32(ctx, 31, 0x19FF70u);
    ctx->pc = 0x19FF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF68u;
            // 0x19ff6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (runtime->hasFunction(0x1BDC20u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF70u; }
        if (ctx->pc != 0x19FF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC20_0x1bdc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF70u; }
        if (ctx->pc != 0x19FF70u) { return; }
    }
    ctx->pc = 0x19FF70u;
label_19ff70:
    // 0x19ff70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff74: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff78: 0xc06f71a  jal         func_1BDC68
    ctx->pc = 0x19FF78u;
    SET_GPR_U32(ctx, 31, 0x19FF80u);
    ctx->pc = 0x19FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF78u;
            // 0x19ff7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC68u;
    if (runtime->hasFunction(0x1BDC68u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF80u; }
        if (ctx->pc != 0x19FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC68_0x1bdc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF80u; }
        if (ctx->pc != 0x19FF80u) { return; }
    }
    ctx->pc = 0x19FF80u;
label_19ff80:
    // 0x19ff80: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x19ff80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x19ff84: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x19ff84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x19ff88: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x19ff88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19ff8c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x19ff8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x19ff90: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x19ff90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x19ff94: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x19ff94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x19ff98: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x19ff98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x19ff9c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x19ffa0: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x19ffa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x19ffa4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFA4u;
            // 0x19ffa8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FFACu;
    // 0x19ffac: 0x0  nop
    ctx->pc = 0x19ffacu;
    // NOP
    // 0x19ffb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ffb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ffb8: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19ffbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffc0: 0x806f70a  j           func_1BDC28
    ctx->pc = 0x19FFC0u;
    ctx->pc = 0x19FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFC0u;
            // 0x19ffc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC28u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FFC8u;
    // 0x19ffc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ffc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ffcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ffd0: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19ffd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffd8: 0x806f70c  j           func_1BDC30
    ctx->pc = 0x19FFD8u;
    ctx->pc = 0x19FFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFD8u;
            // 0x19ffdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC30u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FFE0u;
    // 0x19ffe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ffe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ffe8: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x19ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19ffec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fff0: 0x806f710  j           func_1BDC40
    ctx->pc = 0x19FFF0u;
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFF0u;
            // 0x19fff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC40u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19FFF8u;
    // 0x19fff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0000: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1a0004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0008: 0x806f714  j           func_1BDC50
    ctx->pc = 0x1A0008u;
    ctx->pc = 0x1A000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0008u;
            // 0x1a000c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC50u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0010u;
    // 0x1a0010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0018: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x1a0018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1a001c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a001cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0020: 0x806f718  j           func_1BDC60
    ctx->pc = 0x1A0020u;
    ctx->pc = 0x1A0024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0020u;
            // 0x1a0024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC60u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0028u;
    // 0x1a0028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a002c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0030: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a0034: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a0038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a003c: 0xc06f8de  jal         func_1BE378
    ctx->pc = 0x1A003Cu;
    SET_GPR_U32(ctx, 31, 0x1A0044u);
    ctx->pc = 0x1A0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A003Cu;
            // 0x1a0040: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE378u;
    if (runtime->hasFunction(0x1BE378u)) {
        auto targetFn = runtime->lookupFunction(0x1BE378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0044u; }
        if (ctx->pc != 0x1A0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE378_0x1be378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0044u; }
        if (ctx->pc != 0x1A0044u) { return; }
    }
    ctx->pc = 0x1A0044u;
label_1a0044:
    // 0x1a0044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0048: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0048u;
            // 0x1a004c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0050u;
    // 0x1a0050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a005c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0060: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a0060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0064: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a0068: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a0068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a006c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0074: 0xc067c1c  jal         func_19F070
    ctx->pc = 0x1A0074u;
    SET_GPR_U32(ctx, 31, 0x1A007Cu);
    ctx->pc = 0x1A0078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0074u;
            // 0x1a0078: 0x8e1100b8  lw          $s1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F070u;
    if (runtime->hasFunction(0x19F070u)) {
        auto targetFn = runtime->lookupFunction(0x19F070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A007Cu; }
        if (ctx->pc != 0x1A007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F070_0x19f070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A007Cu; }
        if (ctx->pc != 0x1A007Cu) { return; }
    }
    ctx->pc = 0x1A007Cu;
label_1a007c:
    // 0x1a007c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0080: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1a0080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a008c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1a008cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0090: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a0090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0094: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a0094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a0098: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a0098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a009c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a009cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a00a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a00a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a00a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a00a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a00a8: 0x806f8dc  j           func_1BE370
    ctx->pc = 0x1A00A8u;
    ctx->pc = 0x1A00ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00A8u;
            // 0x1a00ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE370u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A00B0u;
    // 0x1a00b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a00b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a00b8: 0x8c8400b8  lw          $a0, 0xB8($a0)
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1a00bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a00bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a00c0: 0x806f8e0  j           func_1BE380
    ctx->pc = 0x1A00C0u;
    ctx->pc = 0x1A00C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00C0u;
            // 0x1a00c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE380u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A00C8u;
}
