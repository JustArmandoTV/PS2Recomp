#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001688D0
// Address: 0x1688d0 - 0x1689b8
void sub_001688D0_0x1688d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001688D0_0x1688d0");
#endif

    switch (ctx->pc) {
        case 0x168940u: goto label_168940;
        case 0x16897cu: goto label_16897c;
        case 0x168990u: goto label_168990;
        case 0x168998u: goto label_168998;
        default: break;
    }

    ctx->pc = 0x1688d0u;

    // 0x1688d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1688d4: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x1688d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x1688d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1688d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1688dc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1688dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1688e0: 0x254a7c87  addiu       $t2, $t2, 0x7C87
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31879));
    // 0x1688e4: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1688e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1688e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1688ec: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x1688ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1688f0: 0x805a23e  j           func_1688F8
    ctx->pc = 0x1688F0u;
    ctx->pc = 0x1688F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688F0u;
            // 0x1688f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1688F8u;
    goto label_1688f8;
    ctx->pc = 0x1688F8u;
label_1688f8:
    // 0x1688f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1688f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1688fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168904: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x168904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168908: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x168908u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16890c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16890cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168910: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x168910u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168914: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x168914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168918: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x168918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16891c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x16891cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168920: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x168920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x168924: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x168924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168928: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x168928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x16892c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x16892cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168938: 0xc05a390  jal         func_168E40
    ctx->pc = 0x168938u;
    SET_GPR_U32(ctx, 31, 0x168940u);
    ctx->pc = 0x16893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168938u;
            // 0x16893c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E40u;
    if (runtime->hasFunction(0x168E40u)) {
        auto targetFn = runtime->lookupFunction(0x168E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168940u; }
        if (ctx->pc != 0x168940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E40_0x168e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168940u; }
        if (ctx->pc != 0x168940u) { return; }
    }
    ctx->pc = 0x168940u;
label_168940:
    // 0x168940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168944: 0x3e00008  jr          $ra
    ctx->pc = 0x168944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168944u;
            // 0x168948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16894Cu;
    // 0x16894c: 0x0  nop
    ctx->pc = 0x16894cu;
    // NOP
    // 0x168950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16895c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16896c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168970: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168974: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168974u;
    SET_GPR_U32(ctx, 31, 0x16897Cu);
    ctx->pc = 0x168978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168974u;
            // 0x168978: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16897Cu; }
        if (ctx->pc != 0x16897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16897Cu; }
        if (ctx->pc != 0x16897Cu) { return; }
    }
    ctx->pc = 0x16897Cu;
label_16897c:
    // 0x16897c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168984: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168988: 0xc05a26e  jal         func_1689B8
    ctx->pc = 0x168988u;
    SET_GPR_U32(ctx, 31, 0x168990u);
    ctx->pc = 0x16898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168988u;
            // 0x16898c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1689B8u;
    if (runtime->hasFunction(0x1689B8u)) {
        auto targetFn = runtime->lookupFunction(0x1689B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168990u; }
        if (ctx->pc != 0x168990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001689B8_0x1689b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168990u; }
        if (ctx->pc != 0x168990u) { return; }
    }
    ctx->pc = 0x168990u;
label_168990:
    // 0x168990: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168990u;
    SET_GPR_U32(ctx, 31, 0x168998u);
    ctx->pc = 0x168994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168990u;
            // 0x168994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168998u; }
        if (ctx->pc != 0x168998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168998u; }
        if (ctx->pc != 0x168998u) { return; }
    }
    ctx->pc = 0x168998u;
label_168998:
    // 0x168998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16899c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16899cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1689a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1689a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1689a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1689a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1689a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1689ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1689acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1689b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1689B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1689B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1689B0u;
            // 0x1689b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1689B8u;
}
