#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C440
// Address: 0x51c440 - 0x51c7f0
void sub_0051C440_0x51c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C440_0x51c440");
#endif

    switch (ctx->pc) {
        case 0x51c4d0u: goto label_51c4d0;
        case 0x51c548u: goto label_51c548;
        case 0x51c570u: goto label_51c570;
        case 0x51c5e8u: goto label_51c5e8;
        case 0x51c654u: goto label_51c654;
        case 0x51c6a0u: goto label_51c6a0;
        case 0x51c6b8u: goto label_51c6b8;
        case 0x51c724u: goto label_51c724;
        case 0x51c7dcu: goto label_51c7dc;
        default: break;
    }

    ctx->pc = 0x51c440u;

    // 0x51c440: 0x814690c  j           func_51A430
    ctx->pc = 0x51C440u;
    ctx->pc = 0x51A430u;
    {
        auto targetFn = runtime->lookupFunction(0x51A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51C448u;
    // 0x51c448: 0x0  nop
    ctx->pc = 0x51c448u;
    // NOP
    // 0x51c44c: 0x0  nop
    ctx->pc = 0x51c44cu;
    // NOP
    // 0x51c450: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x51c450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x51c454: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x51c454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x51c458: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x51c458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x51c45c: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x51c45cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x51c460: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x51c460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x51c464: 0x3e00008  jr          $ra
    ctx->pc = 0x51C464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C464u;
            // 0x51c468: 0xa083000e  sb          $v1, 0xE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C46Cu;
    // 0x51c46c: 0x0  nop
    ctx->pc = 0x51c46cu;
    // NOP
    // 0x51c470: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x51c470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x51c474: 0xa086000d  sb          $a2, 0xD($a0)
    ctx->pc = 0x51c474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x51c478: 0x3e00008  jr          $ra
    ctx->pc = 0x51C478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C478u;
            // 0x51c47c: 0xa087000e  sb          $a3, 0xE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C480u;
    // 0x51c480: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x51c480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x51c484: 0x9082000e  lbu         $v0, 0xE($a0)
    ctx->pc = 0x51c484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x51c488: 0x9085000c  lbu         $a1, 0xC($a0)
    ctx->pc = 0x51c488u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x51c48c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x51c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x51c490: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x51c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x51c494: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x51c494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x51c498: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x51c498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x51c49c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x51c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x51c4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x51C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C4A0u;
            // 0x51c4a4: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C4A8u;
    // 0x51c4a8: 0x0  nop
    ctx->pc = 0x51c4a8u;
    // NOP
    // 0x51c4ac: 0x0  nop
    ctx->pc = 0x51c4acu;
    // NOP
    // 0x51c4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x51C4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C4B0u;
            // 0x51c4b4: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C4B8u;
    // 0x51c4b8: 0x0  nop
    ctx->pc = 0x51c4b8u;
    // NOP
    // 0x51c4bc: 0x0  nop
    ctx->pc = 0x51c4bcu;
    // NOP
    // 0x51c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x51C4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C4C0u;
            // 0x51c4c4: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C4C8u;
    // 0x51c4c8: 0x0  nop
    ctx->pc = 0x51c4c8u;
    // NOP
    // 0x51c4cc: 0x0  nop
    ctx->pc = 0x51c4ccu;
    // NOP
label_51c4d0:
    // 0x51c4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c4e0: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x51C4E0u;
    {
        const bool branch_taken_0x51c4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c4e0) {
            ctx->pc = 0x51C4E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C4E0u;
            // 0x51c4e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C54Cu;
            goto label_51c54c;
        }
    }
    ctx->pc = 0x51C4E8u;
    // 0x51c4e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c4ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c4f0: 0x244258e0  addiu       $v0, $v0, 0x58E0
    ctx->pc = 0x51c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
    // 0x51c4f4: 0x246358ec  addiu       $v1, $v1, 0x58EC
    ctx->pc = 0x51c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22764));
    // 0x51c4f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c4fc: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x51c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x51c500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51C500u;
    {
        const bool branch_taken_0x51c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C500u;
            // 0x51c504: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c500) {
            ctx->pc = 0x51C514u;
            goto label_51c514;
        }
    }
    ctx->pc = 0x51C508u;
    // 0x51c508: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c50c: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x51c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
    // 0x51c510: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x51c510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_51c514:
    // 0x51c514: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51C514u;
    {
        const bool branch_taken_0x51c514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c514) {
            ctx->pc = 0x51C518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C514u;
            // 0x51c518: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C534u;
            goto label_51c534;
        }
    }
    ctx->pc = 0x51C51Cu;
    // 0x51c51c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c524: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x51c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
    // 0x51c528: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c52c: 0xac40e3e8  sw          $zero, -0x1C18($v0)
    ctx->pc = 0x51c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960104), GPR_U32(ctx, 0));
    // 0x51c530: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_51c534:
    // 0x51c534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c538: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C538u;
    {
        const bool branch_taken_0x51c538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c538) {
            ctx->pc = 0x51C548u;
            goto label_51c548;
        }
    }
    ctx->pc = 0x51C540u;
    // 0x51c540: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C540u;
    SET_GPR_U32(ctx, 31, 0x51C548u);
    ctx->pc = 0x51C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C540u;
            // 0x51c544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C548u; }
        if (ctx->pc != 0x51C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C548u; }
        if (ctx->pc != 0x51C548u) { return; }
    }
    ctx->pc = 0x51C548u;
label_51c548:
    // 0x51c548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c54c:
    // 0x51c54c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c554: 0x3e00008  jr          $ra
    ctx->pc = 0x51C554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C554u;
            // 0x51c558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C55Cu;
    // 0x51c55c: 0x0  nop
    ctx->pc = 0x51c55cu;
    // NOP
    // 0x51c560: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x51c560u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x51c564: 0x3e00008  jr          $ra
    ctx->pc = 0x51C564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C564u;
            // 0x51c568: 0xe48d0008  swc1        $f13, 0x8($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C56Cu;
    // 0x51c56c: 0x0  nop
    ctx->pc = 0x51c56cu;
    // NOP
label_51c570:
    // 0x51c570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c580: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x51C580u;
    {
        const bool branch_taken_0x51c580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c580) {
            ctx->pc = 0x51C584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C580u;
            // 0x51c584: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C5ECu;
            goto label_51c5ec;
        }
    }
    ctx->pc = 0x51C588u;
    // 0x51c588: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c58c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c590: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x51c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x51c594: 0x2463597c  addiu       $v1, $v1, 0x597C
    ctx->pc = 0x51c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22908));
    // 0x51c598: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c59c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x51c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x51c5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51C5A0u;
    {
        const bool branch_taken_0x51c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C5A0u;
            // 0x51c5a4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c5a0) {
            ctx->pc = 0x51C5B4u;
            goto label_51c5b4;
        }
    }
    ctx->pc = 0x51C5A8u;
    // 0x51c5a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c5ac: 0x24425988  addiu       $v0, $v0, 0x5988
    ctx->pc = 0x51c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22920));
    // 0x51c5b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x51c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_51c5b4:
    // 0x51c5b4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51C5B4u;
    {
        const bool branch_taken_0x51c5b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c5b4) {
            ctx->pc = 0x51C5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C5B4u;
            // 0x51c5b8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C5D4u;
            goto label_51c5d4;
        }
    }
    ctx->pc = 0x51C5BCu;
    // 0x51c5bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c5c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c5c4: 0x24635998  addiu       $v1, $v1, 0x5998
    ctx->pc = 0x51c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x51c5c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c5cc: 0xac40e3f0  sw          $zero, -0x1C10($v0)
    ctx->pc = 0x51c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960112), GPR_U32(ctx, 0));
    // 0x51c5d0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_51c5d4:
    // 0x51c5d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c5d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c5d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C5D8u;
    {
        const bool branch_taken_0x51c5d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c5d8) {
            ctx->pc = 0x51C5E8u;
            goto label_51c5e8;
        }
    }
    ctx->pc = 0x51C5E0u;
    // 0x51c5e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C5E0u;
    SET_GPR_U32(ctx, 31, 0x51C5E8u);
    ctx->pc = 0x51C5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C5E0u;
            // 0x51c5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C5E8u; }
        if (ctx->pc != 0x51C5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C5E8u; }
        if (ctx->pc != 0x51C5E8u) { return; }
    }
    ctx->pc = 0x51C5E8u;
label_51c5e8:
    // 0x51c5e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c5ec:
    // 0x51c5ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x51C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C5F4u;
            // 0x51c5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C5FCu;
    // 0x51c5fc: 0x0  nop
    ctx->pc = 0x51c5fcu;
    // NOP
    // 0x51c600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c610: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x51C610u;
    {
        const bool branch_taken_0x51c610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c610) {
            ctx->pc = 0x51C614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C610u;
            // 0x51c614: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C658u;
            goto label_51c658;
        }
    }
    ctx->pc = 0x51C618u;
    // 0x51c618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c61c: 0x244259a8  addiu       $v0, $v0, 0x59A8
    ctx->pc = 0x51c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22952));
    // 0x51c620: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51C620u;
    {
        const bool branch_taken_0x51c620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C620u;
            // 0x51c624: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c620) {
            ctx->pc = 0x51C63Cu;
            goto label_51c63c;
        }
    }
    ctx->pc = 0x51C628u;
    // 0x51c628: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c62c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c630: 0x246359b8  addiu       $v1, $v1, 0x59B8
    ctx->pc = 0x51c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22968));
    // 0x51c634: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c638: 0xac400ed0  sw          $zero, 0xED0($v0)
    ctx->pc = 0x51c638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3792), GPR_U32(ctx, 0));
label_51c63c:
    // 0x51c63c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c644: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C644u;
    {
        const bool branch_taken_0x51c644 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c644) {
            ctx->pc = 0x51C654u;
            goto label_51c654;
        }
    }
    ctx->pc = 0x51C64Cu;
    // 0x51c64c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C64Cu;
    SET_GPR_U32(ctx, 31, 0x51C654u);
    ctx->pc = 0x51C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C64Cu;
            // 0x51c650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C654u; }
        if (ctx->pc != 0x51C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C654u; }
        if (ctx->pc != 0x51C654u) { return; }
    }
    ctx->pc = 0x51C654u;
label_51c654:
    // 0x51c654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c658:
    // 0x51c658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c660: 0x3e00008  jr          $ra
    ctx->pc = 0x51C660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C660u;
            // 0x51c664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C668u;
    // 0x51c668: 0x0  nop
    ctx->pc = 0x51c668u;
    // NOP
    // 0x51c66c: 0x0  nop
    ctx->pc = 0x51c66cu;
    // NOP
    // 0x51c670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51c674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51c678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51c67c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51c680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c684: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x51C684u;
    {
        const bool branch_taken_0x51c684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C684u;
            // 0x51c688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c684) {
            ctx->pc = 0x51C6B8u;
            goto label_51c6b8;
        }
    }
    ctx->pc = 0x51C68Cu;
    // 0x51c68c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c694: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x51c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x51c698: 0xc14720c  jal         func_51C830
    ctx->pc = 0x51C698u;
    SET_GPR_U32(ctx, 31, 0x51C6A0u);
    ctx->pc = 0x51C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C698u;
            // 0x51c69c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C830u;
    if (runtime->hasFunction(0x51C830u)) {
        auto targetFn = runtime->lookupFunction(0x51C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C6A0u; }
        if (ctx->pc != 0x51C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C830_0x51c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C6A0u; }
        if (ctx->pc != 0x51C6A0u) { return; }
    }
    ctx->pc = 0x51C6A0u;
label_51c6a0:
    // 0x51c6a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x51c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x51c6a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c6a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51C6A8u;
    {
        const bool branch_taken_0x51c6a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c6a8) {
            ctx->pc = 0x51C6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C6A8u;
            // 0x51c6ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C6BCu;
            goto label_51c6bc;
        }
    }
    ctx->pc = 0x51C6B0u;
    // 0x51c6b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C6B0u;
    SET_GPR_U32(ctx, 31, 0x51C6B8u);
    ctx->pc = 0x51C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C6B0u;
            // 0x51c6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C6B8u; }
        if (ctx->pc != 0x51C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C6B8u; }
        if (ctx->pc != 0x51C6B8u) { return; }
    }
    ctx->pc = 0x51C6B8u;
label_51c6b8:
    // 0x51c6b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x51c6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51c6bc:
    // 0x51c6bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51c6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51c6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51c6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x51C6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C6C8u;
            // 0x51c6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C6D0u;
    // 0x51c6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c6e0: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x51C6E0u;
    {
        const bool branch_taken_0x51c6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c6e0) {
            ctx->pc = 0x51C6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C6E0u;
            // 0x51c6e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C728u;
            goto label_51c728;
        }
    }
    ctx->pc = 0x51C6E8u;
    // 0x51c6e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c6ec: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x51c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x51c6f0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51C6F0u;
    {
        const bool branch_taken_0x51c6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C6F0u;
            // 0x51c6f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c6f0) {
            ctx->pc = 0x51C70Cu;
            goto label_51c70c;
        }
    }
    ctx->pc = 0x51C6F8u;
    // 0x51c6f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c6fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51c700: 0x246359e8  addiu       $v1, $v1, 0x59E8
    ctx->pc = 0x51c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23016));
    // 0x51c704: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c708: 0xac4089d8  sw          $zero, -0x7628($v0)
    ctx->pc = 0x51c708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937048), GPR_U32(ctx, 0));
label_51c70c:
    // 0x51c70c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c710: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c714: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C714u;
    {
        const bool branch_taken_0x51c714 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c714) {
            ctx->pc = 0x51C724u;
            goto label_51c724;
        }
    }
    ctx->pc = 0x51C71Cu;
    // 0x51c71c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C71Cu;
    SET_GPR_U32(ctx, 31, 0x51C724u);
    ctx->pc = 0x51C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C71Cu;
            // 0x51c720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C724u; }
        if (ctx->pc != 0x51C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C724u; }
        if (ctx->pc != 0x51C724u) { return; }
    }
    ctx->pc = 0x51C724u;
label_51c724:
    // 0x51c724: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c728:
    // 0x51c728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c730: 0x3e00008  jr          $ra
    ctx->pc = 0x51C730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C730u;
            // 0x51c734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C738u;
    // 0x51c738: 0x0  nop
    ctx->pc = 0x51c738u;
    // NOP
    // 0x51c73c: 0x0  nop
    ctx->pc = 0x51c73cu;
    // NOP
    // 0x51c740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c750: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x51C750u;
    {
        const bool branch_taken_0x51c750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c750) {
            ctx->pc = 0x51C754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C750u;
            // 0x51c754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C7E0u;
            goto label_51c7e0;
        }
    }
    ctx->pc = 0x51C758u;
    // 0x51c758: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c75c: 0x2602006c  addiu       $v0, $s0, 0x6C
    ctx->pc = 0x51c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x51c760: 0x24635a28  addiu       $v1, $v1, 0x5A28
    ctx->pc = 0x51c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23080));
    // 0x51c764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51C764u;
    {
        const bool branch_taken_0x51c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C764u;
            // 0x51c768: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c764) {
            ctx->pc = 0x51C778u;
            goto label_51c778;
        }
    }
    ctx->pc = 0x51C76Cu;
    // 0x51c76c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c770: 0x244259f8  addiu       $v0, $v0, 0x59F8
    ctx->pc = 0x51c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23032));
    // 0x51c774: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x51c774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_51c778:
    // 0x51c778: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x51c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x51c77c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x51C77Cu;
    {
        const bool branch_taken_0x51c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c77c) {
            ctx->pc = 0x51C780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C77Cu;
            // 0x51c780: 0x2602002c  addiu       $v0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C794u;
            goto label_51c794;
        }
    }
    ctx->pc = 0x51C784u;
    // 0x51c784: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c788: 0x24425a08  addiu       $v0, $v0, 0x5A08
    ctx->pc = 0x51c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23048));
    // 0x51c78c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x51c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x51c790: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x51c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_51c794:
    // 0x51c794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51C794u;
    {
        const bool branch_taken_0x51c794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c794) {
            ctx->pc = 0x51C7A8u;
            goto label_51c7a8;
        }
    }
    ctx->pc = 0x51C79Cu;
    // 0x51c79c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c7a0: 0x24425a18  addiu       $v0, $v0, 0x5A18
    ctx->pc = 0x51c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23064));
    // 0x51c7a4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x51c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_51c7a8:
    // 0x51c7a8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51C7A8u;
    {
        const bool branch_taken_0x51c7a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c7a8) {
            ctx->pc = 0x51C7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C7A8u;
            // 0x51c7ac: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C7C8u;
            goto label_51c7c8;
        }
    }
    ctx->pc = 0x51C7B0u;
    // 0x51c7b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c7b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x51c7b8: 0x24635a38  addiu       $v1, $v1, 0x5A38
    ctx->pc = 0x51c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23096));
    // 0x51c7bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c7c0: 0xac4089d0  sw          $zero, -0x7630($v0)
    ctx->pc = 0x51c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937040), GPR_U32(ctx, 0));
    // 0x51c7c4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x51c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_51c7c8:
    // 0x51c7c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51c7c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51c7cc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C7CCu;
    {
        const bool branch_taken_0x51c7cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51c7cc) {
            ctx->pc = 0x51C7DCu;
            goto label_51c7dc;
        }
    }
    ctx->pc = 0x51C7D4u;
    // 0x51c7d4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C7D4u;
    SET_GPR_U32(ctx, 31, 0x51C7DCu);
    ctx->pc = 0x51C7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C7D4u;
            // 0x51c7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C7DCu; }
        if (ctx->pc != 0x51C7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C7DCu; }
        if (ctx->pc != 0x51C7DCu) { return; }
    }
    ctx->pc = 0x51C7DCu;
label_51c7dc:
    // 0x51c7dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c7e0:
    // 0x51c7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x51C7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C7E8u;
            // 0x51c7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C7F0u;
}
