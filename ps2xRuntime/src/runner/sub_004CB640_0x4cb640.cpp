#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CB640
// Address: 0x4cb640 - 0x4cba40
void sub_004CB640_0x4cb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB640_0x4cb640");
#endif

    switch (ctx->pc) {
        case 0x4cb67cu: goto label_4cb67c;
        case 0x4cb764u: goto label_4cb764;
        case 0x4cb770u: goto label_4cb770;
        case 0x4cb7c8u: goto label_4cb7c8;
        case 0x4cb7fcu: goto label_4cb7fc;
        case 0x4cb820u: goto label_4cb820;
        case 0x4cb8bcu: goto label_4cb8bc;
        case 0x4cb8ccu: goto label_4cb8cc;
        case 0x4cb90cu: goto label_4cb90c;
        case 0x4cb938u: goto label_4cb938;
        case 0x4cb980u: goto label_4cb980;
        case 0x4cb98cu: goto label_4cb98c;
        case 0x4cba00u: goto label_4cba00;
        case 0x4cba18u: goto label_4cba18;
        default: break;
    }

    ctx->pc = 0x4cb640u;

    // 0x4cb640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cb640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cb644: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4cb644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x4cb648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cb648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4cb64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cb64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4cb650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cb650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4cb654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cb654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cb658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cb65c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4cb65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cb664: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4cb664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb668: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4cb668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb66c: 0x34457a1a  ori         $a1, $v0, 0x7A1A
    ctx->pc = 0x4cb66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
    // 0x4cb670: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4cb670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4cb674: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4CB674u;
    SET_GPR_U32(ctx, 31, 0x4CB67Cu);
    ctx->pc = 0x4CB678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB674u;
            // 0x4cb678: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB67Cu; }
        if (ctx->pc != 0x4CB67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB67Cu; }
        if (ctx->pc != 0x4CB67Cu) { return; }
    }
    ctx->pc = 0x4CB67Cu;
label_4cb67c:
    // 0x4cb67c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4cb680: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cb684: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4cb684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4cb688: 0x24421b50  addiu       $v0, $v0, 0x1B50
    ctx->pc = 0x4cb688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6992));
    // 0x4cb68c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4cb68cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4cb690: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4cb690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4cb694: 0x2663007b  addiu       $v1, $s3, 0x7B
    ctx->pc = 0x4cb694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 123));
    // 0x4cb698: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x4cb698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
    // 0x4cb69c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4cb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4cb6a0: 0xa6710064  sh          $s1, 0x64($s3)
    ctx->pc = 0x4cb6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 17));
    // 0x4cb6a4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4cb6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb6a8: 0xa6600066  sh          $zero, 0x66($s3)
    ctx->pc = 0x4cb6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cb6ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4cb6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb6b0: 0xa2700068  sb          $s0, 0x68($s3)
    ctx->pc = 0x4cb6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 16));
    // 0x4cb6b4: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x4cb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
    // 0x4cb6b8: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x4cb6b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x4cb6bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4cb6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4cb6c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4cb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4cb6c4: 0xae640058  sw          $a0, 0x58($s3)
    ctx->pc = 0x4cb6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 4));
    // 0x4cb6c8: 0x86630064  lh          $v1, 0x64($s3)
    ctx->pc = 0x4cb6c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x4cb6cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb6d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4cb6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4cb6d4: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x4cb6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x4cb6d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cb6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb6dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cb6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb6e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cb6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cb6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB6ECu;
            // 0x4cb6f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB6F4u;
    // 0x4cb6f4: 0x0  nop
    ctx->pc = 0x4cb6f4u;
    // NOP
    // 0x4cb6f8: 0x0  nop
    ctx->pc = 0x4cb6f8u;
    // NOP
    // 0x4cb6fc: 0x0  nop
    ctx->pc = 0x4cb6fcu;
    // NOP
    // 0x4cb700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cb700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cb704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4cb704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cb708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cb708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cb70c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4cb70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x4cb710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cb714: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4cb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x4cb718: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4cb718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb71c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4cb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4cb720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cb728: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4cb728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4cb72c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4cb72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4cb730: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4cb730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4cb734: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4cb734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb738: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4cb738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4cb73c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4cb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x4cb740: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4cb740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x4cb744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cb744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4cb748: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4cb748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x4cb74c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4cb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x4cb750: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4cb754: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb758: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4cb758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cb75c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4CB75Cu;
    SET_GPR_U32(ctx, 31, 0x4CB764u);
    ctx->pc = 0x4CB760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB75Cu;
            // 0x4cb760: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB764u; }
        if (ctx->pc != 0x4CB764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB764u; }
        if (ctx->pc != 0x4CB764u) { return; }
    }
    ctx->pc = 0x4CB764u;
label_4cb764:
    // 0x4cb764: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4cb764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4cb768: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x4CB768u;
    SET_GPR_U32(ctx, 31, 0x4CB770u);
    ctx->pc = 0x4CB76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB768u;
            // 0x4cb76c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB770u; }
        if (ctx->pc != 0x4CB770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB770u; }
        if (ctx->pc != 0x4CB770u) { return; }
    }
    ctx->pc = 0x4CB770u;
label_4cb770:
    // 0x4cb770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cb770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb778: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB778u;
            // 0x4cb77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB780u;
    // 0x4cb780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4cb780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4cb784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4cb784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4cb788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4cb788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4cb78c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4cb78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4cb790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4cb790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4cb794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cb794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4cb798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4cb79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cb79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4cb7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4cb7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cb7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cb7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cb7ac: 0x84830066  lh          $v1, 0x66($a0)
    ctx->pc = 0x4cb7acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x4cb7b0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x4CB7B0u;
    {
        const bool branch_taken_0x4cb7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB7B0u;
            // 0x4cb7b4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb7b0) {
            ctx->pc = 0x4CB990u;
            goto label_4cb990;
        }
    }
    ctx->pc = 0x4CB7B8u;
    // 0x4cb7b8: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x4cb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x4cb7bc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4cb7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb7c0: 0xc132ea8  jal         func_4CBAA0
    ctx->pc = 0x4CB7C0u;
    SET_GPR_U32(ctx, 31, 0x4CB7C8u);
    ctx->pc = 0x4CB7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB7C0u;
            // 0x4cb7c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBAA0u;
    if (runtime->hasFunction(0x4CBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x4CBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB7C8u; }
        if (ctx->pc != 0x4CB7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBAA0_0x4cbaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB7C8u; }
        if (ctx->pc != 0x4CB7C8u) { return; }
    }
    ctx->pc = 0x4CB7C8u;
label_4cb7c8:
    // 0x4cb7c8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cb7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cb7cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cb7d0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4cb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4cb7d4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x4cb7d8: 0x8eb70060  lw          $s7, 0x60($s5)
    ctx->pc = 0x4cb7d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x4cb7dc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4cb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4cb7e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x4cb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4cb7e4: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4cb7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x4cb7e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cb7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cb7f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4cb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb7f4: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4CB7F4u;
    SET_GPR_U32(ctx, 31, 0x4CB7FCu);
    ctx->pc = 0x4CB7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB7F4u;
            // 0x4cb7f8: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB7FCu; }
        if (ctx->pc != 0x4CB7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB7FCu; }
        if (ctx->pc != 0x4CB7FCu) { return; }
    }
    ctx->pc = 0x4CB7FCu;
label_4cb7fc:
    // 0x4cb7fc: 0x8eb10054  lw          $s1, 0x54($s5)
    ctx->pc = 0x4cb7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x4cb800: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4cb800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x4cb804: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cb804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cb808: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x4cb808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x4cb80c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4cb80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb810: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4cb810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb814: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4cb814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x4cb818: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4cb818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
    // 0x4cb81c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4cb81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4cb820:
    // 0x4cb820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cb824: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cb824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cb828: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x4cb828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x4cb82c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4cb82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x4cb830: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x4cb830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x4cb834: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4cb834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4cb838: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cb83c: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x4cb83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x4cb840: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x4cb840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x4cb844: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cb844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cb848: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4cb848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4cb84c: 0x879021  addu        $s2, $a0, $a3
    ctx->pc = 0x4cb84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4cb850: 0x8c66e3b0  lw          $a2, -0x1C50($v1)
    ctx->pc = 0x4cb850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x4cb854: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4cb854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x4cb858: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4cb858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x4cb85c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cb85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cb860: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cb860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cb864: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x4cb864u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x4cb868: 0x8caae3d8  lw          $t2, -0x1C28($a1)
    ctx->pc = 0x4cb868u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
    // 0x4cb86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4cb86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb870: 0x8c69e378  lw          $t1, -0x1C88($v1)
    ctx->pc = 0x4cb870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4cb874: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4cb874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x4cb878: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4cb878u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4cb87c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4cb87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x4cb880: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x4cb880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4cb884: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4cb884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4cb888: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4cb888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4cb88c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x4cb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x4cb890: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4cb890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4cb894: 0x8ca5e3c0  lw          $a1, -0x1C40($a1)
    ctx->pc = 0x4cb894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x4cb898: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x4cb898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x4cb89c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x4cb89cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cb8a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4cb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4cb8a4: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x4cb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
    // 0x4cb8a8: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x4cb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4cb8ac: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x4cb8acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
    // 0x4cb8b0: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x4cb8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x4cb8b4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CB8B4u;
    SET_GPR_U32(ctx, 31, 0x4CB8BCu);
    ctx->pc = 0x4CB8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB8B4u;
            // 0x4cb8b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB8BCu; }
        if (ctx->pc != 0x4CB8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB8BCu; }
        if (ctx->pc != 0x4CB8BCu) { return; }
    }
    ctx->pc = 0x4CB8BCu;
label_4cb8bc:
    // 0x4cb8bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cb8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8c0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4cb8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8c4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CB8C4u;
    SET_GPR_U32(ctx, 31, 0x4CB8CCu);
    ctx->pc = 0x4CB8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB8C4u;
            // 0x4cb8c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB8CCu; }
        if (ctx->pc != 0x4CB8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB8CCu; }
        if (ctx->pc != 0x4CB8CCu) { return; }
    }
    ctx->pc = 0x4CB8CCu;
label_4cb8cc:
    // 0x4cb8cc: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x4cb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x4cb8d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CB8D0u;
    {
        const bool branch_taken_0x4cb8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb8d0) {
            ctx->pc = 0x4CB918u;
            goto label_4cb918;
        }
    }
    ctx->pc = 0x4CB8D8u;
    // 0x4cb8d8: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x4cb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x4cb8dc: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4cb8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4cb8e0: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x4cb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x4cb8e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cb8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cb8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4cb8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8f0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4cb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x4cb8f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4cb8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb8f8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x4cb8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4cb8fc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4cb8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4cb900: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4cb900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x4cb904: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x4CB904u;
    SET_GPR_U32(ctx, 31, 0x4CB90Cu);
    ctx->pc = 0x4CB908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB904u;
            // 0x4cb908: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB90Cu; }
        if (ctx->pc != 0x4CB90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB90Cu; }
        if (ctx->pc != 0x4CB90Cu) { return; }
    }
    ctx->pc = 0x4CB90Cu;
label_4cb90c:
    // 0x4cb90c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4CB90Cu;
    {
        const bool branch_taken_0x4cb90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb90c) {
            ctx->pc = 0x4CB938u;
            goto label_4cb938;
        }
    }
    ctx->pc = 0x4CB914u;
    // 0x4cb914: 0x0  nop
    ctx->pc = 0x4cb914u;
    // NOP
label_4cb918:
    // 0x4cb918: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4cb918u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4cb91c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cb91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cb920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb924: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4cb924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb928: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4cb928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb92c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4cb92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x4cb930: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x4CB930u;
    SET_GPR_U32(ctx, 31, 0x4CB938u);
    ctx->pc = 0x4CB934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB930u;
            // 0x4cb934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB938u; }
        if (ctx->pc != 0x4CB938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB938u; }
        if (ctx->pc != 0x4CB938u) { return; }
    }
    ctx->pc = 0x4CB938u;
label_4cb938:
    // 0x4cb938: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x4cb938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
    // 0x4cb93c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4cb93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4cb940: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x4cb940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4cb944: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4cb944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4cb948: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x4CB948u;
    {
        const bool branch_taken_0x4cb948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB948u;
            // 0x4cb94c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb948) {
            ctx->pc = 0x4CB820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cb820;
        }
    }
    ctx->pc = 0x4CB950u;
    // 0x4cb950: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cb954: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4cb954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x4cb958: 0x5920000a  blezl       $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CB958u;
    {
        const bool branch_taken_0x4cb958 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x4cb958) {
            ctx->pc = 0x4CB95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB958u;
            // 0x4cb95c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB984u;
            goto label_4cb984;
        }
    }
    ctx->pc = 0x4CB960u;
    // 0x4cb960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cb964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cb964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb968: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4cb968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x4cb96c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4cb96cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4cb970: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4cb974: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4cb974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x4cb978: 0xc055754  jal         func_155D50
    ctx->pc = 0x4CB978u;
    SET_GPR_U32(ctx, 31, 0x4CB980u);
    ctx->pc = 0x4CB97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB978u;
            // 0x4cb97c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB980u; }
        if (ctx->pc != 0x4CB980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB980u; }
        if (ctx->pc != 0x4CB980u) { return; }
    }
    ctx->pc = 0x4CB980u;
label_4cb980:
    // 0x4cb980: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cb980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4cb984:
    // 0x4cb984: 0xc132e90  jal         func_4CBA40
    ctx->pc = 0x4CB984u;
    SET_GPR_U32(ctx, 31, 0x4CB98Cu);
    ctx->pc = 0x4CB988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB984u;
            // 0x4cb988: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBA40u;
    if (runtime->hasFunction(0x4CBA40u)) {
        auto targetFn = runtime->lookupFunction(0x4CBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB98Cu; }
        if (ctx->pc != 0x4CB98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBA40_0x4cba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB98Cu; }
        if (ctx->pc != 0x4CB98Cu) { return; }
    }
    ctx->pc = 0x4CB98Cu;
label_4cb98c:
    // 0x4cb98c: 0xa6a00066  sh          $zero, 0x66($s5)
    ctx->pc = 0x4cb98cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 0));
label_4cb990:
    // 0x4cb990: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4cb990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4cb994: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4cb994u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cb998: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4cb998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cb99c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4cb99cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb9a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cb9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb9a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cb9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb9a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cb9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cb9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cb9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cb9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cb9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB9B8u;
            // 0x4cb9bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB9C0u;
    // 0x4cb9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cb9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cb9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cb9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cb9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cb9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cb9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cb9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb9d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4CB9D4u;
    {
        const bool branch_taken_0x4cb9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB9D4u;
            // 0x4cb9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb9d4) {
            ctx->pc = 0x4CBA18u;
            goto label_4cba18;
        }
    }
    ctx->pc = 0x4CB9DCu;
    // 0x4cb9dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cb9e0: 0x24421b50  addiu       $v0, $v0, 0x1B50
    ctx->pc = 0x4cb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6992));
    // 0x4cb9e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CB9E4u;
    {
        const bool branch_taken_0x4cb9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB9E4u;
            // 0x4cb9e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb9e4) {
            ctx->pc = 0x4CBA00u;
            goto label_4cba00;
        }
    }
    ctx->pc = 0x4CB9ECu;
    // 0x4cb9ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4cb9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cb9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb9f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4cb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x4cb9f8: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x4CB9F8u;
    SET_GPR_U32(ctx, 31, 0x4CBA00u);
    ctx->pc = 0x4CB9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB9F8u;
            // 0x4cb9fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBA00u; }
        if (ctx->pc != 0x4CBA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBA00u; }
        if (ctx->pc != 0x4CBA00u) { return; }
    }
    ctx->pc = 0x4CBA00u;
label_4cba00:
    // 0x4cba00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x4cba04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cba04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4cba08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CBA08u;
    {
        const bool branch_taken_0x4cba08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cba08) {
            ctx->pc = 0x4CBA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA08u;
            // 0x4cba0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CBA1Cu;
            goto label_4cba1c;
        }
    }
    ctx->pc = 0x4CBA10u;
    // 0x4cba10: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CBA10u;
    SET_GPR_U32(ctx, 31, 0x4CBA18u);
    ctx->pc = 0x4CBA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA10u;
            // 0x4cba14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBA18u; }
        if (ctx->pc != 0x4CBA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBA18u; }
        if (ctx->pc != 0x4CBA18u) { return; }
    }
    ctx->pc = 0x4CBA18u;
label_4cba18:
    // 0x4cba18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cba18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cba1c:
    // 0x4cba1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cba20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cba28: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA28u;
            // 0x4cba2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBA30u;
    // 0x4cba30: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBA30u;
            // 0x4cba34: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBA38u;
    // 0x4cba38: 0x0  nop
    ctx->pc = 0x4cba38u;
    // NOP
    // 0x4cba3c: 0x0  nop
    ctx->pc = 0x4cba3cu;
    // NOP
}
