#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C61F0
// Address: 0x1c61f0 - 0x1c6308
void sub_001C61F0_0x1c61f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C61F0_0x1c61f0");
#endif

    switch (ctx->pc) {
        case 0x1c62e4u: goto label_1c62e4;
        case 0x1c62f0u: goto label_1c62f0;
        default: break;
    }

    ctx->pc = 0x1c61f0u;

    // 0x1c61f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c61f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c61f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c61fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6208: 0x2608000c  addiu       $t0, $s0, 0xC
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c620c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c6210: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x1c6210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c6214: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1c6214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6218: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c6218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c621c: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c6220: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c6220u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c6224: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c6224u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c6228: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c6228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c622c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6230: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c6234: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c6234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c6238: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c6238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c623c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c6240: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c6240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c6244: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c6248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c6248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c624c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1c624cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6250: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x1c6250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6254: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x1c6254u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1c6258: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x1c6258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c625c: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x1c625cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1c6260: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x1c6260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6264: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x1c6264u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x1c6268: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x1c6268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c626c: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x1c626cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c6270: 0xa2230008  sb          $v1, 0x8($s1)
    ctx->pc = 0x1c6270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6274: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1c6274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6278: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c6278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c627c: 0x2608001c  addiu       $t0, $s0, 0x1C
    ctx->pc = 0x1c627cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1c6280: 0x71a03  sra         $v1, $a3, 8
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 8));
    // 0x1c6284: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c6284u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c6288: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c6288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c628c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6290: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c6290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c6294: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c6294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c6298: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c6298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c629c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c62a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c62a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c62a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c62a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c62a8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c62ac: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1c62acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c62b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c62b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c62b4: 0x71a03  sra         $v1, $a3, 8
    ctx->pc = 0x1c62b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 8));
    // 0x1c62b8: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c62bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c62bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c62c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c62c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c62c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c62cc: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c62ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c62d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c62d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c62d4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c62d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c62d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c62dc: 0xc071866  jal         func_1C6198
    ctx->pc = 0x1C62DCu;
    SET_GPR_U32(ctx, 31, 0x1C62E4u);
    ctx->pc = 0x1C62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62DCu;
            // 0x1c62e0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6198u;
    if (runtime->hasFunction(0x1C6198u)) {
        auto targetFn = runtime->lookupFunction(0x1C6198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62E4u; }
        if (ctx->pc != 0x1C62E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6198_0x1c6198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62E4u; }
        if (ctx->pc != 0x1C62E4u) { return; }
    }
    ctx->pc = 0x1C62E4u;
label_1c62e4:
    // 0x1c62e4: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1c62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c62e8: 0xc071866  jal         func_1C6198
    ctx->pc = 0x1C62E8u;
    SET_GPR_U32(ctx, 31, 0x1C62F0u);
    ctx->pc = 0x1C62ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62E8u;
            // 0x1c62ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6198u;
    if (runtime->hasFunction(0x1C6198u)) {
        auto targetFn = runtime->lookupFunction(0x1C6198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62F0u; }
        if (ctx->pc != 0x1C62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6198_0x1c6198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62F0u; }
        if (ctx->pc != 0x1C62F0u) { return; }
    }
    ctx->pc = 0x1C62F0u;
label_1c62f0:
    // 0x1c62f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c62f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c62f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c62f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c62f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c62fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c62fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6300: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6300u;
            // 0x1c6304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6308u;
}
