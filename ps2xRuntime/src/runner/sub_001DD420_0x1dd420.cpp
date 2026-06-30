#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD420
// Address: 0x1dd420 - 0x1dd4f0
void sub_001DD420_0x1dd420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD420_0x1dd420");
#endif

    switch (ctx->pc) {
        case 0x1dd47cu: goto label_1dd47c;
        default: break;
    }

    ctx->pc = 0x1dd420u;

    // 0x1dd420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dd424: 0x31220008  andi        $v0, $t1, 0x8
    ctx->pc = 0x1dd424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x1dd428: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dd428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dd42c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dd42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dd430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dd430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dd434: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dd434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd43c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd440: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dd444: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dd444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd448: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dd44c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1dd44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd450: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dd454: 0x31260007  andi        $a2, $t1, 0x7
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x1dd458: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1dd458u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1dd45c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD45Cu;
    {
        const bool branch_taken_0x1dd45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD45Cu;
            // 0x1dd460: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd45c) {
            ctx->pc = 0x1DD46Cu;
            goto label_1dd46c;
        }
    }
    ctx->pc = 0x1DD464u;
    // 0x1dd464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD464u;
    {
        const bool branch_taken_0x1dd464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD464u;
            // 0x1dd468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd464) {
            ctx->pc = 0x1DD470u;
            goto label_1dd470;
        }
    }
    ctx->pc = 0x1DD46Cu;
label_1dd46c:
    // 0x1dd46c: 0x31270004  andi        $a3, $t1, 0x4
    ctx->pc = 0x1dd46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_1dd470:
    // 0x1dd470: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1dd470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd474: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x1DD474u;
    SET_GPR_U32(ctx, 31, 0x1DD47Cu);
    ctx->pc = 0x1DD478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD474u;
            // 0x1dd478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD47Cu; }
        if (ctx->pc != 0x1DD47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD47Cu; }
        if (ctx->pc != 0x1DD47Cu) { return; }
    }
    ctx->pc = 0x1DD47Cu;
label_1dd47c:
    // 0x1dd47c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1dd480: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1dd480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1dd484: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x1dd488: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1dd48c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1dd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1dd490: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1dd494: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x1dd494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x1dd498: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1dd498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1dd49c: 0xe6550054  swc1        $f21, 0x54($s2)
    ctx->pc = 0x1dd49cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1dd4a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4a4: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1dd4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1dd4a8: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x1dd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
    // 0x1dd4ac: 0xe6540060  swc1        $f20, 0x60($s2)
    ctx->pc = 0x1dd4acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1dd4b0: 0xae510064  sw          $s1, 0x64($s2)
    ctx->pc = 0x1dd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 17));
    // 0x1dd4b4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x1dd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x1dd4b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dd4bc: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1dd4c0: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x1dd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x1dd4c4: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x1dd4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd4c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dd4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd4cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dd4d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dd4d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd4d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dd4d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dd4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd4dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd4e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4E4u;
            // 0x1dd4e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD4ECu;
    // 0x1dd4ec: 0x0  nop
    ctx->pc = 0x1dd4ecu;
    // NOP
}
