#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F630
// Address: 0x27f630 - 0x27f780
void sub_0027F630_0x27f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F630_0x27f630");
#endif

    switch (ctx->pc) {
        case 0x27f660u: goto label_27f660;
        default: break;
    }

    ctx->pc = 0x27f630u;

    // 0x27f630: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27f634: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x27f634u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27f638: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x27f638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f63c: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x27F63Cu;
    {
        const bool branch_taken_0x27f63c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F63Cu;
            // 0x27f640: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f63c) {
            ctx->pc = 0x27F770u;
            goto label_27f770;
        }
    }
    ctx->pc = 0x27F644u;
    // 0x27f644: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x27f644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x27f648: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x27f648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x27f64c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x27f650: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x27f650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x27f654: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x27f654u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f658: 0x27ab0000  addiu       $t3, $sp, 0x0
    ctx->pc = 0x27f658u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x27f65c: 0x0  nop
    ctx->pc = 0x27f65cu;
    // NOP
label_27f660:
    // 0x27f660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f664: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x27f664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x27f668: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x27f668u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f66c: 0x8d4a0028  lw          $t2, 0x28($t2)
    ctx->pc = 0x27f66cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x27f670: 0x254e0004  addiu       $t6, $t2, 0x4
    ctx->pc = 0x27f670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x27f674: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x27f678: 0x914c00a8  lbu         $t4, 0xA8($t2)
    ctx->pc = 0x27f678u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 168)));
    // 0x27f67c: 0x398a0007  xori        $t2, $t4, 0x7
    ctx->pc = 0x27f67cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)7);
    // 0x27f680: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x27f680u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f684: 0x15400006  bnez        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F684u;
    {
        const bool branch_taken_0x27f684 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F684u;
            // 0x27f688: 0x640d0001  daddiu      $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f684) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F68Cu;
    // 0x27f68c: 0x398a0006  xori        $t2, $t4, 0x6
    ctx->pc = 0x27f68cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)6);
    // 0x27f690: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x27f690u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f694: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x27F694u;
    {
        const bool branch_taken_0x27f694 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f694) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F69Cu;
    // 0x27f69c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x27f69cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f6a0:
    // 0x27f6a0: 0xd563c  dsll32      $t2, $t5, 24
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 24));
    // 0x27f6a4: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x27f6a4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x27f6a8: 0x15400011  bnez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x27F6A8u;
    {
        const bool branch_taken_0x27f6a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f6a8) {
            ctx->pc = 0x27F6F0u;
            goto label_27f6f0;
        }
    }
    ctx->pc = 0x27F6B0u;
    // 0x27f6b0: 0x8dca0004  lw          $t2, 0x4($t6)
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x27f6b4: 0x914c00a8  lbu         $t4, 0xA8($t2)
    ctx->pc = 0x27f6b4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 168)));
    // 0x27f6b8: 0x398a0007  xori        $t2, $t4, 0x7
    ctx->pc = 0x27f6b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)7);
    // 0x27f6bc: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x27f6bcu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f6c0: 0x15400007  bnez        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F6C0u;
    {
        const bool branch_taken_0x27f6c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6C0u;
            // 0x27f6c4: 0x640d0001  daddiu      $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c0) {
            ctx->pc = 0x27F6E0u;
            goto label_27f6e0;
        }
    }
    ctx->pc = 0x27F6C8u;
    // 0x27f6c8: 0x398a0006  xori        $t2, $t4, 0x6
    ctx->pc = 0x27f6c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)6);
    // 0x27f6cc: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x27f6ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f6d0: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F6D0u;
    {
        const bool branch_taken_0x27f6d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f6d0) {
            ctx->pc = 0x27F6E0u;
            goto label_27f6e0;
        }
    }
    ctx->pc = 0x27F6D8u;
    // 0x27f6d8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x27f6d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6dc: 0x0  nop
    ctx->pc = 0x27f6dcu;
    // NOP
label_27f6e0:
    // 0x27f6e0: 0xd563c  dsll32      $t2, $t5, 24
    ctx->pc = 0x27f6e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 24));
    // 0x27f6e4: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x27f6e4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x27f6e8: 0x1140001b  beqz        $t2, . + 4 + (0x1B << 2)
    ctx->pc = 0x27F6E8u;
    {
        const bool branch_taken_0x27f6e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f6e8) {
            ctx->pc = 0x27F758u;
            goto label_27f758;
        }
    }
    ctx->pc = 0x27F6F0u;
label_27f6f0:
    // 0x27f6f0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x27f6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27f6f4: 0x25ac0001  addiu       $t4, $t5, 0x1
    ctx->pc = 0x27f6f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x27f6f8: 0xd5040  sll         $t2, $t5, 1
    ctx->pc = 0x27f6f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x27f6fc: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x27f6fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x27f700: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x27f700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x27f704: 0xa6080  sll         $t4, $t2, 2
    ctx->pc = 0x27f704u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x27f708: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x27f708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f70c: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x27f70cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x27f710: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x27f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f714: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x27f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f718: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x27f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f71c: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x27f71cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x27f720: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x27f720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x27f724: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x27f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x27f728: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x27f728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f72c: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x27f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x27f730: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27f734: 0xad8a0004  sw          $t2, 0x4($t4)
    ctx->pc = 0x27f734u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 10));
    // 0x27f738: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f73c: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x27f73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x27f740: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x27f740u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f744: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x27f744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x27f748: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27f74c: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x27f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x27f750: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f754: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27f754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27f758:
    // 0x27f758: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27f75c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x27f75cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x27f760: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x27f760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f764: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x27F764u;
    {
        const bool branch_taken_0x27f764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F764u;
            // 0x27f768: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f764) {
            ctx->pc = 0x27F660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f660;
        }
    }
    ctx->pc = 0x27F76Cu;
    // 0x27f76c: 0x0  nop
    ctx->pc = 0x27f76cu;
    // NOP
label_27f770:
    // 0x27f770: 0x3e00008  jr          $ra
    ctx->pc = 0x27F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F770u;
            // 0x27f774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F778u;
    // 0x27f778: 0x0  nop
    ctx->pc = 0x27f778u;
    // NOP
    // 0x27f77c: 0x0  nop
    ctx->pc = 0x27f77cu;
    // NOP
}
